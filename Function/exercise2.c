#include <stdio.h>
#include <conio.h>
#include <locale.h>

int sum(int, int);

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a, b;
	
	printf("‚ведите два числа\n");
	scanf("%d %d", &a, &b);
	
	printf("‘умма равна %d\n", sum(a, b));
	
	getch();
}

int sum(int a, int b)
{
	return (a + b);
}
