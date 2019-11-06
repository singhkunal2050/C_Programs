/*FIND DATA FROM CITIES.txt  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSZ 100 

struct City
{
	char name[20];
	int STD_code;
};


int rfile(struct City *e);
void wfile(struct City *e, int n);
void sort(struct City *e, int n);
void display(struct City *e, int n);
int bsearch1(struct City *e, int lb, int ub , char *key);

int main()
{

struct City e[MAXSZ];
int n,posn;
char key[10];

n=rfile(e);
display(e,n);
wfile(e,n);
printf("\nEnter the City you wanna Search\n");
scanf("%s",key);
posn=bsearch1(e,0,n,key);
if(posn==-1)
	printf("\nCity Not Found\n");
else
printf("\nThe City you Searched has the STD code %d \n",posn);


return 0;

}


int bsearch1(struct City *e, int lb, int ub , char *key)
{
	int flag=1;
	if(lb<ub)
      {	
	int mid=(lb+ub)/2;
	if(strcmp(e[mid].name,key)==0)
	{
		return e[mid].STD_code;
		flag=0;
	}
	int flag=mid;	
	if(strcmp(e[mid].name,key)>1)
	return bsearch1(e,lb,mid-1,key);	
	else
	return bsearch1(e,mid+1,ub,key);

      } 
	if(flag)
	return -1;
  	
}

/// READ FILE FUNCTION 
int rfile(struct City *e)
 {
	int i=0;
	FILE *fp=NULL;
	
	fp=fopen("city.txt","r");

	if(fp==NULL)
		printf("FILE COULD NOT BE READ !!\n");
	while(!feof(fp))	
	  {
		fscanf(fp,"%s%d",e[i].name,&e[i].STD_code);
		i++;
	  }
	fclose(fp);
	return i-1; /// no of records read
 }


/// WRITE FILE FUNCTION
void wfile(struct City *e, int n)
 { 
	int i=0;
	FILE *fp=NULL;
	
	fp=fopen("sortedcity.txt","w");	

	if(fp==NULL)
	{
		printf("FILE COULD NOT BE OPENED/FOUND\n");	
		exit(1);
	}

	for(i=0;i<n;i++)
	{	 
		fprintf(fp,"%s\t%d\n",e[i].name,e[i].STD_code);
      	}
		fclose(fp);		
			
 }

// DISPLAY


void display(struct City *e, int n)
{
	int i=0;
	for(i=0;i<n;i++)
		printf("%s\t%d\n",e[i].name,e[i].STD_code);
}




/////////////////////////////////////////



/*FIND DATA FROM CITIES.txt  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXSZ 100 

struct City
{
	char name[20];
	int STD_code;
};


int rfile(struct City *e);
void wfile(struct City *e, int n);
void sort(struct City *e, int n);
void display(struct City *e, int n);
int search(struct City *e, int n , char key[]);


int main()
{

struct City e[MAXSZ];
int n,posn;
char key[10];

n=rfile(e);
display(e,n);
wfile(e,n);
printf("\nEnter the City you wanna Search\n");
scanf("%s",key);
posn=search(e,n,key);
if(posn==-1)
	printf("\nCity Not Found\n");
else
printf("\nThe City you Searched has the STD code %d \n",posn);


return 0;

}

int search(struct City *e, int n , char key[])

{
	int i;
	for(i=0;i<n;i++) // LOGICAL AND IN FOR LOOP WITH strcmp(key,e[i].name)<=1 Increases efficiency 
	{ 
//		printf("\n%d Pass\t",i+1);		printf("%s\t",e[i].name);	printf("%s",key);
    	
	if(strcmp(e[i].name,key)==0)
		return e[i].STD_code; 
  	}		
		return -1;
      
}

/// READ FILE FUNCTION 
int rfile(struct City *e)
 {
	int i=0;
	FILE *fp=NULL;
	
	fp=fopen("city.txt","r");

	if(fp==NULL)
		printf("FILE COULD NOT BE READ !!\n");
	while(!feof(fp))	
	  {
		fscanf(fp,"%s%d",e[i].name,&e[i].STD_code);
		i++;
	  }
	fclose(fp);
	return i-1; /// no of records read
 }


/// WRITE FILE FUNCTION
void wfile(struct City *e, int n)
 { 
	int i=0;
	FILE *fp=NULL;
	
	fp=fopen("sortedcity.txt","w");	

	if(fp==NULL)
	{
		printf("FILE COULD NOT BE OPENED/FOUND\n");	
		exit(1);
	}

	for(i=0;i<n;i++)
	{	 
		fprintf(fp,"%s\t%d\n",e[i].name,e[i].STD_code);
      	}
		fclose(fp);		
			
 }

// DISPLAY


void display(struct City *e, int n)
{
	int i=0;
	for(i=0;i<n;i++)
		printf("%s\t%d\n",e[i].name,e[i].STD_code);
}

/*

OUTPUT


[sy44212@cs29 ass3]$ cc setb1.c
[sy44212@cs29 ass3]$ ./a.out
Pune    20
Mumbai  21
Nashik  121
Kopur   212
Nashik  133
Aurabad 311
Shirur  235
Nanded  246
Thane   237
nNADS   345
ADJAS   348
FJDAS   351
AFKAKS  354
ASDJ    357
ASDJIA  360
JASD    363
JASDJ   366
ASIJ    369
IADSIJ  372
ASDJI   375
PDPSA   378
PASDP   384

Enter the City you wanna Search
ASIJ

The City you Searched has the STD code 369 



*/


/////////////////////////////////////////////


