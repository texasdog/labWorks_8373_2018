#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(0, "");
	char Sign;
	float Val1, Val2;


	cout << "Enter the first number: ";
	cin >> Val1;
	cout << "Enter the operation: ";
	cin >> Sign;
	cout << "Enter the second number: ";
	cin >> Val2;


	if (Sign != '*' && Sign != '/' && Sign != '-' && Sign != '+') {
		cout << "Wrong sign";
	}


	switch (Sign) {
	case '*': cout << Val1 << " " << "*" << " " << Val2 << " " << "=" << " " << Val1*Val2;
		break;
	case '/': if (Val2 != 0) {
		cout << Val1 << " " << "/" << " " << Val2 << " " << "=" << " " << Val1 / Val2;
	}
			  else {
				  cout << "Error: division by zero";
			  }
			  break;
	case '+': cout << Val1 << " " << "*" << " " << Val2 << " " << "=" << " " << Val1 + Val2;
		break;
	case '-': cout << Val1 << " " << "*" << " " << Val2 << " " << "=" << " " << Val1 - Val2;
		break;
	}
	_getch();
}