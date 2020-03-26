#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "rus");
	
	int **a = NULL; //Объявления указателя на указатель int** -> int*
	int sizeRow, sizeCol, i, j;
	
	srand(time(0));
	
	sizeRow = rand()%10+1;
	
	a = (int **)malloc(sizeRow * sizeof(int *)); //Выделение памяти
	
	sizeCol = (int*)malloc(sizeRow * sizeof(int)); //Выделение памяти
	
	for(i = 0; i < sizeRow; i++)
	{
		*(sizeCol + i) = rand()%10+1; //Random Numbers
		*(a + i) = (int *)malloc(*(sizeCol + i) * sizeof(int));
	}
	
	for(i = 0; i < sizeRow; i++)
	{
		for(j = 0; j < *(sizeCol + i); j++)
		{
			*(*(a + i)+j) = rand()&101-50;
		}
	}
	
	printf("Рваная матрица\n");
	for(i = 0; i < sizeRow; i++)
	{
		for(j = 0; j < *(sizeCol + i); j++)
		{
			printf("%4d", *(*(a + i)+j));
		}
		
		printf("\n");
	}
	
	for(i = 0; i < sizeRow; i++)
	{
		free(*(a + i));
	}
	
	free(sizeCol);
	sizeCol = NULL;
	free(a);
	a = NULL;
	
	getch();
	
	return 0;
}
