#include<stdio.h>
int main(){
	int a[10][10],trans[10][10],m,n,i,j;
	printf("Enter the Row and Colums:");
	scanf("%d %d",&m,&n);
	printf("Enter the Elements of Matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("(%d,%d)value:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The Entered Matrix is:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
			trans[j][i]=a[i][j];
		}
		printf("\n");
	}
	printf("Transpose of the Entered matrix is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
