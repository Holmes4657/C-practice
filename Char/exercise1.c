#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251); //Setting the encoding Windows1251
	SetConsoleOutputCP(1251);
	
	unsigned char s1, s2;
	
	printf("Enter character\n");
	scanf("%c", &s1);
	
	printf("Entered character: %c\n", s1);
	printf("Its code: %d\n", s1);
	
	fflush(stdin);
	
	printf("Enter character\n");
	scanf("%c", &s2);
	
	printf("Entered character: %c\n", s2); //To get the correct code from the encoding table during output, you must explicitly convert with an unsigned modifier
	printf("Its code %d\n", s2); //Strings are implemented using a character array
	
	getch();
	
	return 0;
}
