#include<iostream>

//Git Branches


// функция принимает значение по ссылке
template<typename T>void Swap(T& a, T& b, T& c) {
	a = a + b;
	b = a - b;
	a = a - b;

	a = a + c;
	c = a - c;
	a = a - c;

	return;
}
// функция принимает значение по указателю (обязательно разименование)
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

	int* pa = &a;						// указатель на переменную (указывает на адрес переменной)
	int& aRef = a;						// ссылка на значение переменной (ссылается на значение переменной

	int* pb = &b;						// указатель на переменную (указывает на адрес переменной)
	int& bRef = b;						// ссылка на значение переменной (ссылается на значение переменной

	int* pc = &c;						// указатель на переменную (указывает на адрес переменной)
	int& cRef = c;						// ссылка на значение переменной (ссылается на значение переменной

	std::cout << "Вывод a - " << a << std::endl;
	std::cout << "Вывод &a - " << &a << std::endl;
	std::cout << "Вывод *pa - " << pa << std::endl;
	std::cout << "Вывод &aRef - " << aRef << std::endl;

	std::cout << "a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
	Swap(aRef, bRef, cRef);
	std::cout << "a = " << a << "\tb = " << b << "\tc = " << c << std::endl;

	Swap_2(pa, pb, pc);
	std::cout << "a = " << a << "\tb = " << b << "\tc = " << c << std::endl;
}