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
	
	printf("Введите количество строк\n");
	scanf("%d", &sizeRow);
	
	while(sizeRow < 1)
	{
		printf("Некорректный ввод\n");
		scanf("%d", sizeRow);
	}
	
	a = (int**)malloc(sizeRow * sizeof(int*)); //Выделение памяти под массива достаточного для хранения массива состоящего из sizeRow элементов, типа int указателя и запись адреса выделеного блока в значения указателя на указателя
	
	printf("Введите количество столбцов\n");
	scanf("%d", &sizeCol);
	
	while(sizeCol < 1)
	{
		printf("Некорректный ввод\n");
		scanf("%d", sizeCol);
	}
	
	for(i = 0; i < sizeRow; i++)
	{
		*(a + i) = (int*)malloc(sizeCol * sizeof(int)); //Циклическое выделение памяти для каждой строки матрциы и запись адресов строк в значения соответсвующих указателей  
	}
	
	srand(time(0));
	
	for(i = 0; i < sizeRow; i++)
	{
		for(j = 0; j < sizeCol; j++)
		{
			*(*(a + i)+j) = rand()%101-50; //a - значение указателя на указатель(адрес массива указателей), a + i - смещение на адрес текущего элемента массива указателей, *(a + i) - обращение к значению элемента из массива указателей(доступ к адресу начала интересуемой строки матрицы), *(a + i) + j - смещение на адрес элемента, *(*(a + i)+j) - 
		}
	}
	
	printf("Исходная матрица\n");
	for(i = 0; i < sizeRow; i++)
	{
		for(j = 0; j< sizeCol; j++)
		{
			printf("%4d", *(*(a + i)+j)); //Display Array
		}
		printf("\n");
	}
	
	for(i = 0; i < sizeRow; i++)
	{
		free(*(a + i)); //a[i] //освобождение памяти происходит в порядке её выделения освобождение строк выделеной памяти, и освобождаем
	}
	
	free(a); 
	a = NULL;
	
	getch();
	
	return 0;
}
