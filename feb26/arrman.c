#include <stdio.h>
#include <stdlib.h>


int increment_by_one(int *arr){
	int n;
	for(int i=0;i<n;i++){
		arr[i]+=1;
	}
}

int double_the_elements(int *arr){
	int n;

	for(int i=0;i<n;i++){
		arr[i]=arr[i]*2;
	}

}

int main(){
	int n;
	int choice,i;
	printf("enter the number of elements of the array:");
	scanf("%d", &n);

	int *arr;
	arr=(int *)malloc(n*sizeof(int));

	if(arr==NULL){
		printf("memory allocation failed");
		return 1;	
	}

	printf("enter the elements of thar array:");

			for(i=0;i<n;i++){
				scanf("%d", arr+i);
			}

	while(1){
		printf("choose:");
		printf("1.increment by one\n");
		printf("2.Double the elements\n");
		printf("3.exit");
		scanf("%d", &choice);

		if(choice==1){

			int (*funcPtr)(int *)=increment_by_one;
			funcPtr(arr);

			printf("after incrementing:\n");
			for(int i=0;i<n;i++){
				printf("%d", *arr+i);
			}
			printf("\n");
		}
		
			else if(choice==2){


				int (*funcPtr)(int *)=double_the_elements;
				funcPtr(arr);

				printf("after doubling:\n");
				for(int i=0;i<n;i++){
					printf("%d ", arr[i]);
				
				}
				printf("\n");

			}

		else{
			break;
		
		}
	}
	
			printf("invalid choice");


	free(arr);
	return 0;
}
