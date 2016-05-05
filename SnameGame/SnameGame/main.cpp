#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
	time_t t;
	srand((unsigned)time(NULL));
	int dice = 0;
	dice = rand();
	for (int i = 0;i < 100;i++) {
		
		cout << dice << endl;
		_getch();
	}
	_getch();
	return 0;
}