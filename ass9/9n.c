	Name : KUNAL M SINGH 
	       Roll No : 1734223
	 Class : FY BCS  DIV : B

---------------------------------------------------------------------
	
                        SET A

---------------------------------------------------------------------



1]
/* DISPLAY ALL NUMBERS OF THE ARRAY IN REVERSE ORDER */

#include<stdio.h>
void accept(int a[100],int n);
void display(int a[100] , int n);
main()
{
int i,a[100],c,k,j,n,num;
printf("Enter Number Of Elements in Array \n") ;
scanf("%d",&num);
printf("Enter Numbers \n") ;
accept(a,num);
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
display(a,num);	
}

void accept(int a[100],int n)
{
int i;
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}

void display(int a[100],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d \n",a[i]);

}


/*
        OUTPUT

Enter Number Of Elements in Array 
3  
Enter Numbers Enter Number Of Elements in Array 
3  
Enter Numbers 
1 2 4
After Arranging 
4 
2 
1 

1 2 4
After Arranging 
4 
2 
1 


*/





2]
/*LINEAR SEARCH AND FIND THE ELEMEN T */

#include<stdio.h>
int lsearch(int a[100],int n,int key )
{
int i;
for(i=0;i<n;i++)
		
		if(a[i]==key)
	return i;

	 return -1;
}
main()
{
	int s,i,n,a[100],key;

	printf("Enter The Number Of Elements You Want In The Array \n ");
	scanf("%d",&n);

	printf("\n Enter The Numbers \n ");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter The Number You Wanna Search in The Array \n ");
	scanf("%d",&key);

	s=lsearch(a,n,key);
	if(s!=(-1))
	printf("Position of Key = %d \n",s+1);
	else
	printf("NOT FOUND \n");


}	
/*

OUTPUT 
Enter The Number Of Elements You Want In The Array 
 4

 Enter The Numbers 
 1 4 6 8
Enter The Number You Wanna Search in The Array 
 4
Position of Key = 2 

*/




3]

/*LINEAR SEARCH AND FIND THE ELEMEN T */

#include<stdio.h>
int lsearch(int a[100],int n,int key )
{
int i,count=0;
for(i=0;i<n;i++)
		
		if(a[i]==key)
		  count++;
		  
	return count;
}
main()
{
	int s,i,n,a[100],key;

	printf("Enter The Number Of Elements You Want In The Array \n ");
	scanf("%d",&n);

	printf("\n Enter The Numbers \n ");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter The Number You Wanna Search in The Array \n ");
	scanf("%d",&key);

	s=lsearch(a,n,key);
	printf("Occurence of Key = %d \n",s);
	
}


/*
	OUTPUT

Enter The Number Of Elements You Want In The Array 
 9

 Enter The Numbers 
 2 3 22 3  4  7 2 3 3 
Enter The Number You Wanna Search in The Array 
 3
Occurence of Key = 4 


*/




4]
/*PRIME NOS IN ARRAY */

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
