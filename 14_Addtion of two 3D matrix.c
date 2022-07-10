#include<stdio.h>
int main(){
	int a[4][3][3],b[4][3][3],c[4][3][3],i,j,k;
	printf("Enter the Elements of first 3d array\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				printf("(%d,%d,%d)value:",i,j,k);
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("Enter the Elements of secound 3d array\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				printf("(%d,%d,%d)value:",i,j,k);
				scanf("%d",&b[i][j][k]);
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				c[i][j][k]=a[i][j][k]+b[i][j][k];
			}
		}
	}
	printf("Addition of Two 3d matrix\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				printf("%d\t",c[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	return 0;
}
