#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
const int con = 10;
int main()
{
	int dop = 0;
	int j = 0;
	int i;
	cout << "Number 1:";
	srand(time(0));
	{int arr[con];
	for (i = 0; i < con; i++)
	{
		arr[i] = rand();
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 1; i < con; i++)
	{
		dop = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > dop) {
			arr[j + 1] = arr[j];
			j = j - 1;
			arr[j + 1] = dop;
		}
	}
	cout << "Number 2:";
	for (i = 0; i < con; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	int min = arr[0];
	int max = arr[0];
	int sum = 0;
	cout << "Odd numbers:";
	for (i = 0; i < con; i++) {
		if (arr[i] % 2) { cout << arr[i]<<" "; }
	}
	cout << endl;
	for (i = 0; i < con; i++)
	{if (arr[i] > max)
		{
			max = arr[i];
			}
	if (arr[i] < min) {
		min = arr[i];
		}
	sum = sum + arr[i];
		}
	cout <<"MAX: "<< max<<endl;
	cout << "MIN: " << min<<endl;
	cout << "SUM: " << sum<<endl;
	}
	system("pause");
}
	


