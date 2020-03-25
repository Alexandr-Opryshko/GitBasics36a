#include"Function.h"


void FillRand(int arr[], const int n) {
	//cout << typeid(arr).name() << endl;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
	}
}

void FillRand(double arr[], const int n) {
	//cout << typeid(arr).name() << endl;
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			arr[i][j] = rand() % 100;
			arr[i][j] /= 10;
		}
	}
}

void Print(int arr[], const int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}

void Print(double arr[], const int n) {
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Print(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void Sort(int arr[], const int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[i]) {
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS) {
	int iterations = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i; k < ROWS; k++) {
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) {
					if (arr[k][l] < arr[i][j]) {
						int buffer = arr[i][j];
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
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS) {
	int iterations = 0;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			for (int k = i; k < ROWS; k++) {
				for (int l = k == i ? j + 1 : 0; l < COLS; l++) {
					if (arr[k][l] < arr[i][j]) {
						double buffer = arr[i][j];
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