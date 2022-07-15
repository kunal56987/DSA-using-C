#include<stdio.h>
int main(){
	int a[10],size,i;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of array\n");
	for(i=0;i<size;i++){
		printf("Enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	printf("Array are: ");
	for(i=0;i<size;i++){
		printf("%d  ",a[i]);
	}
	printf("\nReverse of array: ");
	for(i=size-1;i>=0;i--){
		printf("%d  ",a[i]);
	}
	return 0;
}
