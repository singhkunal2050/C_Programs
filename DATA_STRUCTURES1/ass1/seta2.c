/*Sorting an array of n integers by using insertion sort algorithm*/

#include<stdio.h>
void insertion(int a[], int n);
main()
{

	int n,i,a[10];

	printf("Enter the number of array \n");
	scanf("%d",&n);

	printf("Enter the elements \n");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 	   
		insertion(a,n);			
	
	printf("The sorted elements are\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);


}

void insertion(int a[], int n)
{
	int i,j,temp;

	for(i=1;i<n;i++)
	{	                                                                         
		temp=a[i];
		for(j=i-1;j>=0 && temp<a[j];j--)
		{		
			a[j+1]=a[j];
		}	
		a[j+1]=temp; 	
	}


}

/*

	OUTPUT


Enter the number of array 
6
Enter the elements 
32  3 34 11 13  5
The sorted elements are
3       5       11      13      32      34    


*/
