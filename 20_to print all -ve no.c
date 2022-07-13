#include<stdio.h>
int main(){
	int a[10],i,size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of array\n");
	for(i=0;i<size;i++){
		printf("Enter the %d location value:",i);
		scanf("%d",&a[i]);
	}
	printf("Entered array is:\n");
	for(i=0;i<size;i++){
		printf("%d  ",a[i]);
	}
	printf("\nAll negative elements in array are:\n");
	for(i=0;i<size;i++){
		if(a[i]<0){
			printf("%d  ",a[i]);
		}
	}
	return 0;
	
}
