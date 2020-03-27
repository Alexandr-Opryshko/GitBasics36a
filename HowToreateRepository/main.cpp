#include"Function.h"
#include"Template.cpp"
//Git Branches
double Power(int num, int exp) {
	double result = num;
	int expTemp = exp;
	if (exp < 0) {
		expTemp = -exp;
		result = 1 / (float)num;
	}
	for (int i = 1; i < expTemp; i++) {
		result = (exp < 0) ? result /= (double)num : result *= (double)num;
	}
	return result;
}

void main() {
	setlocale(LC_ALL, "");

	int num;
	int exp;
	Print("¬ведите число ");
	std::cin >> num; std::cout << std::endl;
	Print("¬ведите степень числа ");
	std::cin >> exp; std::cout << std::endl;
	Print(Power(num, exp));
}