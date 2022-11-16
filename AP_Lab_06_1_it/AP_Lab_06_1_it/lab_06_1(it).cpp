#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Min, const int Max)
{
	for (int i = 0; i < size; i++)
		a[i] = Min + rand() % (Max - Min + 1);
}
void vuvid(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

void Create1(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		if (a[i] % 2 == 0 && a[i] > 0)

			cout << setw(4) << a[i];

	cout << endl;
}

int numbers(int* a, const int size)
{
	int k = 0;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 == 0 && a[i] > 0)
			k++;

	return k;
}

int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 == 0 && a[i] > 0)
			S += a[i];
	return S;
	cout << endl;
}

void zamina(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		if (a[i] % 2 == 0 && a[i] > 0)
			a[i] = 0;

	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Min = -20;
	int Max = 30;

	Create(a, n, Min, Max);
	vuvid(a, n);
	//Create1(a, n);

	int k = numbers(a, n);
	cout << "numbers = " << k << endl;
	cout << "S = " << Sum(a, n) << endl;

	zamina(a, n);
	vuvid(a, n);

}