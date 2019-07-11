#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
	int data;
	struct NODE *next;
}NODE;

typedef struct _HEAD
{
	struct NODE *next;
}HEAD;

int getmem(NODE **start)
{
	NODE *temp;
	temp = ( NODE *) malloc(sizeof(NODE));
	if(!temp){
		perror("Cant get memory\n");	
		exit(0);
	}
	temp->next = NULL;
	temp->data = 0;
	*start = temp;
return 0;
}

int getnode(HEAD *base,int data)
{
	NODE *temp;
	getmem(&temp);
	temp->data = data;
	temp->next = base->next;
	base->next = temp;	
return 0;
}

int display(HEAD *base)
{
	NODE *temp;
	temp = base->next;
	while(temp->next != NULL){
		printf("%d-->",temp->data);
		temp = temp->next;
	}
return 0;
}

int main()
{
	HEAD *head;
	NODE *start = NULL;
	getmem(&start);
	head->next = start;
	getnode(head,40);
	getnode(head,50);
	getnode(head,60);
	getnode(head,70);
	getnode(head,80);
	getnode(head,90);
	display(head);
return 0;
}
