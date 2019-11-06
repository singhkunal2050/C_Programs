-----------------------------------------------

Name : Kunal M Singh
Class : SY BCS "B"
Roll no : 44212 

--------------------------------------------------------------

		** ASS2  ** SET A **

--------------------------------------------------------------

1]


/* SORT n Numbers using Merge Sort */

#include<stdio.h>
void merge(int a[], int lb1, int ub1, int lb2, int ub2);
void mergesort(int a[], int lb, int ub);
main()
{
	int i,a[10],n;

	printf("Enter the number of array \n");
	scanf("%d",&n);

	printf("Enter the elements \n");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		mergesort(a,0,n-1);

	printf("The sorted elements are\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);


}


void mergesort(int a[], int lb , int ub )

{
	
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,mid+1,ub);
	}
}

void merge(int a[], int lb1, int ub1, int lb2, int ub2)
{
	int i=lb1,j=lb2,k=0;//or lb
	int b[10];

	while(i<=ub1 && j<=ub2)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];  i++;  k++;
		}			

		else
		{
			b[k]=a[j];   j++;  k++;
		}		

	}

	while(i<=ub1)
	{
		b[k]=a[i];  i++;  k++;
	}

	while(j<=ub2)
	{
		b[k]=a[j];  j++;  k++;
	}


	for(i=lb1,k=0;i<=ub2;i++,k++)
	{
//	printf("b[k]=%d\n",b[k]);		
	a[i]=b[k];
 	}
	
}


/*

	output

Enter the number of array 
6
Enter the elements 
21 54 587  23 5 67
The sorted elements are
5       21      23      54      67      587  


*/







--------------------------------------------------------------

2]

/* Sort n Numbers using Quick Sort */

#include<stdio.h>
void quicksort(int a[], int a1, int an);
int partition(int a[], int lb, int ub);
main()
{
	int a1,an,i,a[10],n;

	printf("Enter the number of array \n");
	scanf("%d",&n);

	printf("Enter the elements \n");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,n-1);

	printf("The sorted elements are\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);


}

void quicksort(int a[], int lb, int ub)
{
	int pos;
	if(lb<ub)
      {
		pos=partition(a,lb,ub);
  		quicksort(a,lb,pos-1);
  		quicksort(a,pos+1,ub);
		
      } 

}

int partition(int a[10], int lb, int ub)
{
	int down=lb,up=ub;
	int pivot=a[lb];
	int temp;

           while(down<up)
	{	
		while(a[down]<=pivot && down<= ub) down++;		
		while(a[up]>pivot)   up--;

		if(down<up)
	    {	
		temp=a[down];
		a[down]=a[up];
		a[up]=temp;
	    }	

	}
	
	a[lb]=a[up];
	a[up]=pivot;
	return up;

}		


/*
OUTPUT

Enter the elements 
23 5364 11 1
The sorted elements are
1       11      23      5364    [sy44212@cs27 ass2]$ 

*/

///////////////////////////////////////////////////////////////////


b1

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
void merge(struct employee *e, int lb1, int ub1, int lb2, int ub2);
void display(struct employee *e, int n);

int main()
{

struct employee e[MAXSZ];
int n;

n=rfile(e);
display(e,n);
printf("\n(+_+)\n");
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

void sort(struct employee *e, int lb , int ub )
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		sort(e,lb,mid);
		sort(e,mid+1,ub);
		merge(e,lb,mid,mid+1,ub);
		//printf("KKKK1\n");
	}
}

void merge(struct employee *e, int lb1, int ub1, int lb2, int ub2)
{
	int i=lb1,j=lb2,k=0;//or lb
	struct employee t[10];

	while(i<=ub1 && j<=ub2)
	{
		//printf("\n+_+\n");
		if(e[i].age<=e[j].age)
		{
			t[k]=e[i];  i++;  k++;
		}			
			
		else
		{
			t[k]=e[j];   j++;  k++;
		}		

	}

	while(i<=ub1)
	{
		t[k]=e[i];  i++;  k++;
	}

	while(j<=ub2)
	{
		t[k]=e[j];  j++;  k++;
	}


	for(i=lb1,k=0;i<=ub2;i++,k++)
	{
//	printf("b[k]=%ddisplay(e,n);\n",b[k]);		
	e[i]=t[k];
 	}
	
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



////////////////////////////////////////////////

b2

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


