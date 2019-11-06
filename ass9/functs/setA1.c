/* DISPLAY ALL NUMBERS OF THE ARRAY IN REVERSE ORDER */

#include<stdio.h>
main()
{
int i,a[100],c,k,j,n,num;
printf("Enter Number Of Elements in Array \n") ;
scanf("%d",&num);
printf("Enter Numbers \n") ;

for(i=0;i<num;i++)
{
	scanf("%d",&a[i]);
}

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

for(i=0;i<num;i++)
printf("%d \n",a[i]);
	
}


/*
	OUTPUT

Enter Number Of Elements in Array 
5
Enter Numbers 
432
2342
123
12
5
After Arranging 
5 
12 
123 
2342 
432 

*/
