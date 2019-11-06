/*REVERSE A STRING USING */

#include<stdio.h>
#include<string.h>
#include"setb1.h"

int isPalindrome(char str[MAXSZ])
{
	struct stack stk;
	initstack(&stk);
	
	int i=0;
	while(str[i]!='\0')
	push(&stk,str[i++]);

	i=0;

	while(!isEmpty(&stk))
	{
		if(str[i++]!=pop(&stk))
			return 0;		
	}	
		return 1;
		
}	


int main()
{

int i=0,n;
char str[20];

printf("Enter a String to Reverse it!!\n");
scanf("%s",str);

//printf("\n+_+\n");
if(isPalindrome(str))
	printf("Your String is a PALINDROME!!\n");
else
printf("\nNOT A PALINDROME!!\n");

}

	
/*

[sy44212@cs33 ass4]$ ./a.out 
Enter a String to Reverse it!!
Kunal

NOT A PALINDROME!!
[sy44212@cs33 ass4]$ ./a.out 
Enter a String to Reverse it!!
MadaM
Your String is a PALINDROME!!
[sy44212@cs33 ass4]$ 


*/
