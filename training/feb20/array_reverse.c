




#include <stdio.h>

int main(){
	int arr[]={10,20,30,40,50};

	int size=sizeof(arr)/sizeof(arr[0]);

	int *ptr=arr;

	int *start=arr;
	int *end=arr+size-1;
	int temp;

	while(start<end){
		temp=*start;
		*start=*end;
		*end=temp;


		start++;
		end--;
	}

	 printf("Reversed array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    return 0;

}


*/








































