#include"Function.h"

template<typename T>T CalcFactorial(T factorial){
	return ((factorial <= 0) || (factorial == 1)) ? 1 : factorial * CalcFactorial(factorial - 1);
}

template<typename T>void elevator(T floor) {
	if (floor == 0) {
		return;
	}
	std::cout << floor << std::endl;
	elevator(floor - 1);
	std::cout << floor << std::endl;
}

template<typename T>void ResaltValue(T data) {
	if (data > FACTORIAL_MAX) {
		std::cout << "Ведено число больше разрешенного" << std::endl;;
	}
	else if (data < FACTORIAL_MIN) {
		std::cout << "Ведено число меньше разрешенного" << std::endl;;
	}
	else {
		std::cout << "Факториал числа равен " << std::endl;;
		std::cout << CalcFactorial(data) << std::endl;;
	}
	std::cout << std::endl << std::endl;
}


