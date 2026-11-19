#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
	n = 1;
	a = x;   // перший доданок: x^1 / 1
	s = a;
	do {
		n++;
		dod(); // обчислення наступного доданку
		s += a;
	} while (fabs(a) >= e);
	s = -s;    // ln(1 - x) = -(x + x^2/2 + x^3/3 + ...)
}