#include <stdio.h>
#include <stdlib.h>
int main(){

	int n,temp;

	int *arr;

	arr=malloc(n*sizeof(int));
	printf("enter the number of elements in an array");
	scanf("%d", &n);

	printf("enter the elements of the array:");
	for(int i=0;i<n;i++){
		scanf("%d", arr+i);
	}

	int temp;
	printf("enter the element that you want to search:");
	scanf("%d", &temp);
	for(int i=0;i<n;i++){
		if(temp==*arr+i){
			printf("The %d is present in the array", *arr+i);
			return 1;

		}}
		printf("the %d is not present in the array:" ,temp);

		
	
	
	return 0;

}

