/*USER DEFINED FUNCTION FOR FINDING COUNT OF CHAR*/

#include <stdio.h>
#include<ctype.h>

int except(char c)
{
	printf("Enter A Char \n ");
	 
	{
		if(isalpha(c))
		{
			return 1;
		}
		if(isdigit(c))
		{		
			return 2;
		}		
		if(ispunct(c)) 
		{			
			return 3;
		}
		
}

}

main()
{
	int cntc=0,cntd=0,cntp=0;
	int p;
	char c;
	while((c=getchar())!=EOF)
{

	p=except(c);

	if(p==1)
	{	
		cntc++;		
		printf("%c IS A ALPHABET \n",c);

	}

	if(p==2)
	{
		cntd++;
		printf("%c IS A DIGIT \n",c); 
	}

	if (p==3)
	{
		cntp++;
		printf("%c IS A SPECIAL SYMBOL  \n",c);
	}

}
	printf("THE NUMBER OF ALPHA DIGS  & PUNCTUATIONS   ARE %d %d  %d\n",cntc,cntd,cntp);

}

/*
		OUTPUT

1 2 4
Enter A Char 
 1 IS A DIGIT 
Enter A Char 
 Enter A Char 
 2 IS A DIGIT 
Enter A Char 
 Enter A Char 
 4 IS A DIGIT 
Enter A Char 
 @ d
Enter A Char 
 @ IS A SPECIAL SYMBOL  
Enter A Char 
 Enter A Char 
 d IS A ALPHABET 
Enter A Char 
 THE NUMBER OF ALPHA DIGS  & PUNCTUATIONS   ARE 1 3  1


*/


