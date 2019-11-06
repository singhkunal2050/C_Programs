	Name : KUNAL M SINGH 
	       Roll No : 1734223
	 Class : FY BCS  DIV : B

---------------------------------------------------------------------
	
                        SET A

---------------------------------------------------------------------


1]


/* TRANSFER Contents From One File to Another With Reversed Case */

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
main(int argc , char *argv[])

{
  FILE *fp1,*fp2; 
  if(argc!=3)
  {
    printf("Wrong Number of Arguments \n");
    exit(0);
  }


  char ch;        

  fp1=fopen(argv[1],"r");
  if(fp1==NULL)
    {
       printf("File Could'nt Be Opened \n");
       exit(0);

    }                  


  fp2=fopen(argv[2],"w");
  if(fp2==NULL)
    {
       printf("File Could'nt Be Opened \n");
       exit(0);

    }                

        while((ch=fgetc(fp1))!=EOF)
      {
              if(isupper(ch))
                  fputc(tolower(ch),fp2);
              else if(islower(ch))
                  fputc(toupper(ch),fp2);
              else  fputc(ch,fp2); 
                  
      }

                  fcloseall();

      }
          
                  




2]


/*Count NO Of Characters , New Lines , Tabs , Spaces From One File Using Coomand Line Operator */

#include<stdio.h>
#include<stdlib.h>
main(int argc , char *argv[])
{

FILE *fp;
int n=0,b=0,t=0,c=0;
char ch;          
fp=fopen(argv[1],"r");
if(fp==NULL)
{
       printf("File Could'nt Be Opened \n");
       exit(0);

}

while((ch=fgetc(fp))!=EOF)
{
c++;
if(ch=='\n')  n++;
if(ch=='\t')  t++;
if(ch==' ')   b++;

}

 
printf("Number of Characrers = %d \n",c);
printf("Number of Tabs = %d \n",t) ;
printf("Number of Spaces = %d \n",b);
printf("Number of New Lines = %d \n",n);


}


/*

Number of Characrers = 145 
Number of Tabs = 1 
Number of Spaces = 42 
Number of New Lines = 4 

*/
