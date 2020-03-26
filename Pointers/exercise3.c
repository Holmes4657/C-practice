#include <stdio.h>
#include <locale.h>

void powerA3(float, float *);

int main()
{
	setlocale(LC_ALL, "rus");
	
	int i;
	
	for(i = 0; i < 5; i++)
	{
		float a, b;
		
		printf("Введите %d-ю A\n", i + 1);
		scanf("%f", &a);
		
		powerA3(a, &b); //Переход в функцию
		printf("Результат %d-ой B: %f\n\n", i + 1, b);
	}
	
	return 0;
}

void powerA3(float a, float *b)
{
	*b = a * a * a; //Вычесление третьей степени
}
