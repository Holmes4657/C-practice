#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

void trimStr(char*);

int main()
{
	SetConsoleCP(1251); //Установка кодировки Windows1251
	SetConsoleOutputCP(1251);
	
	char str1[16], str2[16];
	
	printf("Введеите строку\n");
	fgets(str1, 16, stdin);
	
	trimStr(str1);
	
	strcpy(str2, str1);
	
	printf("Строка копия: %s\n", str2);
	
	getch();
	
	return 0;
}

void trimStr(char *s)
{
	if(s[strlen(s) - 1] == '\n')
		s[strlen(s) - 1] = '\0';
}
