#include<stdio.h>
int main(){
	int a[3][3],key,i,j,found=0;
	printf("Enter the Elements of Matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<=3;j++){
			printf("Enter the (%d,%d)location value:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the Element You want to search:");
	scanf("%d",&key);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(key==a[i][j]){
				found=1;
				break;
			}
		}
	}
	if(found==1){
		printf("Enter Key if found succesfully\n");
	}
	else{
		printf("Searching failed\n");
	}
	return 0;
}
