#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "rus");
	
	const int maxRow = 10, maxCol = 15; //Строки и столбцы
	int a[maxRow][maxCol];
	int sizeRow, sizeCol, i, j, s;
	int sum;
	double avg;
	int max, min;
	max=min=a[0][0];
	int imax = 0, jmax = 0, imin = 0, jmin = 0;
	
	printf("Введите количсетво строк матрциы\n");
	scanf("%d", &sizeRow);
	
	while(sizeRow < 1 || sizeRow > maxRow)
	{
		printf("Некорректный ввод, еще раз\n");
		scanf("%d", &sizeRow);
	}
	
	printf("Введите количество столбцов матрицы\n");
	scanf("%d", &sizeCol);
	
	while(sizeCol < 1 || sizeCol > maxCol)
	{
		printf("Некорректный ввод, еще раз\n");
		scanf("%d", &sizeCol);
	}
	
	/*for(i = 0; i < sizeRow; i++)
	{
		for(j = 0; j < sizeCol; j++)
		{
			printf("Введите %d элемент %d строки\n", j + 1, i + 1);
			scanf("%d", &a[i][j]);
		}
	}*/
	
	srand(time(0));
	
	for(i = 0; i < sizeRow; i++) //Заполнение матрциы
	{
		for(j = 0; j < sizeCol; j++)
		{
			a[i][j] = rand()%101 - 50;
		}
	}
	
	printf("Исходная матрица\n");
	
	for(i = 0; i < sizeRow; i++) //вывод матрциы
	{
		for(j = 0; j < sizeCol; j++)
		{
			printf("%4d ", a[i][j]);
		}
		
		printf("\n");
	}
	
	for(i = 0; i < sizeRow; i++)
	{
		for(j = 0; j < sizeCol; j++)
		{
			if(a[i][j] > max)
			{
				max = a[i][j];
				imax = i;
				jmax = j;
			}
			if(a[i][j] < min)
			{
				min = a[i][j];
				imin = i;
				jmin = j;
			}
		}
	}
	
	printf("Максимальное: %d\n", max);
	printf("Строка: %d, Столбец: %d\n", imax + 1, jmax + 1);
	printf("Минимальный: %d\n", min);
	printf("Строка: %d, Столбец: %d\n", imin + 1, jmin + 1);
	
	a[imax][jmax] = min;
	a[imin][jmin] = max;
	
	printf("Измененная матрица\n");
	
	for(i = 0; i < sizeRow; i++) //вывод матрциы
	{
		for(j = 0; j < sizeCol; j++)
		{
			printf("%4d ", a[i][j]);
		}
		
		printf("\n");
	}
	
	getch();
}
