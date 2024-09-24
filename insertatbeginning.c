#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* next;
};
struct node* head=NULL;
void insertat(int data){
  struct node*newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data= data;
  newnode->next=head;
  head=newnode;
}
void printt(){
  struct node*current=head;
  while(current!=NULL){
    printf("%d->",current->data);
    current=current->next;
  }
  printf("\n");
}
int main(){
  insertat(10);
  insertat(20);
  insertat(30);
  printt();
  return 0;
}