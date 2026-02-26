#include<stdio.h>
int main(){
  int a[10],pos,value,n=8;
  printf("Enter the elements in array");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("Enter the value which you want to insert");
  scanf("%d",&value);
  printf("Enter the position where you want to enter");
  scanf("%d",&pos);
//right shift code
  for(int i=n;i>pos;i--){
    a[i]=a[i-1];
  }
  a[pos-1]=value;
  n++;
  //after insertion no of elements increased
  printf("Array after the Insertion of element");
    for(int i=0;i<10;i++){
    printf("%d",a[i]);
  }
  return 0;
}
