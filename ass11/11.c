	Name : KUNAL M SINGH 
	       Roll No : 1734223
	 Class : FY BCS  DIV : B

---------------------------------------------------------------------
	
                        SET A

---------------------------------------------------------------------


1



/* INCREMENT TIME USING POINTER */

#include<stdio.h>
#include<stdlib.h>
void time(int *h,int *m, int *s,int ns);
main()

{
	int s,m,h,ns;
	printf("Enter Hours Minutes & Seconds \n");
	scanf("%d%d%d",&h,&m,&s);
	if(h>23)
	{
		printf("Invalid \n");
		printf("Enter Another \n");
		exit(1); ///break
	}

	printf("Enter Additional Seconds : \n");
	scanf("%d",&ns);
	time(&h,&m,&s,ns);
	printf("THe New Time is %d %d %d ",h,m,s);


}

void time(int *h,int *m,int *s,int ns)
{
	int nm,nh=0,s1,m1;
	*s=ns+*s;
	if(*s>=60)
	{
		nm=*s/60;
		*s=*s%60;
		*m=*m+nm;
	}

	if(*m>=60)
	{
		nh=*m/60;
		*m=*m%60;

	}
	*h=*h+nh;

}


/*

OUTPUT 

Enter Hours Minutes & Seconds 
23 5 25
Enter Additional Seconds : 
12
THe New Time is 23 5 37 

*/





---------------------------------------------------------------------




2


/* Reverse Array Using Pointers */


#include<stdio.h>
main()
{
	int n,i,a[10];
	int *ptr_a=&a[0];  

	printf("Enter  the number of elements you want \n");
	scanf("%d",&n);
	printf("Enter  the numbers\n");


	for(i=0;i<n;i++,ptr_a++)
	{
		scanf("%d",&a[i]);
		
	}

 	ptr_a=&a[n-1];

	printf("Elements of Array in Reverse are \n");


	for(i=n-1;i>=0;i--,ptr_a--)
	{
		printf("%d \t",*ptr_a);
		

	}

	getchar();

}


/*
	OUTPUT

Enter  the number of elements you want 
4
Enter  the numbers
1 4 6 8   
Elements of Array in Reverse are 
8       6       4       1     


*/



---------------------------------------------------------------------
	
                        SET B

---------------------------------------------------------------------


1


/*COUNT EVEN OR ODD USING POINTER */

#include<stdio.h>
int eoro(int a[10],int n,int *c1,int *c2);
main()
{
	int n,i,a[10],c1=0,c2=0;
	int *ptr_c1=&c1,*ptr_c2=&c2;  

	printf("Enter  the number of elements you want \n");
	scanf("%d",&n);
	printf("Enter  the numbers\n");


	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}

printf("THE Number Of Evens & Odds Are \n ");
eoro(a,n,&c1,&c2);

printf("Number Of Evens : %d\n",c1);
printf("Number Of Odds : %d\n",c2);

}

int eoro(int a[10],int n,int *c1,int *c2)
{
int i=0;
for(i=0;i<n;i++)
{
if(a[i]%2==0)
*c1++;
else 
*c2++;

}
}



--------------------------------------------------------------------




2


/*CHECK EVEN / PRIME / DIVISIBILITY USING POINTER */

#include<stdio.h>
int func(int a,int *f1,int *f2, int *f3);
main()
{
	int n1,f1=0,f2=0,f3=0;
	printf("Enter the Number You Wanna Check \n");
	scanf("%d",&n1);

	func(n1,&f1,&f2,&f3);

	printf("No of Evens : %d \nNo of Primes : %d\nDivisible by 3 OR 7 : %d\n",f1,f2,f3);

}

int func(int a,int *f1,int *f2, int *f3)
{
	int i;
	if(a%2==0)
		*f1=1;

	for(i=2;i<(a/2);i++)
	{
		if(a%i==0)
			*f2=1;
	}

	if(a%3==0 || a%7==0)
		*f3=1;

}



--------------------------------------------------------------------


