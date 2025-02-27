#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

int main(){

	struct node* head=NULL;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=13;
	head->next=NULL;

	struct node* current=malloc(sizeof(struct node));
	current->data=40;
	current->next=NULL;
	head->next=current;


	struct node* current2=malloc(sizeof(struct node));
	current2->data=50;
	current2->next=NULL;
	current->next=current2;

	return 0;



}
