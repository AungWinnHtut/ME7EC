#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 6
#define PRINT  printf("hello\n");
#define DOOR 30

int iP1=1;

int main()
{
	int i;
	time_t t;
	srand((unsigned)time(&t));
	int dice=1;
	char ch='a'; 
	
	do{
		system("cls");
		printf("dice: %d\n",dice);
		printf("Player1 Locatin: %d\n",iP1);
		
		if(iP1>=30)
		{
			printf("You won!\n");
			return 0;
		}

		if(iP1==17) 
		{
			iP1=4;
			printf("iP1 is bit by snake so iP1 downed from 17 to 4\n");
		}
		if(iP1==19)
		{
			iP1=7;
			printf("iP1 is bit by snake so iP1 downed from 19 to 7\n");
		}
		
			
		if(iP1==21) 
		{
			iP1=9;
			printf("iP1 is bit by snake so iP1 downed from 21 to 9\n");
		
		}
			
		if(iP1==27) 
		{
			iP1=1;
			printf("iP1 is bit by snake so iP1 downed from 27 to 1\n");
		}
			

		if(iP1==3) 
		{
			iP1=22;
			printf("iP1 get ladder,so iP1 moved from 3 to 22\n");
		}
			
		if(iP1==5)
		{
			iP1=8;
			printf("iP1 get ladder,so iP1  moved from 5 to 8\n");
		} 
			
		if(iP1==11)
		{
			iP1=26;
			printf("iP1 get ladder,so iP1 moved from 11 to 26\n");
		} 
			
		if(iP1==20) 
		{
			iP1=29;
			printf("iP1 get ladder,so iP1 moved from 20 to 29\n");
		}
			

		printf("Press any key to continue ");
		ch=_getch();
		dice = rand() % 6 + 1;
		iP1 = iP1 + dice;


	}while(ch!=27);
	
	
	
	return 0;
}