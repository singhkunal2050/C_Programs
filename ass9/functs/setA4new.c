4]

/* FIND PRIME NOS IN ARRAY WITH FUNCTION */

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
