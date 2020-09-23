#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h> 
#include <time.h>


int main() {
	// Создадим массив размера size * size2
	int size, i,size2 ;
	printf("VVedite kol-vo stolbcov massiva:\n");
	scanf("%d", &size);
	printf("VVedite kol-vo strok massiva:\n");
	scanf("%d", &size2);
	int** array = (int**)malloc(sizeof(int*)* size); // дин. выделение памяти под столбцы
	for (i = 0; i < size; i++)
		array[i] = (int*)malloc(sizeof(int*)* size2); // дин. выделение памяти под строки
	
	srand(time(NULL));
	for (int j = 0; j < size2; j++){ 
		for (i = 0; i < size; i++)
		{
			*array[i] = rand() % 2; // присваивание каждому элементу случайное значение
			printf("%d\t", *array[i]); // вывод строки

		}
		printf("\n"); // добавление столбца
	}
	for (i = 0; i < size; i++)// очистка памяти
		free(array[i]);
	free(array);
	system("pause");
}

