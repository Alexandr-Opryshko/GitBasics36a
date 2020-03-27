#include"Function.h"
#include"Template.cpp"
//Git Branches


void main() {
	setlocale(LC_ALL, "");

	long long factorial;
	std::cout << "Для вычисления Факториала введите целое число от 0 до 20" << "\t";
	std::cin >> factorial; std::cout << std::endl;
	ResaltValue(factorial);
	int floor = 5;
	elevator(floor);
}