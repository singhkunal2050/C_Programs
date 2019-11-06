/* Menu Driven Program To Perform on Strings */

#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int cst(char *str1 , char *str2);
void stcpy(char *str1 , char *str2);
main()
{
	char *str1,*str2,*str3,tr1;
          char st1[50],st2[50],st3;
	int c,i=0,result,a;

	printf("SELECT THE OPERATION YOU WANNA PERFORM \n");
	printf("1 : COPY  \n2 : CATENATE  \n3 :COMPARE \n4 Exit \n");
	scanf("%d",&c);

	while(c!=4)
	{
		switch(c)
		{

			case 1 : printf("Enter The String \n");
				 scanf("   %s",st1);
				 stcpy(&st1,&st2);
				 printf("The Copied String is =   %s \n",str2);
				 break;         


			case 2 : printf("Enter The 1st String \n");
				 scanf("   %s",str1);
				 printf("Enter The 2nd String \n");
				 scanf("   %s",str2);
				 printf("Before Catenation String1= %s \t     String2= %s",str1,str2);      
				 while(str1)
					 str3[i++]=str1[i++];
				 while(str2)
					 str3[i++]=str2[i++];
				 str3[i++]='\0';
				 printf("After Catenation String3 = %s",str3);
				 break;

			case 3 : printf("Enter The 1st String \n");
				 scanf("%s",str1);
				 printf("Enter The 2nd String \n");
				 scanf("%s",str2);
				 result=cst(str1,str2);
				 if(result==0)
					 printf("The Two Strings Are Same \n");
				 else
					 printf("The Two Strings Are Different \n");

				 break;

			default : printf("Please Provide Correct Input \n");
				  break;


		}

	}


}


void stcpy(char *str1 , char *str2)
{

	int i ,len=0;
	while(*(str1+len)!='\0')
		len++;
	for(i=0;i<len;i++)
		*(str2+i)=*(str1+i);
	*(str2+i)='\0';
}

int cst(char *str1 , char *str2)
{
	while(*str1==*str2)
	{

		if(*str1=='\0'|| *str2=='\0')
			break;
		str1++;
		str2++;

	}
	if(*str1=='\0'&& *str2=='\0')
		return 0;
	else return -1;

}
