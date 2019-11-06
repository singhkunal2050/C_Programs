-----------------------------------------------

Name : Kunal M Singh
Class : SY BCS "B"
Roll no : 44212 

--------------------------------------------------------------

		** ASS4  ** SET A ** STACK

--------------------------------------------------------------

1]

/* IMPLEMENTATION OF STATIC STACK USING ARRAY */

#include<stdio.h>
#include<stdlib.h>
#include"staticstack.h"
main()
{
	

	int i,n,a[10],c;
	int p,temp;
	struct stack stk; 

	printf("ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER IN THE STACK[<10]\n");
	scanf("%d",&n);

	printf("Enter the Numbers\n");
	for(i=0;i<n;i++)
	{
		printf("Enter Element %d\n",i+1);	
		scanf("%d",&a[i]);
		push(&stk,a[i]);
	}

	do
	{
		printf("Choose the operations you want to perform on the stack\n 1] PUSH\t 2] POP\t 3] STACKTOP\t 4] IsEmpty\t5] IsFull\t6] Exit\n");
		scanf("%d",&c);	

		switch(c)
		{

			case 1 : printf("Enter the element \n");
				 scanf("%d",&temp);		
				 push(&stk,temp);
				 break;

			case 2 : p=pop(&stk);
				 printf("Element %d is POPPED OUT \n\n",p);
				 break;	

			case 3 : printf("The Top-Most Element in the stack is %d \n\n",stacktop(&stk));
				 break;
	
			case 4 : if(isEmpty(&stk))	
				 {	
					 printf("Stack is Empty\n\n");  
					 exit(1);
				 }	
				 else 	printf("Stack is not Empty\n\n");	
				 break;

			case 5 : if(isFull(&stk))
				 {	
					 printf("\n{(+_+)} Stack is FULL {(+_+)} \n\n");  
					 exit(1);
				 }	
				 else 	printf("Stack is not FULL!!\n\n");	
				 break;
	


			case 6 : exit(1);

			default : printf("Pleeeeaaaseeee PROVIDE CORRECT INPUT (IYKWIM) \n\n");
		}	

	}while(c!=6);

}


/*
	OUTPUT

[sy44212@cs16 ass4]$ ./a.out;
ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER IN THE STACK[<10]
3
Enter the Numbers
Enter Element 1
12
Enter Element 2
56
Enter Element 3
7
Choose the operations you want to perform on the stack
 1] PUSH         2] POP  3] STACKTOP     4] IsEmpty     5] IsFull       6] Exit
1
Enter the element 
4
Choose the operations you want to perform on the stack
 1] PUSH         2] POP  3] STACKTOP     4] IsEmpty     5] IsFull       6] Exit
2
Element 4 is POPPED OUT 

Choose the operations you want to perform on the stack
 1] PUSH         2] POP  3] STACKTOP     4] IsEmpty     5] IsFull       6] Exit
5
Stack is not FULL!!

Choose the operations you want to perform on the stack
 1] PUSH         2] POP  3] STACKTOP     4] IsEmpty     5] IsFull       6] Exit
6


*/



--------------------------------------------------------------

2]

/*IMPLEMENTATION OF DYNAMIC STACK */

#include<stdio.h>
#include<stdlib.h>	
#include"dynamicstack.h"
main()
{

	int i,n,temp,c;
	int p,q;
	struct stack *stk; 

	printf("ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER IN THE STACK\n");
	scanf("%d",&n);

	printf("Enter the Numbers\n");
	for(i=0;i<n;i++)
	{
		printf("Enter Element %d\n",i+1);	
		scanf("%d",&temp);
		push(&stk,temp);
	}

	do
	{
		printf("Choose the operations you want to perform on the stack\n 1] PUSH\n 2] POP\n 3] STACKTOP\n 4] IsEmpty\n5] Exit\n");
		scanf("%d",&c);	

		switch(c)
		{

			case 1 : printf("Enter the element \n");
				 scanf("%d",&temp);		
				 push(&stk,temp);
				 break;

			case 2 : p=pop(&stk);
				 printf("Element %d is POPPED OUT \n\n",p);
				 break;	

			case 3 : printf("The Top-Most Element in the stack is %d \n\n",stacktop(&stk));
				 break;

			case 4 : if(isEmpty(stk))	
				 {	
					 printf("Stack is Empty\n\n");  
					 exit(1);
				 }	
				 else 	printf("Stack is not Empty\n\n");	
				 break;

			case 5 : exit(1);

			default : printf("Pleeeeaaaseeee PROVIDE CORRECT INPUT (IYKWIM) \n\n");
		}	

	}while(c!=5);




}




/*
	OUTPUT

ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER IN THE STACK
4
Enter the Numbers
Enter Element 1
32 5 7 87
Enter Element 2
Enter Element 3
Enter Element 4
Choose the operations you want to perform on the stack
 1] PUSH
 2] POP
 3] STACKTOP
 4] IsEmpty
5] Exit
1
Enter the element 
21
Choose the operations you want to perform on the stack
 1] PUSH
 2] POP
 3] STACKTOP
 4] IsEmpty
5] Exit
2


*/




--------------------------------------------------------------

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



------------------------------------------------------------


/*REVERSE A STRING USING */

#include<stdio.h>
#include<string.h>
#include"setb1.h"

int isPalindrome(char str[MAXSZ])
{
	struct stack stk;
	initstack(&stk);
	
	int i=0;
	while(str[i]!='\0')
	push(&stk,str[i++]);

	i=0;

	while(!isEmpty(&stk))
	{
		if(str[i++]!=pop(&stk))
			return 0;		
	}	
		return 1;
		
}	


int main()
{

int i=0,n;
char str[20];

printf("Enter a String to Reverse it!!\n");
scanf("%s",str);

//printf("\n+_+\n");
if(isPalindrome(str))
	printf("Your String is a PALINDROME!!\n");
else
printf("\nNOT A PALINDROME!!\n");

}

	
/*

[sy44212@cs33 ass4]$ ./a.out 
Enter a String to Reverse it!!
Kunal

NOT A PALINDROME!!
[sy44212@cs33 ass4]$ ./a.out 
Enter a String to Reverse it!!
MadaM
Your String is a PALINDROME!!
[sy44212@cs33 ass4]$ 


*/
