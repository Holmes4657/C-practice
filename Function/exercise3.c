#include <stdio.h>
#include <conio.h>
#include <locale.h>

void sum(int, int);

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a, b;
	
	printf("Введите два числа\n");
	scanf("%d %d", &a, &b);
	
	sum(a, b);
	
	getch();
	
	return 0;
}

void sum(int a, int b)
{
	printf("Сумма равно %d\n", a + b);
}
