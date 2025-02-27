
#include <stdio.h>
int main(){
	int num,i,count;
	for(num=2;num<=100;num++){
		count=0;
		for(i=2;i<=num/2;i++){
		if(num%i==0){
		count++;	
		}
		}
		if(count==0){
		printf("%d \n", num);
	}
	}
	return 0;
}

