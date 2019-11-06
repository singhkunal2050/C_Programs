/* To Get The nO oF dENOmination */

#include <stdio.h>
main()
{
int amt, no;
printf("Enter Amount \n");
scanf("%d",&amt);
no=amt/10;
printf("no Of 10 is/are  : %d\n",no);
amt=amt%10;
no=amt/5;
printf("no Of 5  is/are : %d\n",no);
amt=amt%5;
no=amt/1;
printf("no Of 1  is/are : %d\n",no);
}

/*
OUTPUT

Enter Amount 
3234 
no Of 10 is/are  : 323
no Of 5  is/are : 0
no Of 1  is/are : 4

*/
