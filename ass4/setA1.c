/*ALL EVEN NUMBERS UPTO "n" */

#include <stdio.h>
main()
{
int a,b;
printf("ENTER AN INTEGER TO CHECK ALL EVEN NUMBERS \n");
scanf("%d",&a);

for(b=2;b<a;b=b+2)
printf("%d \n",b);


}
/*
OUTPUT

ENTER AN INTEGER TO CHECK ALL EVEN NUMBERS 
22	2 
4	6 
8 	10 
12	14 
16 	18
 20 


*/
