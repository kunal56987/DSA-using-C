#include<stdio.h>
int main(){
	int arr[10]={10,20,30,44,55,64,75,84,95,98},i,mid,high=9,low=0,found=0,ele,chose;
	for(i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	printf("\nEnter the value you want to search:");
	scanf("%d",&ele);
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==ele){
			found=1;
		}
		if(arr[mid]<ele){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	if(found==1){
		printf("searching successfull..\n");
	}
	else{
		printf("searching faild..\n");
	}
	return 0;
}
