#include"Function.h"


//Git Branches



void main() {
	char sumbol;
	int booton;
	int counter = 0;
	int temp;
	char arrCh[Y][X] = {};
	Grid(arrCh);
	while (true) {
		booton = _getch();
		counter++ % 2 == 0 ? sumbol = 'X' : sumbol = 'O';
		Coordinates(booton, sumbol, arrCh);
		Grid(arrCh);
		temp = EndGame(arrCh);
		if (temp == false) {
			setlocale(LC_ALL, "");
			std::cout << "Ничья" << std::endl;
			return;
		}
		else if (temp == 'X') {
			setlocale(LC_ALL, "");
			std::cout << "Победил участник 1 - X" << std::endl;
			return;
		}
		else if (temp == 'O') {
			setlocale(LC_ALL, "");
			std::cout << "Победил участник 2 - O" << std::endl;
			return;
		}
	}
}