	Name : KUNAL M SINGH 
	       Roll No : 1734223
	 Class : FY BCS  DIV : B

---------------------------------------------------------------------
	
                        SET A

---------------------------------------------------------------------


1]

#include<stdio.h>
struct stud
{
        int rollno;
        char name[25];
        int  marks[3];
        float per;
};

void search(struct stud s[],int n);
void modify(struct stud s[],int n);
void details(struct stud s[],int n);
void per(struct stud s[],int n);
void maxper(struct stud s[],int n);

void search(struct stud s[],int n)
{
        int a,i;
        printf("enter a rollno to search");
        scanf("%d",&a);
        for(i=0;i<n;i++)
        {
                if(a==s[i].rollno)
                {
                        printf("\n\n Name \tRollno \tpercentage");

                        printf("\n%s \t%d \t%f",s[i].name,s[i].rollno,s[i].per);
               }
        }
}
void modify(struct stud s[],int n)
{
        int i,or,nr;
        printf("enter the rollno that you have to modify");
        scanf("%d",&or);
        printf("enter new rollno");
        scanf("%d",&nr);
        s[or].rollno=nr;
for(i=0;i<n;i++)
{
        if(or==s[i].rollno)
        {
                printf("\n\n Name \tRollno \tpercentage");

                printf("\n%s \t%d \t%f",s[i].name,s[i].rollno,s[i].per);
        }
}
}
main()
{
        int i,sum=0,n,j,m;
        struct stud s[15];
        printf("\n enter the details of n students:\n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
                   {
                printf("\n enter the name:\nenter the rollno:\n");
                scanf("%s%d",s[i].name,&s[i].rollno);
                printf("\n enter marks of three subjects:");
                sum=0;
                for(j=0;j<3;j++)
                {
                        scanf("%d",&s[i].marks[j]);
                        sum=sum+s[i].marks[j];
                }
                s[i].per=(float)sum/3;
        }
        do
        {
                printf("1:Search\n2:Modify\n3:Display all students details\n4:display all students having percentage>80%\n5:display students having maximum %\n6:exit");
                printf("Enter a choice:");
                scanf("%d",&m);
                switch(m)
                {
                        case 1: search(s,n);
                                break;
                         case 2: modify(s,n);
                                break;
                        case 3: details(s,n);
                                break;
                        case 4: per(s,n);
                                break;

  case 5:maxper(s,n);
                               break;
                }
        }while(m!=6);
}
void details(struct stud s[50],int n)
{
        int i;
        printf("\n\n Name \t Rollno \t percentage");
        for(i=0;i<n;i++)
        {
                printf("\n%s \t%d \t%f",s[i].name,s[i].rollno,s[i].per);
        }
}
void per(struct stud s[50],int n)
{
        int i;
        printf("\n\n Name \t Rollno \t percentage");

        for(i=0;i<n;i++)
        {
                if(s[i].per>80)

                printf("\n%s \t%d \t%f",s[i].name,s[i].rollno,s[i].per);
        }
}
void maxper(struct stud s[50],int n)
{
 float max=0;
        int p,i;
        for(i=0;i<n;i++)
        {
                if(max<s[i].per)
                {
                        max=s[i].per;
                        p=i;
                }
        }
        printf("\n\n Name \t Rollno \t percentage");
        printf("\n%s \t%d \t%f",s[p].name,s[p].rollno,s[p].per);
}









2]

#include<stdio.h>

struct emp
{
        int id;
        char name[20];
        float salary;
};

void searchname(struct emp s[],int n);
void searchid(struct emp s[],int n);
void display(struct emp s[],int n);
void avgdisplay(struct emp s[],int n);
void maxdisplay(struct emp s[],int n);



main()
{
        struct emp s[100];
        int n,i,j,sum=0,m;
        printf("how many employee:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                printf("Enter id No:");
                scanf("%d",&s[i].id);
                printf("enter name:");#include<stdio.h>

struct emp
{
        int id;
        char name[20];
        float salary;
};

void searchname(struct emp s[],int n);
void searchid(struct emp s[],int n);
void display(struct emp s[],int n);
void avgdisplay(struct emp s[],int n);
void maxdisplay(struct emp s[],int n);



main()
{
        struct emp s[100];
        int n,i,j,sum=0,m;
        printf("how many employee:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                printf("Enter id No:");
                scanf("%d",&s[i].id);
                printf("enter name:");
                scanf("%s",s[i].name);
                printf("enter salary:");
                scanf("%f",&s[i].salary);


        }
        do
        {
                printf("\n1.search by name\n2.search by id\n3.display all employee details\n4.display all employee details having salary>20000\n5.display employee details having maximum salary\n6.exit\n");

                printf("enter choice:\n");
                scanf("%d",&m);
                switch(m)
                {
                        case 1:searchname(s,n);
                               break;
                        case 2:searchid(s,n);
                               break;
                        case 3:display(s,n);
                               break;
                        case 4:avgdisplay(s,n);
                               break;
                        case 5:maxdisplay(s,n);
                               break;
                }
        }while(m!=6);
}
void searchname(struct emp s[100],int n)
{
        int i,c;
        char a[20];
        printf("enter name to search:");
        scanf("%s",a);
        printf("\nid\tname\tsalary");

        for(i=0;i<n;i++)
        {
                c=strcmp(s[i].name,a);
                if(c==0)
                {

                        printf("\n%d\t%s\t%f",s[i].id,s[i].name,s[i].salary);
                }
        }
}

void searchid(struct emp s[100],int n)
{

        int a,i;
        printf("enter empid to search:");
        scanf("%d",&a);
        for(i=0;i<n;i++)
        {
                if(a==s[i].id)
                {
                        printf("\nid\tname\tsalary");
                        printf("\n%d\t%s\t%f",s[i].id,s[i].name,s[i].salary);
                }
        }

}
void display (struct emp s[100],int n)
{
        int i;
        printf("\n\nid\tname\tslary");
        for(i=0;i<n;i++)
                printf("\n%d\t%s\t%f",s[i].id,s[i].name,s[i].salary);
}
void avgdisplay (struct emp s[100],int n)
{
        int i;
        printf("\n\nid\tname\tslary");
        for(i=0;i<n;i++)
        {
                if(s[i].salary>20000)
                        printf("\n%d\t%s\t%f",s[i].id,s[i].name,s[i].salary);
        }
}
void maxdisplay (struct emp s[100],int n)
{
        float max=0;
        int p,i;
        printf("\n\nname\tid\tslary");
        for(i=0;i<n;i++)
        {
                if(max<s[i].salary)
                {
                        max=s[i].salary;
                        p=i;
                }
        }
        printf("\n%s\t%d\t%f",s[p].name,s[p].id,s[p].salary);
}
/* o/p

                scanf("%s",s[i].name);
                printf("enter salary:");
                scanf("%f",&s[i].salary);


        }
        do
        {
                printf("\n1.search by name\n2.search by id\n3.display all employee details\n4.display all employee details having salary>20000\n5.display employee details having maximum salary\n6.exit\n");

                printf("enter choice:\n");
                scanf("%d",&m);
                switch(m)
                {
                        case 1:searchname(s,n);
                               break;
                        case 2:searchid(s,n);
                               break;
                        case 3:display(s,n);
                               break;
                        case 4:avgdisplay(s,n);
                               break;
                        case 5:maxdisplay(s,n);
                               break;
                }
        }while(m!=6);
}
void searchname(struct emp s[100],int n)
{
        int i,c;
        char a[20];
        printf("enter name to search:");
        scanf("%s",a);
        printf("\nid\tname\tsalary");

        for(i=0;i<n;i++)
        {
                c=strcmp(s[i].name,a);
                if(c==0)
                {

                        printf("\n%d\t%s\t%f",s[i].id,s[i].name,s[i].salary);
                }
        }
}

void searchid(struct emp s[100],int n)
{

        int a,i;
        printf("enter empid to search:");
        scanf("%d",&a);
        for(i=0;i<n;i++)
        {
                if(a==s[i].id)
                {
                        printf("\nid\tname\tsalary");
                        printf("\n%d\t%s\t%f",s[i].id,s[i].name,s[i].salary);
                }
        }

}
void display (struct emp s[100],int n)
{
        int i;
        printf("\n\nid\tname\tslary");
        for(i=0;i<n;i++)
                printf("\n%d\t%s\t%f",s[i].id,s[i].name,s[i].salary);
}
void avgdisplay (struct emp s[100],int n)
{
        int i;
        printf("\n\nid\tname\tslary");
        for(i=0;i<n;i++)
        {
                if(s[i].salary>20000)
                        printf("\n%d\t%s\t%f",s[i].id,s[i].name,s[i].salary);
        }
}
void maxdisplay (struct emp s[100],int n)
{
        float max=0;
        int p,i;
        printf("\n\nname\tid\tslary");
        for(i=0;i<n;i++)
        {
                if(max<s[i].salary)
                {
                        max=s[i].salary;
                        p=i;
                }
        }
        printf("\n%s\t%d\t%f",s[p].name,s[p].id,s[p].salary);
}
/* o/p

