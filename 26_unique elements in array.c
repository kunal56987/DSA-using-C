#include<stdio.h>
int main(){
	int a[10],b[10],size,i,j,count;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of array\n");
	for(i=0;i<size;i++){
		printf("Enter %d location value:",i);
		scanf("%d",&a[i]);
		b[i]=-1;
	}
	for(i=0;i<size;i++){
		count=1;
		for(j=i+1;j<size;j++){
			if(a[i]==a[j]){
				count++;
				b[j]=0;
			}
		}
		if(b[i]!=0){
			b[i]=count;
		}
	}
	printf("Unique elements in array are:");
	for(i=0;i<size;i++){
		if(b[i]==1){
			printf("%d",a[i]);
		}
	}
	return 0;
}
