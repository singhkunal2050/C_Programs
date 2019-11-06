/* Bitwise Operators AND OR XOR */


#include<stdio.h>
void displaybits(unsigned int n);
main()
{

int a,b,c;

printf("Enter The First Number \n");
scanf("%d",&a);

printf("Enter The Second Number \n");
scanf("%d",&b);

printf("Press \n1\tAND OPERATOR\n2\tOR OPERATOR\n3\tXOR OPERATOR\n4\tEXIT \n\n");
scanf("%d",&c);

printf("\nBinary Format of Inputs \n\n");        
        displaybits(a);
        displaybits(b);
          


switch(c)
{

case 1: printf("THE BITWISE AND IS %d \n\n",a&b);
        printf("Binary Format of Output \n");        
        displaybits(b&a);
                                             break;
                  


case 2: printf("THE BITWISE OR IS %d\n",a|b);
        printf("Binary Format of Output \n");        
        displaybits(b|a);

                                             break;

case 3: printf("THE BITWISE XOR IS %d\n",a^b);        
        printf("Binary Format of Output \n");        
        displaybits(a^b); 
                                             break;

default : printf("PROVIDE CORRECT INPUT \n");         break;

}


}


void displaybits(unsigned int n)
{

	unsigned int mask = 32768;
	/* set MSB of mask to 1 */

	while(mask>0)

	{
		if((n&mask)==0)
			printf("0");
		else
			printf("1");
		mask = mask >> 1 ; 

	}

printf("\n\n");
}

/*

Enter The First Number 
23   
Enter The Second Number 
44
Press 
1       AND OPERATOR
2       OR OPERATOR
3       XOR OPERATOR
4       EXIT 

1

Binary Format of Inputs 

0000000000010111

0000000000101100

THE BITWISE AND IS 4 

Binary Format of Output 
0000000000000100




*/
