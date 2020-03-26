#include <stdio.h>
#include <conio.h>
#include <locale.h>

double MyMax(double, double);

int main()
{
	setlocale(LC_ALL, "rus");
	
	double a, b;
	
	printf("Введите два числа\n");
	scanf("%lf %lf", &a, &b);
	
	printf("Наибольшое: %.1lf\n", MyMax(a, b));
	
	getch();
	
	return 0;
}

double MyMax(double x1, double x2)
{
	double max;
	
	if(x1 > x2)
	{
		max = x1;
	}
	else
	{
		max = x2;
	}
	
	return max;
}
