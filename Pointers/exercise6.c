#include <stdio.h>
#include <locale.h>
#include <math.h>

void trianglePS(int, float *, float *);

int main()
{
	setlocale(LC_ALL, "rus");
	
	int i, a;
	float P, S;
	
	for(i = 0; i < 3; i++)
	{
		printf("Введите сторону %d-го треугольника\n", i + 1);
		scanf("%d", &a);
		
		printf("Периметр треугольника: %f\n", P);
		printf("Площадь треугольника: %f\n", S);
	}
	
	return 0;
}

void trianglePS(int a, float *P, float *S)
{
	int p2;
	*P = a + a + a;
	
	p2 = *P / 2;
	
	*S = sqrt(p2 * (p2 - a) * (p2 - a) * (p2 - a));
}
