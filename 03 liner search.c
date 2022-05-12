#include<stdio.h>
#include<stdlib.h>

void search(int[],int);
void search(int a[],int end){
	int key,i,found=0;
	printf("\nEnter the element you want to search:");
	
	scanf("%d",&key);
	for(i=0;i<end;i++){
		if(a[i]==key){
			found=1;
			break;
		}
	}
	if(found==1){
			printf("\n%d is present",key);
		}
		else{
			printf("\nsearching failed");
		}
}	


int main(){
	int a[20],i,size,chose;
	printf("enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of array-\n");
	for(i=0;i<size;i++){
		printf("Enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	while(1){
		printf("\nchosse the flowing:\n1.To search an element\n2.exit\nchosse:");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				search(a,size);
				break;
			case 2:
				exit(0);
				break;	
		}
	}
	return 0;
}
