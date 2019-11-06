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
