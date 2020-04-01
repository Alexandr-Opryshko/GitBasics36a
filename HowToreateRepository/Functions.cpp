#include"Function.h"

int Fibonacci(int n) {
    return n <= 1 ? n : Fibonacci(n - 1) + Fibonacci(n - 2);
}

void PrintFib(int num, int counter) {
    std::cout << Fibonacci(counter) << "\n";
    if (num > counter) {
        PrintFib(num, counter + 1);
    }
    return;
}

int PrintWaitingIn(void) {
    int num;
    std::cout << "Ведите число для вывода ряда Fibonacci - "; std::cin >> num; std::cout << std::endl;
    return num;
}