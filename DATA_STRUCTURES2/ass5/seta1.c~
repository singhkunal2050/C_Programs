/*IMPLEMENTATION OF STATIC QUEUE*/

#include<stdio.h>
#include<stdlib.h>	
#include"stqueue.h"
main()
{

	int i,n,temp,c;
	int p;
	struct queue q; 
	initqueue(&q);

	printf("ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER IN THE QUEUE\n");
	scanf("%d",&n);

	printf("Enter the Numbers\n");
	for(i=0;i<n;i++)
	{
		printf("Enter Element %d\n",i+1);	
		scanf("%d",&temp);
		insertq(&q,temp);
	}

	do
	{
		printf("Choose the operations you want to perform on the QUEUE\n 1] insertq\n 2] deleteq\n 3] peekq\n 4] IsEmpty\n5] IsFull\n6] Exit\n");
		scanf("%d",&c);	

		switch(c)
		{

			case 1 : printf("Enter the element \n");
				 scanf("%d",&temp);		
				 insertq(&q,temp);
				 break;

			case 2 : p=deleteq(&q);
				 printf("Element %d is DELETED \n\n",p);
				 break;	

			case 3 : printf("The Top-Most Element in the QUEUE is %d \n\n",peekq(&q));
				 break;

			case 4 : if(isEmpty(&q))	
				 {	
					 printf("\n(*~*) QUEUE is Empty (*~*)\n\n");  
					 exit(1);
				 }	
				 else 	printf("QUEUE is not Empty!!\n\n");	
				 break;


			case 5 : if(isFull(&q))	
				 {	
					 printf("[*-*] QUEUE is Full [*-*]\n\n");  
					 exit(1);
				 }	
				 else 	printf("QUEUE is not Full!!\n\n");	
				 break;

			case 6 : exit(1);

			default : printf("Pleeeeaaaseeee PROVIDE CORRECT INPUT (IYKWIM) \n\n");
		}	

	}while(c!=6);




}


/*

	OUTPUT

ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER IN THE QUEUE
2
Enter the Numbers
Enter Element 1
12
Enter Element 2
33
Choose the operations you want to perform on the QUEUE
 1] insertq
 2] deleteq
 3] peekq
 4] IsEmpty
5] IsFull
6] Exit
1
Enter the element 
14
Choose the operations you want to perform on the QUEUE
 1] insertq
 2] deleteq
 3] peekq
 4] IsEmpty
5] IsFull
6] Exit
2
Element 12 is DELETED 

Choose the operations you want to perform on the QUEUE
 1] insertq
 2] deleteq
 3] peekq
 4] IsEmpty
5] IsFull
6] Exit
3
The Top-Most Element in the QUEUE is 33 



*/
