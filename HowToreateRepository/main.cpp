#include"Function.h"
#include"Template.cpp"
//Git Branches


void main() {
	setlocale(LC_ALL, "");

	int factorial;
	Print("��� ���������� ���������� ������� ����� ����� �� 0 �� 10 ");
	std::cin >> factorial; std::cout << std::endl;
	if (factorial > 10) {
		Print("������ ����� ������ ������������");
	}
	else {
		Print("��������� ����� ����� ");
		Print(CalcFactorial(factorial));
	}

	const int n = 5;
	int arrInt[n];
	FillRand(arrInt, n);
	Print(arrInt, n);
	Sort(arrInt, n);
	Print(arrInt, n);

	const int m = 8;
	double arrDb[m];
	FillRand(arrDb, m);
	Print(arrDb, m);
	Sort(arrDb, m);
	Print(arrDb, m);

	int arrToInt[ROWS][COLS];
	FillRand(arrToInt, ROWS, COLS);
	Print(arrToInt, ROWS, COLS);
	Sort(arrToInt, ROWS, COLS);
	Print(arrToInt, ROWS, COLS);

	double arrToDb[ROWS][COLS];
	FillRand(arrToDb, ROWS, COLS);
	Print(arrToDb, ROWS, COLS);
	Sort(arrToDb, ROWS, COLS);
	Print(arrToDb, ROWS, COLS);
}