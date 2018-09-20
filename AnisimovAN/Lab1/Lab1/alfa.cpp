#include <iostream> 
#include <conio.h> 
using namespace std;
int main()
{
	float left, right, result;
	char sign;
	cout << "Insert first argument" << endl;
	cin >> left;
	cout << "Insert sign" << endl;
	cin >> sign;
	cout << "Insert second argument" << endl;
	cin >> right;

	switch (sign)
	{
	case '+': result = left + right;
		break;

	case '-': result = left - right;
		break;

	case '*': result = left * right;
		break;

	case '/': if (right == 0) {
		cout << "Waring: it's not available to divine by 0";
		_getch();
	}
			  else {
		result = left / right;
	}
			  break;
	default: cout << "Waring: wrong sign";
		_getch();
	}
	if ((sign == '/' ) && (right !=  0)) {
		cout << "Answer: " << left << sign << right << " = " << result; 
	}
	
	_getch();
	return 0;
}
