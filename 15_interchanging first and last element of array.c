#include<stdio.h>
int main(){
	int a[10],i,size,temp;
	printf("Enter the Size of Array:");
	scanf("%d",&size);
	printf("Enter the Elements of array\n");
	for(i=0;i<size;i++){
		printf("Enter the %d location value:",i);
		scanf("%d",&a[i]);
	}
	printf("Before interchanging array is\n");
	for(i=0;i<size;i++){
		printf("%d  ",a[i]);
	}
	temp=a[0];
	a[0]=a[size-1];
	a[size-1]=temp;
	printf("\nAfter interchange array is\n");
	for(i=0;i<size;i++){
		printf("%d  ",a[i]);
	}
	return 0;
	
}
