#include "stdafx.h"
#include <iostream>

int readNumber()
{
	std::cout << "Gimme a number!";
	int x;
	std::cin >> x;
	return x;
}

void writeAnswer(int x, int y)
{
	std::cout << "The sum is:" << x + y << std::endl;
}