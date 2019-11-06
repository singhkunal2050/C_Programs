/*ACCEPT Thre Integers and Calculate Minimum Maximum  & Average */

#include<stdlib.h>
#include<stdio.h>
main( int argc , char *argv[])
{
int a,b,c,max,min,sum; float avg=(a+b+c)/3;
if(argc!=4)
{
printf("Wrong Number of Arguments \n");
exit(0);
}

a=atoi(argv[1]);
b=atoi(argv[2]);
c=atoi(argv[3]);


if(a>b)
{
max=a;
min=b;
}
else
{
max=b;
min=a;
}
if(c>max)
max=c;
if(c<min)
min=c;
sum=a+b+c;
avg=sum/3;
printf("Minimum = %d\nMaximum = %d\nAverage = %f\n",min,max,avg);


}
