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
