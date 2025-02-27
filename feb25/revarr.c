#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int *arr;
	int i;
	printf("enter the number of elemnts in an array:");
        scanf("%d", &n);
	int temp[n];
	arr=(int *)malloc(n*sizeof(int));

	if(arr==NULL){
		printf("memory allocation failed");
		return 1;
	}

	printf("enter the elements of the array:");
	for(i=0;i<n;i++){
		scanf("%d", arr+i);
	}

	for(i=0;i<n;i++){
		temp[i]=*arr+n-i-1;
		printf("%d", temp[i]);
	
	
	}
	printf("\n");

	free(arr);
	return 0;
}
