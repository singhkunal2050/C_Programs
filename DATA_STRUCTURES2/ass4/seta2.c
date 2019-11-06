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
