NAME : KUNAL M SINGH 
ROLL NO : 34223
FYBCS  B DIVISION 
				
			==EXERCISE 3==

-------------------------------------------------------------------------------------------- 			       

 			        SET A

---------------------------------------------------------------------------------------------


1)
/*CASE STUDY OF DIGITS*/
#include<stdio.h>
main()
{
char a;
printf("ENTER A DIGIT AND GET ITS SPELLING \n");
scanf("%c",&a);

switch(a)
{
case '0':printf("ENTERED DIGIT IS ZERO \n");
	break;
case '1':printf("ENTERED DIGIT IS ONE \n");
	break;
case '2':printf("ENTERED DIGIT IS TWO \n");
	break;
case '3':printf("ENTERED DIGIT IS THREE \n");
	break;
case '4':printf("ENTERED DIGIT IS FOUR \n");
	break;
case '5':printf("ENTERED DIGIT IS FIVE \n");
	break;
case '6':printf("ENTERED DIGIT IS SIX \n");
	break;
case '7':printf("ENTERED DIGIT IS SEVEN \n");
	break;
case '8':printf("ENTERED DIGIT IS EIGHT \n");
	break;
case '9':printf("ENTERED DIGIT IS NINE \n");
	break;
default :printf("PLEASE ENTER A DIGIT \n");
	break;

} 


}


/*
OUTPUT

ENTER A DIGIT AND GET ITS SPELLING 
1               
ENTERED DIGIT IS ONE 

*/




2)
/*DIGIT WITH MATHEMATICAL OPERATOR*/

#include<stdio.h>
main()
{
int a,b,A,S,M,D,O;
printf("ENTER TWO NUMBERS TO PERFORM AANY ARITHEMATIC OPERATOR \n");
scanf("%d%d",&a,&b);
printf("ENTER ANY ARITHEMATIC OPERATOR WHICH U WANNA USE \n");
printf("ENTER \n 1 for addition \n 2 for substraction \n 3 for multiplication \n 4 for division \n");

printf("EnTER UR CHOICE \n");
scanf("%d",&O);
switch(O)
{
case 1: A=a+b;printf("THE ANSWER IS %d \n",A);break;
case 2:S=a-b;printf("THE ANSWER IS %d \n",S);break;
case 3:M=a*b;printf("THE ANSWER IS %d \n",M);break;
case 4:D=a/b;printf("THE ANSWER IS %d \n",D);break;
default:printf("PLEASE ENTER VALID INPUT/INPUTS \n");break;

}
}


/*
OUTPUT

ENTER TWO NUMBERS TO PERFORM AANY ARITHEMATIC OPERATOR 
22
2 
ENTER ANY ARITHEMATIC OPERATOR WHICH U WANNA USE 
ENTER 
 1 for addition 
 2 for substraction 
 3 for multiplication 
 4 for division 
EnTER UR CHOICE 
3   
THE ANSWER IS 44 


*/





3)
/*ACCEPT NUMBERS AND PERFORM OPERATIONS*/

#include<stdio.h>
main()
{
int x,y,o,Q,R,n;
printf("ENTER  TWO NUMBERS \n");
scanf("%d%d",&x,&y);

printf("ENTER  FOR CHECKING \n 1 : EQUIVALENCE \n 2 : LESS THAN  \n 3 : QUOTIENT & REMAINDE%R  \n 4 : RANGE \n 5 : SWAPPING \n");
scanf("%d",&o);
switch(o)
{

case 1 : if(x==y)
	printf("EQUIVALENCE EXISTS \n");
	else
	printf(" NO EQUIVALENCE  \n"); break;

case 2 : if(x>y)
	printf("%d is GREATER THAN %d \n",x,y);
	else
	printf("%d is GREATER THAN %d \n",y,x);break;

case 3 : Q=x/y;R=x%y;
	printf("%d IS THE QUOTIENT & %d IS THE REMAINDER \n",Q,R);break;

case 4 : printf("ENTER A NUMBER TO CHECK WHETHER IT LIES B|W THE TWO NUMBERS \n");
	scanf("%d",&n);
	if(n>x && n<y)
	printf("%d LIES B|W %d & %d \n",n,x,y);
	else
	printf("%d DOES'NT LIES B|W %d & %d \n",n,x,y); break;

case 5 : x=x+y; y=x-y; x=x-y;
	printf("SWAPPED UR NUMBERS IE  %d & %d ",x,y);break;
default : printf("ENTER VALID INPUT");break;
	
}

}
/*
OUTPUT

ENTER  TWO NUMBERS 
33 45
ENTER  FOR CHECKING 
 1 : EQUIVALENCE 
 2 : LESS THAN  
 3 : QUOTIENT & REMAINDE%R  
 4 : RANGE 
 5 : SWAPPING 
5       
SWAPPED UR NUMBERS IE  45 & 33

*/



-------------------------------------------------------------------------------------------- 			       

 			        SET B

---------------------------------------------------------------------------------------------


1)
/*OPERATION ON A A SPHERE*/

#include<stdio.h>
main()
{
int r,R;
float A,V,C;
printf("ENTER THE RADIUS OF THE CIRCLE \n");
scanf("%d",&r);
printf("ENTER \n 1 FOR AREA \n 2 FOR CIRCUMFERENCE \n 3 FOR VOLUME\n");
scanf("%d",&R);

switch(R)
{
case 1 :A=3.14*r*r;printf(" AREA OF CIRCLE IS %f",A);break;
case 2 :C=2*3.14*r;printf("CIRCUMFERENCE OF CIRCLE IS %f",C);break;
case 3 :V=3.14*r*r*4;printf("VOLUME OF SPHERE IS %f",V);break;
default : printf("ENTER VALID INPUT \n");break;

}

}
/*
OUTPUT

ENTER THE RADIUS OF THE CIRCLE 
33
ENTER 
 1 FOR AREA 
 2 FOR CIRCUMFERENCE 
 3 FOR VOLUME
3       
VOLUME OF SPHERE IS 13677.839844[

*/





2)
/*AREA OF SQUARE , RECTANGLE & TRIANGLE*/

#include<stdio.h>
main()
{
int o,a,b,c,AS,AR;
float AT;
printf("ENTER TO FIND AREA  OF \n 1 SQUARE   \n 2 RECTANGLE \n 3 TRIANGLE  \n");
scanf("%d",&o);
switch(o)
{
case 1 : printf("ENTER SIDE OF SQUARE \n"); 
	scanf("%d",&a);
	AS=a*a;
	printf("AREA OF THE SQUARE IS %d ",AS);break;
	
case 2 :printf("ENTER SIDES OF RECTANGLE \n"); 
	scanf("%d%d",&b,&c);
	AR=b*c;
	printf("AREA OF THE RECTANGLE IS %d ",AR);break;

case 3 :printf("ENTER BASE & HEIGHT OF TRIANGLE  \n"); 
	scanf("%d%d",&b,&c);
	AT=0.5*b*c;
	printf("AREA OF THE TRIANGLE IS %f ",AT);break;
default : printf("ENTER VALID INPUT");break;
}
}
/*
OUTPUT

ENTER TO FIND AREA  OF 
 1 SQUARE   
 2 RECTANGLE 
 3 TRIANGLE  
3
ENTER BASE & HEIGHT OF TRIANGLE  
33 21
AREA OF THE TRIANGLE IS 346.500000 [

*/


-------------------------------------------------------------------------------------------- 			       

 			        SET C

---------------------------------------------------------------------------------------------



1)
/* DATE VALIDATION */

#include<stdio.h>
main()
{

int d,m,y;
printf("ENTER A VALID DATE TO VERIFY IT \n THE FORMAT SHOULD BE \n dd mm yy \n");
scanf("%d%d%d",&d,&m,&y);

{
	if(y>999 && y<9999)
{	
	printf("YEAR IS VALID \n");
switch (m)
{
case 1 :
case 3 :
case 5 :
case 7 :
case 8 :
case 10 :
case 12 : if(d<32 && d>0)
	{
	printf("DATE IS VALID \n");
	printf("MONTH IS VALID \n");
	}
	else
	printf("DATE IS INVALID \n");break;
	
	
case 4 :
case 6 :
case 9 :
case 11 :if(d<31 && d>0)
	{
	printf("DATE IS VALID \n");
	printf("MONTH IS VALID \n");
	}
	else
	printf("DATE IS INVALID \n");break;

case 2 :if(y%400==0 || y%100==0 && y%4==0)
	{
	if(d<30 && d>0)
	printf("DATE IS VALID \n");
	printf("MONTH IS VALID \n");
	}
	else if(d<29 && d>0)
	{
	printf("DATE IS VALID \n");
	printf("MONTH IS VALID \n");
	}
	else
	printf("DATE IS INVALID \n");break;
	
	
default : printf("INVALID DATE &  MONTH \n");break;
}
}
else
printf("DATE IS INVALID \n");
}
} 
/*
OUTPUT

ENTER A VALID DATE TO VERIFY IT 
 THE FORMAT SHOULD BE 
 dd mm yy 
11 12 1222
YEAR IS VALID 
DATE IS VALID 
MONTH IS VALID 


*/




2)

/*ADD SUBSTRACT & MULTIPLY TWO FRACTIONS */

#include<stdio.h>
main()
{
int n1,n2,d1,d2,o;
float A,S,M;

printf("ENTER NUMERATOR AND DENOMINATOR OF FIRST  NUMBER \n");
scanf("%d%d",&n1,&d1);

printf("ENTER NUMERATOR AND DENOMINATOR OF SECOND  NUMBER \n ");
scanf("%d%d",&n2,&d2);

printf("ENTER \n 1 TO ADD \n 2 TO SUBSTRACT \n 3 TO MULTIPLY \n");
scanf("%d",&o);

switch(o)
{

case 1: A = (n1/d1) + (n2/d2);
	printf("THE ADDITION IS %f \n",A);break;

case 2: S = (n1/d1) - (n2/d2);
	printf("THE SUBSTRACTION IS %f \n",S);break;

case 3: M = (n1/d1) * (n2/d2);
	printf("THE MULTIPLICATION IS %f \n",M);break;

default : printf("ENTER VALID INPUT \n");break;
}
}


/*
OUTPUT

ENTER NUMERATOR AND DENOMINATOR OF FIRST  NUMBER 
3 3
ENTER NUMERATOR AND DENOMINATOR OF SECOND  NUMBER 
 30 5
ENTER 
 1 TO ADD 
 2 TO SUBSTRACT 
 3 TO MULTIPLY 
3
THE MULTIPLICATION IS 6.000000 


*/



------------------------------------------------------------------------------


