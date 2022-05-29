//calculator 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define note "mazze mat lo, enter the valid operation "
int a,b;
 
//function all definition
void addition()
{
	system("cls"); 
	printf("\n\t\t\t\t\tEnter The First Number:");
	scanf("%d",&a);
	printf("\t\t\t\t\tEnter The Second Number:");
	scanf("%d",&b);
	printf("\n\t\t\t\t\t------- RESULT----------  ");
	printf("\n\t\t\t\t\tThe sum of %d and %d = %d\n",a,b,a+b);
	printf("\n\t\t\t\t\t----------------------- ");
}

void subtraction()
{
	system("cls"); 
	printf("\n\t\t\t\t\tEnter The First Number:");
	scanf("%d",&a);
	printf("\t\t\t\t\tEnter The Second Number:");
	scanf("%d",&b);
	printf("\n\t\t\t\t\t------- RESULT----------  ");
	printf("\n\t\t\t\t\tThe Subtraction of %d and %d = %d\n",a,b,a-b);
	printf("\n\t\t\t\t\t----------------------- ");
}

void multiplication()
{
	system("cls"); 
	printf("\n\t\t\t\t\tEnter The First Number:");
	scanf("%d",&a);
	printf("\t\t\t\t\tEnter The Second Number:");
	scanf("%d",&b);
	 printf("\n\t\t\t\t\t------- RESULT----------  ");
	printf("\n\t\t\t\t\tThe Multiplication of %d and %d = %d\n",a,b,a*b);
	printf("\n\t\t\t\t\t----------------------- ");
}


void division()
{
	system("cls"); 
	printf("\n\t\t\t\t\tEnter The First Number:");
	scanf("%d",&a);
	printf("\t\t\t\t\tEnter The Second Number:");
	scanf("%d",&b);
	printf("\n\t\t\t\t\t------- RESULT----------  ");
	printf("\n\t\t\t\t\tThe Division of a and b = %f\n",(float)a/(float)b);
	printf("\n\t\t\t\t\t----------------------- ");
}

void modulus()
{
	system("cls"); 
	printf("\n\t\t\t\t\tEnter The First Number:");
	scanf("%d",&a);
	printf("\t\t\t\t\tEnter The Second Number:");
	scanf("%d",&b);
	printf("\n\t\t\t\t\t------- RESULT----------  ");
	printf("\n\t\t\t\t\tThe Modulus of %d and %d is %d\n",a,b,a%b);
	printf("\n\t\t\t\t\t----------------------- ");
	
}

void factorial()
{
	system("cls"); 
	int n,i,factorial=1;
	printf("\n\t\t\t\t\tEnter The Number You Want The Factorial Of :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
		
	}
	printf("\n\t\t\t\t\t------- RESULT----------  ");
	printf("\n\t\t\t\t\tFactorial of %d is %d",n,factorial);
	printf("\n\t\t\t\t\t----------------------- ");
	
}

void power()
{
	system("cls"); 
	double b;
	double p;
	printf("\n\t\t\t\t\tEnter The Base Number:");
	scanf("%lf",&b);
	printf("\t\t\t\t\tEnter The Power:");
	scanf("%lf",&p);
	double e=pow(b,p);
	printf("\n\t\t\t\t\t------- RESULT----------  ");
	printf("\n\t\t\t\t\tThe power is %lf",e);
	printf("\n\t\t\t\t\t----------------------- ");
}

void square()
{
	system("cls"); 
	double b;
	printf("\n\t\t\t\t\tEnter the number your want the square of :");
	scanf("%lf",&b);
	double p=pow(b,2);
	printf("\n\t\t\t\t\t------- RESULT----------  ");
	printf("\n\t\t\t\t\tThe square of %2.lf is %2.lf :",b,p);
	printf("\n\t\t\t\t\t----------------------- ");
	
}

void cube()
{
	system("cls"); 
	double b;
	printf("\n\t\t\t\t\tEnter the number you want the cube of :");
	scanf("%lf",&b);
	double p=pow(b,3);
	printf("\n\t\t\t\t\t------- RESULT----------  ");
	printf("\n\t\t\t\t\tThe cube of %lf is %lf",b,p);
	printf("\n\t\t\t\t\t----------------------- ");
	
}

void squareroot()
{
	system("cls"); 
	double b;
	printf("\n\t\t\t\t\tEnter the number you want the square root of : ");
	scanf("%lf",&b);
	double s = sqrt(b);
	printf("\n\t\t\t\t\t------- RESULT----------  ");
	printf("\n\t\t\t\t\tThe Square  Root f  %lf is %lf",b,s);
	printf("\n\t\t\t\t\t----------------------- ");
	
	
}




int main()
{
 
    
	
	while(1)
	{
		
	int choice ;
	printf("\n\n\t\t\t\t\tWELCOME TO SCIENTIFIC CALCULATOR .. >>>\n");
	
	printf("\n\t\t\t\t\t******* Press 0 To Close The  Program ******\n");
	printf("\n\t\t\t\t\t Enter 1 for Addition ");
	printf("\n\t\t\t\t\t Enter 2 for Subtraction");
	printf("\n\t\t\t\t\t Enter 3 for Multiplication");
	printf("\n\t\t\t\t\t Enter 4 for Division ");
	printf("\n\t\t\t\t\t Enter 5 for Modulus ");
	printf("\n\t\t\t\t\t Enter 6 for  Power");
	printf("\n\t\t\t\t\t Enter 7 for Factorial ");
	printf("\n\t\t\t\t\t Enter 8 for Square ");
	printf("\n\t\t\t\t\t Enter 9 for Cube ");
	printf("\n\t\t\t\t\t Enter 10 for Squareroot");
	printf("\n\t\t\t\t\t Enter The  Operation You Want To Do:");
	
	
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				addition();
				break;
			case 2:
				subtraction();
				break;
			case 3:
				multiplication();
				break;
			case 4:
				division();
				break;
			case 5:
				modulus();
				break;
			case 6:
				power();
				break;
			case 7:
				factorial();
				break;
			case 8:
				square();
				break;
			case 9:
				cube();
				break;
			case 10:
				squareroot();
				break;
			case 0:
				exit(1);
			default:
				printf("\n\t\t\t\t\t------- RESULT----------  ");
				printf("\n\t\t\t\t\tWrong Choice ( Please Enter Right Choice From The Above List .. )");
				printf("\n\t\t\t\t\t----------------------- ");
				
		}
	}
 
}



