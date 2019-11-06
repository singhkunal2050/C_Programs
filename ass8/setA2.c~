/*  CALCULATE GCD USING RECURRSION   */

#include<stdio.h>

	int GCD(int a ,int b);

	main()
{
	int a1,b1,g;
	printf("Enter the TWO NOS FOR GCD \n");
	scanf("%d%d",&a1,&b1);

	g=GCD(a1,b1);

	printf("%d",g);

}

	int GCD(int a,int b)
{
	int  n;

	if(b==0)
	return a;
	else 
	n=(GCD(b,a%b));
	return n;

}

/*
	OUTPUT 

Enter the TWO NOS FOR GCD 
13 65
13
Enter the TWO NOS FOR GCD 
23 54
1
Enter the TWO NOS FOR GCD 
324 1
1

*/


