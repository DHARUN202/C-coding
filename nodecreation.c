#include<stdio.h>
#include<stdlib.h>
/*
struct node{
  int data;
  struct node *next;
};
void main(){
  struct node *head=NULL;
  head=malloc(sizeof(struct node));
  head ->data = 45;
  head ->next = NULL;
  printf("%d",head->data);
}*/

void insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert a node at the beginning
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Insert a node at the end
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Insert a node at a specific position
void insertAtPosition(struct Node** head, int data, int position) {
    if (position < 0 || position > getLength(*head)) {
        printf("Invalid position!\n");
        return;
    }
    if (position == 0) {
        insertAtBeginning(head, data);
        return;
    }
    struct Node* newNode = createNode(data);
    struct Node* temp = *head;
    for (int i = 0; i < position - 1; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete a node by value
void deleteNodeByValue(struct Node** head, int key) {
    if (*head == NULL) {
        return;
    }
    if ((*head)->data == key) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL && temp->next->data != key) {
        temp = temp->next;
    }
    if (temp->next == NULL) {
        return;
    }
    struct Node* toBeDeleted = temp->next;
    temp->next = temp->next->next;
    free(toBeDeleted);
}

// Delete a node by position
void deleteNodeByPosition(struct Node** head, int position) {
    if (position < 0 || position >= getLength(*head)) {
        printf("Invalid position!\n");
        return;
    }
    if (position == 0) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    struct Node* temp = *head;
    for (int i = 0; i < position - 1; i++) {
        temp = temp->next;
    }
    struct Node* toBeDeleted = temp->next;
    temp->next = temp->next->next;
    free(toBeDeleted);
}

// Get the length of the linked list
int getLength(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

// Traverse the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Insert nodes
    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtEnd(&head, 3);
    insertAtPosition(&head, 4, 2);

    // Print the linked list
    printList(head);

    // Delete nodes
    deleteNodeByValue(&head, 2);
    deleteNodeByPosition(&head, 1);

    // Print the linked list after deletion
    printList(head);

    return 0;
}