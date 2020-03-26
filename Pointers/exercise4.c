#include <stdio.h>
#include <locale.h>

void powerA234(float, float *, float *, float *);

int main()
{
	setlocale(LC_ALL, "rus");
	
	int i;
	
	for(i = 0; i < 5; i++)
	{
		float a, b, c, d;
		
		printf("Введите %d-ю A\n", i + 1);
		scanf("%f", &a);
		
		powerA234(a, &b, &c, &d); //Переход в функцию
		printf("Результат %d-ой B: %f\n\n", i + 1, b);
		printf("Результат %d-ой C: %f\n\n", i + 1, c);
		printf("Результат %d-ой D: %f\n\n", i + 1, d);
	}
	
	return 0;
}

void powerA234(float a, float *b, float *c, float *d)
{
	*b = a * a;
	*c = a * a * a; //Вычесление третьей степени
	*d = a * a * a * a;
}
