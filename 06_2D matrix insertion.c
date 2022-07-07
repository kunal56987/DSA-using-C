#include<stdio.h>
int main(){
	int a[2][2],i,j;
	printf("Enter the values of 2D matrix A\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter the (%d,%d) location value:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix A are\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
