#include <stdio.h>
#include <conio.h>
#include <locale.h>

int sum(int, int);

int main()
{
	setlocale(LC_ALL, "rus");
	
	int a, b;
	
	printf("������� ��� �����\n");
	scanf("%d %d", &a, &b);
	
	printf("����� ����� %d\n", sum(a, b));
	
	getch();
}

int sum(int a, int b)
{
	return (a + b);
}
