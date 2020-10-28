//SPANDANS CODE
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head= NULL;
struct node* create_node(int entry)
{
	node*p= (node*) malloc (sizeof(node));
	p->data= entry;
	p->next=NULL;
	return p;
}

void insert(int data)
{
	if (head==NULL)
	    head=create_node(data);
	    
	else if (head->next== NULL)
	    {
	    	node* p= create_node(data);
	    	head->next= p;
		}
		
	else 
	    {
	    	node *temp=head;
	    	
	    	    do 
	    	    {
	    	    	temp=temp-> next;
				}
				while(temp!=NULL);
			node* p= create_node(data);
			temp->next=p;
				
		}
}
