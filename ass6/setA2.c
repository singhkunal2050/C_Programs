/*MENU DRIVEN PROGRAM */

#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
main()
{
float n,i,ans;
int c,flag=1;
float f,q;


	

while(flag)
	{
	
printf("SELECT ANY OF THE OPTIONS  AVAILABLE \n");
	printf("ENTER \n 1 FOR FINDING POWER \n 2 FOR FINDING SQUARE ROOT \n 3 FLOOR \n 4 CEILING \n 5 EXIT \n");
	scanf("%d",&c);	
	switch(c)
	{
	case 1 : printf("ENTER THE NUMBER & ITS INDEX \n");
		scanf("%f%f",&n,&i);
		ans=(pow(n,i));
		printf("ANSWER = %f \n" ,ans);
		break;			
	case 2 :  printf("ENTER THE NUMBER TO FIND ITS SQRT \n");
		scanf("%f",&n);
		ans=sqrt(n);
		printf("ANSWER = %f \n",ans);
		break;
	case 3 :  printf("ENTER THE NUMBER TO FIND ITS floor \n");
		scanf("%f",&q);
		ans=floor(q);
		printf("ANSWER = %f \n",ans);
		break;
	case 4 :  printf("ENTER THE NUMBER TO FIND ITS CEILING \n");
		scanf("%f",&f);
		ans=ceil(f);
		printf("ANSWER = %f \n",ans);
		break;
		case 5 : flag =0;break;
	default : printf("INVALID INPUT PLEASE RETRY \n");break;


	}
	}
}
