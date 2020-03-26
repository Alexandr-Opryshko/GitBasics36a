#pragma once
#include<iostream>

const int ROWS = 10;
const int COLS = 10;

template<typename T>T CalcFactorial(T factorial);

template<typename T>void FillRand(T arr[], const int n);
template<typename T>void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T data);
template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);
