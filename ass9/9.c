	Name : KUNAL M SINGH 
	       Roll No : 1734223
	 Class : FY BCS  DIV : B

---------------------------------------------------------------------
	
                        SET A

---------------------------------------------------------------------


1)
/* DISPLAY ALL NUMBERS OF THE ARRAY IN REVERSE ORDER */

#include<stdio.h>
main()
{
int i,a[100],c,k,j,n,num;
printf("Enter Number Of Elements in Array \n") ;
scanf("%d",&num);
printf("Enter Numbers \n") ;

for(i=0;i<num;i++)
{
	scanf("%d",&a[i]);
}

k=num;
while(k>=0)
{
	for(j=0;j<k-1;j++)
    {
	c=a[j];
	a[j]=a[j+1];
	a[j+1]=c;
    }
	k--;
}

	printf("After Arranging \n");

for(i=0;i<num;i++)
printf("%d \n",a[i]);
	
}


/*
	OUTPUT

Enter Number Of Elements in Array 
5
Enter Numbers 
432
2342
123
12
5
After Arranging 
5 
12 
123 
2342 
432 

*/






2)
/*LINEAR SEARCH AND FIND THE ELEMEN T */

#include<stdio.h>
main()
{
	int i,n,a[100],key;

	printf("Enter The Number Of Elements You Want In The Array \n ");
	scanf("%d",&n);

	printf("\n Enter The Numbers \n ");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Enter The Number You Wanna Search in The Array \n ");
	scanf("%d",&key);

	for(i=0;i<=n;i++)
	{
		if(a[i]==key)
			printf("The Entered Number %d is at %d position \n",a[i],i+1);
	}
}

/*

OUTPUT 

Enter The Number Of Elements You Want In The Array 
 5

 Enter The Numbers 
 2 5 78
8 6

Enter The Number You Wanna Search in The Array 
 5

The Entered Number 5 is at 2 position 

*/






3)
/*COUNT THE NUMBER OF OCCURENCE OF A NUMBER IN AN ARRAY  */

#include<stdio.h>
main()
{
	int i,n,a[100],key,c=0;

	printf("Enter The Number Of Elements You Want In The Array \n ");
	scanf("%d",&n);

	printf("\n Enter The Numbers \n ");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Enter The Number You Wanna Know The Count of  :  ");
	scanf("%d",&key);

	for(i=0;i<=n;i++)
	{
		if(a[i]==key)
			c++;
	}
	printf("THE ELEMENT %d is Occured %d Times in our Array \n",key,c);
}

/*
	OUTPUT

Enter The Number Of Elements You Want In The Array 
 6  

 Enter The Numbers 
 1 4 6 78 4 4
Enter The Number You Wanna Know The Count of  :  4
THE ELEMENT 4 is Occured 3 Times in our Array 

*/






4)
#include<stdio.h>
main()
{

	int a[10],n,i,j,c=0,prime[10],t=0;
	printf("How Many Numbers You Want To Enter In The Array \n");
	scanf("%d",&n);
	printf("Enter Numbers : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				c=1;
				break;
			}
		}

		if(c==0)
		{
			prime[t]=a[i];
			t++;
		}
	}
  printf("\n Prime Numbers From Above Array are : \n");
	for(i=0;i<t;i++)
	{
		printf("%d \t",prime[i]);
	}
	return 0;
}

/*
	OUtPut

How Many Numbers You Want To Enter In The Array 
5 
Enter Numbers : 2 7 9 6 8

 Prime Numbers From Above Array are : 
2       7  



*/




---------------------------------------------------------------------


