#include <stdio.h>
#include <conio.h>
#include <locale.h>

int sum(int, int);

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a, b, s;
	
	printf("Введите два числа\n");
	scanf("%d %d", &a, &b);
	
	s = sum(a, b);
	
	printf("Сумма равна %d\n", s);
	
	getch();
}

int sum(int x1, int x2)
{
	int res;
	
	res = x1 + x2;
	
	return res;
}
