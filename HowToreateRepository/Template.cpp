#include"Function.h"

template<typename T>T CalcFactorial(T factorial) {
	long fact = factorial;
	if (fact <= 0) {
		return 0;
	}
	else if (fact == 1) {
		return 1;
	}
	else {
		return fact * CalcFactorial(fact - 1);
	}
}

template<typename T>void FillRand(T arr[], const int n) {
	//std::cout << typeid(arr).name() << std::endl;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}
template<typename T>void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 100;
			arr[i][j] /= 10;
		}
	}
}

template<typename T>void Print(T data) {
	std::cout << data << "\t";
	std::cout << std::endl << std::endl;
}

template<typename T>void Print(T arr[], const int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

template<typename T>void Sort(T arr[], const int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS) {
	int iterations = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i; k < ROWS; k++) {
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) {
					if (arr[k][l] < arr[i][j]) {
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	std::cout << "Number of iterations: " << iterations << std::endl;
}