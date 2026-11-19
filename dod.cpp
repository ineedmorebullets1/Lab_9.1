#include "dod.h"
#include "var.h"
using namespace nsVar;

void nsDod::dod() {
	a *= x * (n - 1) / n; // рекурентне співвідношення: a_n = a_(n-1) * x * (n-1) / n
}