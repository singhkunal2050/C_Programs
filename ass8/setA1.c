/*SUM OF DIGITS*/

#include<stdio.h>
	int  sumD(int n)
{
	int s;
	if(n<=9)
	return n;
	else 
	s=sumD((n%10) +(n/10));
	return  s;
}

main()
{
int a,b;
	printf("Enter the Number\n " );
	scanf("%d",&a);
	b=sumD(a);
	printf("%d",b);

}

/*
	OUTPUT

Enter the Number
 122
5

*/
