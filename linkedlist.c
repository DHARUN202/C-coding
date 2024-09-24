#include<stdio.h>
#include<conio.h>
struct node {
  int data;
  struct node*next;
};
struct node* insert(struct node* head,int newdata){

  // Step 1: Create a new node 
  struct node* newnode = (struct node*)malloc(sizeof(struct node));

  // Step 2: Assign data to the new node
  newnode -> data = newdata;

  // Step 3: Point newNode->next to the current head
  
}

void main()
{
  
  struct node* head =NULL; //Initialize an empty list
}