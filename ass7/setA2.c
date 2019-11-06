/*DISPLAY NEXT DIGIT & CHARACYER */

#include<stdio.h>

nxt(int n,char c)
{
	int i;
	for(i=1;i<=n;i++)	
	{
		printf("%c\t",++c);
	}
}

main()
{

	int no;
	char ch;

	printf("ENTER THE  CHAR \n");
	scanf("%c",&ch);
	printf("Enter num. :");
	scanf("%d",&no);
	nxt(no,ch);
}

/*
OUTPUT

ENTER THE  CHAR 
g 
Enter num. :12
h       i       j       k       l       m       n       o       p       q      r	 s      


*/





