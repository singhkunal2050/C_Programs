/*ADD SUBSTRACT & MULTIPLY TWO FRACTIONS */

#include<stdio.h>
main()
{
int n1,n2,d1,d2,o;
float A,S,M;

printf("ENTER NUMERATOR AND DENOMINATOR OF FIRST  NUMBER \n");
scanf("%d%d",&n1,&d1);

printf("ENTER NUMERATOR AND DENOMINATOR OF SECOND  NUMBER \n ");
scanf("%d%d",&n2,&d2);

printf("ENTER \n 1 TO ADD \n 2 TO SUBSTRACT \n 3 TO MULTIPLY \n");
scanf("%d",&o);

switch(o)
{

case 1: A = (n1/d1) + (n2/d2);
	printf("THE ADDITION IS %f \n",A);break;

case 2: S = (n1/d1) - (n2/d2);
	printf("THE SUBSTRACTION IS %f \n",S);break;

case 3: M = (n1/d1) * (n2/d2);
	printf("THE MULTIPLICATION IS %f \n",M);break;

default : printf("ENTER VALID INPUT \n");break;
}
}


/*
OUTPUT

ENTER NUMERATOR AND DENOMINATOR OF FIRST  NUMBER 
3 3
ENTER NUMERATOR AND DENOMINATOR OF SECOND  NUMBER 
 30 5
ENTER 
 1 TO ADD 
 2 TO SUBSTRACT 
 3 TO MULTIPLY 
3
THE MULTIPLICATION IS 6.000000 


*/
