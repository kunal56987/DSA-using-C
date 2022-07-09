#include<stdio.h>
int main(){
	int a[3][3],b[3][3],i,j,key,found=0;
	printf("Enter the Elements of first Matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("(%d,%d)value:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Elements of secound Matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("(%d,%d)value:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("Enter the key You want to search:");
	scanf("%d",&key);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(key==a[i][j]){
				printf("%d is found in first matrix\n",key);
				found=1;
				break;
			}
			else if(key==b[i][j]){
				printf("%d is found in secound matrix\n",key);
				found=1;
				break;
			}
		}
	}
	if(found==0){
		printf("searching failed\n");
	}
	return 0;
}
