#include <iostream> 
#include <conio.h> 
using namespace std;

int main()

{
	setlocale(0, "");
	float left, right, result;
	int erorr = 0;
	cout << "Введите левый опперант: ";
	cin >> left;
	cout << "Введите правый опперант: ";
	cin >> right;
	char sign;
	cout << "Введите знак между опперантами: ";
	cin >> sign;
	switch (sign)
	{
	case '+': result = left + right;
		break;
	case '-': result = left - right;
		break;
	case '*': result = left * right;
		break;
	case '/':
		if (right == 0)
		{
			cout << "На ноль делить нельзя!";
			erorr = 1;
			break;
		}
		else
		{
			result = left / right;
			break;
		}
	default:
		cout << "Неправильный знак! ";
		erorr = 1;
		break;
	}
	if (erorr == 0)
	{
		cout << "Результат: " << result;
		_getch();
	}
	else if (erorr == 1)
	{
		cout << "Ошибка!";
		_getch();
	}
}