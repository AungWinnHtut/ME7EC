/*source(.c)->preprocessor (gcc -E)->soure(modified)->
c compiler (gcc -c)->object file (.o,.obj) -> linker (gcc -o)-> exe*/
#include<stdio.h> /*preprocessor directive*/
#include<stdlib.h>
int main()
{
	char ch;
	do{
		ch = _getch();

		switch(ch)
		{
			case -32:  	ch=_getch();
						switch(ch)
						{
							case 75: printf("Left\n"); break;
							case 77: printf("Right\n"); break;
							case 72: printf("Up\n"); break;
							case 80: printf("Down\n"); break;
						}
						break;
			case 13:	printf("Enter\n"); break;

		}
		/*
		if(ch==-32)
		{
			ch = _getch();
			if(ch==75) printf("Left\n");
			if(ch==77) printf("Right\n");
			if(ch==72) printf("Up\n");
			if(ch==80) printf("Down\n");
		}
		
		if(ch==13) printf("Enter\n");
		*/

	}while(ch!=27);/*esc=27*/

	
	return 0;
}