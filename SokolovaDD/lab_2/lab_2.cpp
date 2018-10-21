#include <iostream> 
#include <cstdlib> 

using namespace std;

int main()
{
	const int size1(7);
	const int size2 = (size1 / 2 + size1 % 2);
	int arr1[size1], arr2[size2];
	cout << "1st array:   ";
	int i(0);
	for (i = 0; i < size1; i++)
	{
		arr1[i] = 0;
	}
	cout << endl;
	for (i = 0; i < size1; i++)
	{
		arr1[i] = rand();
		cout << arr1[i] << " ";
	}
	cout << endl;
	i = 0;
	int i1 = 0;
	int change;
	cout << "sorted 1st array: ";
	while (i < size1)
	{
		i1 = i;
		while (i1 < size1)
		{
			if (arr1[i1] < arr1[i])
			{
				change = arr1[i1];
				arr1[i1] = arr1[i];
				arr1[i] = change;
			}
			i1++;
		}
		cout << arr1[i] << " ";
		i++;
	}
	cout << endl;
	cout << "2nd array:   ";
	for (i1 = 0; i1 < size1; i1++)
	{
		arr2[i] = 0;
	}

	for (i1=0; i1<size1; i1++)
	{
	if((arr1[i1] % 2) == 1)
	{
		arr2[i1] = arr1[i1];
	}
	 cout << arr2[i1] << "  ";
	}

	i = 0;
	i1 = 0;
	int sum(0), sr(0);
	while (i < size2)
	{
		i1 = i;
		while (i1 < size2)
		{
			if (arr2[i1] < arr2[i])
			{
				change = arr2[i1];
				arr2[i1] = arr2[i];
				arr2[i] = change;
			}
			i1++;
		}
		cout << arr2[i] << " ";
		i++;
	}
	while (i < size2);
	{
		arr2[i] = arr1[i1];
		sum = sum + arr2[i];
		i1 = i1 + 2;
		i++;
	}

	sr = sum / size2;
	cout << endl;
	cout << "min of 2nd array: " << arr2[0] << endl;
	cout <<"max of 2nd array: " << arr2[size2] << endl;
	cout << "Medium of 2nd array: " << sr << endl;
	return(0);
}
