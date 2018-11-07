// ConsoleApplication14.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

float my_power(float dig, int pow)
{
	float unswer = 1;
	if (pow > 0)
	for (int i = 1; i <= pow; i++)
		{
			unswer *= dig;
		}
	else
		for (int i = pow; i < 0; i++)
		{
			unswer /= dig;
		}
	return unswer;
}

int my_fact(int dig)
{
	int unswer = 1;
	for (int i = 2; i <= dig; i++)
	{
		unswer *= i;
	}
	return unswer;
}

double my_root(float dig)
{
	double unswer = dig;
	for (int i = 1; i <= 10; i++)
	{
		unswer = 0.5*(unswer + dig / unswer);
	}
	return unswer;
}

bool my_prime(int prm)
{
	for (int a = 1; a <= prm / 2; a++)
	{
		if (!((((int)my_power(a, prm - 1) - 1) % prm) == 0))
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	setlocale(0, "");
	cout << "1 - возведение в степень, 2 - факториал, 3 - корень квадратный, 4 - проверка на простоту: ";
	int chs=0;
	float dig1;
	int digN;
	while ((chs != 1) && (chs != 2) && (chs != 3) && (chs != 4))
	{
		cin >> chs;
		switch (chs)
		{
		case 1:
			cout << "Введите основание (число, возводимое в степень): ";
			cin >> dig1;
			cout << "Введите степень (целую): ";
			cin >> digN;
			while ((dig1 == 0) && (digN == 0))
			{
				cout << "Ноль в нулевой степени вычислить невозможно. Введите другие значения" << endl;
				cout << "Введите основание (число, возводимое в степень): ";
				cin >> dig1;
				cout << "Введите степень (целую): ";
				cin >> digN;
			}
			cout << "Ответ: " << my_power(dig1, digN);
			break;
		case 2:
			cout << "Введите основание факториала (целое): ";
			cin >> digN;
			cout << "Ответ: " << my_fact(digN);
			break;
		case 3:
			cout << "Введите число под корнем (неотрицательное): ";
			cin >> dig1;
			cout << "Ответ: " << my_root(dig1);
			break;
		case 4:
			cout << "Введите провеляемое число (целое): ";
			cin >> digN;
			if (my_prime(digN))
			{
				cout << "Ответ: " << digN << " - простое";
			}
			else
			{
				cout << "Ответ: " << digN << " - составное";
			}
			break;
		default:
			cout << "Введите корректную цифру: ";
		}
	}
	_getch();
    return 0;
}

