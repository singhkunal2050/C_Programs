/*OPERATION ON A A SPHERE*/

#include<stdio.h>
main()
{
int r,R;
float A,V,C;
printf("ENTER THE RADIUS OF THE CIRCLE \n");
scanf("%d",&r);
printf("ENTER \n 1 FOR AREA \n 2 FOR CIRCUMFERENCE \n 3 FOR VOLUME\n");
scanf("%d",&R);

switch(R)
{
case 1 :A=3.14*r*r;printf(" AREA OF CIRCLE IS %f",A);break;
case 2 :C=2*3.14*r;printf("CIRCUMFERENCE OF CIRCLE IS %f",C);break;
case 3 :V=3.14*r*r*4;printf("VOLUME OF SPHERE IS %f",V);break;
default : printf("ENTER VALID INPUT \n");break;

}

}
/*
OUTPUT

ENTER THE RADIUS OF THE CIRCLE 
33
ENTER 
 1 FOR AREA 
 2 FOR CIRCUMFERENCE 
 3 FOR VOLUME
3       
VOLUME OF SPHERE IS 13677.839844[

*/
