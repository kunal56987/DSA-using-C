#include<stdio.h>
#include<stdlib.h>
void mergeSort(int[],int,int);
void merge(int[],int,int,int);
void QuickSort(int[],int,int);
int partition(int[],int,int);
void selection(int[],int);
void bubble(int[],int);
void insertion(int[],int);

void selection(int arr[],int end){
	int i,j,temp;
	for(i=0;i<end;i++){
		for(j=i+1;j<=end;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void bubble(int arr[],int end){
	int i,j,temp;
	for(i=0;i<end-1;i++){
		for(j=0;j<(end-1)-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void insertion(int arr[],int end){
	int i,j,temp;
	for(i=1;i<end;i++){
		temp=arr[i];
		for(j=i-1;j>=0&&temp<arr[j];j--){
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}
}

void QuickSort(int arr[],int start,int end){
	if(start<end){
		int pIndex=partition(arr,start,end);
		QuickSort(arr,start,pIndex-1);
		QuickSort(arr,pIndex+1,end);
	}
}
int partition(int arr[],int start,int end){
	int pivot=arr[end];
	int i=start;
	int pIndex=start;
	int temp;
	
	for(i=start;i<end;i++){
		if(arr[i]<pivot){
			temp=arr[pIndex];
			arr[pIndex]=arr[i];
			arr[i]=temp;
			pIndex++;
		}
	}
	temp=arr[pIndex];
	arr[pIndex]=arr[end];
	arr[end]=temp;
	return pIndex;
}
void mergeSort(int arr[],int start,int end){
	if(start<end){
		int mid=(start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}

void merge(int arr[],int start,int mid,int end){
	int i,j,k,temp[10];
	i=start;
	j=mid+1;
	k=0;
	while(i<=mid && j<=end){
		if(arr[i]<arr[j]){
			temp[k]=arr[i];
			k++;
			i++;
		}
		else{
			temp[k]=arr[j];
			k++;
			j++;
		}
	}
	while(i<=mid){
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=end){
		temp[k]=arr[j];
		j++;
		k++;
	}
	k=0;
	for(i=start;i<=end;i++){
		arr[i]=temp[k];
		k++;
	}
	
}

int main(){
	int size,i,arr[20],chose;
	printf("Enter the size of array:");
	scanf("%d",&size);
	
	while(1){
		printf("\nChosse one of the sorting:\n1.By Merge Sort\n2.By Quick Sort\n3.By selection sort\n4.By Bubble sort\n5.By Insertion sort\n6.Exit\nChosse:");
		scanf("%d",&chose);
		switch(chose){
			case 1:
				printf("Enter the elments in array\n");
				for(i=0;i<size;i++){
				printf("Enter the %d location value:",i);
				scanf("%d",&arr[i]);
				}
				printf("\nBefore sorting elements are..\n");
				for(i=0;i<size;i++){
					printf("%d\t",arr[i]);
				}
				mergeSort(arr,0,size-1);
				printf("\nAfter sorting By Merge Sort\n");
				for(i=0;i<size;i++){
					printf("%d\t",arr[i]);
				}
				break;
			case 2:
				printf("\nEnter the elments in array\n");
				for(i=0;i<size;i++){
					printf("Enter the %d location value:",i);
					scanf("%d",&arr[i]);
				}
				printf("\nBefore sorting elements are..\n");
				for(i=0;i<size;i++){
				printf("%d\t",arr[i]);
				}
				QuickSort(arr,0,size-1);
				printf("\nAfter sorting By Quick Sort\n");
				for(i=0;i<size;i++){
					printf("%d\t",arr[i]);
				}
				break;
			case 3:
				printf("\nEnter the elments in array\n");
				for(i=0;i<size;i++){
					printf("Enter the %d location value:",i);
					scanf("%d",&arr[i]);
				}
				printf("\nBefore sorting elements are..\n");
				for(i=0;i<size;i++){
				printf("%d\t",arr[i]);
				}
				selection(arr,size-1);
				printf("\nAfter sorting By Selection Sort\n");
				for(i=0;i<size;i++){
					printf("%d\t",arr[i]);
				}
				break;
			case 4:
				printf("\nEnter the elments in array\n");
				for(i=0;i<size;i++){
					printf("Enter the %d location value:",i);
					scanf("%d",&arr[i]);
				}
				printf("\nBefore sorting elements are..\n");
				for(i=0;i<size;i++){
				printf("%d\t",arr[i]);
				}
				bubble(arr,size);
				printf("\nAfter sorting By Bubble Sort\n");
				for(i=0;i<size;i++){
					printf("%d\t",arr[i]);
				}
				break;
			case 5:
				printf("\nEnter the elments in array\n");
				for(i=0;i<size;i++){
					printf("Enter the %d location value:",i);
					scanf("%d",&arr[i]);
				}
				printf("\nBefore sorting elements are..\n");
				for(i=0;i<size;i++){
					printf("%d\t",arr[i]);
				}
				insertion(arr,size);
				printf("\nAfter sorting By Insertion Sort\n");
				for(i=0;i<size;i++){
					printf("%d\t",arr[i]);
				}
				break;
			case 6:
				exit(0);
				break;			
		}	
	}

}
