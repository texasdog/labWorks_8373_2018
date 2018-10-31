#include "stdafx.h"
#include "conio.h"
#include "string.h"
#include <iostream>

#define N 1000

using namespace std;

int spts(char str1[], char str2[], int i, int j)
{//string part to 2nd string
	int k = 0;
	for (i; i <= j; i++)
	{
		str2[k] = str1[i];
		k++;
	}
	str2[k] = 0;
	return 0;
}

int sce(char str[], int i, int j)
{//symbol of string from i to j-1 codes sum 
	int result = 0;
	for (i; i < j; i++)
	{
		result += int(str[i]);
	}
	return result;
}

int main()
{
	char str[N], str_1[N], str_2[N];
	int I[4];											            //Words scopes
	int s1(0), s2(0), words_count(0);					//s1,s2 == sum of the neighboring word codes
	cout << "Enter the string: ";
	cin.getline(str, N);
	int n = strlen(str);
	str[n] = ' ';
	n++;
	str[n] = 0;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == ' ')
		{
			words_count++;
		}
	}
	for (int i = 0; i < words_count - 1; i++)
	{
		I[0] = I[1] = I[2] = I[3] = 0;
		int k = 1;
		for (int j = 0; j < n; j++)
		{
			if (str[j] == ' ')
			{
				if (k == 1)
				{
					I[k] = j;
					k++;
				}
				if (k == 2)
				{
					I[k] = j + 1;
				}
				if (k == 3)
				{
					I[k] = j;
				}
				k++;
			}
			if (I[3] != 0)
			{
				s1 = sce(str, I[0], I[1]);
				s2 = sce(str, I[2], I[3]);
				if (s1 > s2)
				{
					spts(str, str_1, I[0], I[1] - 1);
					spts(str, str_2, I[2], I[3]);
					strcat_s(str_2, str_1);
					int l1 = I[0];
					for (int l = 0; l < strlen(str_2); l++)
					{
						str[l1] = str_2[l];
						l1++;
					}
					j -= strlen(str_1);
				}
				else
				{
					j -= (I[3] - I[2]);
				}
				I[0] = j;
				I[1] = I[2] = I[3] = 0;
				k = 1;
				j--;
			}
		}
	}
	n--;
	str[n] = 0;
	cout << "Result: " << str;
	_getch();
	return 0;
}
