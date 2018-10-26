#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	const int size1 = 8;
	int size2 = size1;
	int i, j, timesym, odd = 0, sum = 0;
	float avalue;
	int arr[size1];
	cout << "Ñãåíåðèðîâàííûé ìàññèâ: ";
	for (i = 0; i < size1; i++)
	{
		arr[i] = rand() % 50;
		if (arr[i] % 2 == 1)
		{
			odd += 1;
		}
		cout << " " << arr[i];
	}
	cout << endl;
	cout << "Îòñîðòèðîâàííûé ìàññèâ: ";
	i = 0;
	while (i < size2 - 1)
	{
		j = 0;
		while (j < size2 - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				timesym = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = timesym;
			}
			j+=1;
		}
		i+=1;
	}
	for (i = 0; i < size1; i++)
	{
		cout << " " << arr[i];
	}
	int arr2[size1];
	for (i = 0; i < size1; i++)
	{
		arr2[i] = 0;
	}
	for (i = 0; i < size1; i++)
	{
		if (arr[i] % 2 == 1)
		{
			arr2[odd] = arr[i];
			odd += 1;
		}
	}
	cout << endl;
	cout << "Ìèíèìàëüíûé ýëåìåíò: " << arr2[0];
	cout << endl;
	cout << "Ìàêñèìàëüíûé ýëåìåíò: " << arr2[odd-1];
	cout << endl;
	for (i = 0; i < size1; i++)
	{
		sum += arr2[i];
	}
	avalue = (float)sum / odd;
	cout << "Ñðåäíåå çíà÷åíèå: " << avalue;
	cout << endl;
	return 0;
}
