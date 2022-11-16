#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
	cout << "Значення таблиці : ";
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
}

int* Sort(int* a, const int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min = a[i];
		int imin = i;
		for (int j = i + 1; j < size; j++)
			if (min < a[j])
			{
				min = a[j];
				imin = j;
			}
		a[imin] = a[i];
		a[i] = min;
	}
	return a;
}

int main()
{
	SetConsoleOutputCP(1251);
	srand((unsigned)time(NULL));

	int n, Low, High;

	cout << "n = "; cin >> n;
	cout << "min = "; cin >> Low;
	cout << "max = "; cin >> High;

	int* c = new int[n];

	Create(c, n, Low, High);
	Print(c, n);
	Print(Sort(c, n), n);

	return 0;
}