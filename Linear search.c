#include<stdio.h>
int main(){
	
	int a[10],i,elem;
	printf("Enter the elements");
	for(i=0; i<10; i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element which you want to search");
	scanf("%d",&elem);
	for(i=0; i<10; i++){
		if(a[i]==elem){
			printf("Element position at location %d",i+1);
		}
	}
	return 0;
}
