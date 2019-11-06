/*SWAP TWO NUMBERS USING XOR*/


#include<stdio.h>
main()
{
int n1,n2;

printf("Enter Two Numbers \n");
scanf("%d",&n1);
scanf("%d",&n2);

printf("Before Swapping %d %d \n",n1,n2);

n1=n1^n2;
n2=n1^n2;
n1=n1^n2;


printf("After Swapping %d %d \n",n1,n2);

}


/*

Enter Two Numbers 
1 5
Before Swapping 1 5 
After Swapping 5 1 

*/
