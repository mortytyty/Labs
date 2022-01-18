#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <cstring>
#include <math.h>
#include <iostream>
using namespace std;
void first_ex()
{
	int mas[100], max = 0, min = 32768, i;
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		mas[i] = rand();
		if (mas[i] > max)
			max = mas[i];
		if (mas[i] < min)
			min = mas[i];
	}
	printf("Max:%d Min:%d Dif:%d\n", max, min, max - min);
}
//----------------------------------------------------------------------------------------------------
void secon_ex()
{
	int mas[100], i;
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		mas[i] = rand();
		printf("mas[%d] = %d\n", i + 1, mas[i]);
	}
}
//----------------------------------------------------------------------------------------------------
void third_ex()
{
	srand(time(NULL));
	int n;
	cout << " ������� ������ �������: ";
	cin >> n;//������ 
	int** G = new int* [n];
	for (int i = 0; i < n; i++)
		G[i] = new int[n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			G[i][j] = rand() % 30;
			cout << G[i][j]<<"\t";
		}
		cout << endl;
	}


}
//----------------------------------------------------------------------------------------------------
void four_ex()
{
	int mass[10][10], sum_sto[10], sum_str[10];
	int i, j;
	for (i = 0; i < 10; i++)
	{
		sum_str[i] = 0;
		for (j = 0; j < 10; j++)
		{
			mass[i][j] = rand() % 100;
			printf("%d\t", mass[i][j]);
			sum_str[i] = sum_str[i] + mass[i][j];
		}
		printf("\t SUMMA = %d\t", sum_str[i]);
		printf("\n");
	}
}
//----------------------------------------------------------------------------------------------------
void five_ex()
{
	setlocale(LC_ALL, "Rus");
	//setvbuf(stdin, NULL, _IONBF, 0);
	//setvbuf(stdout, NULL, _IONBF, 0);
	int i;
	struct st_find
	{
		char famil[20];
		char name[20], facult[20];
	} st;
	struct student
	{
		char famil[20];
		char name[20], facult[20];
		int Nomzach;
	} stud[3];

	for (i = 0; i < 3; i++)
	{
		cout<<"������� ������� ��������\n"; 
		cin>>stud[i].famil;
	}
	for (i = 0; i < 3; i++)
	{
		cout << "������� ��� �������� " << stud[i].famil << endl;
		cin>>stud[i].name;
	}
	for (i = 0; i < 3; i++)
	{
		cout << "������� �������� ���������� �������� "<<stud[i].famil<<" " << stud[i].name << endl;
		cin>>stud[i].facult;
	}
	for (i = 0; i < 3; i++)
	{
		cout<<"������� ����� �������� ������ �������� "<<stud[i].famil<<" " << stud[i].name << endl;
		cin>>stud[i].Nomzach;
	}
	system("cls");
	for (i = 0; i < 3; i++)
	{
		cout << "C������ " << stud[i].famil <<" " << stud[i].name << " ��������� �� ���������� " << stud[i].facult << ", ����� �������� ������ " << stud[i].Nomzach << endl;
	}
	cout << "������� ������� ��������\n";
	cin >> st.famil;
	cout << "������� ��� ��������\n";
	cin >> st.name;
	cout << "������� ��������� ��������\n";
	cin >> st.facult;
	for (i = 0; i < 3; i++)
	{
		if ((strcmp(st.famil, stud[i].famil) == 0) && (strcmp(st.name, stud[i].name) == 0) && (strcmp(st.facult, stud[i].facult) == 0))
		{
			cout << "������� ������� " << stud[i].famil << " " << stud[i].name << " ��������� �� ���������� " << stud[i].facult << ", ����� �������� ������ " << stud[i].Nomzach << endl;
			i = 3;
		}
		else 
			if (i == 2)
				cout << "������� �� ������\n";	
	}

}
//----------------------------------------------------------------------------------------------------
int main()
{

	int number = 0;
	setlocale(0, "");
	while (number != 6)
	{

		printf("������� ����� �������, ��� ������ ������� '6':");
		scanf("%d", &number);
		switch (number)
		{
		case 1:
			first_ex();
			break;
		case 2:
			secon_ex();
			break;
		case 3:
			third_ex();
			break;
		case 4:
			four_ex();
			break;
		case 5:
			five_ex();
			break;
		case 6:
			exit(1);
		}
		system("pause");
		system("cls");
	}

}
