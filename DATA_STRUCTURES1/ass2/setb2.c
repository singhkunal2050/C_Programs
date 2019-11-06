/*READ DATA FROM EMPLOYEE.txt and sort on age using Merge sort */
#include<stdio.h>
#include<stdlib.h>
#define MAXSZ 10 

struct employee
{
	char name[20];
	int age;
	long int salary;
};


int rfile(struct employee *e);
void wfile(struct employee *e, int n);
void sort(struct employee *e, int lb, int ub);
int partition(struct employee *e, int lb, int ub);
void display(struct employee *e, int n);

int main()
{

struct employee e[MAXSZ];
int n;

n=rfile(e);
printf("\n+_+\n");
display(e,n);	
printf("\n+_+\n");
sort(e,0,n-1);	
display(e,n);
wfile(e,n);
return 0;

}


/// READ FILE FUNCTION 
int rfile(struct employee *e)
 {
	int i=0;
	FILE *fp=NULL;
	
	fp=fopen("emp1.txt","r");

	if(fp==NULL)
		{
			printf("FILE COULD NOT BE READ !!\n");
			return 0;
		}
	while(!feof(fp))	
	  {
		fscanf(fp,"%s%d%d",e[i].name,&e[i].age,&e[i].salary);
		i++;
	  }
	fclose(fp);
	return i-1; /// no of records read
 }


/// SORT FUNCTION

void sort(struct employee *e, int lb , int ub )
{
	int pos;
	if(lb<ub)
      {
		pos=partition(e,lb,ub);
  		sort(e,lb,pos-1);
  		sort(e,pos+1,ub);
		
      } 

}

int partition(struct employee *e, int lb, int ub)
{
	int down; down=lb;
	int up;	  up=ub;
	struct employee pivot;	pivot=e[lb];
	struct employee temp;
	

           while(down<up)
	{	
		while((strcmp(e[down].name,pivot.name)!=1) && down<= ub) down++;		
		while(strcmp(e[up].name,pivot.name)==1)   up--;

		if(down<up)
	    {	
		temp=e[down];
		e[down]=e[up];
		e[up]=temp;
	    }	

	}
	
	e[lb]=e[up];
	e[up]=pivot;
	return up;

}		


/// WRITE FILE FUNCTION
void wfile(struct employee *e, int n)
 { 
	int i=0;
	FILE *fp=NULL;
	
	fp=fopen("sortedemp1.txt","w");	

	if(fp==NULL)
	{
		printf("FILE COULD NOT BE OPENED/FOUND\n");	
		return;
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


