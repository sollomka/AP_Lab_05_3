#include <iostream> 
#include <cmath> 
#include <iomanip> 

using namespace std;

double h(const double x);

int main()
{
	double rp, rk, rg, c;
	int n;

	cout << "rp = "; cin >> rp;
	cout << "rk = "; cin >> rk;
	cout << "n = "; cin >> n;

	rg = (rk - rp) / n;
	double r = rp;
	cout << "------------------------------------------------------" << endl;
	cout << "|" << setw(12) << "r" << setw(10) << " |" << setw(10) << "c" << setw(15) << " |" << endl;
	cout << fixed;
	while (r <= rk)
	{
		c = h(r + 1) + h(r * r + 1) * h(r * r + 1) + 1;

		cout << "| " << r << setw(12) << setprecision(6) << " |" << c << setw(15) << " |" << endl;
		r += rg;
	}
	cout << "------------------------------------------------------" << endl;
	return 0;

}

double h(const double x)
{
	if (abs(x) >= 1 && x == 0)
		return (cos(x) + 1) / exp(x);
	else
	{
		double S = 0;
		int n = 0;
		double a = x;
		S = a;

		do {
			n++;
			double R = ((x * x) / x) * ((2 * n - 1) / (2 * n + 1));
			a *= R;
			S += a;

		} while (n < 6);
		return  (1. / (sin(x * x))) * S;
		return S;
	}
}