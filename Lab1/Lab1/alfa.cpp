#include <iostream> 
#include <conio.h> 
using namespace std;
int main()
{
	float left, right, result;
	char sign;
	cout <<"Insert first argument" << endl;
	cin >> left;
	cout <<"Insert sign" << endl;
	cin >> sign;
	cout <<"Insert second argument" << endl;
	cin >> right;

	switch (sign)
	{
	case '+': result = left + right;
		break;

	case '-': result = left - right;
		break;

	case '*': result = left * right;
		break;

	case '/': result = left / right;
		if (right == 0) {
			cout << "Waring: it's not available to divine by 0";
			_getch();
			return 0;
		}
		break;
	default: cout <<"Waring: wrong sign";
		_getch();
		return 0;
	}
	cout << "Answer: "<<left <<sign << right<< " = " << result;

	 
	_getch();
	return 0;
}
