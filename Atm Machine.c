#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()															// Welcome Screen
{
	int bal=1000,Bal,a,b,c,d;
	Bal=bal;
	system("color 61");
	printf("\t\t\t");
	printf("Welcome to ATM Service");	
	printf("\n\n\n\t\t\t\t");
	printf("Pin");
	printf("\n\n\n\t\t\t\t");
	scanf("%d",&a);													// Authentication
while(1)
{	
	system("cls");
	if(a==4444)														// Menu
	{
		printf("\t\t\t\t");		
		printf("Welcome Sir");
		Beep(500,20);
		printf("\n\n\n\n\n\n");
		printf("1>. Deposit");	
		printf("\t\t\t\t\t\t");
		printf("2>. Withdrawal");
		printf("\n\n\n\n\n\n\n");
		printf("3>. Bal Enquery");
		printf("\t\t\t\t\t\t");
		printf("4>. Exit");
		printf("\n\n\n\t\t\t\t");
		scanf("%d",&b);
	}
	else
	{
	system("color 64");
	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t");
	printf("Wrong Pin\a");
	getch();
	exit(0);
	}

		
	switch(b)		
	{
		
		case 1:															// Deposit
			{
				Beep(5000,20);
				system("cls");
				printf("Minimum amount for deposit is 500\n");
				printf("Enter amount  ");
				scanf("%d",&c);
				if(c>=500)	
				{printf("\nYour transaction successful\n");
				Beep(5000,20);
				Bal=bal+c;
				}
				else
				printf("\nMinimum amount for deposit is 500\a");
				getch();
				break;
			}
			
			case 2:														// Withdrawal
				{
					Beep(5000,20);
					system("cls");
					printf("Minimum amount for withdrawal is 500\n");
					printf("Enter amount  ");
					scanf("%d",&d);
					if(d>=500 && Bal-d>=500)
					{
					printf("\nYour transaction successful\n");
					Beep(5000,20);
					Bal=Bal-d;
					}
					else
					{
					d<500? printf("\nMinimum balance for withdrawal is 500\a\n"):printf("\nInsufficient balance\a\n");
				     }
				    getch();
					break; 
				}
			case 3:														// Bal Enquery
			{
				Beep(5000,20);
				system("cls");
				printf("%d",Bal);
				getch();
				break;
			}
			case 4:														// Exit
			{
				Beep(500,20);
				exit(0);
			}
			default:													// Go to Menu
			{
				system("cls");
				printf("\n\n\n\n\n\n\t\t\t\t");
				printf("Invalid Input\a");
				getch();
				break;
			}
	
	 	
	    }
   }
   return 0;
}
