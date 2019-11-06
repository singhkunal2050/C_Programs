/*MENU DRIVEN PROGRAM ON X & Y COORDINATES   */

#include<stdio.h>
#include<math.h>
main()
{
float  x1,y1,x2,y2;
int c,flag=1;
float ans;

while(flag)

{
printf("Enter THE  X & Y  COORDINATES OF FIRST POIUNT  \n");
scanf("%f%f",&x1,&y1);

printf("Enter THE  X & Y  COORDINATES OF SECOND  POIUNT  \n");
scanf("%f%f",&x2,&y2);

	printf("SELECT ANY OF THE OPTIONS  AVAILABLE \n");
	printf("ENTER \n 4  FOR DISTANCE B|W POINTS  \n 5 FOR SLOPE B|W POINTS \n 6 FOR CHECKING QUADRANT   \n 7 EXIT \n ");
	scanf("%d",&c);	
	switch(c)
	{
	case 4 :    ans=sqrt((x1-x2)*(x1-x2) -(y1-y2)*(y1-y2));
		printf("THE DISTANCE B|W  THE 2 POINTS = %f \n",ans);
		break;		
	
	case 5 :  ans=(y2-y1)/(x2-x1);
		printf("THE SLOPE  B|W  THE 2 POINTS = %f \n",ans);
		break;

	case 6 :   if((x1>0&& y1>0)&&(x2>0&& y2>0)  || (x1<0 && y1>0)&&(x2<0 && y2>0)  || (x1<0&&y1<0)&&(x2<0&&y2<0) || (x1>0&& y2<0)&&(x2>0&& y2<0))
		printf("THE TWO POINTS LIE IN THE SAME QUADRANT \n");
		else
		printf("THE TWO POINTS  DONT LIE IN THE SAME QUADRANT \n");break;
	
	case 7 : flag =0;break;
	default : printf("INVALID INPUT PLEASE RETRY \n");

	}
	}
}


/*
             OUTPUT

Enter THE  X & Y  COORDINATES OF FIRST POIUNT  
3 5
Enter THE  X & Y  COORDINATES OF SECOND  POIUNT  
5 -4
SELECT ANY OF THE OPTIONS  AVAILABLE 
ENTER 
 4  FOR DISTANCE B|W POINTS  
 5 FOR SLOPE B|W POINTS 
 6 FOR CHECKING QUADRANT   
 7 EXIT 
 5
THE SLOPE  B|W  THE 2 POINTS = -4.500000 
Enter THE  X & Y  COORDINATES OF FIRST POIUNT  




*/
