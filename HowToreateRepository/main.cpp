#include<iostream>

//Git Branches


// ������� ��������� �������� �� ������
template<typename T>void Swap(T& a, T& b, T& c) {
	a = a + b;
	b = a - b;
	a = a - b;

	a = a + c;
	c = a - c;
	a = a - c;

	return;
}
// ������� ��������� �������� �� ��������� (����������� �������������)
template<typename T>void Swap_2(T* a, T* b, T* c) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;

	*a = *a + *c;
	*c = *a - *c;
	*a = *a - *c;

	return;
}
void main() {
	setlocale(LC_ALL, "");
	int a = 5;
	int b = 10;
	int c = 20;

	int* pa = &a;						// ��������� �� ���������� (��������� �� ����� ����������)
	int& aRef = a;						// ������ �� �������� ���������� (��������� �� �������� ����������

	int* pb = &b;						// ��������� �� ���������� (��������� �� ����� ����������)
	int& bRef = b;						// ������ �� �������� ���������� (��������� �� �������� ����������

	int* pc = &c;						// ��������� �� ���������� (��������� �� ����� ����������)
	int& cRef = c;						// ������ �� �������� ���������� (��������� �� �������� ����������

	std::cout << "����� a - " << a << std::endl;
	std::cout << "����� &a - " << &a << std::endl;
	std::cout << "����� *pa - " << pa << std::endl;
	std::cout << "����� &aRef - " << aRef << std::endl;

	std::cout << "a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
	Swap(aRef, bRef, cRef);
	std::cout << "a = " << a << "\tb = " << b << "\tc = " << c << std::endl;

	Swap_2(pa, pb, pc);
	std::cout << "a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
}