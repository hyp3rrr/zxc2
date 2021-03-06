#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <locale.h>
#include <stdlib.h>
#include <queue>
using namespace std;
int i, j, m;
bool* visited = new bool[m];
int** graph;

void BFS(int st)
{
	queue<int> Queue; // ������������� �������
	Queue.push(st); // �������� � ������� �������
	visited[st] = true; //�������� ������� ��� ����������
	while (!Queue.empty()){
// ���� ������� �� ������ 
		st = Queue.front(); // ��������� �������
		Queue.pop(); // ������� ������ ������� �� �������
		for (int k = 0; k < m; k++)
		{ // ��������� ��� ��� ��� ������� �������
			if ((graph[st][k] != 0) && (!visited[k]))
			{ // ���� ������� ������� � �� ����������
				Queue.push(k); // ��������� �� � �������
				visited[k] = true; // �������� ������� ��� ������������
			}
		}
		printf("%d ", st + 1); // ������� ����� �������
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
		/*	if ((i % 2>0) && (j % 2>0))
			{*/
				graph[i][j] = graph[j][i] = rand() % 2;
			/*}
			else
			{
				graph[i][j] = graph[j][i] = 0;
			}*/
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

	/////////////////// BFS
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

	printf("������� ������ � ������: ");
	BFS(vershina - 1);

	_getch();
}
