#include<stdio.h>
int main(){
	int a[10][10],i,j,m,n;
	printf("Enter the value of m:");
	scanf("%d",&m);
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the elements of matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("(%d,%d)value:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The Entered matrix is\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Rverse of the Entered matrix is\n");
	for(i=0;i<m;i++){
		for(j=n-1;j>=0;j--){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
