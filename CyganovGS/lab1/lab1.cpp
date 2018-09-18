#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
	{
		setlocale(0,"");
		float FirstNum, SecondNum, result;
		bool IsThereError=false;
		char digit;
		cout<<"Input first number:";
		cin>>FirstNum;
		cout<<"Input sign:";
		cin>>digit;
		cout<<"Input second sign:";
		cin>>SecondNum;
		switch(digit){
			case '+':
				result=FirstNum+SecondNum;
				break;
			case '-':
				result=FirstNum-SecondNum;
				break;
			case '*':
				result=FirstNum*SecondNum;
				break;
			case '/':
				if (SecondNum==0){
					IsThereError=true;
					cout<<"You can not divide by zero...";
				}else {
					result=FirstNum/SecondNum;}
				break;
			default:
				IsThereError=true;
				cout<<"Your input sign is not valid..."<<endl;
		} 
		if (IsThereError==false) {
			cout<<"Result: "<<result<<endl;}
		_getch();
	/*	system("pause");
		return 0; */
}
