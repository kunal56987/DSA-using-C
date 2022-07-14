#include<stdio.h>
int main(){
	int a[10],i,size,p=0,n=0;
	printf("Enter the siz eof array:");
	scanf("%d",&size);
	printf("Enter the elements of array\n");
	for(i=0;i<size;i++){
		printf("enter the %d location value:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		if(a[i]>0){
			p++;
		}
		else if(a[i]<0){
			n++;
		}
	}
	printf("\nTotal positive elements are:%d",p);
	printf("\nTotal negative elements are:%d",n);
	return 0;
	
}
