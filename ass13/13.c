	Name : KUNAL M SINGH 
	       Roll No : 1734223
	 Class : FY BCS  DIV : B

		EXERCISE 13

---------------------------------------------------------------------
	
                        SET A

---------------------------------------------------------------------

1


/*MENU DRIVEN PROGRAM ON STRINGS */

#include<stdio.h>
#include<ctype.h>
#include<string.h>

main()
{
	int i=0,n,c,l=0;
	char str[50],str2[50];
	printf("Select Which Operation you wanna Execute \n1) Length \n2) Copy \n3) Concatenation \n4) Compare \n");

	scanf("%d",&c);

	switch(c)
	{

		case 1 :printf("Enter String \n");  	
			scanf("%s",str);
			for(i=0;str[i]!='\0';i++)
				l++;	
			printf("THE LENGTH OF STRING IS %d\n",l);		
			break;		 


		case 2 :printf("Enter String \n");
			scanf("%s",&str);  
			for(i=0;str[i]!='\0';i++)
				str2[i]=str[i];	    
			str2[i]='\0';
			printf("COPIED STRING  IS %s",str2);
			break;


		case 3 : printf("Enter the String \n");
			 scanf("%s",&str);
			 printf("Enter the  Second String \n");
			 scanf("%s",&str2);
			 printf("%s",strcat(str,str2));
			 break;

		case 4 : printf("Enter the String \n");
			 scanf("%s",&str);
			 printf("Enter the  Second String \n");
			 scanf("%s",&str2);
			 if(strcmp(str,str2)==0)
				 printf("MATCH FOUND \n");
			 else  
				 printf("DID NOT MATCH \n");	        
			 break;


		default : printf("PLEASE PROVIDE CORRECT INPUT \n");
			  break;       	

	}

}

/*
 OUTPUT

Select Which Operation you wanna Execute 
1) Length 
2) Copy 
3) Concatenation 
4) Compare 
1
Enter String 
234
THE LENGTH OF STRING IS 3
[fy34223@cs15 ass13]$ ./a.out
Select Which Operation you wanna Execute 
1) Length 
2) Copy 
3) Concatenation 
4) Compare 
2
Enter String 
asasda
COPIED STRING  IS asasda[fy34223@cs15 ass13]$ ./a.out
Select Which Operation you wanna Execute 
1) Length 
2) Copy 
3) Concatenation 
4) Compare 
3
Enter the String 
dasd
Enter the  Second String 
asfas
dasdasfas[fy34223@cs15 ass13]$ ./a.out
Select Which Operation you wanna Execute 
1) Length 
2) Copy 
3) Concatenation 
4) Compare 
4   
Enter the String 
aasd
Enter the  Second String 
asa
DID NOT MATCH 


*/


--------------------------------------------------------------------

2

/*COUNT OCCURENCE OF A CHARATER IN A STRING USING USER DEFINED FUNCTION */

#include<stdio.h>
#include<stdlib.h>
int csearch(char str[100] , int l ,int f, char c ,int i);
main()
{
	char str[100] , c;
	int i,l=0,f=0,p;
	p=csearch(str,l,f,c,i);
	if(p==(-1))	
	printf("No Caracter Found \n");
}


int csearch(char str[100] , int l ,int f , char c ,int i)
{

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
		return -1;
	}



}


/*
	OUTPUT

Enter the String 
adf g g sdfgsd
Enter a Character to Find Its Position 
g
Characer Position = 5 
Characer Position = 7 
Characer Position = 12 


*/



--------------------------------------------------------------------

3



/* String is a Polindrome or not */

#include<stdio.h>
void isPolindrome(char str[100]);
main()

{
	int p;
	char str[100];
	printf("ENTER A STRING TO CHECK IF ITS A POLINDROME OR NOT \n");
	gets(str);
	isPolindrome(str);

}


void isPolindrome(char str[100])
{
	// Start from Leftmost and Rightmost 
   int l=0,flag=0;
   int h=strlen(str)-1;

	// Keep Comparing Characters While They're Same 

  while(h>l)	
{
  if(str[l++]!=str[h--])
   {
      flag=0;	   
  break;
   }
      flag=1;
}
	if(flag==0)
	printf("%s is not a Polindrome \n",str);
	else
	printf("%s is a POLINDROME \n",str);		
	
}

/*

ENTER A STRING TO CHECK IF ITS A POLINDROME OR NOT 
KUNUK
KUNUK is a POLINDROME 
[fy34223@cs47 ass13]$ 


*/


--------------------------------------------------------------------

4








--------------------------------------------------------------------
