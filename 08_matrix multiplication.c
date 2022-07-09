#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10][10],b[10][10],mul[10][10],r1,r2,c1,c2,i,j,k;     
printf("Enter the first matrix element\n");
printf("Enter the number of row:");    
scanf("%d",&r1);    
printf("Enter the number of column:");    
scanf("%d",&c1);    
for(i=0;i<r1;i++){    
	for(j=0;j<c1;j++){
		printf("Enter the (%d,%d)location value:",i,j);    
		scanf("%d",&a[i][j]);
		}    
	}    
printf("Enter the second matrix element\n"); 
printf("Enter the number of row:");    
scanf("%d",&r2);    
printf("Enter the number of column:");    
scanf("%d",&c2);
for(i=0;i<r2;i++){
	for(j=0;j<c2;j++){
		printf("Enter the (%d,%d)location value:",i,j);
		scanf("%d",&b[i][j]);
	}
}
if(c1==r2){
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			mul[i][j]=0;
			for(k=0;k<c1;k++){
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("After multiplying two matrix\n"); 
    for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d\t",mul[i][j]);
		}
	printf("\n");
}
}
else{
	printf("Multipilication not possible");
}
return 0;  
}  
