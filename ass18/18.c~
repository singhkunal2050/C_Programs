	Name : KUNAL M SINGH 
	       Roll No : 1734223
	 Class : FY BCS  DIV : B

---------------------------------------------------------------------
	
                        SET A

---------------------------------------------------------------------


1]

/*ACCEPT Thre Integers and Calculate Minimum Maximum  & Average */

#include<stdlib.h>
#include<stdio.h>
main( int argc , char *argv[])

{
int a,b,c,max,min; float avg=(a+b+c)/3;
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

printf("Minimum = %d\nMaximum = %d\nAverage = %f\n",min,max,avg);


}


/*

 cc setA1.c
[fy34223@cs34 ass18]$ ./a.out 2 6 5
Minimum = 2
Maximum = 6
Average = 4.3333


*/






2]

/*Replace Character In A String Using Command Line Operator*/

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
main(int argc , char *argv[])
{
if(argc!=4)
{
printf("Wrong Number of Arguments \n");
exit(0);
}

int i;
char str[80],ch1,ch2;
strcpy(str,argv[1]);
ch1=argv[2][0];
ch2=argv[3][0];

for(i=0;str[i]!='\0';i++)
{
if(str[i]==ch1)
str[i]=ch2;
}

printf("String is %s \n",str);

}



/*
OutPut

cc setA2.c
[fy34223@cs39 ass18]$ ./a.out kunalaal  a b
String is kunblbbl 

*/



