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
