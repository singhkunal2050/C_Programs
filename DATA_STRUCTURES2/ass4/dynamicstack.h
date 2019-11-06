/* HEADER FILE FOR DYNAMIC STACK IMPLEMENTATION */

/*

   STRUCT 
   INIT
   PUSH 
   POP
   STACKTOP


*/

#include<stdio.h>
#include<stdlib.h>


struct stack
{	
	int info;
	struct stack *next;
};


struct stack *getnode(int value)
{
	struct stack *temp=NULL;
	temp=(struct stack*)malloc(sizeof(struct stack));
	temp->info=value;
	temp->next=NULL;
	return temp;
}

void freenode(struct stack *s)
{
	free(s);
}


void push(struct stack **s, int value)
{
	struct stack *p=NULL;
	if(*s==NULL)
	{
		*s=getnode(value);
		return;
	}
	p=getnode(value);
	p->next=*s;
	*s=p;		
}

int pop(struct stack **s)
{
	int value;
	struct stack *p=NULL;
	if(*s==NULL)
	{	
		printf("/n Stack UNderflow /n");
			exit(1);
	}
	
	p=*s;
	*s=p->next;
	value=p->info;
	freenode(p);
	return value;

}


int stacktop(struct stack **s)
{
	if(*s==NULL)
	{
		printf("Stack underflow/n");
		exit(1);
	}	

	return (*s)->info;

}

int isEmpty (struct stack *s)
{
	return s==NULL;
}









