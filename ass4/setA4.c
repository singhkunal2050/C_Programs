/*DISPLAY N CHARACTERS*/

#include<stdio.h>
main()
{

char a;
int n,i;
printf("ENTER A CHARACTER \n");
scanf("%c",&a);

printf("ENTER AN INTEGER n \n");
scanf("%d",&n);

for(i=1;i<=n;i++) 
{
printf("CHAR IS %c \n",a++);
}
}



/*
OUTPUT

ENTER A CHARACTER 
a
ENTER AN INTEGER n 
6
CHAR IS a 
CHAR IS b 
CHAR IS c 
CHAR IS d 
CHAR IS e 
CHAR IS f 


*/

