/* THis Program is a C Program to find
 The Surface Area and Volume of Cylinder */

#include <stdio.h>
main()
{
float r,area,h,volume;
printf("Enter Radius Of Cylinder");
scanf( "%f",&r);
printf("Enter Height Of Cylinder");
scanf( "%f",&h);
area = (2*3.142*r*r) + (2 * 3.142*h*r);
volume = 3.142 *r*r*h;
printf("The Surface Area Of The Cylinder is %f\n",area);
printf("The Volume  Of The Cylinder is %f\n",volume);

}
/*
OUTPUT

Enter Radius Of Cylinder 2
Enter Height Of Cylinder  4
The Surface Area Of The Cylinder is 75.407997
The Volume  Of The Cylinder is 50.271999
*/
