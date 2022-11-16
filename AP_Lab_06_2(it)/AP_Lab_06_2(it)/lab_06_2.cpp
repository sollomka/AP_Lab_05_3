#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Min, const int Max)
{
	for (int i = 0; i < size; i++)
		a[i] = Min + rand() % (Max - Min + 1);
}
void Vyvid(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 != 0)
			S += a[i];
	return S;

}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Min = -50;
	int Max = 50;

	Create(a, n, Min, Max);
	Vyvid(a, n);
	//Create1(a, n);

	cout << "S = " << Sum(a, n) << endl;

}

