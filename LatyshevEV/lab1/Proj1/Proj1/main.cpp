#include<iostream>
#include<string>
using namespace std;
int main()
{
	setlocale(0, "");
	float left;
	char sign;
	float right;
	bool flag = false;
	cout << "¬ведите левый операнд" << endl;
	cin >> left;
	cout << "¬ведите правый операнд" << endl;
	cin >> right;
	cout << "¬ведите знак" << endl;
	cin >> sign;
	float result;
	switch (sign)
	{
	case '+': result = left + right;
		break;
	case '-': result = left - right;
		break;
	case '*' : result = left * right;
		break;
	case '/' : 
		if (right != false)
		{ 
			result = left / right; 
		}
		else 
		{ 
			flag = true;
			cout << "ќшибка: деление на ноль"<<endl; 
		}
		break;
	default:cout << "ќшибка: знак не валиден"<< endl;
		flag = true;
		break;
	}
	if (flag == false)
	{
		cout << left << sign<< right << '=' << result;
	}
	cout << endl;
	system("pause");
	return 0;
}