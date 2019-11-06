/* C Program to Find Distance Between Two Points */

#include<stdio.h>
#include<math.h>
main()
{
int x1,y1,x2,y2;
float d,dd;
printf("Enter The x1 Point \n");
scanf("%d",&x1);
printf("Enter The y1 Point \n");
scanf("%d",&y1);
printf("Enter The x2 Point \n");
scanf("%d",&x2);
printf("Enter The y2 Point \n");
scanf("%d",&y2);
d=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
dd=sqrt(d);
printf("The Distance B|W The Two Points is %f \n",dd);
} 

/*
OUTPUT

Enter The x1 Point 
2
Enter The y1 Point 
3
Enter The x2 Point 
3
Enter The y2 Point 
4
The Distance B|W The Two Points is 1.414214 

*/

