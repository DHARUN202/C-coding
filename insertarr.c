#include<stdio.h>
#include<stdlib.h>
int arrayinsert(int arr[],int length){
  arr[4]=22;
  for(int i=0;i<length;i++){
    printf("%d",arr[i]);
  }
}
void main(){
      int arr[6]={1,2,3,4,5};
      int length=(sizeof(arr)/sizeof(int));
      arrayinsert(arr,length);
}