
#include "stdafx.h"//основная библиотека для работы программы
#include <iostream>//библиотека ввода и вывода данных
#include <cstdlib>//библиотека для заполнения масива случайными числами !ВРЕМЕННО!
#include <ctime> //вспомогательная библиотека для заполнения масива случайными числами !ВРЕМЕННО!
using namespace std;//команда для работы операторов cin и cout
int menu() //функция меню
{
//const int x = 4;
cout << "1: \t 1 \n" << "2: \t 2 \n" << "3: \t 3 \n" << "4: \t 4 \n"<<"Выберете элемент меню(1-4): "; //тестовый вывод
return 0;
}
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

int main() //главная ф-ция
{
	int i;
	menu(); //вызов функции меню
	cin >> i;
	switch (i)
	{
	case 1: cout << "\n ty \n"; break;
	case 2: cout << "\n tochno \n"; break;
	case 3: cout << "\n ne \n"; break;
	case 4: cout << "\n pidor \n"; break;
	default: cout << "Pidor \n"; break;
	}
	//dmassiv();
	return 0;
}