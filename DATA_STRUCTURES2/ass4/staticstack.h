/* HEADER FILE FOR STATIC STACK IMPLEMENTATION */


#include<stdio.h>
#define MAXSZ 10

struct stack
{
  int a[MAXSZ];
  int top;
};

void initstack(struct stack *s)
{
    s->top=-1;
}



void push(struct stack *s, int value)
{
	// printf("\n-----*=*------\n");
	if(isFull(&s))
 	{
	   printf("Stack Overflow\n");
	   exit(1);	
	}
		// printf("\n-----*__*------\n");
		s->a[++s->top]=value;
}


int pop(struct stack *s)
{
	if(isEmpty(&s))
      {
		printf("Stack Underflow!!\n");
		exit(1);
      }
	int temp;
	return s->a[s->top--];		//temp=s->a[s->top];	
}		


int stacktop(struct stack *s)
{
	if(isEmpty(s))
      {
		printf("Stack Underflow!!\n");
		exit(1);
      }
	int temp;
	return s->a[s->top];	
}


int isEmpty(struct stack *s)
{
	return s->top==-1;
}


int isFull(struct stack *s)
{
	return s->top==MAXSZ-1; 
}




