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
		cout<<"Ââåäèòå ïåðâîå ÷èñëî:";
		cin>>FirstNum;
		cout<<"Ââåäèòå çíàê:";
		cin>>digit;
		cout<<"Ââåäèòå âòîðîå ÷èñëî:";
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
					cout<<"Íåëüçÿ äåëèòü íà íîëü...";
				}else {
					result=FirstNum/SecondNum;}
				break;
			default:
				IsThereError=true;
				cout<<"Ýòî íåâåðíûé çíàê..."<<endl;
		} 
		if (IsThereError==false) {
			cout<<"Ðåçóëüòàò: "<<result<<endl;}
		_getch();
	/*	system("pause");
		return 0; */
}
