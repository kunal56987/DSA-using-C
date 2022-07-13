#include<stdio.h>
int main(){
	int a[10],b[10],c[20],i,n1,n2,j=0;
	printf("Enter the size of first array:");
	scanf("%d",&n1);
	printf("Enter the elements for array\n");
	for(i=0;i<n1;i++){
		printf("Enter %d location value:",i);
		scanf("%d",&a[i]);
		c[j]=a[i];
		j++;
	}
	printf("Enter the size of secound array:");
	scanf("%d",&n2);
	printf("Enter the elements of 2nd array\n");
	for(i=0;i<n2;i++){
		printf("Enter %d location value:",i);
		scanf("%d",&b[i]);
		c[j]=b[i];
		j++;
	}
	printf("the first array are-\n");
	for(i=0;i<n1;i++){
		printf("%d  ",a[i]);
	}
	printf("\nthe secound array are-\n");
	for(i=0;i<n2;i++){
		printf("%d  ",b[i]);
	}
	printf("\nAfter merging Two array the array is:\n");
	for(i=0;i<n1+n2;i++){
		printf("%d  ",c[i]);
	}
	
	return 0;
	
	
}
