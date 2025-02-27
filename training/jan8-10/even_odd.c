
#include <stdio.h>
int main(){
	int arr[10],i,even=0,odd=0;
	for(i=0;i<10;i++){
		scanf("%d", &arr[i]);
	}
	for(i=0;i<10;i++){
		if(arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	 printf("even:%d\n", even);
                printf("odd:%d\n", odd);

	printf("\n");
	return 0;
}


