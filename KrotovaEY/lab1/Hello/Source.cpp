#include <iostream>
#include <conio.h> 
using namespace std;

int main()                       
{        
	setlocale(0, "");
	float left, right;
	cout << "Введите левый оперант:";
	cin >> left;
	cout << "Введите правый оперант:";
	cin >> right;
	char sign;
	cout << "Введите знак:";
	cin >> sign;
	float result;
	switch (sign) {
	case '+': result = left + right;
		break;
	case'-': result = left - right;
		break;
	case'*': result = left * right;
		break;
	case'/': result = left / right;
		break;
	default:
		cout << "Неправильный знак";
	}
	if (right==0 && sign=='/')
	{
		cout << "На ноль делить нельзя";
	} 
	else if (sign=='+'||sign=='-'||sign=='*'||sign=='/')
	{
         cout << "Результат: " << result; 
	}
     _getch();
	 return 0;
}