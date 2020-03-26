#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

float Circle(float);

int main()
{
	setlocale(LC_ALL, "rus");
	
	float a, b, c;
	
	printf("Введите радиус трех кругов\n");
	scanf("%f %f %f", &a, &b, &c);
	
	printf("Площадь круга %.2f\n", Circle(a));
	printf("Площадь круга %.2f\n", Circle(b));
	printf("Площадь круга %.2f\n", Circle(c));
	
	getch();
	
	return 0;
}

float Circle(float r)
{
	return M_PI * r * r;
}
