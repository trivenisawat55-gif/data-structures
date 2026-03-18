#include <stdio.h>
int main(){
	int A[10][10],B[10][10],C[10][10],D[10][10];
	int i,j,rows,columns;
	printf("enter no of rows");
	scanf("%d",&rows);
	printf("enter no of columns");
	scanf("%d",&columns);
	printf("Enter elements of Matrix A\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
		scanf("%d",&A[i][j]);	
		}
	}
	printf("Enter elements of Matrix B\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
		scanf("%d",&B[i][j]);	
		}
	}
	printf("Addition of matrices\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
		C[i][j]=A[i][j]+B[i][j];
		printf("%d",C[i][j]);	
		}
	}
	printf("\nSubtraction of matrices\n");
	for(i=0;i<rows;i++){
		for(j=0;j<columns;j++){
		D[i][j]=A[i][j]-B[i][j];
		printf("%d",D[i][j]);	
		}
	}
	return 0;
}
