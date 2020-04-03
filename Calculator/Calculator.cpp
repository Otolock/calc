// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int addition(int x, int y) {
	return x + y;
}

int subtraction(int x, int y) {
	return x - y;
}

int multiplication(int x, int y) {
	return x * y;
}

double division(int x, int y) {
	return static_cast<double>(x) / static_cast<double>(y);
}

int main() {
	int userCmd = 0;

	int x = 0;
	int y = 0;

	std::cout << "Welcome to Calculator!\n";

	while (userCmd != 5) {
		std::cout << "What operation would you like to perform?\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
		std::cin >> userCmd;

		if (userCmd == 5) {
			continue;
		}

		std::cout << std::endl << "Enter 2 integers:\n";
		std::cin >> x;
		std::cin >> y;

		switch (userCmd) {
		case 1:
			std::cout << x << " + " << y << " = " << addition(x, y) << std::endl;
			break;
		case 2:
			std::cout << x << " - " << y << " = " << subtraction(x, y) << std::endl;
			break;
		case 3:
			std::cout << x << " x " << y << " = " << multiplication(x, y) << std::endl;
			break;
		case 4:
			std::cout << x << " / " << y << " = " << division(x, y) << std::endl;
			break;
		default:
			break;
		}

		std::cout << std::endl;
	}
}