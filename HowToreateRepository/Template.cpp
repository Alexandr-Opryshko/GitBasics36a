#include"Function.h"

template<typename T>void CalcFactorial(T factorial){
//	if ((factorial <= 0) || (factorial == 1))  return 1; CalcFactorial(factorial);
	return ((factorial <= 0) || (factorial == 1)) ? 1 : CalcFactorial(factorial);
}
/*
template<typename T>T CalcFactorial(T factorial) {
	if (factorial <= 0) {
		return 1;
	}
	else if (factorial == 1) {
		return 1;
	}
	else {
		return factorial * CalcFactorial(factorial - 1);
	}
}
*/
template<typename T>void elevator(T floor) {
	if (floor == 0) {
		return;
	}
	Print(floor);
	elevator(floor - 1);
	Print(floor);
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
