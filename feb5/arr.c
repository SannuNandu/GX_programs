#include<stdio.h>
int main(){
	int arr[]={23,45,6,98};
	int min,max;
	max=min=arr[0];
	for(int i=1;i<=3;i++){
		if(arr[i]<min){
		min=arr[i];
		}
		if(arr[i]>max){
		max=arr[i];
		}
	}
		printf("%d\n", min);
		printf("%d\n", max);
	
	return 0;
}













