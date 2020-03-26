#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251); //Установка кодировки Windows1251
	SetConsoleOutputCP(1251);
	//setlocale(LC_ALL, "rus");
	
	unsigned char s1, s2;
	
	printf("Введите символ\n");
	scanf("%c", &s1);
	
	printf("Введенный символ: %c\n", s1);
	printf("Его код %d\n", s1);
	
	fflush(stdin);
	
	printf("Введите символ\n");
	scanf("%c", &s2);
	
	printf("Введенный символ: %c\n", s2); //Для получения корректного кода из таблицы кодировки при выводе необходимо осуществить явно преобразование с безнаковым модификатором unsigned
	printf("Его код %d\n", s2); //Строки на базовом уровне реализованы с помощью массива символов
	
	getch();
	
	return 0;
}
