/* To print th Volume and Surface Area of Cuboid */\

#include <stdio.h>
main()
{
float l,b,h,area,vol;
printf("Enter the Dimensions of Cuboid \n");
scanf("%f%f%f",&l,&b,&h);
area=2*(l*b+b*h+l*h);
vol=l*b*h;
printf("The Area of Cuboid is %f \n",area);
printf("The Volume Is %f \n",vol);
}

/*
OUTPUT

Enter the Dimensions of Cuboid 
2 3 5 
The Area of Cuboid is 62.000000 
The Volume Is 30.000000 
*/
