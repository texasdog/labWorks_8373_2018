#include <iostream> 
#include <conio.h> 
using namespace std;
int main()
{
	setlocale(0, "");
    float left;
	float right;
	float result;
	cout << "Введи первое число:";
	cin >>left;
	cout <<"Введи второе число";
	cin>> right;
	char sign;
	cout << "Введи знак";
	cin >> sign;
    switch (sign)
	{
	case'+':result = left + right;
		break;
	case'-':result = left - right;
		break;
	case'*':result = left * right;
		break;
	case'/':
		if (right == '0')
		{
			cout << "Деление на ноль невозможно";
			_getch();
			break;
		}
		else
		{
			result = left / right;
			break;
		}

	default:
		cout<<"Не правильный знак";
	}
	cout << "Результат:" << result;
	     _getch();
	}
