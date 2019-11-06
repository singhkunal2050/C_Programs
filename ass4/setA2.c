/*ADDITION OF ALL INTEGERS BETWEEN GIVEN TWO NUMBERS*/

#include <stdio.h>
main()
{
int a,b,sum=0;

printf("ENTER TWO  NUMBERS TO CHECK SUM OF ALL NUMBERS B|W THEM\n");
scanf("%d%d",&a,&b);

while(a<=b)
{
sum=a+sum;
a++;
}
printf("sUM IS %d \n",sum);

}
/*
OUTPUT

ENTER TWO  NUMBERS TO CHECK SUM OF ALL NUMBERS B|W THEM
1 9
sUM IS 45
*/
