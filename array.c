#include<stdio.h>
int traversal(int arr[],int size){
  int i;
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  for(i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
}
void main(){
  int size;
  printf("enter the size");
  scanf("%d",&size);
  int arr[size];
  traversal(arr,size);
}