#include <iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
		float first, second, resault;
		bool flag = true;
		char sign;
		setlocale(0, "rus");
		cout << "¬вести первое число: ";
		cin >> first;
		cout << "¬вести второе число: ";
		cin >> second;
		cout << "¬вести операцию: ";
		cin >> sign;
	
		switch(sign){
			case '+': 
				resault = first + second; break;
			case '-':
				resault = first - second; break;
			case '*': 
				resault = first * second; break;
			case '/':
				if (second == 0) {
					flag = false;
					cout << "ќшибка ввода!" << endl; break;
				}
				else {
					resault = first / second; break;
				}
			default:{
			       flag = false;
			       cout << "ќшибка ввода!" << endl;
			}
		}
	    if(flag){
		       cout << first << " " << sign << " " << second << " " << "=" << " " << resault << endl;
	    }

		//system("pause");
}