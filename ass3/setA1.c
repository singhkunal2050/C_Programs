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
