#include <iostream>
#include <iomanip> 
#include <time.h>

using namespace std;


void arr_create(int* arr, int const size, int const min, int const max)
{
	for (int i = 0; i < size; i++) {
		arr[i] = min + rand() % (max - min + 1);
	}
}

void arr_out(int* arr, int const size)
{
	cout << "regular: " << endl;
	for (int i = 0; i < size; i++) {

		cout << setw(4) << arr[i];
	}
	cout << endl;
}


int array_count(int* arr, int const size)
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0)
			count += 1;
	}
	return count;
}
// Шаблони 

template <typename W>
void arr_create(W* arr, const int size, W min, W max)
{
	for (int i = 0; i < size; i++) {
		arr[i] = min + rand() % (max - min + 1);
	}
}

template <typename Q>
void arr_out(Q* arr, const int  size)
{
	cout << "template: " << endl;
	for (int i = 0; i < size; i++) {

		cout << setw(4) << arr[i];
	}

	cout << endl;
}


template <typename E>

int array_count(E* arr, const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0)
			count += 1;
	}
	return count;
}

int main()
{
	const int min = -100;
	const int max = 100;
	int countt = 0;

	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];

	arr_create(a, n, min, max);
	arr_out(a, n);

	cout << endl;

	int count = array_count(a, n);
	cout << "The number of even numbers = " << count << endl;

	arr_create<int>(a, n, min, max);
	arr_out<int>(a, n);

	cout << endl;

	count = array_count<int>(a, n);
	cout << "The number of even numbers = " << count << endl;
}
