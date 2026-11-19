#include <iostream>
#include <math.h>
#include <iomanip>
#include "../dod.h"
#include "../sum.h"
#include "../var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = ";  cin >> dx;
	cout << "e = ";   cin >> e;
	cout << endl;

	cout << "Obchyslennia ln(1 - x) za dopomohoiu riadu Teilora" << endl;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(8) << "x" << " |"
		<< setw(12) << "ln(1-x)" << " |"
		<< setw(12) << "S" << " |"
		<< setw(8) << "n" << " |" << endl;
	cout << "-------------------------------------------------" << endl;

	x = x_p;
	while (x <= x_k) {
		sum(); // обчислення суми ряду
		cout << "|" << setw(8) << fixed << setprecision(4) << x << " |"
			<< setw(12) << setprecision(6) << log(1 - x) << " |"
			<< setw(12) << s << " |"
			<< setw(8) << n << " |" << endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;

	cin.get();
	cin.get();
	return 0;
}