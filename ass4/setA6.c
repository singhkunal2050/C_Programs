/*COUNT THE NUMBER OF DIGITS & FIND THEIR SUM*/

#include<stdio.h>
main()
{
int dummy,n,x,sum=0,dig=0;
printf("ENTER  NUMBERs \n");
scanf("%d",&n);
dummy=n;
while(n>0)
{

x=n%10;
sum=sum+x;
n=n/10;
dig++;
}

printf("THE SUM OF ALL DIGITS IN %d  is %d \n",dummy,sum);
printf("THE NUMBER OF DIGITS ARE %d \n",dig);
}
/*
OUTPUT

ENTER  NUMBERs 
1234436
THE SUM OF ALL DIGITS IN 1234436  is 23 
THE NUMBER OF DIGITS ARE 7 


*/
