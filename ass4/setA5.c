/*CHECK THE INTEGER IS PRIME OR NOT */

#include<stdio.h>
main()
{

int n,i,prime=1;

printf("ENTER AN INTEGER n \n");
scanf("%d",&n);

for(i=2;i<=(n/2);i++)
{


 	if(n%i==0)
{
	prime=0;
}
break;
}
	if(prime==1)
{
	printf("THE NUMBER %d IS PRIME \n",n);
}
	else	
{
	printf("THE NUMBER %d IS NOT A  PRIME \n",n);

}}

/*
OUTPUT

ENTER AN INTEGER n 
2
THE NUMBER 2 IS PRIME 


*/

