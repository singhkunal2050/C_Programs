/* SORT n Numbers using Merge Sort */

#include<stdio.h>
void merge(int a[], int lb1, int ub1, int lb2, int ub2);
void mergesort(int a[], int lb, int ub);
main()
{
	int i,a[10],n;

	printf("Enter the number of array \n");
	scanf("%d",&n);

	printf("Enter the elements \n");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		mergesort(a,0,n-1);

	printf("The sorted elements are\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);


}


void mergesort(int a[], int lb , int ub )

{
	
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,mid+1,ub);
	}
}

void merge(int a[], int lb1, int ub1, int lb2, int ub2)
{
	int i=lb1,j=lb2,k=0;//or lb
	int b[10];

	while(i<=ub1 && j<=ub2)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];  i++;  k++;
		}			

		else
		{
			b[k]=a[j];   j++;  k++;
		}		

	}

	while(i<=ub1)
	{
		b[k]=a[i];  i++;  k++;
	}

	while(j<=ub2)
	{
		b[k]=a[j];  j++;  k++;
	}


	for(i=lb1,k=0;i<=ub2;i++,k++)
	{
//	printf("b[k]=%d\n",b[k]);		
	a[i]=b[k];
 	}
	
}


/*

	output

Enter the number of array 
6
Enter the elements 
21 54 587  23 5 67
The sorted elements are
5       21      23      54      67      587  


*/




