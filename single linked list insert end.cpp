#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
 struct node*tail=NULL;
 struct nod *current=NULL;
 void printlist()
 {
 	struct node*p=tail;
 	printf("\n");
 	while(p!=NULL)
 	{
 		printf("%d ",p->data);
 		p=p->next;
	 }
	 printf("j");
 }
 void insertend(int data)
 {
 	struct node*lk=(struct node*)malloc(sizeof(struct node));
 	lk->data=data;
    t->next=lk;
 }
 int main()
 {
 	int k=0;
 	insertend(12);
 	insertend(50);
 	insertend(23);
 	insertend(13);
 	insertend(34);
 	insertend(25);
 	printf("linked list:");
 	printlist()
 	return 0;
 }
