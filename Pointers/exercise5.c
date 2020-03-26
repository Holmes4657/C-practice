#include <stdio.h>
#include <locale.h>
#include <math.h>

void mean(int, int, float *, float *);

int main()
{
	setlocale(LC_ALL, "rus");
	
	int x, y;
	float amean, gmean;
	
	printf("Введите X и Y\n");
	scanf("%d %d", &x, &y);
	
	mean(x, y, &amean, &gmean);
	
	printf("Среднее арифметическое: %f\n", amean);
	
	if(x > 0 && y > 0)
	{
		printf("Среднее геометрическое: %f\n", gmean);
	}
	
	return 0;
}

void mean(int x, int y, float *amean, float *gmean)
{
	*amean = (x + y) / 2; //Среднее арифметическое
	
	if(x > 0 && y > 0)
	{
		*gmean = pow(x * y, 0.5); //Среднее геометрическое
	}
}
