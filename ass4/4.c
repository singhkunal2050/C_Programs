NAME : KUNAL M SINGH 
ROLL NO : 34223
FYBCS  B DIVISION 
				
			==EXERCISE 1==

---------------------------------------------------------------------------------------------

SET A


1)
/*ALL EVEN NUMBERS UPTO "n" */

#include <stdio.h>
main()
{
int a,b;
printf("ENTER AN INTEGER TO CHECK ALL EVEN NUMBERS \n");
scanf("%d",&a);

for(b=2;b<a;b=b+2)
printf("%d \n",b);


}
/*
OUTPUT

ENTER AN INTEGER TO CHECK ALL EVEN NUMBERS 
22	2 
4	6 
8 	10 
12	14 
16 	18
 20 


*/





2)
/*ADDITION OF ALL INTEGERS BETWEEN GIVEN TWO NUMBERS*/

#include <stdio.h>
main()
{
int a,b,sum=0;

printf("ENTER TWO  NUMBERS TO CHECK SUM OF ALL NUMBERS B|W THEM\n");
scanf("%d%d",&a,&b);

while(a<=b)
{
sum=a+sum;
a++;
}
printf("sUM IS %d \n",sum);

}
/*
OUTPUT

ENTER TWO  NUMBERS TO CHECK SUM OF ALL NUMBERS B|W THEM
1 9
sUM IS 45
*/



3)
/*COMPUTE X TO THE POWER N*/

#include <stdio.h>
#include<math.h>
main()
{
int a,n,A;
printf("ENTER A NUMBER \n");
scanf("%d",&a);

printf("ENTER ITS INDEX (POWER) \n");
scanf("%d",&n);

A=pow(a,n);
printf("ANSWER IS  %d \n",A);

 
}
/*
OUTPUT

ENTER A NUMBER 
3
ENTER ITS INDEX (POWER) 
2
ANSWER IS  9 


*/



4)
/*DISPLAY N CHARACTERS*/

#include<stdio.h>
main()
{

char a;
int n,i;
printf("ENTER A CHARACTER \n");
scanf("%c",&a);

printf("ENTER AN INTEGER n \n");
scanf("%d",&n);

for(i=1;i<=n;i++) 
{
printf("CHAR IS %c \n",a++);
}
}



/*
OUTPUT

ENTER A CHARACTER 
a
ENTER AN INTEGER n 
6
CHAR IS a 
CHAR IS b 
CHAR IS c 
CHAR IS d 
CHAR IS e 
CHAR IS f 


*/




5)
/*CHECK THE INTEGER IS PRIME OR NOT */

#include<stdio.h>
main()
{

int n,i,prime=1;

printf("ENTER AN INTEGER n \n");
scanf("%d",&n);

for(i=2;i<=(n/2);i++)
{


 	if(n%i==0)
{
	prime=0;
}
break;
}
	if(prime==1)
{
	printf("THE NUMBER %d IS PRIME \n",n);
}
	else	
{
	printf("THE NUMBER %d IS NOT A  PRIME \n",n);

}}

/*
OUTPUT

ENTER AN INTEGER n 
2
THE NUMBER 2 IS PRIME 


*/




6)
/*COUNT THE NUMBER OF DIGITS & FIND THEIR SUM*/

#include<stdio.h>
main()
{
int dummy,n,x,sum=0,dig=0;
printf("ENTER  NUMBERs \n");
scanf("%d",&n);
dummy=n;
while(n>0)
{

x=n%10;
sum=sum+x;
n=n/10;
dig++;
}

printf("THE SUM OF ALL DIGITS IN %d  is %d \n",dummy,sum);
printf("THE NUMBER OF DIGITS ARE %d \n",dig);
}
/*
OUTPUT

ENTER  NUMBERs 
1234436
THE SUM OF ALL DIGITS IN 1234436  is 23 
THE NUMBER OF DIGITS ARE 7 


*/



7)
 /* REVERSE THREE DIGIT NUMBER */

#include<stdio.h>
main()
{

int r,n,rd=0,i;
printf("ENTER A THREE DIGIT NUMBER \n");
scanf("%d",&n);

	if(n>=100 && n<=999)
{
	for(i=1;i<=3;i++)
{		
	r=n%10;
	rd=rd*10+r;	
	n=n/10;
}	
	printf("REVERSE NUMBER IS %d \n",rd);
}
	else
	printf("ENTER A VALID Number \n");
}

/*
OUTPUT

ENTER A THREE DIGIT NUMBER 
123
REVERSE NUMBER IS 321 


*/



--------------------------------------------------------------------------------

		SET B

--------------------------------------------------------------------------------



1)
/*FIBBONACCI SERIES*/

#include<stdio.h>
main()
{
int a=0,b=1,c,n,i=0;
printf("ENTER A NUMBER TO SEE ITS FIBBONACCI SERIES \n");
scanf("%d",&n);

do
{
c=a+b;
printf("%d \t",c );
a=b;
b=c;
i++;
}while(i<n);
}
/*
OUTPUT

ENTER A NUMBER TO SEE ITS FIBBONACCI SERIES 
10
1       2       3       5       8       13      21      34      55      89    

*/



2)
/*SUM OF x+3x+5x*/

#include<stdio.h>
main()
{
int i,x,a=1,sum=0,n;

printf("ENTER THE INTEGER \n");
scanf("%d",&x);

printf("ENTER NUMBER OF THE TERMS IN THE SERIES \n");
scanf("%d",&n);

for(i=1;i<=n;i=i++)
{
sum=sum+a*x;
a=a+2;

}
printf("SUM IS %d",sum);
}
/*
OUTPUT

ENTER THE INTEGER 
5   
ENTER NUMBER OF THE TERMS IN THE SERIES 
5
SUM IS 125

*/




3)
/*ADDITION OF 1/x +1/x*x +1/x*x*x.....*/

#include<stdio.h>
#include<math.h>
main()
{
int i,x,n;
float sum=0.0;

printf("ENTER THE INTEGER \n");
scanf("%d",&x);

printf("ENTER NUMBER OF THE TERMS IN THE SERIES \n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
sum=sum+(float)(i/(pow(x,i)));
}
printf("THE SUM OF 1/x +1/x*x +1/x*x*x.... is \n %f",sum);
}


/*
OUTPUT

ENTER THE INTEGER 
4
ENTER NUMBER OF THE TERMS IN THE SERIES 
5
THE SUM OF 1/x +1/x*x +1/x*x*x.... is 
 0.442383

*/




4)
/*ACCEPT CHARACTERS TILL EOF*/

#include<stdio.h>
main()
{
char ch;
int count = 0;
while((ch=getchar())!=EOF)
count++;

printf("TOtal characters = %d ",count);
}

/*
OUTPUT

3adasfasgdhrfhgjg
TOtal characters = 20 

*/



5)
/*SHOW THE DIGITS SPELLING */

#include<stdio.h>
main()
{

int r,n,rd=0,i=0;
printf("ENTER A  NUMBER \n");
scanf("%d",&n);

	
	while(i=n)
{		
	r=n%10;
	rd=rd*10+r;	
	n=n/10;
	i++;
	switch(r)
{
case 1 : printf(" ONE ");break;case 6 : printf(" SIX ");break;
case 2 : printf(" TWO ");break;case 7 : printf(" SEVEN ");break;
case 3 : printf(" THREE");break;case 8 : printf(" EIGHT ");break;
case 4 : printf(" FOUR ");break;case 9 : printf(" NINE ");break;
case 5 : printf(" FIVE ");break;case 0 : printf(" ZERO ");break;
}
}
	printf("REVERSE NUMBER IS %d \n",rd);
}


/*
OUTPUT

ENTER A  NUMBER 
34554
 FOUR  FIVE  FIVE  FOUR  THREE REVERSE NUMBER IS 45543 


*/




--------------------------------------------------------------------------------

		SET C

--------------------------------------------------------------------------------



1)
/*ACCEPT CHARACTERS TILL EOF*/

#include<stdio.h>
main()
{
char ch;
int count = 0;
while((ch=getchar())!='*')
count++;

printf("TOtal characters = %d ",count);
}

/*
OUTPUT
wqewe
dad
s
da
das
das
das
d
* 
TOtal characters = 30 


*/




2)
/* PALINDROME OR NOT */

#include<stdio.h>
main()
{

int r,n,dummy,rd=0,i=0;
printf("ENTER A  NUMBER \n");
scanf("%d",&n);
dummy=n;	

	do
{		
	r=n%10;
	rd=rd*10+r;	
	n=n/10;
	i++;
}	while(i=n);
		printf("%d   &  %d \n",rd,dummy);
	if(rd==dummy)		
		printf(" %d IS A PALINDROME \n",rd);
	else
		printf(" %d IS NOT  A  PALINDROME \n",rd);

}
/*
OUTPUT

ENTER A  NUMBER 
32
23   &  32 
 23 IS NOT  A  PALINDROME 

-----------------------------------------

ENTER A  NUMBER 
2332
2332   &  2332 
 2332 IS A PALINDROME 


*/




3)
/**/

#include<stdio.h>
main()
{
char ch='A';
int hr=4,min=00,cnt=0;
float speed =22.2,dist,t;
printf("TRAIN TIME TABLE FROM STATION A TO B \n ");
printf(" %d:%d  \t",hr,min);
while(hr<=12 && min<=60)
{

min=min+30;
if(min>60)
{
min=min-60;
hr=hr+1;
}

printf(  "%d:%d  ",hr,min);
cnt++;
}
printf(" \n COUNT OF STATION = %d \n",cnt);
t=cnt*30;
printf("TOTAL TIME TAKEN = %d \n",t);
printf("TOTAL DISTANCE = %d \n",dist);

}

/*
OUTPUT

TRAIN TIME TABLE FROM STATION A TO B 
  4:0   4:30  4:60  5:30  5:60  6:30  6:60  7:30  7:60  8:30  8:60  9:30  9:60  10:30  10:60  11:30  11:60  12:30  12:60  13:30   
 COUNT OF STATION = 19 
TOTAL TIME TAKEN = 0 
TOTAL DISTANCE = 2147483648 


*/



4)
/*WORKERS TIME AND INCOME*/

#include<stdio.h>
main()
{
int cnt=0,amtA,amtB,Tamt,inwork=0;
while(inwork<270)
{

inwork=inwork+100;
cnt++;

}
  
printf("TOTAL NOS OF TURNS TAKEN BY A= %d \n",cnt);
printf("TOTAL NOS OF TURNS TAkEN BY B= %d \n",cnt);

amtA=cnt*50;
amtB=cnt*150;
Tamt=amtA+amtB;
printf("AMOUNT OF A = %d \n",amtA);
printf("AMOUNT OF B = %d \n",amtB);
printf("TOTAL COST OF TASK = %d",Tamt);


}
/*
OUTPUT

TOTAL NOS OF TURNS TAKEN BY A= 3 
TOTAL NOS OF TURNS TAkEN BY B= 3 
AMOUNT OF A = 150 
AMOUNT OF B = 450 
TOTAL COST OF TASK = 600

*/


------------------------------------------------------------------------------------------------------


