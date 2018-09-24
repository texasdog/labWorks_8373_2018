#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	setlocale(0, "");
	float left, right, result = 0;
	char sign;
	bool errorcheck = false;
	cout << "¬ведите левый операнд: ";
	cin >> left;
	cout << "¬ведите правый операнд: ";
	cin >> right;
	cout << "¬ведите знак: ";
	cin >> sign;
	do {
		errorcheck = false;
		switch (sign) {
		case '+': result = left + right;
			break;
		case '-': result = left - right;
			break;
		case '*': result = left * right;
			break;
		case '/': if (right == 0) {
			errorcheck = true;
			cout << "ƒелить на ноль нельз€" << endl
				<< "¬ведите правый операнд: ";
			cin >> right;
			} else result = left / right;
			break;
		default: errorcheck = true;
			cout << "¬веден неправильный знак" << endl
					<< "¬ведите знак: ";
			cin >> sign;
		};
	} while (errorcheck);
	cout << "–езультат: " << result << endl;
	_getch();
	return 0;
}