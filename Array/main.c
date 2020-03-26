#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define clear() printf("\033[H\033[J") //For unix system

int a[20];
int m,n,val,i,j,pos,temp, i1, sum;
int location = 0;
float avg;

int main()
{
    srand(time(0));

    int choice;
    int choice2;
    int choice3;
    do{
        printf("\n\n--------Меню-----------\n");
        printf("1. Создать массив\n");
        printf("2. Показать массив\n");
        printf("3. Добавить элемент\n");
        printf("4. Удалить\n");
        printf("5. Максимальный\n");
        printf("6. Сортировать\n");
        printf("7. Сумма элементов массива\n");
        printf("8. Выход\n");
        printf("9. Минимальный\n");
        printf("10. Среднее арифметическое\n");
        printf("-----------------------\n");
        printf("Введите ваш выбор:\n");

            scanf("%d", &choice);
            clear();

            switch(choice)
            {
                case 1:

                    printf("1. Задать элементы массива\n");
                    printf("2. Случайный массив\n");
                            
                    scanf("%d", &choice2);

                    switch(choice2)
                    {
                        case 1:
                            printf("Сколько элементов в массиве вы хотите создать?\n");
                            scanf("%d", &n);
                            printf("Введите элементы массива:\n");
                            for(i = 0; i < n; i++)
                            {
                                scanf("%d", &a[i]);
                            }
                        break;

                        case 2:
                            printf("Сколько элементов в массиве вы хотите создать?\n");
                            scanf("%d",&n);
                            for(i = 0; i < n; i++) //Заполнение массива
                            {
                                a[i] = rand() % 100;
                            }

                            for(i = 0; i < n; i++) //Отображение полученного массива
                            {
                                printf("[%d] ", a[i]);
                            }
                        break;
                            }
                break;
                        
                    case 2:
                        printf("Элементы массива:\n"); //Отображение массива
                        for(i = 0; i < n; i++){
                            printf("[%d] ", a[i]);         
                        }
                    break;
                        
                    case 3:                
                        printf("Введите позицию нового элемента:\n"); //Добавить новый элемент         
                        scanf("%d",&pos);         
                        printf("Введите элемент:\n");         
                        scanf("%d",&val);         
                        for(i=n-1;i>=pos;i--)
                        {
                            a[i+1]=a[i];
                        }
                        a[pos]=val;
                        n=n+1;
                    break;
 
                    case 4:
                        printf("Введите позицию элемента который нужно удалить:\n"); //Удалить элемент
                        scanf("%d",&pos);
                        val=a[pos];
                        for(i=pos;i<n-1;i++)
                        {
                            a[i]=a[i+1];
                        }
                        n=n-1;
                        printf("Удаленный элемент = %d\n",val);
                    break;
                        
                    case 5:
                        for (i = 1; i < n; i++)
                            if (a[i] > a[location])
                            location = i;

                        printf("Максимальный элемент находится на позиции %d и его значение %d.\n", location+1, a[location]); //Максимальный элемент
                    break;
                        
                    case 6:
                        printf("1. По возрастанию\n");
                        printf("2. По убыванию\n");

                        scanf("%d", &choice3);

                        switch(choice3)
                        {
                            case 1:
                                for(i=0;i<n-1;i++)
                                {
                                    for(j=0;j<n-1-i;j++)                 
                                    {
                                        if(a[j]>a[j+1])
                                        {
                                            temp=a[j];
                                            a[j]=a[j+1];
                                            a[j+1]=temp;
                                        }
                                    }
                                }
                                printf("\nМассив после сортировки:\n");
                                for(i = 0; i < n; i++){
                                    printf("[%d] ", a[i]);         
                                }
                            break;

                            case 2:
                                for(i=0; i<n; i++)
                                {
                                    for(j=i+1; j<n; j++)
                                    {
                                        if(a[i] < a[j])
                                        {
                                            temp = a[i];
                                            a[i] = a[j];
                                            a[j] = temp;
                                        }
                                    }
                                }
                                printf("\nМассив после сортировки:\n");
                                for(i = 0; i < n; i++){
                                    printf("[%d] ", a[i]);         
                                }
                            break;
                            }
                    break;
                        
                    case 7:
                        for(i=0; i<n; i++)
                        {
                            sum = sum + a[i];
                        }

                        printf("Сумма всех элементов массива = %d\n", sum); //Сумма всех элементов
                    break;
                        
                    case 8:
                        exit(0);
                    break;

                    case 9:
                        for (i = 1; i < n; i++)
                            if (a[i] < a[location])
                                location = i;

                        printf("Минимальный элемент находится на позиции %d и его значение %d.\n", location+1, a[location]); //Минимальный элемент
                    break;

                    case 10:
                        for(i=0; i<n; i++)
                        {
                            sum = sum + a[i];
                        }

                        avg = sum / n;
                            
                        printf("Сумма всех элементов массива = %d\n", sum); //Сумма всех элементов
                        printf("Среднее арифметическое: %f\n", avg);
                    break;
                        
                    default:
                        printf("\nВыберите:\n");
                    break;
        }
    }while(choice!=8);
return 0;
}