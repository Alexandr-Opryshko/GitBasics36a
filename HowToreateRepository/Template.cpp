#include"Function.h"

template<typename T>T CalcFactorial(T factorial) {
	if (factorial <= 0) {
		return 0;
	}
	else if (factorial == 1) {
		return 1;
	}
	else {
		return factorial * CalcFactorial(factorial - 1);
	}
}

template<typename T>void ResaltValue(T data) {
	if (data > FACTORIAL_MAX) {
		Print("Ведено число больше разрешенного");
	}
	else if (data < FACTORIAL_MIN) {
		Print("Ведено число меньше разрешенного");
	}
	else {
		Print("Факториал числа равен ");
		Print(CalcFactorial(data));
	}
	std::cout << std::endl << std::endl;
}

template<typename T>void Print(T data) {
	std::cout << data << "\t";
}
