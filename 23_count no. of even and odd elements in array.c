#include<stdio.h>
int main(){
	int a[10],size,i,od=0,ev=0;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of array\n");
	for(i=0;i<size;i++){
		printf("Enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		if(a[i]%2==0){
			ev++;
		}
		else{
			od++;
		}
	}
	printf("Number of odd elements in array:%d",od);
	printf("\nNumber of even elememts in array:%d",ev);
	return 0;
}
