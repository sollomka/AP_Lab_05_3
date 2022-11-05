#include  <iostream>
#include <cmath>
#include  <iomanip>

using namespace std;

int main()
{

	char A = 29;
	char B = 86;
	char C = 94;

	cout << "Boolean expression truth table: " << "(x " << A << "(y" << B << "z))" << A << "(x " << A << "!(y" << C << "z))" << endl;
	cout << "-------------------------------------------------------------------------------------------------------" << endl;
	cout << "| x |   y  |  z | (y "<< B <<" z)) | (y" << C << " z)) |" "!(y" << C <<" z)) " "| (x " << A <<" (y "<< B << " z))"
		<< "| (x " << A << "!(y " << C << "z))" "| (x " << A << "(y "<< B << "z))" << A << "(x " << A << "!(y" << C <<" z))" "|" << endl;
	cout << "-------------------------------------------------------------------------------------------------------" << endl;

	for (int xx = 1; xx >= 0; xx--)
	{

		for (int yy = 1; yy >= 0; yy--)
		{

			for (int zz = 1; zz >= 0; zz--)
			{
				cout << "| " << setw(2) << xx << setw(2) << " |" << setw(3) << yy << setw(3) << "| "
					<< setw(3) << zz << setw(3) << " |" << setw(6) << (yy || zz) << setw(5) << " |"
					<< setw(5) << !(yy && zz) << setw(5) << "|" << setw(5) << (xx == (yy || zz)) << setw(5) << " |" 
					<< setw(5) << ( xx == (!yy && zz)) << setw(6) << " |"
					<< setw(6) << ((xx == (yy || zz)) == (xx == (!yy && zz))) << setw(9) << "|" << setw(18);
				bool result;
				if (xx == 1 && ((xx == (yy || zz)) == (xx == (!(yy && zz)))) == 1)
					result = 1;
				else
					result = 0;
				cout << result << setw(8) << " |" << endl;
			}

		}
	}
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	system("pause");
}