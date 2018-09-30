#include "stdafx.h"
#include "iostream"
#include "conio.h"
using namespace std;


int main()
{
	const int size(11);
	const int size1 = size / 2 + size % 2;
	int random_arr[size], odd_arr[size1];
	cout << "Generated 1st array: \t\t";
	int i(0);
	for (i; i < size; i++)
	{
		random_arr[i] = rand();
		cout << random_arr[i] << " ";
	}
	cout << endl;
	i = 0;
	int i1(0);
	int changer;
	cout << "Sorted 1st array: \t\t";
	while (i < size)
	{
		i1 = i;
		while (i1 < size)
		{
			if (random_arr[i1] < random_arr[i])
			{
				changer = random_arr[i1];
				random_arr[i1] = random_arr[i];
				random_arr[i] = changer;
			}
			i1++;
		}
		cout << random_arr[i] << " ";
		i++;
	}
	cout << endl;
	i = 0;
	i1 = 0;
	int sum_of_odd_arr(0);
	cout << "2nd array: \t\t\t";
	while (i < size1)
	{
		odd_arr[i] = random_arr[i1];
		sum_of_odd_arr = sum_of_odd_arr + odd_arr[i];
		cout << odd_arr[i] << " ";
		i1 = i1 + 2;
		i++;
	}
	cout << endl;
	cout << "Min element of 2nd arr: \t" << odd_arr[0] << endl;
	cout << "Max element of 2nd arr: \t" << odd_arr[size1 - 1] << endl;
	cout << "Sum of 2nd arr elements:\t" << sum_of_odd_arr << endl;
	_getch();
	return 0;
}

