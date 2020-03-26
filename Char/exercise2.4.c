#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

void trimStr(char*);

int main()
{
	SetConsoleCP(1251); //��������� ��������� Windows1251
	SetConsoleOutputCP(1251);
	
	char *str1, *str2;
	const int maxSize = 16;
	
	printf("������� ������\n");
	str1 = (char*)malloc(maxSize * sizeof(char)); //��������� ������ ��� ������ ������ 16 �������� 
	
	fgets(str1, maxSize, stdin); //��������� �� ����� 15 ��������
	
	trimStr(str1); //���� ���� ����� � ����� �������
	
	str1 = (char*)realloc(str1, (strlen(str1) + 1) * sizeof(char)); //����������������� ������ ��� ���������� ��������
	str2 = (char*)malloc((strlen(str1) + 1) * sizeof(char)); //��������� ������ ��� ����� ����� �� ������� ��� � ������
	
	strcpy(str2, str1); // ������� ����� ������
	printf("������ �����: %s\n", str2);
	
	free(str1);
	str1 = NULL;
	free(str2);
	str2 = NULL;
	
	getch();
	
	return 0;
}

void trimStr(char *s)
{
	if(s[strlen(s) - 1] == '\n')
		s[strlen(s) - 1] = '\0';
}
