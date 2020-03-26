#include <stdio.h>
#include <conio.h>
#include <locale.h>

int x = 0;

void func();

int main()
{
	setlocale(LC_ALL, "rus");
	
	x++;
	
	func();
	
	printf("x = %d\n", x);
	
	getch();
	
	return 0;
}

void func()
{
	x++;
}
