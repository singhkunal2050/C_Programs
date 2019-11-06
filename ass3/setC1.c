/* DATE VALIDATION */

#include<stdio.h>
main()
{

int d,m,y;
printf("ENTER A VALID DATE TO VERIFY IT \n THE FORMAT SHOULD BE \n dd mm yy \n");
scanf("%d%d%d",&d,&m,&y);

{
	if(y>999 && y<9999)
{	
	printf("YEAR IS VALID \n");
switch (m)
{
case 1 :
case 3 :
case 5 :
case 7 :
case 8 :
case 10 :
case 12 : if(d<32 && d>0)
	{
	printf("DATE IS VALID \n");
	printf("MONTH IS VALID \n");
	}
	else
	printf("DATE IS INVALID \n");break;
	
	
case 4 :
case 6 :
case 9 :
case 11 :if(d<31 && d>0)
	{
	printf("DATE IS VALID \n");
	printf("MONTH IS VALID \n");
	}
	else
	printf("DATE IS INVALID \n");break;

case 2 :if(y%400==0 || y%100==0 && y%4==0)
	{
	if(d<30 && d>0)
	printf("DATE IS VALID \n");
	printf("MONTH IS VALID \n");
	}
	else if(d<29 && d>0)
	{
	printf("DATE IS VALID \n");
	printf("MONTH IS VALID \n");
	}
	else
	printf("DATE IS INVALID \n");break;
	
	
default : printf("INVALID DATE &  MONTH \n");break;
}
}
else
printf("DATE IS INVALID \n");
}
} 
/*
OUTPUT

ENTER A VALID DATE TO VERIFY IT 
 THE FORMAT SHOULD BE 
 dd mm yy 
11 12 1222
YEAR IS VALID 
DATE IS VALID 
MONTH IS VALID 


*/
