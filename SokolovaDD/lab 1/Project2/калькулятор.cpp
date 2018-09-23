#include <iostream> 
#include <conio.h> 
using namespace std;
int main()
{
	float left;
	float right;
	float result;
	cout << "First number:";
	cin >> left;
	cout << "Second number:";
	cin >> right;
	char sign;
	cout << "Sign:";
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
		if (right = '0')
		{
			cout << "Error";
			_getch();
			break;
			
		}
		else
		{
		        result = left / right;
			break;
		}

	default:
		cout << "Other sign";
	}
	cout << "Result:" << result;
	_getch();
} 
