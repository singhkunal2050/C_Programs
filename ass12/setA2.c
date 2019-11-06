/* Dynamic Memory Allocation TO CALCULATE SUM & AVERAGE OF NON ZERO NUMER NUMBERS IN AN ARRAY*/

#include<stdio.h>
#include<stdlib.h>
main()

{
	int i,j=0,n,*ptr,*ptr1,sum=0,a=1,c=0;
	printf("How Many Numbers You Wanna Enter \n");
	scanf("%d",&n);		/*Allocate Memory*/
	ptr=(int*)malloc(n*sizeof(int));
	

	if(ptr==NULL)
	{
		printf("Memory Could'nt Be Allocated \n");
		exit(0); 

	} 
	printf("Enter the Elements \n");

	for(i=0;i<n;i++)

	{
	     scanf("%d",(ptr+i));
	     if(*(ptr+i)!=0)	  
	     c++;		
	}

		printf("YOU ENTERED \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",ptr[i]);  /* OR *(ptr+i) */
		
	} 
		printf("\n \n");	
	
	ptr1=(int*)malloc(c*sizeof(int));     
j=0;
	for(i=0;i<n;i++)
	{		
	     if((*(ptr+i))!=0)	 // IMPORTANT    
	   {
	      *(ptr1+j)=*(ptr+i);
	       printf("--%d--",*(ptr1+j)); 	     			j++;
	   }		
	}

	printf("NON ZERO ELEMENTS ARE \n");
	for(j=0;j<c;j++)
	{

		printf("%d \n",*(ptr1+j)); 	
	}	


}

/*

	OUTPUT

How Many Numbers You Wanna Enter 
6
Enter the Elements 
3 8 0 6 0 6
YOU ENTERED 
3       8       0       6       0       6 
 
--3----8----6----6--NON ZERO ELEMENTS ARE 
3 
8 
6 
6 



*/


