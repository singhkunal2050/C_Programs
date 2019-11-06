/*READ DATA FROM EMPLOYEE.txt and sort on age using insertion sort / bubble sort */
#include<stdio.h>
#include<stdlib.h>
#define MAXSZ 10 
#include<string.h>

struct employee
{
	char name[20];
	int age;
	long int salary;
};


int rfile(struct employee *e);
void wfile(struct employee *e, int n);
void sort(struct employee *e, int n);
void display(struct employee *e, int n);

int main()
{

struct employee e[MAXSZ];
int n;

n=rfile(e);
sort(e,n);
display(e,n);
wfile(e,n);
return 0;

}


/// READ FILE FUNCTION 
int rfile(struct employee *e)
 {
	int i=0;
	FILE *fp=NULL;
	
	fp=fopen("emp.txt","r");

	if(fp==NULL)
		printf("FILE COULD NOT BE READ !!\n");
	while(!feof(fp))	
	  {
		fscanf(fp,"%s%d%d",e[i].name,&e[i].age,&e[i].salary);
		i++;
	  }
	fclose(fp);
	return i-1; /// no of records read
 }


/// SORT FUNCTION
/*
void sort(struct employee *e, int n)
{

	int i,j,swapping=0;
	struct employee temp;

	for(i=0;i<n;i++)
      	{	
		if(swapping==1)
			return;
		
		for(j=0;j<n-i-1;j++)
	    	{
			swapping=1;	
			if(strcmp(e[j].name,e[j+1].name)>=1)
			{
				temp=e[j];
				e[j]=e[j+1];
				e[j+1]=temp;
	    			swapping=0;
			}		
      		 }	
	}
		
}		
*/



void sort(struct employee *e, int n)
{

	int i,j,swapping=0;
	struct employee temp;

	for(i=1;i<n;i++)
				                                                                   		{	
		temp=e[i];
		for(j=i-1;j>=0 && strcmp(temp.name,e[j].name)==-1;j--)
		{		
			e[j+1]=e[j];
		}	
		e[j+1]=temp; 	
	}


}



/// WRITE FILE FUNCTION
void wfile(struct employee *e, int n)
 { 
	int i=0;
	FILE *fp=NULL;
	
	fp=fopen("sortedemp.txt","w");	

	if(fp==NULL)
	{
		printf("FILE COULD NOT BE OPENED/FOUND\n");	
		exit(1);
	}

	for(i=0;i<n;i++)
	{	 
		fprintf(fp,"%s\t%d\t%d\n",e[i].name,e[i].age,e[i].salary);
      	}
		fclose(fp);		
			
 }

// DISPLAY


void display(struct employee *e, int n)
{
	int i=0;
	for(i=0;i<n;i++)
		printf("%s\t%d\t%d\n",e[i].name,e[i].age,e[i].salary);
}
