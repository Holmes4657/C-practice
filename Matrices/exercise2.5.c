#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "rus");
	
	const int maxSize = 15;
	int a[maxSize][maxSize];
	int size, i, j;
	
	printf("Введите размерность квадратной матрицы\n");
	scanf("%d", &size);
	
	while(size < 1 || size > maxSize)
	{
		printf("Некорректный ввод\n");
		scanf("%d", &size);
	}
	
	srand(time(0));
	
	for(i = 0; i < size; i++) //Заполнение матрицы
	{
		for(j = 0; j < size; j++)
		{
			a[i][j] = rand()%101-50;
		}
	}
	
	printf("Исходная матрица\n");
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			if(i + j < size - 1)
			{
				a[i][j] = 0;
			}
		}
	}
	
	printf("Измененная матрциа\n");
	for(i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	
	getch();
}
