#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(0, "");
	char Sign;
	float Val1, Val2, Result;


	cout << "Enter the first number: ";
	cin >> Val1;
	cout << "Enter the second number: ";
	cin >> Val2;
	cout << "Enter the operation: ";
	cin >> Sign;


	if (Sign != '*' && Sign!= '/' && Sign !='-' && Sign!='+') {
		cout << "Wrong operation, try it again";
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
				cout << "Error: wrong operation with zero";
				_getch();
				return 0;
			  }
		break;
	case '+': Result = Val1 + Val2;
		break;
	case '-': Result = Val1 - Val2;
		break;
	}
	cout <<"Result:"<< Result;
	_getch();
}