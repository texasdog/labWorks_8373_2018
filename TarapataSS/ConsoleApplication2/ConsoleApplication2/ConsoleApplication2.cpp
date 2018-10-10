#include "pch.h"
#include <iostream> 
#include <conio.h> 
#include <stdio.h>

using namespace std;
int main() {
	setlocale(0, "");

	float left;
	cout << "Введите первое число: ";
	cin >> left;
	char sign;
	cout << "Введите знак: ";
	cin >> sign;
	while ((sign != '+') && (sign != '-') && (sign != '*') && (sign != '/')) {
		cout << "Неверный ввод знака, выберете другой(+,-,*,/): ";
		cin >> sign;
	}
	float right;
	cout << "Введите второе число: ";
	while ((sign == '/') && (right == '0')) {
		cout << "Деление на 0 запрещено. Введите другое число.";
		cin >> right;
	}
	float result;
	switch (sign) {
	case '+': result = left + right; break;
	case '-': result = left - right; break;
	case '*': result = left * right; break;
	case '/': result = left / right; break; 
	}
	cout <<"Результат: "<< result;
	_getch();
	return 0;
}
