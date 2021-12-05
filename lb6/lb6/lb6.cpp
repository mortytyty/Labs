#include <iostream>
#include <queue> 
using namespace std;

const int n = 6;
int i, j;
int* DIST = new int[n];
int G[n][n];/* = {
	{0,1,1,0,0,1},
	{1,0,0,1,0,0},
	{1,0,0,0,1,0},
	{0,1,0,0,0,0},
	{0,0,1,0,0,0},
	{1,0,0,0,0,0}
};*/

//����� � ������
void BFSD(int v)
{
	queue <int> Q;
	Q.push(v);
	DIST[v] = 0;
	while (!Q.empty())
	{
		v = Q.front();
		Q.pop();
		cout << v + 1 << " ";
		for (i = 0; i < n; i++)
			if (G[v][i] && DIST[i]==-1)
			{
				Q.push(i);
				DIST[i] = DIST[v]+1;
			}
	}
}

//������� �������
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	int start;
	cout << "��������� ������� >> "; cin >> start;
	for (i = 0; i < n; i++)
	{
		DIST[i] = -1;
		G[i][i] = 0;
		for (j = 0; j < i; j++)
		{
			G[j][i] = G[i][j] = rand() % 2; //���������� ����� ���������� �������
		}
	}
	cout << "������� ��������� �����: " << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << " " << G[i][j];
		cout << endl;
	}

	cout << "������� ������: ";
	BFSD(start - 1);

	cout << endl <<"���������� �� ������: ";
	for (i = 0; i < n; i++) {
		cout << DIST[i] << " ";
	}

	delete[]DIST;
	system("pause>>void");
}