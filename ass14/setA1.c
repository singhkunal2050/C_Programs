/*
   MENU DRIVEN PROGRAM TO PERFORM OPERATIONS ON STRINGS USING POINTS 
   LENGTH    REVERSE    UPPERCASE     LOWERCASE  
 */


#include<stdio.h>
#include<string.h>
#include<ctype.h>

main()
{

	int i=0,c,l=0,len;
	char  *str1;
	str1=(char *)malloc(sizeof(char));

	printf("SELECT THE OPERATION YOU WANNA PERFORM \n");
	printf("1 : LENGTH  \n2 : REVERSE  \n3 : CONVERT TO UPPERCASE  \n4 : CONVERT TO LOWERCASE \n5 Exit \n");
	scanf("%d",&c);

	while(c!=5)
	{

switch(c)
{

case 1 : printf("Enter the String \n");
scanf("%s",str1);
for(i=0;*(str1+i)!='\0';i++)
l++;
printf("Length of the string = %d \n",l);		
break;				 


case 2 : printf("\nEnter the String To Reverse It \n");
scanf("%s",str1);  
len=strlen(str1);
printf("THE Reverse String =\n");			
for(i=len;i>=0;i--)
printf("%c",*(str1+i));
break;


case 3 : printf("Enter String to Convert to UpperCase \n");
scanf("%s",str1);  
while(str1[i]!='\0')
{
   str1[i]=toupper(str1[i]);
   i++;
}
printf("\nTHE  String =%s \n",str1);			
break;


case 4 : printf("Enter String to Convert to LowerCase \n");
         scanf("%s",str1);  
while(str1[i]!='\0')
{
   str1[i]=tolower(str1[i]);
   i++;
}
printf("\nTHE String =%s \n",str1);			
break;


default :  printf("Enter Correct Input \n");
break;

	
}


}

}


/*
	OUTPUT

SELECT THE OPERATION YOU WANNA PERFORM 
1 : LENGTH  
2 : REVERSE  
3 : CONVERT TO UPPERCASE  
4 : CONVERT TO LOWERCASE 
5 Exit 
4
Enter String to Convert to LowerCase 
KUNAL

THE String =kunal 
Enter String to Convert to LowerCase 


*/
