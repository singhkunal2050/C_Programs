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
