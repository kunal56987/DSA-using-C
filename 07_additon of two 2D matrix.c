#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10],i,j,size1,size2,size3,size4;
	printf("Enter the no of rows for matrix A:");
	scanf("%d",&size1);
	printf("Enter the no. of column for matrix A:");
	scanf("%d",&size2);
	printf("\nEnter the elements of matrix A\n");
	for(i=0;i<size1;i++){
		for(j=0;j<size2;j++){
			printf("Enter the (%d,%d)location value:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the no. of rows for matrix B:");
	scanf("%d",&size3);
	printf("Enter the no. of column matrix B:");
	scanf("%d",&size4);
	printf("\nEnter the elements of matrix B\n");
	for(i=0;i<size3;i++){
		for(j=0;j<size4;j++){
			printf("Enter the (%d,%d)location value:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	if(size1==size3&&size2==size4){
		for(i=0;i<size1;i++){
			for(j=0;j<size2;j++){
				c[i][j]=a[i][j]+b[i][j];
			}
		}
	
	printf("\nsum of Two Matrix A and B are\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",c[i][j]);
			}
		printf("\n");
		}		
	}
	else{
		printf("\nAddition of given two matrix is not possible bcz the size of two matrix are different\n");
	}
	
	
	return 0;
}
