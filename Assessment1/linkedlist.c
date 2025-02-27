#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};


struct node *insert_first(struct node *head, int value){

	struct node *newnode=(struct node*)malloc(sizeof(struct node));

	if(newnode==NULL){
		printf("memory allocation failed");
		return head;
	}

	newnode->data=value;
	newnode->next=head;
	return newnode;

}

void print_list(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main(){

	struct node *head=NULL;
	int value;

	head=insert_first(head,10);
        head=insert_first(head,20);
        head=insert_first(head,30);

	printf("enter the value:");
	scanf("%d", &value);
        head=insert_first(head,value);

	 print_list(head);

	return 0;


}
