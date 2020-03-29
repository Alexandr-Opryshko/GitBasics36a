#include"Function.h"

double Power(int num, int exp) {
	double result = (exp < 0) ? 1 / (double)num : (double)num;
	exp = (exp < 0) ? exp + 1 : exp - 1;
	return (exp != 0) ? result *= Power(num, exp) : result;
}