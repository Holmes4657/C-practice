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
	
	for(i = 0; i < sizeRow; i++) //Вывод матрциы
	{
		for(j = 0; j < sizeCol; j++)
		{
			printf("%4d ", a[i][j]);
		}
		
		printf("\n");
	}
	
	printf("Введите номер столбца\n");
	scanf("%d", &s);
	
	while(s < 1 || s > sizeCol)
	{
		printf("Некорректный ввод\n");
		scanf("%d", &s);
	}
	
	for(i = 0; i < sizeRow; i++)
	{
		a[i][s - 1] = a[i][s - 1] + 10;
	}
	
	printf("Измененная матрица\n");
	
	for(i = 0; i < sizeRow; i++) //Вывод матрциы
	{
		for(j = 0; j < sizeCol; j++)
		{
			printf("%4d ", a[i][j]);
		}
		
		printf("\n");
	}
	
	getch();
}
