#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251); //��������� ��������� Windows1251
	SetConsoleOutputCP(1251);
	//setlocale(LC_ALL, "rus");
	
	unsigned char s1, s2;
	
	printf("������� ������\n");
	scanf("%c", &s1);
	
	printf("��������� ������: %c\n", s1);
	printf("��� ��� %d\n", s1);
	
	fflush(stdin);
	
	printf("������� ������\n");
	scanf("%c", &s2);
	
	printf("��������� ������: %c\n", s2); //��� ��������� ����������� ���� �� ������� ��������� ��� ������ ���������� ����������� ���� �������������� � ���������� ������������� unsigned
	printf("��� ��� %d\n", s2); //������ �� ������� ������ ����������� � ������� ������� ��������
	
	getch();
	
	return 0;
}
