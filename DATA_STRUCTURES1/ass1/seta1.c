/*Sorting an array of n integers by using bubble sort*/

#include<stdio.h>
void bubble(int a[], int n);
main()
{

	int n,i,a[10];

	printf("Enter the number of array \n");
	scanf("%d",&n);

	printf("Enter the elements \n");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubble(a,n);

	printf("The sorted elements are\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);


}


void bubble(int a[], int n)

{
	int flag=0;
	int i,j,temp;
	for(i=1;i<n;i++)  ///for(i=0;i<n;i++)
	{
		printf("Pass=%d\n",i);
		if(flag==1)
		{  printf("Total Passes=%d\n",i);	break;	}
		for(j=0;j<n-i;j++)  ///for(j=0;j<n-i-1;j++)
		{	
			flag=1;
                        if(a[j]>a[j+1])
			{				
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=0;	
				printf("Swapping=%d\t",j);
			}	

		}
			printf("\n");	
	}

}

/*

   OUTPUT

   Enter the number of array 
   4
   Enter the elements 
   123
   56
   1
   4
   The sorted elements are
   1       4       56      123


	WITH INFO

Enter the number of array 
5 
Enter the elements 
32 23 2 321 1
Pass=1
Swapping=0      Swapping=1      Swapping=3
Pass=2
Swapping=0      Swapping=2
Pass=3
Swapping=1
Pass=4
Swapping=0
The sorted elements are
1       2       23      32      321  	
		



 */
