#include"Function.h"

void Coordinates(int booton, char sumbol,char arr[Y][X]) {
	switch (booton) {
	case '1': if (arr[2][0] == 0) arr[2][0] = sumbol; break;
	case '2': if (arr[2][1] == 0) arr[2][1] = sumbol; break;
	case '3': if (arr[2][2] == 0) arr[2][2] = sumbol; break;
	case '4': if (arr[1][0] == 0) arr[1][0] = sumbol; break;
	case '5': if (arr[1][1] == 0) arr[1][1] = sumbol; break;
	case '6': if (arr[1][2] == 0) arr[1][2] = sumbol; break;
	case '7': if (arr[0][0] == 0) arr[0][0] = sumbol; break;
	case '8': if (arr[0][1] == 0) arr[0][1] = sumbol; break;
	case '9': if (arr[0][2] == 0) arr[0][2] = sumbol; break;
	default:
		break;
	}
}

void Grid(char arr[Y][X]) {

	std::cout << "\t" << (char)201;							// отступ угла левого верхнего;
	for (int i = -1; i < X*2; i++) {
		std::cout << (char)205;								// выводим верхний край доски
	}
	std::cout << (char)187 << std::endl;					// правый верхний угол

	for (int i = 0; i < Y; i++) {
		std::cout << "\t" << (char)186 << ' ';				// выводим левый край доски
		for (int c = 0; c < X; c++) {
			std::cout << arr[i][c] << " ";					// выводим значения записанные
		}
		std::cout << (char)186 << std::endl;				// выводим правый край доски
	}

	std::cout << "\t" << (char)200;							// отступ угла левого нижнего;
	for (int i = -1; i < X * 2; i++) {
		std::cout << (char)205;								// выводим нижний край доски
	}
	std::cout << (char)188 << std::endl;					// правый нижний угол
}

int EndGame(char arr[Y][X]) {
	int counter = 0;
	for (int i = 0; i < Y; i++) {
		if ((arr[i][0] == arr[i][1]) && (arr[i][0] == arr[i][2])) {
			if (arr[i][0] != 0) {
				return (arr[i][0] == 'X') ? 'X' : 'O';
			}
		}
	}
	for (int i = 0; i < X; i++) {
		if ((arr[0][i] == arr[1][i]) && (arr[0][i] == arr[2][i])) {
			if (arr[0][i] != 0) {
				return (arr[0][i] == 'X') ? 'X' : 'O';
			}
		}
	}
	if ((arr[0][0] == arr[1][1]) && (arr[0][0] == arr[2][2])) {
		if (arr[0][0] != 0) {
			return (arr[0][0] == 'X') ? 'X' : 'O';
		}
	}
	if ((arr[2][0] == arr[1][1]) && (arr[2][0] == arr[0][2])) {
		if (arr[2][0] != 0) {
			return (arr[2][0] == 'X') ? 'X' : 'O';
		}
	}

	for (int i = 0; i < Y; i++) {
		for (int c = 0; c < X; c++) {
			if (arr[i][c] == 0) {
				counter++;
			}
		}
	}
	return counter;
}