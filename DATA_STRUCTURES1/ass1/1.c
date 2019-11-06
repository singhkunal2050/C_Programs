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
		if(flag==1)
		{  printf("Pass=%d",i);	break;	}
		for(j=0;j<n-i;j++)  ///for(j=0;j<n-i-1;j++)
		{	
			flag=1;
                        if(a[j]>a[j+1])
			{				
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=0;	
			}	

		}printf("Pass1=%d",i);	
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

 */
