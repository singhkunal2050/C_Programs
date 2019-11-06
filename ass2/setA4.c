/* This Program is to find the perimeter of A RING */

#include <stdio.h>
main()
{
float p,area,a,b;
printf("Enter INner Radius \n");
scanf( "%f",&a);
printf("Enter Outer Radius \n");
scanf( "%f",&b);
p = 2*3.142*(a+b);
area = 3.142*(a*a+b*b);
printf("The Perimeter is %f\n",p);
printf("The Area is %f\n",area);
}

/* OUTPUT

Enter INner Radius 
3  
Enter Outer Radius 
6
The Perimeter is 56.556000
The Area is 141.389999
*/
