/*PRIME NUMBERS FROM  1 to 50 */
#include<stdio.h>
main()
{
int i,sum=0,p;
printf("PRIME NOS FROM 1 TO 50 ARE \n");

for(i=1;i<=50;i++)
{
	p=1;
		while(p<=(i/2))
	{
		if(i%p==0)
		sum=sum+p;
		p++;
	}	
		if(sum==1)
		
		printf("%d \n",i);
		sum=0;
	}
	}

/*
	OUTPUT

PRIME NOS FROM 1 TO 50 ARE 
2 
3 
5 
7 
11 
13 
17 
19 
23 
29 
31 
37 
41 
43 
47 
*/
