
#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	const int Arr1Len = 20;
	const int Arr2Len = 10;
	int Arr1[Arr1Len], Arr2[Arr2Len];
	int buffer, min, max, sum = 0, counter = 0, a = 0;
	
	for (int i = 0; i < Arr1Len; i++) 
	{
	Arr1[i] = rand() % 100 +1;
	if (i == 0)
	{
		cout << "First Array is: ";
	}
	cout << Arr1[i]<<' ';
	}
	cout << endl;


	do {
		if (a + 1 != Arr1Len && Arr1[a] > Arr1[a + 1])
		{
			buffer = Arr1[a];
			Arr1[a] = Arr1[a + 1];
			Arr1[a + 1] = buffer;
			counter = 1;
		}
		a++;
		if (a == Arr1Len && counter == 1)
		{
		counter = 0;
		a = 0;
		}
	} while (a < Arr1Len);

	
	cout << "First array(sorted) is: ";
	for (int i = 0; i < Arr1Len; i++)
	{
		cout << Arr1[i] << ' ';
	}
	cout << endl;

	
	cout << "Second array is: ";
	for (int i = 1; i < Arr1Len; i = i + 2)
	{
		Arr2[i/2] = Arr1[i];
		cout << Arr2[i/2] << ' ';
	}
	cout << endl;

	
	min = Arr2[0];
	max = Arr2[9];
	for (int i = 0; i < Arr2Len; i++)
	{
	sum = sum + Arr2[i];
	}
	cout <<"In second array: \n"<<"Min. value is "<< min <<"\n"<<"Max. value is "<< max <<"\n"<<"Average value is "<< sum / Arr2Len << endl;
	system("pause");
    return 0;
}

