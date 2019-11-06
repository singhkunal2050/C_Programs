-----------------------------------------------

Name : Kunal M Singh
Class : SY BCS "B"
Roll no : 44212 

--------------------------------------------------------------

		** ASS3  ** SET A

--------------------------------------------------------------

1]
/*Create an array of n integers Accept a value x from user and search it using LINEAR SEARCH [FOR SORTED DATA]  */


#include<stdio.h>
void bubble(int a[], int n);
int search(int a[], int n , int key);
main()
{

	int n,i,a[10],p,key;

	printf("Enter the number ELEMENTS in array \n");
	scanf("%d",&n);

	printf("Enter the elements \n");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubble(a,n);

	printf("The sorted elements are\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
			
	printf("\nEnter the Element you want to search \n");
	scanf("%d",&key);
	p=search(a,n,key);
	printf("*************************\n");
	
	if(p==-1)
		printf("The Element DOES NOT EXIST!!\n",p);
	else 
		printf("The Element is at %d position\n",p);


}


void bubble(int a[], int n)

{
	int flag=0;
	int i,j,temp;
	for(i=1;i<n;i++)  ///for(i=0;i<n;i++)
	{
		///printf("Pass=%d\n",i);
		if(flag==1)
		{  printf("Total Passes=%d\n",i);	break;	}
		for(j=0;j<n-i;j++)  ///for(j=0;j<n-i-1;j++)
		{	
			flag=1;
                        if(a[j]<a[j+1])
			{				
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=0;	
				///printf("Swapping=%d\t",j);
			}	

		}
			//printf("\n");	
	}

}


int search(int a[], int n , int key)

{
	int i;
	for(i=0;i<n && key<a[i] ;i++);
	{ 
    	if(a[i]==key)	return i+1; 
  	}		
		return -1;
      
	

}

/*
	OUTPUT

Enter the number of array 
5   
Enter the elements 
234 4 332 2 21
Total Passes=4
The sorted elements are
2       4       21      234     332
Enter the Element you want to search 
21
*************************
The Element is at 3 position


*/


--------------------------------------------------------------

2]

/*Create an array of n integers Accept a value x from user and search it using BINARY search [FOR SORTED DATA]  */

#include<stdio.h>
void bubble(int a[], int n);
int binary(int a[], int lb, int ub , int key);
main()
{

	int n,i,a[10],p,key;

	printf("Enter the number of array \n");
	scanf("%d",&n);

	printf("Enter the elements \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubble(a,n);

	printf("The sorted elements are\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
			
	printf("\nEnter the Element you want to search \n");
	scanf("%d",&key);
	p=binary(a,1,n,key);
	printf("\n\n");
	printf("The Element is at %d position\n",p);
	


}


void bubble(int a[], int n)

{
	int flag=0;
	int i,j,temp;
	for(i=1;i<n;i++)  ///for(i=0;i<n;i++)
	{
		///printf("Pass=%d\n",i);
		if(flag==1)
		{  printf("Total Passes=%d\n",i);	break;	}
		for(j=0;j<n-i;j++)  ///for(j=0;j<n-i-1;j++)
		{	
			flag=1;
                        if(a[j]>a[j+1])
			{				
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=0;	
				///printf("Swapping=%d\t",j);
			}	

		}
			//printf("\n");	
	}

}


int binary(int a[], int lb, int ub , int key)

{
				//int flag=1;
	if(lb<=ub)
      {	
	int mid=(lb+ub)/2;
	if(a[mid]==key)
	{
		return mid+1;
	}			//flag=0;
	
			//int flag=mid;	
	if(a[mid]>key)
	return binary(a,lb,mid-1,key);	
	else
	return binary(a,mid+1,ub,key);

      }
	return -1;
  	
}


/*

Enter the number of array 
8 
Enter the elements 
25 627 82 99 0 2 1 6 
Total Passes=6
The sorted elements are
0       1       2       6       25      82      99      627
Enter the Element you want to search 
99

The Element is at 7 position

*/


//////////////////

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


///////////////


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




