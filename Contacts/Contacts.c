#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

struct Date
{
	int day;
	int month;
	int year;
};

struct Human
{
	char *name;
	struct Date *dateIn;
	int room;
	struct Date *dateOut;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	struct Human **h = NULL;
	
	int i, j, sw1, sw2, fExit = 0;
	const int maxSize = 16; //Максимальный размер имени
	char name[maxSize];
	int size = 5; //Количество людей
	
	h = (struct Human**)malloc(size*sizeof(struct Human*));
	
	h[0] = (struct Human*)malloc(1*sizeof(struct Human));
	h[0]->name = (char*)malloc(5*sizeof(char));
	strcpy(h[0]->name, "Имя1");
	h[0]->dateIn = (struct Date*)malloc(1*sizeof(struct Date));
	h[0]->dateIn->day   = 5;
	h[0]->dateIn->month = 7;
	h[0]->dateIn->year  = 2019;
	h[0]->room          = 758;
	h[0]->dateOut = (struct Date*)malloc(1*sizeof(struct Date));
	h[0]->dateOut->day   = 25;
	h[0]->dateOut->month = 7;
	h[0]->dateOut->year  = 2019;
	
	h[1] = (struct Human*)malloc(1*sizeof(struct Human));
	h[1]->name = (char*)malloc(5*sizeof(char));
	strcpy(h[1]->name, "Имя2");
	h[1]->dateIn = (struct Date*)malloc(1*sizeof(struct Date));
	h[1]->dateIn->day   = 11;
	h[1]->dateIn->month = 2;
	h[1]->dateIn->year  = 2017;
	h[1]->room          = 100;
	h[1]->dateOut = (struct Date*)malloc(1*sizeof(struct Date));
	h[1]->dateOut->day   = 27;
	h[1]->dateOut->month = 8;
	h[1]->dateOut->year  = 2018;
	
	h[2] = (struct Human*)malloc(1*sizeof(struct Human));
	h[2]->name = (char*)malloc(5*sizeof(char));
	strcpy(h[2]->name, "Имя3");
	h[2]->dateIn = (struct Date*)malloc(1*sizeof(struct Date));
	h[2]->dateIn->day   = 1;
	h[2]->dateIn->month = 3;
	h[2]->dateIn->year  = 1986;
	h[2]->room          = 702;
	h[2]->dateOut = (struct Date*)malloc(1*sizeof(struct Date));
	h[2]->dateOut->day   = 29;
	h[2]->dateOut->month = 1;
	h[2]->dateOut->year  = 1988;
	
	h[3] = (struct Human*)malloc(1*sizeof(struct Human));
	h[3]->name = (char*)malloc(5*sizeof(char));
	strcpy(h[3]->name, "Имя4");
	h[3]->dateIn = (struct Date*)malloc(1*sizeof(struct Date));
	h[3]->dateIn->day   = 17;
	h[3]->dateIn->month = 12;
	h[3]->dateIn->year  = 2012;
	h[3]->room          = 72;
	h[3]->dateOut = (struct Date*)malloc(1*sizeof(struct Date));
	h[3]->dateOut->day   = 21;
	h[3]->dateOut->month = 6;
	h[3]->dateOut->year  = 2013;
	
	h[4] = (struct Human*)malloc(1*sizeof(struct Human));
	h[4]->name = (char*)malloc(5*sizeof(char));
	strcpy(h[4]->name, "Имя5");
	h[4]->dateIn = (struct Date*)malloc(1*sizeof(struct Date));
	h[4]->dateIn->day   = 8;
	h[4]->dateIn->month = 8;
	h[4]->dateIn->year  = 2020;
	h[4]->room          = 7;
	h[4]->dateOut = (struct Date*)malloc(1*sizeof(struct Date));
	h[4]->dateOut->day   = 11;
	h[4]->dateOut->month = 2;
	h[4]->dateOut->year  = 2021;
	
	do
	{
		printf("1. Добавить запись\n");
		printf("2. Вывести на экран все записи\n");
		printf("3. Поиск\n");
		printf("4. Удалить запись по порядковому номеру\n");
		printf("5. Сортировать\n");
		printf("6. Выход\n\n");
		printf("Выберите\n");
		scanf("%d", &sw1);
		
		switch(sw1)
		{
			case 1:
				{
					system("cls");
					printf("Выберите вариант добавление\n");
					printf("1. Одна запись\n");
					printf("2. Несколько записей\n");
					scanf("%d", &sw2);
					
					switch(sw2)
					{
						case 1:
							{
								size++;
								h = (struct Human**)realloc(h, size*sizeof(struct Human*)); //Увеличение массива указателей на один элемент, для хранение информации о новом человеке
								h[size-1] = (struct Human*)malloc(1*sizeof(struct Human)); //Выделение памяти для хранения всех полей одного человека и запись адреса выделенной памяти в значении последнего добавленного указателя
								
								//Ввод имени
								printf("Введите имя\n");
								fflush(stdin);
								fgets(name, maxSize, stdin);
								
								//Обрезание
								if(name[strlen(name) - 1]=='\n') 
									name[strlen(name) - 1] = '\0';
								
								
								h[size - 1]->name = (char*)malloc((strlen(name)+1)*sizeof(char));
								strcpy(h[size - 1]->name, name);
								
								//Дата заезда DD.MM.YYYY
								h[size - 1]->dateIn = (struct Date*)malloc(1*sizeof(struct Date)); //Выделение памяти для даты заезда
								printf("Введите число заезда\n");
								scanf("%d", &h[size-1]->dateIn->day);
								printf("Введите месяц заезда\n");
								scanf("%d", &h[size-1]->dateIn->month);
								printf("Введите год заезда\n");
								scanf("%d", &h[size-1]->dateIn->year);
								
								//Номер комнаты
								printf("Введите номер комнаты\n");
								scanf("%d", &h[size-1]->room);
								
								//Дата выезда DD.MM.YYYY
								h[size - 1]->dateOut = (struct Date*)malloc(1*sizeof(struct Date)); //Выделение памяти для даты выезда
								printf("Введите число выезда\n");
								scanf("%d", &h[size-1]->dateOut->day);
								printf("Введите месяц выезда\n");
								scanf("%d", &h[size-1]->dateOut->month);
								printf("Введите год выезда\n");
								scanf("%d", &h[size-1]->dateOut->year);
								system("cls");
							}
						break;
						
						case 2:
							{
								
							}
						break;
						
						default:
							{
								
							}
						break;
					}
				}
			break;
			
			case 2:
				{
					system("cls");
					printf("Вывод списка отдыхающих:\n");
					for(i = 0; i < size; i++)
					{
						printf("|%2d|%16s|%.2d.%.2d.%4d|%4d|%.2d.%.2d.%4d|\n", 
						i+1, h[i]->name, 												//Имя
						h[i]->dateIn->day, h[i]->dateIn->month, h[i]->dateIn->year, 	//Дата заезда
						h[i]->room, 													//Комната
						h[i]->dateOut->day, h[i]->dateOut->month, h[i]->dateOut->year); //Дата выезда
					}
					
					getch();
					system("cls");
				}
				
			break;
			
			case 3:
				system("cls");
				printf("По какому атрибуты вы хотите найти?\n");
				printf("1. ФИО\n");
				printf("2. Дата заезда\n");
				printf("3. Номер комнаты\n");
				printf("4. Дата выезда\n");
				scanf("%d", &sw2);
				system("cls");
			break;
			
			case 4:
				system("cls");
				printf("Введите порядковый номер\n");
				scanf("%d", &sw2);
				system("cls");
			break;
			
			case 5:
				system("cls");
				printf("По какому атрибуты вы хотите найти?\n");
				printf("1. По дате заселения\n");
				printf("2. ФИО\n");
				printf("3. Номер комнаты\n");
				printf("4. По дате выселения\n");
				scanf("%d", &sw2);
				
				switch(sw2)
				{
					//По дате заселения
					case 1:
						{
							struct Human *tmp;
							for(j = 0; j < size - 1; j++)
							{
								for(i = 0; i < size - 1 - j; i++)
								{
									if((h[i]->dateIn->year  > h[i+1]->dateIn->year) ||
									(   h[i]->dateIn->year == h[i+1]->dateIn->year && h[i]->dateIn->month  > h[i+1]->dateIn->month) ||
									(   h[i]->dateIn->year == h[i+1]->dateIn->year && h[i]->dateIn->month == h[i+1]->dateIn->month && h[i]->dateIn->day>h[i+1]->dateIn->day))
									{
										tmp = h[i];
										h[i] = h[i+1];
										h[i + 1] = tmp;
									}
								}
							}
						}
					break;
						
					//ФИО
					case 2:
						{
							char *buff;
							for(j = 0; j < size - 1; j++)
							{
								for(i = 0; i < size - 1 - j; i++)
								{
									if(strcmp(h[i]->name, h[i + 1]) > 0)
									{
										buff = h[i];
										h[i] = h[i + 1];
										h[i + 1] = buff;
									}
								}
							}
						}
					break;
					
					//Номер комнаты
					case 3:
						
					break;
					
					//По дате выселения
					case 4:
						{
							struct Human *tmp;
							for(j = 0; j < size - 1; j++)
							{
								for(i = 0; i < size - 1 - j; i++)
								{
									if((h[i]->dateIn->year  > h[i+1]->dateIn->year) ||
									(   h[i]->dateIn->year == h[i+1]->dateIn->year && h[i]->dateIn->month  > h[i+1]->dateIn->month) ||
									(   h[i]->dateIn->year == h[i+1]->dateIn->year && h[i]->dateIn->month == h[i+1]->dateIn->month && h[i]->dateIn->day>h[i+1]->dateIn->day))
									{
										tmp = h[i];
										h[i] = h[i+1];
										h[i + 1] = tmp;
									}
								}
							}
						}
					break;
				}
				system("cls");
			break;
			
			case 6:
				{
					//Выход из программы
					fExit = 1;
					for(i = 0; i < size; i++)
					{
						free(h[i]->name);
						free(h[i]->dateIn);
						free(h[i]->dateOut);
						free(h[i]);
					}
					free(h);
					h = NULL;
				}
			break;
		}
	}while(fExit == 0);
	
	return 0;
}
