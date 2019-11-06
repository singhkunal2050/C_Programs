/* TRANSFER Contents From One File to Another With Reversed Case */

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
main()

{
  FILE *fp; 
  char ch;        
  fp=fopen("a.txt","r");
  if(fp==NULL)
    {
       printf("File Could'nt Be Opened \n");
       exit(0);

    }                  

        while(!feof(fp))
      {
                  ch=fgetc(fp);
              if(isupper(ch))
                  putchar(tolower(ch));
              else if(islower(ch))
                  putchar(toupper(ch));
              else  putchar(ch); 
                  
      }

                  fclose(fp);

      }
          
