/* To find Arithematic and Harmonic Mean of Two Nos */

#include <stdio.h>
main()
{
int a,b,AM,HM;
printf("Enter First No \n");
scanf( "%d",&a);
printf("Enter Second  No \n");
scanf( "%d",&b);
AM=(a+b)/2;
HM=(a*b)/(a+b);
printf("THe Arithematic Mean is %d\n",AM);
printf("THe Harmonic Mean is %d\n",HM);
}


/* OUTPUT

Enter First No 
4
Enter Second  No 
7
THe Arithematic Mean is 5
THe Harmonic Mean is 2

*/
