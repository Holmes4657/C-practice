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
	
	char **str = NULL;
	int size = 0, sw1, sw2, fexit = 0, i, j;
	const int maxSize = 16;
	char temp[maxSize];
	
	do
	{
		printf("��������� ������ ����\n");
		printf("1. ����������\n");
		printf("2. �����\n");
		printf("3. �����\n");
		printf("4. ��������������\n");
		printf("5. ����������\n");
		printf("6. ��������\n");
		printf("7. �����");
		printf("�������� ����� ����\n");
		scanf("%d", &sw1);
		
		switch(sw1)
		{
			case 1:
				printf("�������� ������� ����������:\n");
				printf("1. ���� ���\n");
				printf("2. ��������� ����\n");
				scanf("%d", &sw2);
				
				switch(sw2)
				{
					case 1:
						size++; //�������� ���������� ����(���������� ��������� ������� ����������)
						str = (char**)realloc(str, size * sizeof(char*)); //����������� ������ ���������� �� ���� �������
						printf("������� ���\n");
						fflush(stdin);
						fgets(temp, maxSize, stdin);
						trimStr(temp);
						str[size - 1] = (char*)malloc((strlen(temp)+1) * sizeof(char)); //��������� ������ �������� ����������� ��� �������� ��������� ����� � ������ ������ ������ ����������� ����� ������ � ��������� ����������� ���������
						strcpy(str[size - 1], temp); //�������� �� ��������� ������ � �������������� ��� ��������
					break;
					
					case 2:
						
					break;
				}
			break;
			
			case 2:
				printf("����� ������ ����:\n");
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
