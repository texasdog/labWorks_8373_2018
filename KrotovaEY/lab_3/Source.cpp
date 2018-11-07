#include <iostream>
#include <conio.h>
using namespace std;

int min(int *mass, int size)
{
	int min = mass[0];
	int index;
	for (int i = 0; i < size; i++)
	{
		if (mass[i] <= min)
		{
			min = mass[i];
			index = i;
		}
	}
	return index;
}
int main()
{
	const int size = 50;
	char str[size] = " ";
	cin.getline(str, size);
	int mas[size] = { 0 };
	int  sizemas= 0;
	for (int i = 0; i < size; i++)
	{
		if (str[i] != ' ' && str[i] != 0)
		{
			mas[sizemas] += int(str[i]);
		}
		else if(str[i]==' ')
		{
			sizemas++;
		}
	}
	sizemas++;
	char str2[size] = { 0 };
	int b;
	int c;
	int ind;
	int v=0;
	int max = 0;
	for (int i = 0; i < sizemas; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i];
		}
	}
	for (int j = 0; j < sizemas; j++)
	{
		ind=min(mas, sizemas);
		b = 0;
		c = 0;
		for (int i = 0; i < size; i++)
		{
			if (str[i] == ' ')
			{
				++b;
				if (b == ind)
				{
					c = i;
				}
			}
		}
		if (c != 0)
		{
			++c;
		}
		for (int i = c; i < size; i++)
		{
			if (str[i]!= ' ' && str[i]!=0)
			{
				str2[v] = str[i];
				++v;
			}
			else
			{
				str2[v] = ' ';
				++v;
				break;
			}
		}
		mas[ind]=max + 1;
	}
	cout << str2;
	_getch();
	return 0;
}