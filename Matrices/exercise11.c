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
	int fneg, fpos, jneg, jpos, x;
	
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
			a[i][j] = rand()%11 - 2;
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
		fpos = 0;
		fneg = 0;
		
		for(j = 0; j < sizeCol && fpos == 0; j++)
		{
			if(a[i][j] > 0)
			{
				fpos = 1;
				jpos = j;
			}
		}
		
		for(j = sizeCol - 1; j >= 0 && fneg == 0; j--)
		{
			if(a[i][j] < 0)
			{
				fneg = 1;
				jneg = j;
			}
		}
		
		if(fpos == 1 && fneg == 1)
		{
			x = a[i][jpos];
			a[i][jpos] = a[i][jneg];
			a[i][jneg] = x;
		}
	}
	
	printf("Измененная матрциа\n");
	
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
