/*LOWEST & HIGHEST NO IN THE ARRAY */

#include<stdio.h>
int main()
{
	int arr[20] ; int n;
	void accept(int a[20],int n);
	void display (int a[20] , int n);
	int maximum(int a[20] ,int n);
	int minimum(int a[20],int n);

	printf("HOW MANY NUMBERS : ");
	scanf("%d",&n);
	accept(arr,n);
	display(arr,n);
	printf(" \n THE MAX NO IS  : %d ",maximum(arr,n));
	printf(" \n THE MIN NO IS  : %d \n",minimum(arr,n));
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

 int maximum(int a[20],int n)
{
	int i,max=0;
	for(i=0;i<n;i++)
{
		if(a[i] >max)
			max=a[i];	
}
	return max;
}

int minimum(int a[20],int n)
{
	int i,min=a[0];
	for(i=0;i<n;i++)
		if(a[i] <min)
			min=a[i];	
	return min;
}


/*
	OUTPUT

HOW MANY NUMBERS : 7 
23
657
343
222
125
999
56764
23       657     343     222     125     999     56764    
 THE MAX NO IS  : 56764  
 THE MIN NO IS  : 23 



*/
