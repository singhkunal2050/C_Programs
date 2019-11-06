/*COUNT OCCURENCE OF A CHARATER IN A STRING USING USER DEFINED FUNCTION */

#include<stdio.h>
#include<stdlib.h>
main()
{
	char str[100] , c;
	int i,l=0,f=0;

	printf("Enter the String \n");
	gets(str);
	l=strlen(str);
	printf("Enter a Character to Find Its Position \n");
	scanf("%c",&c);

	for(i=0;i<l;i++)
	{
		if(str[i]==c)
		{
			printf("Characer Position = %d \n",i+1);
			f=1;
		}
	}
	if(f==0)
	{
		printf("No Character Found \n");
	}




}
