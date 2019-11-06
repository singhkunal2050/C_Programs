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
