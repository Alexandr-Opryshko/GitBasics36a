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

template<typename T>void FillRand(T arr[], const int n) {
	//std::cout << typeid(arr).name() << std::endl;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
	std::cout << std::endl << std::endl;
}
template<typename T>void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 100;
			arr[i][j] /= 10;
		}
	}
	std::cout << std::endl << std::endl;
}

template<typename T>void Print(T data) {
	std::cout << data << "\t";
}

template<typename T>void Print(T arr[], const int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << "\t";
	}
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
	std::cout << std::endl << std::endl;
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
	std::cout << std::endl << std::endl;
}