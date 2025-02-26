#include <stdio.h>
int main(){

	int choice,target,currrent=1;

	while(1){

		printf("select mode:");
		printf("1.move");
		printf("2,exit");
		printf("enter the choice:);
		scanf("%d", &choice);

		if(choice==1){
			printf("enter the floor you want to move:");
			scanf("%d", &target);

			if(target<1 || target>4_){

				printf("please enter a floor between 1 and 4");
				continue;
			}

			if(current==target){
				printf("alredy in the %d  floor", current);
			
			
			}else{
				printf("moving from %d to %d", current, target);
				currrent=target;
				printf("now the lift is moving to %d", current);
			}
		
		}
		else if(choice ==2){
			printf("exiting the program");
			break;
		}
		else{
			printf("invalid choice:");
		}
	}	

	return 0;


}


































