#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	if (i < size)
	{
		a[i] = High + rand() % (Low - High + 1);
		Create(a, size, Low, High, i + 1);
	}
}

void Print(int* a, const int size, int i)
{
	if (i < 1)
		cout << "Значення масиву : ";
	if (i < size)
	{
		cout << a[i] << " ";
		Print(a, size, i + 1);
	}
	else
		cout << endl;
}

int Min(int* a, const int size, int min, int j)
{
	if (j < size)
	{
		if (min < a[j])
			min = a[j];
		Min(a, size, min, j + 1);
	}
	else
		return min;
}

int iMin(int* a, const int size, int min, int imin, int j)
{
	if (j < size)
	{
		if (min < a[j])
		{
			min = a[j];
			imin = j;
		}
		iMin(a, size, min, imin, j + 1);
	}
	else
		return imin;
}


int* Sort(int* a, const int size, int i, int min, int imin)
{
	if (i < size - 1)
	{
		min = Min(a, size, a[i], i + 1);
		imin = iMin(a, size, a[i], i, i + 1);
		a[imin] = a[i];
		a[i] = min;
		Sort(a, size, i + 1, min, imin);
	}
	else
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

	Create(c, n, Low, High, 0);
	Print(c, n, 0);
	Print(Sort(c, n, 0, 0, 0), n, 0);

	return 0;
}