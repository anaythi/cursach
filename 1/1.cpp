
#include "stdafx.h"//�������� ���������� ��� ������ ���������
#include <iostream>//���������� ����� � ������ ������
#include <cstdlib>//���������� ��� ���������� ������ ���������� ������� !��������!
#include <ctime> //��������������� ���������� ��� ���������� ������ ���������� ������� !��������!
using namespace std;//������� ��� ������ ���������� cin � cout

int dmassiv()
{
	char x;
	int *t = new int[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		t[i] = rand() % 10;
		cout << t[i] << "\n";
	}
	cout << "Del massiv?";
	cin >> x;
	if (x == 'y')
	{
		delete t;
	}
	return 0;
}
/*
int menu() //������� ����
{
	//const int x = 4;
	int i;
	cout << "1: \t 1 \n" << "2: \t 2 \n" << "3: \t 3 \n" << "4: \t 4 \n" << "�������� ������� ����(1-4): "; //�������� �����
	cin >> i;
	switch (i)
	{
	case 1: cout << "\n ty \n"; break;
	case 2: cout << "\n tochno \n"; break;
	case 3: cout << "\n ne \n"; break;
	case 4: cout << "\n pidor \n"; break;
	default: cout << "Pidor \n"; break;
	}
	return 0;
}
*/
int main() //������� �-���
{
	//menu(); //����� ������� ����
	dmassiv();
	return 0;
}