
#include "stdafx.h"//�������� ���������� ��� ������ ���������
#include <iostream>//���������� ����� � ������ ������
#include <cstdlib>//���������� ��� ���������� ������ ���������� ������� !��������!
#include <ctime> //��������������� ���������� ��� ���������� ������ ���������� ������� !��������!
using namespace std;//������� ��� ������ ���������� cin � cout
int menu() //������� ����
{
/*const int x = 4;
int i;
*/
cout << "1: \t 1 \n" << "2: \t 2 \n" << "3: \t 3 \n" << "4: \t 4 \n"; //�������� �����
return 0;
}
/*
int dmassiv()
{
int *t = new int[10];
srand(time(NULL));
for (int i = 0; i < 10; i++)
{
t[i] = rand() % 10;
cout << t[i] << "\n";
}
return 0;
}
*/
int main() //������� �-���
{
	menu(); //����� ������� ����
	//dmassiv();
	return 0;
}