#include"Function.h"


//Git Branches



void main() {
	char sumbol;
	int booton;
	int counter = 0;
	char arrCh[Y][X] = {};
	Grid(arrCh);
	while (true) {
		booton = _getch();
		counter++ % 2 == 0 ? sumbol = 'X' : sumbol = 'O';
		Coordinates(booton, sumbol, arrCh);
		Grid(arrCh);
		if (EndGame(arrCh) == false) {
			setlocale(LC_ALL, "");
			std::cout << "Ничья" << std::endl;
			return;
		}
	}
}