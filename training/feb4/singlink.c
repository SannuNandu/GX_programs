#include <stdio.h> 
#include <stdlib.h>
struct node{
		int data;
		struct node *next;
	};

void count_of_nodes(struct node *head){
//	int count=0;
	if(head==NULL)
		printf("the linked list is empty");
		struct node *ptr=NULL;
		ptr=head;
		while(ptr!=NULL){
			printf("%d\n", ptr->data);
		//	count++;
			ptr=ptr->next;
		}


//		printf("%d\n", count);
}





int main(){
	struct node *head=malloc(sizeof(struct node));
	head->data=45;
	head->next=NULL;

	struct node *current=malloc(sizeof(struct node));
	current->data=98;
	current->next=NULL;
	head->next=current;

	current=malloc(sizeof(struct node));
	current->data=3;
	current->next=NULL;
	head->next->next=current;


	count_of_nodes(head);






//	printf("%d\n", current->data);
//	printf("%p", (void *)current);

	return 0;



}





















