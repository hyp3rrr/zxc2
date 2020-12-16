#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;
int i, j, m;
bool* visited = new bool[m];
int** graph;

void DFS(int st)
{	
	
	visited[st] = true;
	printf("%d ", st+1);
	for (int q = 0; q <= m; q++)
	{
		if ((graph[st][q] == 1) && (!visited[q]))
		{
			DFS(q);
		}
	}
}
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("������� ������ ������� (x*x): ");
	scanf_s("%d", &m);
	printf("\n\n");
	////�������� � ��������� �����
	graph = new int*[m];
	for (int i = 0; i < m; i++) {
		graph[i] = new int[m];
	}

	srand(time(NULL));
	for (i = 0; i < m; ++i){
		for (j = i; j < m; ++j){
			//if ((i % 2>0) && (j % 2>0))
		//	{
				graph[i][j] = graph[j][i] = rand() % 2;
		//	}
			//else
		//	{
		////		graph[i][j] = graph[j][i] = 0;
		///	}
		}
	}
	for (i = 0; i < m; ++i){
		for (j = i; j < m; ++j){
			if (j == i)
			{
				graph[j][i] = 0;

			}
		}
	}


	////////////////////////// ����� ����� ////////
	printf("  \t");
		for (j = 0; j < m; j++)
		{
			printf("x%d\t", j + 1);
		}
		printf("\n\n");

		for (i = 0; i < m; ++i)
		{
			printf("x%d\t", i + 1);
				for (j = 0; j < m; ++j)
				printf("%d\t", graph[i][j]);
				printf("\n\n\n");
		}

	/////////////////// DFS
	int vershina;
	printf("\n������� ������� � ������� ������: ");
	scanf_s("%d", &vershina);
		while (vershina > m) {
			printf("\n����� ������� �� ����������\n");
			printf("\n������� ������� � ������� ������: ");
			scanf_s("%d", &vershina);
		}

		for (i = 0; i < m; i++){
			visited[i] = false; // �������� ��� !visited ��� �������
		}

	printf("������� ������ � �������: ");
	DFS(vershina - 1);

	_getch();
}

