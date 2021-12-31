/*
 * tempConverter.cpp
 *
 *  Created on: 31 Dec 2021
 *      Author: fusion
 */


#include <iostream>

void welcomeBanner();
void menuSelector();

int main(int argc, char **argv) {

	welcomeBanner();
	menuSelector();

	int options{};

	do {
		std::cout << "Option: ";
		std::cin >> options;

		switch (options) {
			case 1:
				std::cout << "case1\n";
				break;
			case 2:
				std::cout << "case2\n";
				break;
			case 3:
				std::cout << "case3\n";
				break;
			case 4:
				std::cout << "case4\n";
				break;
			case 5:
				std::cout << "case5\n";
				break;
			case 6:
				std::cout << "case6\n";
				break;
			case 7:
				std::cout << "case7\n";
				break;
			case 8:
				std::cout << "case8\n";
				break;
			case 9:
				std::cout << "case9\n";
				break;
			case 10:
				std::cout << "case10\n";
				break;
			case 11:
				std::cout << "case11\n";
				break;
			case 12:
				std::cout << "case12\n";
				break;
			case 13:
				std::cout << "case13\n";
				break;
			default:
				std::cout << "Please choose from the menu provided" << std::endl;
				break;
		}
	} while (options != 13);{
		std::cout << "GoodBy!!!" << std::endl;
	}


	return 0;
}

void welcomeBanner() {
	std::cout << "==========================================================" << std::endl;
	std::cout << "============ Welcome to Temperature Converter ============" << std::endl;
	std::cout << "==========================================================" << std::endl;
}

void menuSelector(){

	std::cout << "\n============ Please enter an option to convert ===========" << std::endl;
	std::cout << "\n\t[1] - Celcius to Fahrenheit\n";
	std::cout << "\t[2] - Celcius to Kelvine\n";
	std::cout << "\t[3] - Celcius to Rankine\n";
	std::cout << "\t[4] - Fahrenheit to Celcius\n";
	std::cout << "\t[5] - Fahrenheit to Kelvine\n";
	std::cout << "\t[6] - Fahrenheit to Rankine\n";
	std::cout << "\t[7] - Kelvine to Celcius\n";
	std::cout << "\t[8] - Kelvine to Fahrenheit\n";
	std::cout << "\t[9] - Kelvine to Rankine\n";
	std::cout << "\t[10] - Rankine to Celcius\n";
	std::cout << "\t[11] - Rankine to Fahrenheit\n";
	std::cout << "\t[12] - Rankine to Kelvine\n";
	std::cout << "\t[13] - Quit\n\n";
	std::cout << "=========================================================" << std::endl;
}
