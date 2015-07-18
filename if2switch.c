#include<stdio.h>
#include<stdlib.h>

int main()
{
	int iAns=0;
	float a,r;
	float tf,tc;

	do{
		system("cls");
		printf("0-Exit\n");
		printf("1-Area\n");
		printf("2-Temp\n");
		printf("please choose : ");
		scanf("%d",&iAns);

		switch(iAns)
		{
			case 0: exit(0);
			case 1: printf("enter r "); 
					scanf("%f",&r); 
					a=3.14*r*r;
					printf("\nArea is %f ",a); 
					break;

			case 2: printf("enter tf "); 
					scanf("%f",&tf); 
					tc=(5*(tf-32))/9;
					printf("\ntc is %f ",tc); 
					break;
			default: printf("error\n"); break;
		}
		_getch();
	}while(iAns!=0);



	return 0;
}