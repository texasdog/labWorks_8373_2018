#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(0, "");
	char Sign;
	float Val1, Val2, Result;


	cout << "Введите первое число: ";
	cin >> Val1;
	cout << "Введите второе число: ";
	cin >> Val2;
	cout << "Введите действие: ";
	cin >> Sign;


	if (Sign != '*' && Sign!= '/' && Sign !='-' && Sign!='+') {
		cout << "Недопустимое действие";
		_getch();
		return 0;
	}


	switch (Sign) {
	case '*': Result = Val1*Val2;
		break;
	case '/': if (Val2 != 0) {
		Result = Val1 / Val2;
	}
			  else {
				cout << "Ошибка: деление на ноль";
				_getch();
				return 0;
			  }
		break;
	case '+': Result = Val1 + Val2;
		break;
	case '-': Result = Val1 - Val2;
		break;
	}
	cout <<"Результат:"<< Result;
	_getch();
}