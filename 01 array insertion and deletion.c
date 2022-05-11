#include<stdio.h>
#include<stdlib.h>
int i;
void insertBegain(int[],int,int);
void insertLast(int[],int,int);
void insertSpecific(int[],int,int,int);
void deleteLast(int[],int);
void deleteBegain(int[],int);

void deleteSpecific(int[],int,int);
void display(int[],int);

void insertBegain(int arr[],int val,int size){
	for(i=size-1;i>=0;i--){
		arr[i+1]=arr[i];	
	}
	arr[0]=val;
	size++;
}

void insertLast(int arr[],int val,int size){
	arr[size]=val;
	size++;
}
void insertSpecific(int arr[],int val,int pose,int size){
	for(i=size-1;i>=pose;i--){
		arr[i+1]=arr[i];
	}
	arr[pose]=val;
	size++;
}

void deleteLast(int arr[],int size){
	size--;
}

void deleteBegain(int arr[],int size){
	for(i=1;i<size;i++){
		arr[i-1]=arr[i];
	}
	size--;
}

void deleteSpecific(int arr[],int size,int pose){
	for(i=pose;i<size;i++){
		arr[i]=arr[i+1];
	}
	size--;
}

void display(int arr[],int size){
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}


int main(){
	int arr[20],i,size,val,chose,pose;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of array\n");
	for(i=0;i<size;i++){
		printf("enter the %d location value:",i);
		scanf("%d",&arr[i]);
	}
	printf("The elements of array before insetion are-\n");
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	while(1){
		printf("\nchoese one of the following-\n1.To insert an Element at begning\n2.To insert an element at last\n3.To insert an element at specified position\n4.Delete an element at last\n5.Delete an element at begning\n6.Delete an element at specified position\n7.Display\n8.exit\n");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				printf("Enter the element:");
				scanf("%d",&val);
				insertBegain(arr,val,size);
				size++;
				break;
			case 2:
				printf("Enter the element:");
				scanf("%d",&val);
				insertLast(arr,val,size);
				size++;
				break;
			case 3:
				printf("Enter the element:");
				scanf("%d",&val);
				printf("Enter the position you want to insert:");
				scanf("%d",&pose);	
				insertSpecific(arr,val,pose,size);
				size++;
				break;
			case 4:
				deleteLast(arr,size);
				size--;
				break;
			case 5:
				deleteBegain(arr,size);
				size--;
				break;
			case 6:
				printf("Enter the position you want to delete:");
				scanf("%d",&pose);
				deleteSpecific(arr,size,pose);
				size--;
				break;
			case 7:
				display(arr,size);
				break;
			case 8:
				exit(0);
				break;						
		}
	}
	return 0;
}
