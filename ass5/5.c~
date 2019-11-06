NAME : KUNAL M SINGH 
ROLL NO : 34223
FYBCS  B DIVISION 
				
			==EXERCISE 5==

-------------------------------------------------------------------------------------------- 			       

 			        SET A

---------------------------------------------------------------------------------------------


1)
/*PRIME NUMBERS FROM  1 to 50 */
#include<stdio.h>
main()
{
int i,sum=0,p;
printf("PRIME NOS FROM 1 TO 50 ARE \n");

for(i=1;i<=50;i++)
{
	p=1;
		while(p<=(i/2))
	{
		if(i%p==0)
		sum=sum+p;
		p++;
	}	
		if(sum==1)
		
		printf("%d \n",i);
		sum=0;
	}
	}

/*
	OUTPUT

PRIME NOS FROM 1 TO 50 ARE 
2	 3	 5	 7	 11	 13
 17	 19	 23	 29	 31	 37	
 41	 43	 47 
*/



2)
/*MULTIPLICATION TABLE  */

#include<stdio.h>
main()
{
int table,mult,n,count=1;
printf("UPTO WHICH TABLE ? \n");
scanf("%d",&n);
for(mult=1;mult<=10;mult++,count++)
{
for(table=2;table<=n;table++)
{
printf("%d *%d=%d  \t",table,mult,table*mult);

}printf("\n");}
}
/*
OUTPUT

UPTO WHICH TABLE ? 
4
2 *1=2          3 *1=3          4 *1=4  
2 *2=4          3 *2=6          4 *2=8  
2 *3=6          3 *3=9          4 *3=12  
2 *4=8          3 *4=12         4 *4=16  
2 *5=10         3 *5=15         4 *5=20  
2 *6=12         3 *6=18         4 *6=24  
2 *7=14         3 *7=21         4 *7=28  
2 *8=16         3 *8=24         4 *8=32  
2 *9=18         3 *9=27         4 *9=36  
2 *10=20        3 *10=30        4 *10=40  


*/





3)
/*n lines of alphabets*/
#include<stdio.h>
main()
{

int n,no,count;	char ch=65;
printf("ENTER NUMBER OF LINES \n");
scanf("%d",&no);
for(n=no;n>=1;n--)
{
for(count=1;count<=n;count++)
{
printf(" %c \t ",ch++);

}
printf("\n");
}
}
/*
OUTPUT

ENTER NUMBER OF LINES 
5
 A        B       C       D       E      
 F        G       H       I      
 J        K       L      
 M        N      
 O       


*/


-------------------------------------------------------------------------------------------- 			       
 			        SET B

---------------------------------------------------------------------------------------------


1)
/*ARMSTRONG NOS B|W 1 to 500 */
#include<stdio.h>
main()
{

	int d,t,sum,nt;
	printf(" \n THE ARMSTRONG NUMBER B|W 1 to 500 IS \n");
	for(nt=1;nt<=500;nt++)
	{
		sum=0;
		t=nt; 
		while(t!=0)
		{
			d=t%10;
			sum=sum+(d*d*d);		
			t=t/10;
		}
		if(nt==sum)
			printf("%d\t" ,nt);
	}
}
/*OUTPUT

 THE ARMSTRONG NUMBER B|W 1 to 500 IS 
1       153     370     371     407  

*/




2)
/*ACCEPT NO & DISPLAY THE NO WHICH HAS THE MAX SUM OF ITS DIGIT*/

#include<stdio.h>
main()
{
int x,n,i,sum,no,max=0;
printf("ENTER THE QUANTITY OF UR NOS \n");
scanf("%d",&no);
for(i=1;i<=no;i++)

{
printf("ENTER THE NOS \n");
scanf("%d",&n);

sum=0;
while(n>0)
{
x=n%10;
sum=sum+x;
n=n/10;
}
if(max<sum)
max=sum;
continue;
}
printf("%d is max",max);
}

/*
	OUTPUT

ENTER THE QUANTITY OF UR NOS 
5
ENTER THE NOS 
11
ENTER THE NOS 
22
ENTER THE NOS 
32
ENTER THE NOS 
433
ENTER THE NOS 
232
10 is max[

*/




3)
/*PERFECT NUMBERS BELOW 500*/

#include<stdio.h>
main()
{
int sum=0,i,j,n;

for(j=1;j<500;j++)
{
 sum=0;
	for(i=1;i<j;i++)
{

	if(j%i==0)
	sum=sum+i;
}
	if(sum==j)
	printf("%d  \t",sum);
		
}
}
/*
	OUTPUT

	6       28      496    
*/



-------------------------------------------------------------------------------------


