
NAME : KUNAL M SINGH 
ROLL NO : 34223
FYBCS  B DIVISION 
				
			==EXERCISE 1==

---------------------------------------------------------------------------------------------

SET A

1)
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



2)
/* This Is A Program TO Inteconvert The Temperatures */

#include <stdio.h>
main()
{
float F,C,K;
printf("Enter the Measured Temperature In FAhrenhits \n");
scanf("%f",&F);
C = (5.0/9.0*(F-32));
K =  C+273.15;
printf("THe Temperature in Celcius is = %f\n",C);
printf("THe Temperature in Kelvin  is = %f\n",K);
}

/*
OUTPUT

Enter the Measured Temperature In FAhrenhits 
100
THe Temperature in Celcius is = 37.777779
THe Temperature in Kelvin  is = 310.927765

*/



3)
/* This Program is to Find The Final Velocity And Displacement 
       using Kinematical Eqn*/

#include <stdio.h>
main()
{
float u,v,s,t,a;
printf("Enter The Value of Initial Velocity \n");
scanf("%f", &u);
printf("Enter The  Acceleration  \n");
scanf("%f", &a);
printf("Enter THe Time \n");
scanf("%f", &t);
v = u+a*t;
s = u + (a*t*t);
printf("The Value Of Final Velocity Is = %f\n",v);
printf("The Value Of Displacement  Is = %f\n",s);
}

/*
OUTPUT 

Enter The Value of Initial Velocity 
3
Enter The  Acceleration  
4
Enter THe Time 
5
The Value Of Final Velocity Is = 23.000000
The Value Of Displacement  Is = 103.000000

*/



4)
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


5)
/* To find Arithematic and Harmonic Mean of Two Nos */

#include <stdio.h>
main()
{
int a,b,AM,HM;
printf("Enter First No \n");
scanf( "%d",&a);
printf("Enter Second  No \n");
scanf( "%d",&b);
AM=(a+b)/2;
HM=(a*b)/(a+b);
printf("THe Arithematic Mean is %d\n",AM);
printf("THe Harmonic Mean is %d\n",HM);
}


/* OUTPUT

Enter First No 
4
Enter Second  No 
7
THe Arithematic Mean is 5
THe Harmonic Mean is 2

*/



6)
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

7)
/* To Get the Next & Prev Char */

#include <stdio.h>
main() 
{
char ksr,ksr1,ksr2;
printf("Enter A Char \n");
scanf("%c",&ksr);
ksr1=ksr+1;
ksr2=ksr-1;
printf("The next & Prev Char Are %c and %c\n",ksr1,ksr2);
}
 /* 
OUTPUT 

Enter A Char 
f
The next & Prev Char Are g and e

*/



8)
/* accept a char and  display next and prev */

#include <stdio.h>
main()
{
char ch;
printf("Enter A Char \n");
scanf("%c",&ch);
printf("ASCII is %d",ch);
}
/*
 OUTPUT

Enter A Char 
f
ASCII is 102[

*/

-----------------------------------------------------------------------------
		SET B
-----------------------------------------------------------------------------


1)
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




2)
/* C Program To Interchange Two Numbers */

#include <stdio.h>
main()
{
int a,b,c;
printf("Enter First Numbers \n");
scanf("%d",&a);
printf("Enter Second Numbers \n");
scanf("%d",&b);
c=*                                                        a;
a=b;
b=c;
printf("The Value Of a and b respectively are %d %d \n",a,b);
}
/*
OUTPUT

Enter First Numbers 
2
Enter Second Numbers 
5
The Value Of a and b respectively are 5 2 


*/




3)
/* To Get The nO oF dENOmination */

#include <stdio.h>
main()
{
int amt, no;
printf("Enter Amount \n");
scanf("%d",&amt);
no=amt/10;
printf("no Of 10 is/are  : %d\n",no);
amt=amt%10;
no=amt/5;
printf("no Of 5  is/are : %d\n",no);
amt=amt%5;
no=amt/1;
printf("no Of 1  is/are : %d\n",no);
}

/*
OUTPUT

Enter Amount 
3234 
no Of 10 is/are  : 323
no Of 5  is/are : 0
no Of 1  is/are : 4

*/


-----------------------------------------------------------------------------
		SET C
-----------------------------------------------------------------------------


1)
/* This Program is to find the area which will be painted in a House */

#include<stdio.h>
#include<math.h>
main()
{
float l,b,m,h,n,o,sa,ww;
printf("Length of the Room\n");
scanf("%f",&l);
printf("Breadth of the Room\n");
scanf("%f",&b);
printf("Enter Height of Room\n");
scanf("%f",&h);
printf("Enter the Length & Breadth of the Door\n");
scanf("%f%f",&m,&n);
printf(" Enter the side of Window\n");
scanf("%f",&o);
sa =(2*(l*b+b*h+l*h)-3*(m*n) -(l*b));
ww=(l*b);
printf("The area of the Room WHich'll be painted is %f\n",sa);
printf("THe Area Which'll be White-washed is %f\n",ww);; 
}

/*
OUTPUT

Length of the Room
21  
Breadth of the Room
211
Enter Height of Room
312
Enter the Length & Breadth of the Door
4 22
 Enter the side of Window
23
The area of the Room WHich'll be painted is 148935.000000
THe Area Which'll be White-washed is 4431.000000

*/



2)
/* This Program Is To Find The Salary of an employee  */

#include<stdio.h>
#include<math.h>
main()
{  
float ID, sal,d_sal,h_sal;
printf("Enter Your  ID Name\n"); 
scanf("%f",&ID); 
printf("Enter Your Salary \n");
scanf("%f",&sal);
d_sal=sal-(sal*(5/100));
h_sal=d_sal+(sal*(10/100))+(sal*30/100);
printf("The Home Salary is %f\n",h_sal);

}
/*
OUTPUT

Enter Your Salary 
33999
The Home Salary is 44198.699219


*/


----------------------------------------------------------------------------------------------
