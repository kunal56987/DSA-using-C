#include<stdio.h>
int main(){
	int a[10],size,i,j;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of array:\n");
	for(i=0;i<size;i++){
		printf("Enter the %d location value:",i);
		scanf("%d",&a[i]);
	}
	printf("Entered array are\n");
	for(i=0;i<size;i++){
		printf("%d  ",a[i]);
	}
	printf("Duplicate elements are\n");
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]==a[j]){
				printf("%d  ",a[j]);
			}
		}
	}
	return 0;
return 0;	
}
