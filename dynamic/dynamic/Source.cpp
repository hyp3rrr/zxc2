#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h> 
#include <time.h>


int main() {
	// �������� ������ ������� size * size2
	int size, i,size2 ;
	printf("VVedite kol-vo stolbcov massiva:\n");
	scanf("%d", &size);
	printf("VVedite kol-vo strok massiva:\n");
	scanf("%d", &size2);
	int** array = (int**)malloc(sizeof(int*)* size); // ���. ��������� ������ ��� �������
	for (i = 0; i < size; i++)
		array[i] = (int*)malloc(sizeof(int*)* size2); // ���. ��������� ������ ��� ������
	
	srand(time(NULL));
	for (int j = 0; j < size2; j++){ 
		for (i = 0; i < size; i++)
		{
			*array[i] = rand() % 2; // ������������ ������� �������� ��������� ��������
			printf("%d\t", *array[i]); // ����� ������

		}
		printf("\n"); // ���������� �������
	}
	for (i = 0; i < size; i++)// ������� ������
		free(array[i]);
	free(array);
	system("pause");
}

