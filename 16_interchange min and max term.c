#include<stdio.h>
int main(){
	int a[10],size,i,max,min,temp,maxp,minp;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of array\n");
	for(i=0;i<size;i++){
		printf("Enter the %d location value:",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=1;i<size;i++){
		if(min>a[i]){
			min=a[i];
			minp=i;
		}
		else if(max<a[i]){
			max=a[i];
			maxp=i;
		}
	}
	printf("\nmaximum elment in given array is: %d",max);
	printf("\nminmum element in givin array is: %d",min);
	printf("\nBefore interchange\n");
	for(i=0;i<size;i++){
		printf("%d  ",a[i]);
	}
	temp=a[maxp];
	a[maxp]=a[minp];
	a[minp]=temp;
	printf("\nAfter interchange\n");
	for(i=0;i<size;i++){
		printf("%d  ",a[i]);
	}
	return 0;
}
