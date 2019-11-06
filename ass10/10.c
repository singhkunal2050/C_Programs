	Name : KUNAL M SINGH 
	       Roll No : 1734223
	 Class : FY BCS  DIV : B

---------------------------------------------------------------------
	
                        SET A

---------------------------------------------------------------------

1)
/*ACCEPT MATRIX WITH DIMENSIONS m*n & DISPLAY ITS TRANSPOSE */

#include<stdio.h>
main()
{
void accept(int a[10][10],int rows,int cols);
void display(int a[10][10],int rows,int cols);
void trans(int a[10][10],int t[10][10],int rows,int cols);


	int i,j,rows,cols,temp,a[10][10],t[10][10];
	printf("Enter No of Rows &  Cols  \n");
	scanf("%d%d",&rows,&cols);

	///TAking INPUT Of MATRIX 
	printf("Enter MAtrix \n");
	accept(a,rows,cols);

	printf("Given Matrix \n ");
	display(a,rows,cols);
	/// Exchange

	temp=rows;
	rows=cols;
	cols=temp;

	/// Transpose Of Matrix
	trans(a,t,rows,cols);

}



void accept(int a[10][10],int rows,int cols)
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}


}

void display(int a[10][10],int rows,int cols)
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d \t ",a[i][j]);
		}
		printf("\n");
	}


}


void trans(int a[10][10],int t[10][10],int rows,int cols)
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			t[i][j]=a[j][i];
		}
	}
	printf("Transpose of Matrix is \n ");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d \t ",t[i][j]);
		}
		printf("\n");
	}

}
/*
	OUTPUT

Enter No of Rows &  Cols  
3 3
Enter MAtrix 
1 2 3 4 5 6 7 8 9
Given Matrix 
 1       2       3       
4        5       6       
7        8       9       
Transpose of Matrix is 
 1       4       7       
2        5       8       
3        6       9       


*/


---------------------------------------------------------------------


2)
/*  Add & Multiply Two Matrices */

#include<stdio.h>
main()
{
void accept(int a[10][10],int r,int c);
void sum_m(int a[10][10],int b[10][10],int r,int c);
void mul_m(int a[10][10],int b[10][10],int r,int c);

	int i,j,r,c,s,a[10][10],b[10][10],add[10][10],mul[10][10];
	printf("Enter No of Rows &  Cols  \n");
	scanf("%d%d",&r,&c);

	printf("Enter the Elements of 1st Matrix \n");
	accept(a,r,c);
	
	printf("Enter the Elements of 2nd Matrix \n");
	accept(b,r,c);
	

 printf("Enter \n1 For Addition \n2 for Multiplication \n");
 scanf("%d",&s);

switch(s)
{ 

case 1 :printf("The Addition is \n" );
 	sum_m(a,b,r,c);
	break;
	
case 2 :printf("The Multiplication is \n");
	mul_m(a,b,r,c);
	break;
}	

}

void accept(int a[10][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	  for(j=0;j<c;j++)
	      scanf("%d",&a[i][j]);
}
void sum_m(int a[10][10],int b[10][10],int r,int c)
{
	int i,j,add[10][10];
	for(i=0;i<r;i++)
	{
	           printf("\n");
	  for(j=0;j<c;j++)
	   {
	    add[i][j]=a[i][j]+b[i][j];
	    printf("%d \t",add[i][j]);
	   }
	}
	printf("\n");	

}
void mul_m(int a[10][10],int b[10][10],int r,int c) 
{
	int i,j,mul[10][10];
              for(i=0;i<r;i++)
	{
		printf("\n");
		  for(j=0;j<c;j++)
	  {
		mul[i][j]=a[i][j]*b[i][j];
		printf("%d \t",mul[i][j]);
	  }
	}
	printf("\n");
}
/*
	OUTPUT

Enter No of Rows &  Cols  
3 3
Enter the Elements of 1st Matrix 
1 2 3 4 5 6 7 8 9
Enter the Elements of 2nd Matrix 

1 2 3 4 5 6 7 8 9 
Enter 
1 For Addition 
2 for Multiplication 
1
The Addition is 

2       4       6 
8       10      12 
14      16      18 

The Multiplication is 

1       4       9 
16      25      36 
49      64      81 

*/




---------------------------------------------------------------------
