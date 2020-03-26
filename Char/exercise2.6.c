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
	
	char *str1, *str2;
	const int maxSize = 16;
	
	printf("Введите строку\n");
	str1 = (char*)malloc(maxSize * sizeof(char));
	fgets(str1, maxSize, stdin);
	trimStr(str1);
	str1 = (char*)realloc(str1, (strlen(str1) + 1) * sizeof(char)); //Перераспределение памяти под количество символов
	
	printf("Введите строку\n");
	str2 = (char*)malloc(maxSize * sizeof(char));
	fgets(str2, maxSize, stdin);
	trimStr(str2);
	str2 = (char*)realloc(str2, (strlen(str2) + 1) * sizeof(char)); //Перераспределение памяти под количество символов
	
	char *str3;
	str3 = (char*)malloc((strlen(str1) + strlen(str2)+1) * sizeof(char));
	
	strcpy(str3, str1);
	strcat(str3, str2);
	
	printf("рузльтат объединения: %s\n", str3);
	
	free(str1); str1 = NULL;
	free(str2); str2 = NULL;
	free(str3); str3 = NULL;
	
	getch();
	
	return 0;
}

void trimStr(char *s)
{
	if(s[strlen(s) - 1] == '\n')
		s[strlen(s) - 1] = '\0';
}
