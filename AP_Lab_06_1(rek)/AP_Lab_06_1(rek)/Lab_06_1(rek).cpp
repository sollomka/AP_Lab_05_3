#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Min, const int Max, int i)
{
	a[i] = Min + rand() % (Max - Min + 1);
	if (i < size - 1)
		Create(a, size, Min, Max, i + 1);

}
void vuvid(int* a, const int size, int i)
{
	cout << a[i] << " ";
	if (i < size - 1)

		vuvid(a, size, i + 1);
	else

		return;
}

void Create1(int* a, const int size, int i)
{
	if (i <= size - 1)
	{

		if (a[i] % 2 == 0 && a[i] > 0)
		{
			cout << a[i] << " ";
			Create1(a, size, i + 1);
		}
		else
			Create1(a, size, i + 1);
	}
	else return;
}

int Count(int* a, const int size, int k, int i)
{
	if (i < size)
	{
		if (a[i] % 2 == 0 && a[i] > 0)
			return Count(a, size, ++k, ++i);

		else return Count(a, size, k, ++i);
	}

	else return k;
}

int Sum(int* a, const int size, int i, int& suma)
{

	if (a[i] % 2 == 0 && a[i] > 0)
		suma += a[i];
	if (i < size)
		return Sum(a, size, i + 1, suma);
	else
		return suma;

}

void zamina(int* a, const int size, int i)
{
	if (i < size)
	{
		if (a[i] % 2 == 0 && a[i] > 0)
		{
			a[i] = 0;
		}

		zamina(a, size, ++i);
	}
	else
		return;

}


int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Min = -20;
	int Max = 30;
	int suma = 0;

	Create(a, n, Min, Max, 0);
	cout << endl;
	vuvid(a, n, 0);
	cout << endl;
	Create1(a, n, 0);
	cout << endl;

	int k = Count(a, n, 0, 0);
	cout << "numbers = " << k << endl;
	cout << "S = " << Sum(a, n, 0, suma) << endl;

	zamina(a, n, 0);
	vuvid(a, n, 0);

}