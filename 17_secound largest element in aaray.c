#include<stdio.h>
int main(){
	int a[10],size,i,max,max2;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of array\n");
	for(i=0;i<size;i++){
		printf("Enter the %d location value:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		printf("%d  ",a[i]);
	}
	if(a[0]>a[1]){
		max=a[0];
		max2=a[1];
	}
	else{
		max=a[1];
		max2=a[0];
	}
	for(i=2;i<size;i++){
		if(max<a[i]){
			max2=max;
			max=a[i];
		}
		else if(max2<a[i]){
			max2=a[i];
		}
	}
	printf("\nthe largest element is %d\n",max);
	printf("The secound largest element is %d",max2);
	
	
	return 0;
}
