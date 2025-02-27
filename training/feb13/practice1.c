#include <stdio.h>

void swaparr( int *arr1, int *arr2, int size1, int size2){
	int minsize;
	if(size1<size2){
		minsize=size1;
	}
	else{
	minsize=size2;
	}


	int temp;
	for(int i=0;i<minsize;i++){
		temp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
}


int main(){

	  int arr1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	  int arr2[] = {0, 9, 8, 7, 6, 5, 4, 3, 2, 1};

	  int size1=sizeof(arr1)/sizeof(arr1[0]);
	  int size2=sizeof(arr2)/sizeof(arr2[0]);
	  printf("first array:");
	  for(int i=0;i<size1;i++){
		  printf("%d", arr1[i]);
	  }
	  printf("\n");

	  printf("second array:");
          for(int i=0;i<size2;i++){
                  printf("%d", arr2[i]);
          }
	  printf("\n");

	  swaparr(arr1,arr2,size1,size2);
	  printf("first array after the swap:");
          for(int i=0;i<size1;i++){
                  printf("%d", arr1[i]);
          }
	  printf("\n");

          printf("second array after the swap:");
          for(int i=0;i<size2;i++){
                  printf("%d", arr2[i]);
          }
	  printf("\n");

	  return 0;
}




