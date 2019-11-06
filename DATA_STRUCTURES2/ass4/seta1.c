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

