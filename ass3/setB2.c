/*AREA OF SQUARE , RECTANGLE & TRIANGLE*/

#include<stdio.h>
main()
{
int o,a,b,c,AS,AR;
float AT;
printf("ENTER TO FIND AREA  OF \n 1 SQUARE   \n 2 RECTANGLE \n 3 TRIANGLE  \n");
scanf("%d",&o);
switch(o)
{
case 1 : printf("ENTER SIDE OF SQUARE \n"); 
	scanf("%d",&a);
	AS=a*a;
	printf("AREA OF THE SQUARE IS %d ",AS);break;
	
case 2 :printf("ENTER SIDES OF RECTANGLE \n"); 
	scanf("%d%d",&b,&c);
	AR=b*c;
	printf("AREA OF THE RECTANGLE IS %d ",AR);break;

case 3 :printf("ENTER BASE & HEIGHT OF TRIANGLE  \n"); 
	scanf("%d%d",&b,&c);
	AT=0.5*b*c;
	printf("AREA OF THE TRIANGLE IS %f ",AT);break;
default : printf("ENTER VALID INPUT");break;
}
}
/*
OUTPUT

ENTER TO FIND AREA  OF 
 1 SQUARE   
 2 RECTANGLE 
 3 TRIANGLE  
3
ENTER BASE & HEIGHT OF TRIANGLE  
33 21
AREA OF THE TRIANGLE IS 346.500000 [

*/
