/*ACCEPT CHARACTER  & CHECK DIGIT OR ALPHABET*/

#include<stdio.h>
#include<ctype.h>
main()
{
	char ch;
	printf("ENTER A CHARACTER TO CHECK \n WHETHER ITS AN ALPHABET , DIGIT OR PUNCTUATION \n ");
	scanf("%c",&ch);

	if(isalpha(ch))
	{
		printf("%c IS AN ALPHABET \n",ch);
		if(isupper(ch))
                  	{
			printf("%c IS IN UPPER CASE \n",ch );
			ch=tolower(ch);
			printf("%c IN LOWER CASE \n",ch);
		}

		else 
		{
			 printf("%c IS IN LOWER CASE \n",ch );
			ch=toupper(ch);
			printf("%c IN UPPER CASE \n",ch);
		
		}
			
		
	}

	else	if(isdigit(ch))
			printf("%c IS A DIGIT  \n",ch);
		else       	printf("%c IS A PUNCTUATION  \n",ch);
	
	}

/*
	OUTPUT

ENTER A CHARACTER TO CHECK 
 WHETHER ITS AN ALPHABET , DIGIT OR PUNCTUATION 
 k 
k IS AN ALPHABET 
k IS IN LOWER CASE 
K IN UPPER CASE

ENTER A CHARACTER TO CHECK 
 WHETHER ITS AN ALPHABET , DIGIT OR PUNCTUATION 
 4
4 IS A DIGIT  

*/
