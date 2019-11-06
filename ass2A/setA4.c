/*CHECK A NO IS DIVISIBLE BY 5 & 7*/

#include<stdio.h>
main()
{
int n;
printf("ENTER A NUMBER\n");
scanf("%d",&n);

if(n%5==0 && n%7==0)
{
printf("THE NUMBER IS DIVISIBLE BY 5 & 7\n");
}
else
{
printf("THE NUMBER IS'NT DIVISIBLE BY 5 & 7\n");
}
}
/*
OUTPUT

ENTER A NUMBER
4
THE NUMBER IS'NT DIVISIBLE BY 5 & 7

-------------------------------------------------------------------

ENTER A NUMBER
35
THE NUMBER IS DIVISIBLE BY 5 & 7

*/
