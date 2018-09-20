#include <iostream> 
#include <conio.h> 
#include <stdio.h> 

using namespace std;
int main()
{
	int left, right;
	cout << "write left value";
	cin >> left;
	cout << "write right value";
	cin >> right;
	char sign;
	cout << "write sign";
	cin >> sign;
	float result;
	switch (sign) {
	case'+':result = left + right;
		break;
	case'-':result = left - right;
		break;
	case'*':result = left * right;
		break;
	case'/':
		if (right == 0)
		{
			cout << "error";
			_getch();
			break;
		}
		else
		{
			result = left / right;
			cout << left / right;
			_getch();
			break;
		}
		system("pause");

	default:
		cout << "Wrong sign";
	}
	if (sign == '+') {
		result = left + right;
		cout << "result:" << left + right;
		_getch();
	}
	if (sign == '-'){
		result = left - right;
		cout << "result:" << left - right;
		_getch();
	}
	if (sign == '*') {
		result = left * right;
		cout << "result:" << left * right;
		_getch();
		if (sign == '/') {
			result = left / right;
			cout << "result:" << left / right;
			_getch();
		}
	}

}