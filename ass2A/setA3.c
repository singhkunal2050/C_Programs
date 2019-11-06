/* CHECK WHETHER A CHARACTER IS DIGIT OR ALPHABET */

#include<stdio.h>
#include<ctype.h>
main()
{
int a;
printf("ENTER A CHAR\n");
scanf("%d",&a);
if(a>=1 && a<=10)
{
printf("THE CHAR IS A DIGIT  %d  & IT LIES B|W 1 to 10\n",a);
}
else if(a=isalpha(a))
{
printf("THE CHAR IS An ALPHABET \n");
}
else
printf("THE CHAR ISNT An ALPHABET NEITER A DIGIT \n");
}
/*
OUTPUT

ENTER A CHAR
a
THE CHAR ISNT A DIGIT
*/
