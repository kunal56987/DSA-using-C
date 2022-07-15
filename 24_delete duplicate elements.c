#include<stdio.h>
int main(){
	int a[10],size,i,j,k;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elemnets of array\n");
	for(i=0;i<size;i++){
		printf("Enter the %d loaction value:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]==a[j]){
				for(k=j;k<size-1;k++){
					a[k]=a[k+1];
				}
				size--;
				j--;
			}
		}
	}
	printf("After the deletion of duplicate elements\n");
	for(i=0;i<size;i++){
		printf("%d  ",a[i]);
	}
	return 0;
}
