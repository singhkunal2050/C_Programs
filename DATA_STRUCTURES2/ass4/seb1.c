
/* HEADER FILE FOR STATIC STACK IMPLEMENTATION */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSZ 20

struct stack
{
  char a[MAXSZ];
  int top;
};

void initstack(struct stack *s)
{
    s->top=-1;
}


int isEmpty(struct stack *s)
{
	return s->top==-1;
}
int isFull(struct stack *s)
{
	return s->top==MAXSZ-1; 
}

void push(struct stack *s, char value)
{
	// printf("\n-----*=*------\n");
	if(isFull(s))
 	{
	   printf("Stack Overflow\n");
	   exit(1);	
	}
		//s->top++;
		s->a[++s->top]=value;
}


char pop(struct stack *s)
{
	if(isEmpty(s))
      {
		printf("Stack Underflow!!\n");
		exit(1);
      }
	//int temp;
	return s->a[s->top--];		//temp=s->a[s->top];	
}		


char stacktop(struct stack *s)
{
	if(isEmpty(s))
      {
		printf("Stack Underflow!!\n");
		exit(1);
      }
	int temp;
	return s->a[s->top];	
}






/*REVERSE A STRING USING */

int main()
{

int i=0,n;
char str[20];
struct stack stk;
initstack(&stk);

printf("Enter a String to Reverse it!!\n");
scanf("%s",str);

printf("\n+_+\n");
while(str[i]!='\0')
{
	printf("Im in loop\n");
	push(&stk,str[i++]);
}
/*
i=0;
//while(!isEmpty(&stk))
{
	str[i++]=pop(&stk);
}

printf("Your String in Reverse!!\n");
puts(str);
*/		


}
