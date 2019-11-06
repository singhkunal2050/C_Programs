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
