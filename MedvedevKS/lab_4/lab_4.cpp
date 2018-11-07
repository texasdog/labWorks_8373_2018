// lab_4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
using namespace std;

double intPower(double number, int n)
{
	double result = 1;
	for (int i = 0; i < abs(n); i++)
	{
		result *= number;
	}
	if (n < 0)
	{
		result = 1 / result;
	}
	return result;
}

int factorial(int number)
{
	if (number < 0)
	{
		return 0;
	}
	if (number > 12)
	{
		return -1;
	}
	int result = 1;
	for (int i = 2; i <= number; i++)
	{
		result *= i;
	}
	return result;
}

double SquareRoot(double number)
{
	double result = 0;
	for (int i = 0; i < 10000; i++)
	{
		result = 1 + (number - 1) / (result + 1);
	}
	return result;
}

int PrimeCheck(int number)
{
	if (number <= 1)
	{
		return -1;
	}
	for (int i = 2; i <= SquareRoot(number); i++)
	{
		if (number % i == 0)
		{
			return 0;
		}
	}
	return 1;
}



int main()
{
	double number;
	int n;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Enter a power: ";
	cin >> n;
	cout << "***************************CHECK***************************\n";
	cout <<"\'" << n <<"\' power of \'" << number << "\' is " << intPower(number, n) << endl;
	switch (factorial(number))
	{
	case(0):
		cout << "Factorial of \'" << number << "\' doesnt exist" << endl;
		break;
	case(-1):
		cout << "Factorial of \'" << number << "\' is more than 2 billions" << endl;
		break;
	default:
		cout << "Factorial of \'" << int(number) << "\' : " << factorial(number) << endl;
	}
	cout << "Square root of \'" << number << "\' : " << SquareRoot(number) << endl;
	switch (PrimeCheck(number))
	{
	case(-1) :
		cout << "PrimeCheckError: the number is less than or equal to 1" << endl;
		break;
	case(0) :
		cout << "\'" << number << "\' is not a prime number" << endl;
		break;
	case(1):
		cout << "\'" << number << "\' is a prime number" << endl;
	}
	cout << "***************************DONE***************************";
	_getch();
    return 0;
}