#include"Function.h"
//Git Branches


void main() {
	setlocale(LC_ALL, "");

	int num;
	int exp;
	std::cout << "¬ведите число - ";
	std::cin >> num; std::cout << std::endl;
	std::cout << "¬ведите степень числа - ";
	std::cin >> exp; std::cout << std::endl;
	std::cout << Power(num, exp) << std::endl;
}