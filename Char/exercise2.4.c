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
	str1 = (char*)malloc(maxSize * sizeof(char)); //Выделение памяти для строки размер 16 символов 
	
	fgets(str1, maxSize, stdin); //Считываем не более 15 символов
	
	trimStr(str1); //Если есть мусов в конце убираем
	
	str1 = (char*)realloc(str1, (strlen(str1) + 1) * sizeof(char)); //Перераспределение памяти под количество символов
	str2 = (char*)malloc((strlen(str1) + 1) * sizeof(char)); //Выделение памяти для копии таким же объемом как и первая
	
	strcpy(str2, str1); // Создаем копию строки
	printf("Строка копия: %s\n", str2);
	
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
