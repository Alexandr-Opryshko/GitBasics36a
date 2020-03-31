#pragma once
#include<iostream>
#include<conio.h>

const int X = 3;
const int Y = 3;
const int SIZE_COUNTER = X * Y;

void Coordinates(int booton, char sumbol, char arr[Y][X]);
void Grid(char arr[Y][X]);
int EndGame(char arr[Y][X]);