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
