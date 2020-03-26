#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "rus");
	
	int *a = NULL; //Pointers
	int sizeCol, sizeRow, i, j; //Variable
	
	printf("Введите количество строк\n");
	scanf("%d", &sizeRow);
	
	while(sizeRow < 1)
	{
		printf("Некорректный ввод\n");
		scanf("%d", sizeRow);
	}
	
	printf("Введите количество столбцов\n");
	scanf("%d", &sizeCol);
	
	while(sizeCol < 1)
	{
		printf("Некорректный ввод\n");
		scanf("%d", sizeCol);
	}
	
	a = (int*)malloc((sizeRow * sizeCol) * sizeof(int));
	
	srand(time(0));
	
	for(i = 0; i < sizeRow; i++)
	{
		for(j = 0; j < sizeCol; j++)
		{
			*(a + i * sizeCol + j) = rand()%101-50; //Random numbers
		}
	}
	printf("Исходная матрица\n");
	for(i = 0; i < sizeRow; i++)
	{
		for(j = 0; j < sizeCol; j++)
		{
			printf("%4d", *(a + i * sizeCol + j++));
		}
		printf("\n");
	}
	
	free(a);
	a = NULL;
	
	getch();
	
	return 0;
}
