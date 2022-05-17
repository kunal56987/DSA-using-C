#include<stdio.h>
#include<stdlib.h>
int i;
void max(int[],int);
void min(int[],int);
void display(int[],int);

void max(int arr[],int size){
	int max=arr[0];
	for(i=0;i<size;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("the max value is: %d",max);
}

void min(int arr[],int size){
	int min=arr[0];
	for(i=0;i<size;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("the min value is: %d",min);
}

void display(int arr[],int size){
	printf("the Entered arry is:");
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}

int main(){
	int arr[20],i,size,chose;
	printf("Enter the size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("enter the %d location value:",i);
		scanf("%d",&arr[i]);
	}
	while(1){
		printf("\nEnter the following\n1.To find max value\n2.To find min value\n3.To Display array\n4.exit\n");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				max(arr,size);
				break;
			case 2:
				min(arr,size);
				break;
			case 3:
				display(arr,size);
				break;
			case 4:
				exit(0);
				break;			
		}
	}
	return 0;	
}
