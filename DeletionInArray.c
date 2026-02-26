#include<stdio.h>
int main(){
  int a[10],pos,value,n=8;
  printf("Enter the elements in array");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  printf("Enter the position in which you want to delete");
  scanf("%d",&pos);
  
//left shift code
  for(int i=pos-1;i<n-1;i++){
    a[i]=a[i+1];
  }
  n--;
  //after Deletions no of elements decreased
  printf("Array after the Deletion of element");
    for(int i=0;i<10;i++){
    printf("%d",a[i]);
  }
  return 0;
}
