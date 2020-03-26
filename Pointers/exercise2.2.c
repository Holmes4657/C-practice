#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	setlocale(LC_ALL, "rus");
	
	int *a = NULL;
	int i, size;
	
	printf("Введите количество элементов\n");
	scanf("%d", &size);
	
	while(size < 1)
	{
		printf("Некорректный ввод, попробуйте еще раз\n");
		scanf("%d", &size);
	}
	
	a = (int*)malloc(size*sizeof(int));
	
	srand(time(0));
	
	for(i = 0; i < size; i++)
	{
		*(a + i) = rand()%101-50;
	}
	
	printf("Исходный массив\n");
	for(i = 0; i < size; i++)
	{
		printf("%d ", *(a + i));
	}
	
	printf("\n");
	
	size++;
	
	a = (int*)realloc(a, size*sizeof(int));
	a[size - 1] = 100; //*(a + size - 1) = 100;
	
	printf("Исходный массив\n");
	for(i = 0; i < size; i++)
	{
		printf("%d ", *(a + i));
	}
	
	size++;
	
	free(a);
	a = NULL;
	
	getch();
	
	return 0;
}
