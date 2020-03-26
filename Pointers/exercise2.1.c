#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInK(int *, int);
void ArrayInR(int *, int);
void ArrayOut(int *, int);

int main()
{
	setlocale(LC_ALL, "rus");
	
	const int maxSize = 50;
	int a[maxSize];
	int size;
	
	printf("Введите размерность массива\n");
	scanf("%d", &size);
	
	while(size < 1 || size > maxSize)
	{
		printf("Некорректный ввод\n");
		scanf("%d", &size);
	}
	
	ArrayInK(a, size);
	
	printf("Исходный массива\n");
	ArrayOut(a, size);
	
	srand(time(0));
	
	ArrayInR(a, size);
	
	printf("Перезаполненный массив\n");
	ArrayOut(a, size);
	
	getch();
	
	return 0;
}

void ArrayInK(int *a, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("Введите %d элемент массива\n", i + 1);
		scanf("%d", (a + i));
	}
}

void ArrayOut(int *a, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%d ", *(a + i));
	}
	
	printf("\n");
}

void ArrayInR(int *a, int size)
{
	int i;
	
	for(i = 0; i < size; i++)
	{
		*(a + i) = rand()%101-50;
	}
}
