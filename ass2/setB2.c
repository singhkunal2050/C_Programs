/* C Program To Interchange Two Numbers */

#include <stdio.h>
main()
{
int a,b,c;
printf("Enter First Numbers \n");
scanf("%d",&a);
printf("Enter Second Numbers \n");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("The Value Of a and b respectively are %d %d \n",a,b);
}
/*
OUTPUT

Enter First Numbers 
2
Enter Second Numbers 
5
The Value Of a and b respectively are 5 2 


*/

