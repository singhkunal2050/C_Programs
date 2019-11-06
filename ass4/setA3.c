/*COMPUTE X TO THE POWER N*/

#include <stdio.h>
#include<math.h>
main()
{
int a,n,A;
printf("ENTER A NUMBER \n");
scanf("%d",&a);

printf("ENTER ITS INDEX (POWER) \n");
scanf("%d",&n);

A=pow(a,n);
printf("ANSWER IS  %d \n",A);

 
}
/*
OUTPUT

ENTER A NUMBER 
3
ENTER ITS INDEX (POWER) 
2
ANSWER IS  9 


*/
