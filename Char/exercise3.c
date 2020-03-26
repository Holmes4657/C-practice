#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void trimStr(char*);

int main()
{
	SetConsoleCP(1251); //Установка кодировки Windows1251
	SetConsoleOutputCP(1251);
	
	const int maxSize = 256;
	
	char *str = NULL;
	
	str = (char*)malloc(maxSize * sizeof(char));
	
	printf("Введите строку\n");
	fgets(str, maxSize, stdin);
	
	trimStr(str);
	
	str = (char*)realloc(str, (strlen(str) + 1) * sizeof(char));
	
	printf("Введенная строка: %s\n", str);
	
	free(str);
	str = NULL;
	
	getch();
	
	return 0;
}

void trimStr(char *s)
{
	if(s[strlen(s) - 1] == '\n')
		s[strlen(s) - 1] = '\0';
}
