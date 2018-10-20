#include <iostream> 
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	const int size = 10;
	int arr[size]; int arrnechet[size], chashka = 0,index = 1 , j = 0,len = 0;
	float sum = 0; 
	
 
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
		cout << i + 1 << ":" << arr[i] << endl;
	}
	
	while (index < size)
	{
		j = index;
		while (arr[j] < arr[j - 1]) {

			if (arr[j] < arr[j - 1]) {
				chashka = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = chashka;
			}
			j--;
		}
		index++;
	}
	cout << "SortedArray:";
	for (int z = 0; z < size; z++) {
		cout << arr[z] << "   ";
		if (arr[z] % 2 != 0) {
			arrnechet[len++] = arr[z];
		}
	}
	cout << endl;
cout << "NechetArray:   ";
for (int t = 0; t < len; t++) {
	sum += arrnechet[t];
	cout << arrnechet[t] << "   ";
}
	cout << endl;

	cout << "Max nechet: " << arrnechet[len - 1] << endl;
	cout << "Min nechet: " << arrnechet[0] << endl;
	cout << "Srznach: " << sum / len << endl;

	system("pause");
	return(0);
}