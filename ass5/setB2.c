/*ACCEPT NO & DISPLAY THE NO WHICH HAS THE MAX SUM OF ITS DIGIT*/

#include<stdio.h>
main()
{
int x,n,i,sum,no,max=0;
printf("ENTER THE QUANTITY OF UR NOS \n");
scanf("%d",&no);
for(i=1;i<=no;i++)

{
printf("ENTER THE NOS \n");
scanf("%d",&n);

sum=0;
while(n>0)
{
x=n%10;
sum=sum+x;
n=n/10;
}
if(max<sum)
max=sum;
continue;
}
printf("%d is max",max);
}

/*
	OUTPUT

ENTER THE QUANTITY OF UR NOS 
5
ENTER THE NOS 
11
ENTER THE NOS 
22
ENTER THE NOS 
32
ENTER THE NOS 
433
ENTER THE NOS 
232
10 is max[

*/
