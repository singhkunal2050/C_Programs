/*CALCULATE INCOME TAX ACCORDING*/


#include<stdio.h>
main()
{
long int sal;
int tx1,tx2;
printf("ENTER YOUR ANNUAL SALARY\n");
scanf("%ld",&sal);

	if(sal<=150000) 
	{	
	printf("YOUR INCOME TAX IS 0 RS \n");
           	}
	else  if(sal>=150000 && sal<=300000)
	{	
	tx1= sal*0.2;
  	printf("YOUR INCOME TAX IS %d \n",tx1);
	}
        	else  if(sal>300000)
	{
	tx2= sal*0.3;	
	printf("YOUR INCOME TAX IS %d \n",tx2);} 
}
/*
OUTPUT

ENTER YOUR ANNUAL SALARY
220000
YOUR INCOME TAX IS 44000 

*/
