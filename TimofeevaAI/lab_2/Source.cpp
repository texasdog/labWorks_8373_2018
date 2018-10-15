#include <iostream> 
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	const int size = 10;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
	cout << "   ";

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;

	}

	int i = 0, j = 0, u = 0;// вспомогательные переменные, играют роль индексов в массиве
	int q, min, k;//пустышки
	int minm = 0; int maxm = 0; float sred = 0; int sum = 0;
	while (i < size) // пока не последний элемент
	{
		j = i;
		min = arr[j];
		k = j;
		while (j < size) //пока не последний элемент
		{
			//эта часть находит минимальный элемент и его индекс (k) в оставшемся массиве
			if (arr[j] < min) // (a[i] < a[j]) если по убыванию
			{
				min = arr[j];
				k = j;
			}
			j = j + 1;
		}
		// здесь меняем местами передний несортированный элемент в массиве и минимальный элемент найденный в оставшемся массиве 

		q = arr[i];
		arr[i] = arr[k];
		arr[k] = q;

		i = i + 1;
	}
	int counter = 0;
	//далее вывод массива
	i = 0;
	while (i < size)
	{
		cout << arr[i] << ' ';
		i = i + 1;
		if (arr[i] % 2 != 0) {
			arr[counter] = arr[i];
			counter++;
		}
		if (counter = 0) { cout << "нечетных чисел нет"; }
		else {
			for (int m = 0; m < counter; ++m) {
				cout << arr[m];
				if (arr[m] < minm) { minm = arr[m]; }
				if (arr[m] > maxm) { maxm = arr[m]; }
				sum = sum + arr[m];
				}
			float sred = sum / 2;
	cout << "минимальное:" << minm << ' ' << "максимальное:" << maxm << ' ' << "среднее арифметическое:" << sred;
		}

		
		}

	
	}



























































































































































































