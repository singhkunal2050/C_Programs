/*MENU DRIVEN PROGRAM ON FRACTIONS  */

#include<stdio.h>
main()
{
float n1,d1,n2,d2,i;
int c,flag=1;
float ans;

while(flag)

{
printf("Enter Numerator & Denominator of First No \n");
scanf("%f%f",&n1,&d1);

printf("Enter Numerator & Denominator of Second No \n");
scanf("%f%f",&n2,&d2);

	printf("SELECT ANY OF THE OPTIONS  AVAILABLE \n");
	printf("ENTER \n 1 FOR ADDITION  \n 2 FOR Subtraction \n 3 FOR MULTIPLICATION  \n 4 EXIT \n ");
	scanf("%d",&c);	
	switch(c)
	{
	case 1 :    ans=(float)(n1/d1) + (float)(n2/d2);
		printf("THE ADDITION = %f \n",ans);
		break;		
	
	case 2 :  ans=(float)(n1/d1) - (float)(n2/d2);
		printf("THE SUBTRACTION  = %f \n",ans);
		break;

	case 3 :  ans=(float)(n1/d1) * (float)(n2/d2);
		printf("THE Multiplication  = %f \n",ans);
		break;
	
	case 4 : flag =0;break;
	default : printf("INVALID INPUT PLEASE RETRY \n");

	}
	}
}



/*
	OUTPUT

Enter Numerator & Denominator of First No 
2 3
Enter Numerator & Denominator of Second No 
123 4
SELECT ANY OF THE OPTIONS  AVAILABLE 
ENTER 
 1 FOR ADDITION  
 2 FOR Subtraction 
 3 FOR MULTIPLICATION  
 4 EXIT 
 3
THE Multiplication  = 20.500000 
Enter Numerator & Denominator of First No 



*/





