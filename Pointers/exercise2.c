#include <stdio.h>
#include <locale.h>

void SqPer(int, int, int *, int *);

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a, b, S, P;
	
	printf("Введите ширину и длину прямоугольника\n");
	scanf("%d %d", &a, &b);
	
	SqPer(a, b, &S, &P);
	
	printf("Периметр прямоугольника: %d\n", P);
	printf("Прямоугольника: %d\n", S);
	
	getch();
	
	return 0;
}

void SqPer(int a, int b, int *pS, int *pP)
{
	*pS = a * b;
	
	*pP = (a + b) * 2;
}
