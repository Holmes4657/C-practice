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
	
	char **str = NULL;
	int size = 0, sw1, sw2, fexit = 0, i, j;
	const int maxSize = 16;
	char temp[maxSize];
	
	do
	{
		printf("Обработка списка имен\n");
		printf("1. Добавление\n");
		printf("2. Вывод\n");
		printf("3. Поиск\n");
		printf("4. Редактирование\n");
		printf("5. Сортировка\n");
		printf("6. Удаление\n");
		printf("7. Выход");
		printf("Выбеоите пункт меню\n");
		scanf("%d", &sw1);
		
		switch(sw1)
		{
			case 1:
				printf("выберите вариант добавления:\n");
				printf("1. Одно имя\n");
				printf("2. Несколько имен\n");
				scanf("%d", &sw2);
				
				switch(sw2)
				{
					case 1:
						size++; //Увеление количество имен(количество элементов массива указателей)
						str = (char**)realloc(str, size * sizeof(char*)); //Увелечиваем массив указателей на один элемент
						printf("Введите имя\n");
						fflush(stdin);
						fgets(temp, maxSize, stdin);
						trimStr(temp);
						str[size - 1] = (char*)malloc((strlen(temp)+1) * sizeof(char)); //Выделение памяти размером необходимым для хранения веденного имени и запись адреса начала выделенного блока памяти в последний добавленный указатель
						strcpy(str[size - 1], temp); //Копируем из временной строки в подготовленную для хранения
					break;
					
					case 2:
						
					break;
				}
			break;
			
			case 2:
				printf("Вывод списка имен:\n");
				for(i = 0; i < size; i++)
				{
					printf("%d) %s\n", i + 1, str[i]);
				}
			break;
			
			case 3:
				
			break;
			
			case 4:
				
			break;
			
			case 5:
				{
				}
				char *buff;
				for(j = 0; j < size - 1; j++)
				{
					for(i = 0; i < size - 1 - j; i++)
					{
						if(strcmp(str[i], str[i + 1]) > 0)
						{
							buff = str[i];
							str[i] = str[i + 1];
							str[i + 1] = buff;
						}
					}
				}
				
			break;
			
			case 6:
				
			break;
			
			case 7:
				fexit = 1;
				for(i = 0; i < size; i++)
				{
					free(str[i]);
				}
				free(str);
				str = NULL;
			break;
		}
	}while(fexit == 0);
	
	getch();
	
	return 0;
}

void trimStr(char *s)
{
	if(s[strlen(s) - 1] == '\n')
		s[strlen(s) - 1] = '\0';
}
