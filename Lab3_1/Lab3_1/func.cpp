#include "header.h"
#include <iostream>
void ex2(){
	
	int const n = m;
	int a[m][n];
	int b[m][n];
	srand(time(NULL));
	for (int j = 0; j < m; j++){
		/*printf("%d|\t", j + 1);*/
		for (int i = 0; i < m; i++)
		{



			a[j][i] = rand() % 2;


			if (j == i)
			{
				a[j][i] = 0;

			}
			//printf("%d\t", a[j][i]);
		}


		printf("\n\n"); // ���������� �������
	}
	////////////////////////////////////////////// ����� 1 �������///////
	printf("------------------------------�������1----------------------------\n");
	for (int j = 0; j < m; j++){
		printf("\t%d", j + 1);

	}

	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{
			if (a[j][i] == 1)
			{
				a[i][j] = 1;
			}
			if (a[i][j] == 1)
			{
				a[j][i] = 1;
			}
			printf("%d\t", a[j][i]);
		}

		printf("\n\n");
	}
	printf("------------------------------------------------------------------\n");
	////////////////////////////��������������
	
	printf("Vershina 1:\n");
	int symbol = 0;
	scanf_s("%d", &symbol);
	printf("Vershina 2:\n");
	int symbol2 = 0;
	scanf_s("%d", &symbol2);

	for (int j = 0; j < m; j++)
	{
		a[j][symbol - 1] += a[j][symbol2 - 1];
		a[j][symbol2 - 1] = 0;
		a[symbol2 - 1][j] = 0;
	}
	a[symbol2 - 1][symbol - 1] = 0;
	////// ����������
	printf("------------------------------����������----------------------------\n");

	for (int j = 0; j < m; j++){
		printf("\t%d", j + 1);

	}
	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{

			printf("%d\t", a[j][i]);
		}

		printf("\n\n");
	}

	system("pause");
}
void ex3(){
	
	int const n = m;
	int a[m][n];
	int b[m][n];
	srand(time(NULL));
	for (int j = 0; j < m; j++){
		/*printf("%d|\t", j + 1);*/
		for (int i = 0; i < m; i++)
		{



			a[j][i] = rand() % 2;


			if (j == i)
			{
				a[j][i] = 0;

			}
			//printf("%d\t", a[j][i]);
		}


		printf("\n\n"); // ���������� �������
	}
	////////////////////////////////////////////// ����� 1 �������///////
	printf("------------------------------�������1----------------------------\n");
	for (int j = 0; j < m; j++){
		printf("\t%d", j + 1);

	}

	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{
			if (a[j][i] == 1)
			{
				a[i][j] = 1;
			}
			if (a[i][j] == 1)
			{
				a[j][i] = 1;
			}
			printf("%d\t", a[j][i]);
		}

		printf("\n\n");
	}
	printf("------------------------------------------------------------------\n");
	////////////////////////////��������������
	printf("Vershina 1:\n");
	int symbol = 0;
	scanf_s("%d", &symbol);
	printf("Vershina 2:\n");
	int symbol2 = 0;
	scanf_s("%d", &symbol2);

	for (int j = 0; j < m; j++)
	{
		a[j][symbol - 1] += a[j][symbol2 - 1];
		a[j][symbol2 - 1] = 0;
		a[symbol2 - 1][j] = 0;
		int i = 0;
		if (j == symbol - 1)
		{
			a[j][i] = 0;
		}
	}
	a[symbol2 - 1][symbol - 1] = 0;

	////// ����������
	printf("------------------------------����������----------------------------\n");
	for (int j = 0; j < m; j++){
		printf("\t%d", j + 1);

	}
	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{

			printf("%d\t", a[j][i]);
		}

		printf("\n\n");
	}

	system("pause");
}
void ex4(){
	int const n = m;
	int a[m][n] = {0};
	srand(time(NULL));
	for (int j = 0; j < m-1; j++){
		/*printf("%d|\t", j + 1);*/
		for (int i = 0; i < m-1; i++)
		{



			a[j][i] = rand() % 2;


			if (j == i)
			{
				a[j][i] = 0;
				

			}
			//printf("%d\t", a[j][i]);
		}


		printf("\n\n"); // ���������� �������
	}
	////////////////////////////////////////////// ����� 1 �������///////
	printf("------------------------------�������1----------------------------\n");
	for (int j = 0; j < m; j++){
		printf("\t%d", j + 1);

	}

	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{
			if (a[j][i] == 1)
			{
				a[i][j] = 1;
			}
			if (a[i][j] == 1)
			{
				a[j][i] = 1;
			}
			printf("%d\t", a[j][i]);
		}

		printf("\n\n");
	}
	printf("------------------------------------------------------------------\n");

	printf("Vershina 1:\n");
	int symbol = 0;
	scanf_s("%d", &symbol);
	printf("Vershina 2:\n");
	int symbol2 = 0;
	scanf_s("%d", &symbol2);
	a[symbol2 - 1][symbol - 1] = 0;
	a[symbol - 1][symbol2 - 1] = 0;

	a[symbol2 - 1][m-1] = 1;
	a[symbol - 1][m-1] = 1;
	a[m - 1][symbol2 - 1] = 1;
	a[m - 1][symbol - 1] = 1;

	////// ����������
	printf("------------------------------����������----------------------------\n");
	for (int j = 0; j < m; j++){
		printf("\t%d", j + 1);

	}
	printf("\n");

	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{

			printf("%d\t", a[j][i]);
		}

		printf("\n\n");
	}

	system("pause");
}
void ex5(){
	int const n = m;
	int a[m][n];
	int b[m][n];
	srand(time(NULL));
	for (int j = 0; j < m; j++){
		/*printf("%d|\t", j + 1);*/
		for (int i = 0; i < m; i++)
		{



			a[j][i] = rand() % 2;
			b[j][i] = rand() % 2;// ������������ ������� �������� ��������� ��������


			if (j == i)
			{
				a[j][i] = 0;
				b[j][i] = 0;

			}
			//printf("%d\t", a[j][i]);
		}


		printf("\n\n"); // ���������� �������
	}
	////////////////////////////////////////////// ����� 1 �������///////
	printf("------------------------------�������1----------------------------\n");
	for (int j = 0; j < m; j++){
		printf("\t%d", j + 1);

	}

	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{
			if (a[j][i] == 1)
			{
				a[i][j] = 1;
			}
			if (a[i][j] == 1)
			{
				a[j][i] = 1;
			}
			printf("%d\t", a[j][i]);
		}

		printf("\n\n");
	}
	printf("------------------------------------------------------------------\n");
	////////////////////////////////////////////// ����� 2 �������///////
	printf("------------------------------�������2----------------------------\n");
	for (int j = 0; j < m; j++){
		printf("\t%d", j + 1);

	}

	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{
			if (b[j][i] == 1)
			{
				b[i][j] = 1;
			}
			if (b[i][j] == 1)
			{
				b[j][i] = 1;
			}
			printf("%d\t", b[j][i]);
		}

		printf("\n\n");
	}
	////////////////////////////��������������



	for (int j = 0; j < m; j++){
		for (int i = 0; i < m; i++)
		{

			a[i][j] += b[i][j];
			if (a[i][j] != 0)
			{
				a[i][j] = 1;
			}

		}
	}
		////////////����� ���-��
	printf("------------------------------����������----------------------------\n");
		printf("\n");
		printf("------------------------------------------------------------------\n");
		for (int j = 0; j < m; j++){
			printf("%d|\t", j + 1);
			for (int i = 0; i < m; i++)
			{

				printf("%d\t", a[j][i]);
			}

			printf("\n\n");
		}


	system("pause");
}
void ex6(){
	int const n = m;
	int a[m][n];
	int b[m][n];
	srand(time(NULL));
	for (int j = 0; j < m; j++){
		/*printf("%d|\t", j + 1);*/
		for (int i = 0; i < m; i++)
		{



			a[j][i] = rand() % 2;
			b[j][i] = rand() % 2;// ������������ ������� �������� ��������� ��������


			if (j == i)
			{
				a[j][i] = 0;
				b[j][i] = 0;

			}
			//printf("%d\t", a[j][i]);
		}


		printf("\n\n"); // ���������� �������
	}
	////////////////////////////////////////////// ����� 1 �������///////
	printf("------------------------------�������1----------------------------\n");
	for (int j = 0; j < m; j++){
		printf("\t%d", j + 1);

	}

	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{
			if (a[j][i] == 1)
			{
				a[i][j] = 1;
			}
			if (a[i][j] == 1)
			{
				a[j][i] = 1;
			}
			printf("%d\t", a[j][i]);
		}

		printf("\n\n");
	}
	printf("------------------------------------------------------------------\n");
	////////////////////////////////////////////// ����� 2 �������///////
	printf("------------------------------�������2----------------------------\n");
	for (int j = 0; j < m; j++){
		printf("\t%d", j + 1);

	}

	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{
			if (b[j][i] == 1)
			{
				b[i][j] = 1;
			}
			if (b[i][j] == 1)
			{
				b[j][i] = 1;
			}
			printf("%d\t", b[j][i]);
		}

		printf("\n\n");
	}
	////////////////////////////��������������



	for (int j = 0; j < m; j++){
		for (int i = 0; i < m; i++)
		{

			if ((a[i][j]+=b[i][j])>1)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = 0;
			}

		}
	}
	////////////����� ���-��
	printf("------------------------------����������----------------------------\n");
	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{

			printf("%d\t", a[j][i]);
		}

		printf("\n\n");
	}


	system("pause");
}
void ex7(){
	int const n = m;
	int a[m][n];
	int b[m][n];
	srand(time(NULL));
	for (int j = 0; j < m; j++){
		/*printf("%d|\t", j + 1);*/
		for (int i = 0; i < m; i++)
		{



			a[j][i] = rand() % 2;
			b[j][i] = rand() % 2;// ������������ ������� �������� ��������� ��������


			if (j == i)
			{
				a[j][i] = 0;
				b[j][i] = 0;

			}
			//printf("%d\t", a[j][i]);
		}


		printf("\n\n"); // ���������� �������
	}
	////////////////////////////////////////////// ����� 1 �������///////
	printf("------------------------------�������1----------------------------\n");
	for (int j = 0; j < m; j++){
		printf("\t%d", j + 1);

	}

	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{
			if (a[j][i] == 1)
			{
				a[i][j] = 1;
			}
			if (a[i][j] == 1)
			{
				a[j][i] = 1;
			}
			printf("%d\t", a[j][i]);
		}

		printf("\n\n");
	}
	printf("------------------------------------------------------------------\n");
	////////////////////////////////////////////// ����� 2 �������///////
	printf("------------------------------�������2----------------------------\n");
	for (int j = 0; j < m; j++){
		printf("\t%d", j + 1);

	}

	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{
			if (b[j][i] == 1)
			{
				b[i][j] = 1;
			}
			if (b[i][j] == 1)
			{
				b[j][i] = 1;
			}
			printf("%d\t", b[j][i]);
		}

		printf("\n\n");
	}
	////////////////////////////��������������



	for (int j = 0; j < m; j++){
		for (int i = 0; i < m; i++)
		{

			if ((a[i][j] += b[i][j])>1)
			{
				a[i][j] = 0;
			}
			else if ((a[i][j] += b[i][j])>0)
			{
				a[i][j] = 1;
			}

		}
	}
	////////////����� ���-��
	printf("------------------------------����������----------------------------\n");
	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{

			printf("%d\t", a[j][i]);
		}

		printf("\n\n");
	}


	system("pause");
}
void ex1(){
	int const n = m;
	int a[m][n];
	int b[m][n];
	srand(time(NULL));
	for (int j = 0; j < m; j++){
		/*printf("%d|\t", j + 1);*/
		for (int i = 0; i < m; i++)
		{



			a[j][i] = rand() % 2;
			b[j][i] = rand() % 2;// ������������ ������� �������� ��������� ��������


			if (j == i)
			{
				a[j][i] = 0;
				b[j][i] = 0;

			}
			//printf("%d\t", a[j][i]);
		}


		printf("\n\n"); // ���������� �������
	}
	////////////////////////////////////////////// ����� 1 �������///////
	printf("------------------------------�������1----------------------------\n");
	for (int j = 0; j < m; j++){
		printf("\t%d", j + 1);

	}

	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
		printf("%d|\t", j + 1);
		for (int i = 0; i < m; i++)
		{
			if (a[j][i] == 1)
			{
				a[i][j] = 1;
			}
			if (a[i][j] == 1)
			{
				a[j][i] = 1;
			}
			printf("%d\t", a[j][i]);
		}

		printf("\n\n");
	}
	printf("------------------------------------------------------------------\n");
	////////////////////////////////////////////// ����� 2 �������///////
	printf("------------------------------�������2----------------------------\n");
	for (int j = 0; j < m; j++){
	printf("\t%d", j + 1);

	}

	printf("\n");
	printf("------------------------------------------------------------------\n");
	for (int j = 0; j < m; j++){
	printf("%d|\t", j + 1);
	for (int i = 0; i < m; i++)
	{
	if (b[j][i] == 1)
	{
	b[i][j] = 1;
	}
	if (b[i][j] == 1)
	{
	b[j][i] = 1;
	}
	printf("%d\t", b[j][i]);
	}

	printf("\n\n");
	}
	system("pause");

}
void menu(){
	{
		system("CLS");
		printf("-----------------------------------\n");
		printf("1 - ����� ������-------------------\n");
		printf("-----------------------------------\n");
		printf("2 - ��������������-----------------\n");
		printf("3 - ����������---------------------\n");
		printf("4 - �����������--------------------\n");
		printf("-----------------------------------\n");
		printf("5 - �����������--------------------\n");
		printf("6 - �����������--------------------\n");
		printf("7 - ��������� �����----------------\n");

	}
}
void menu_input(char i)
{
	if (i == '1'){ ex1(); }
	if (i == '2'){ ex2(); }
	if (i == '3'){ ex3(); }
	if (i == '4'){ ex4(); }
	if (i == '5'){ ex5(); }
	if (i == '6'){ ex6(); }
	if (i == '7'){ ex7(); }
}