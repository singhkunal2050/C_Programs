/* AVERAGE OF  ALL NOS IN AN ARRAY  */

#include<stdio.h>
int main()
{
	int arr[20] ; int n;
	void accept(int a[20],int n);
	void display (int a[20] , int n);
	float avg(int a[20] ,int n);
	
	printf("HOW MANY NUMBERS : ");
	scanf("%d",&n);
	accept(arr,n);
	display(arr,n);
	printf(" \n THE AVERAGE OF ALL NO  IS  : %f ",avg(arr,n));
}

void accept (int a[20],int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}

void display (int a[20],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d \t ",a[i]);
}

float avg(int a[20],int n)
{
	int i; 	float av, sum=0;
	for(i=0;i<n;i++)
{
		sum=sum+a[i];
}
	av=(float)sum/n;
	return av;
}

	

/*
	OUTPUT

HOW MANY NUMBERS : 3

356
3
6
356      3       6        
 THE AVERAGE OF ALL NO  IS  : 121.666664


*/
