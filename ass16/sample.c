/*  CREATE STRUCTURE STUDENT AND ACCEPT RECORDS OF n STUDENTS */

#include<stdio.h>
struct student
{
char name[20];
int rollno;
int marks[3];
float perc;
};

main()
{
 	int i,sum,j,n;
	struct student s[10];
	printf("\n Enter the Number Of Students \n");
	scanf("%d",&n);
for(i=0;i<n;i++)
 {
	printf("\nEnter Name & Roll No Of the Student \n");
	scanf("%s%d",s[i].name,&s[i].rollno);
	printf("\nEnter Marks in Three Subjects \n");
	sum=0;
      for(j=0;j<3;j++)	
   {
       scanf("%d",&s[i].marks[j]);
       sum=sum+s[i].marks[j];	
   } 

s[i].perc=(float)sum/3;

 }

printf("\n\n NAME \t ROLL NO \t PERCENTAGE \n");
printf("===================================\n");
for(i=0;i<n;i++)
{
printf("%s \t %d \t %f \n",s[i].name,s[i].rollno,s[i].perc);
}

}
