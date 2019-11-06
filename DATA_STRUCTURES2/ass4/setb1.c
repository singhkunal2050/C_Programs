/*REVERSE A STRING USING */

#include<stdio.h>
#include<string.h>
#include"setb1.h"

void reverse(char str[MAXSZ])
{
	struct stack stk;
	initstack(&stk);
	
	int i=0;
	while(str[i]!='\0')
	push(&stk,str[i++]);

	i=0;

	while(!isEmpty(&stk))
	{
		str[i++]=pop(&stk);
	}	

}	


int main()
{

int i=0,n;
char str[20];

printf("Enter a String to Reverse it!!\n");
scanf("%s",str);

//printf("\n+_+\n");
reverse(str);

printf("Your String in Reverse!!\n");
puts(str);

}

	

/*

[sy44212@cs33 ass4]$ cc setb1.c
[sy44212@cs33 ass4]$ ./a.out 
Enter a String to Reverse it!!
Kunal
Your String in Reverse!!
lanuK

*/

