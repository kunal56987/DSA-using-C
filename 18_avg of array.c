#include<stdio.h>
int main(){
	int a[10],size,i,sum=0;
	float avg;
	printf("Enter the size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter the %d location value:",i);
		scanf("%d",&a[i]);
	}
	printf("Elements of array\n");
	for(i=0;i<size;i++){
		printf("%d  ",a[i]);
		sum+=a[i];
	}
	avg=sum/size;
	printf("\nAverage=%f\n",avg);
	return 0;
}
