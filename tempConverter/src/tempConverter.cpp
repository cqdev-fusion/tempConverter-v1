/*
 * tempConverter.cpp
 *
 *  Created on: 31 Dec 2021
 *      Author: fusion
 */


// TODO: Place functions in other files
// Work out how to do this.
// Streamline code


#include <iostream>

void welcomeBanner();
void menuSelector();
void celciusToFahrenheit(double celcius);
void celciusToKelvine(double celcius);
void celciusToRankine(double celcius);
void fahrenheitToCelcius(double fahrenheit);
void fahrenheitToKelvine(double fahrenheit);
void fahrenheitToRankine(double fahrenheit);
void kelvineToCelcius(double kelvine);
void kelvineToFahrenheit(double kelvine);
void kelvineToRankine(double kelvine);
void rankineToCelcius(double rankine);
void rankineToFahrenheit(double rankine);
void rankineToKelvine(double rankine);

double celcius{};
double fahrenheit{};
double kelvine{};
double rankine{};

int main(int argc, char **argv) {

	welcomeBanner();
	menuSelector();


	int options{};

	do {
		std::cout << "Option: ";
		std::cin >> options;

		switch (options) {
			case 1:
				celciusToFahrenheit(celcius);
				break;
			case 2:
				celciusToKelvine(celcius);
				break;
			case 3:
				celciusToRankine(celcius);
				break;
			case 4:
				fahrenheitToCelcius(fahrenheit);
				break;
			case 5:
				fahrenheitToKelvine(fahrenheit);
				break;
			case 6:
				fahrenheitToRankine(fahrenheit);
				break;
			case 7:
				kelvineToCelcius(kelvine);
				break;
			case 8:
				kelvineToFahrenheit(kelvine);
				break;
			case 9:
				kelvineToRankine(kelvine);
				break;
			case 10:
				rankineToCelcius(rankine);
				break;
			case 11:
				rankineToFahrenheit(rankine);
				break;
			case 12:
				rankineToKelvine(rankine);
				break;
			case 13:
				std::cout << "Quitting" << std::endl;
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

void celciusToFahrenheit(double celcius){
	std::cout << "\n============ Celcius to Fahrenheit ============\n";
	std::cout << "===============================================\n";
	std::cout << "\nPlease enter a number: ";
	std::cin >> celcius;
	fahrenheit = (celcius * 9/5) + 32;
	std::cout << std::endl;
	std::cout << celcius << "˚C is equivalent to " << fahrenheit << "˚F\n" << std::endl;
	std::cout << "===============================================\n";
}

void celciusToKelvine(double celcius){
	std::cout << "\n============ Celcius to Kelvine ============\n";
	std::cout << "===============================================\n";
	std::cout << "\nPlease enter a number: ";
	std::cin >> celcius;
	kelvine = celcius + 273.15;
	std::cout << std::endl;
	std::cout << celcius << "˚C is equivalent to " << kelvine << "˚K\n" << std::endl;
	std::cout << "===============================================\n";
}

void celciusToRankine(double celcius){
	std::cout << "\n============ Celcius to Rankine ============\n";
	std::cout << "===============================================\n";
	std::cout << "\nPlease enter a number: ";
	std::cin >> celcius;
	rankine = (celcius + 273.15) * 9/5;
	std::cout << std::endl;
	std::cout << celcius << "˚C is equivalent to " << rankine << "˚R\n" << std::endl;
	std::cout << "===============================================\n";
}

void fahrenheitToCelcius(double fahrenheit){
	std::cout << "\n============ Fahrenheit to Celcius ============\n";
	std::cout << "===============================================\n";
	std::cout << "\nPlease enter a number: ";
	std::cin >> fahrenheit;
	celcius = (fahrenheit - 32) * 5/9;
	std::cout << std::endl;
	std::cout << fahrenheit << "˚F is equivalent to " << celcius << "˚C\n" << std::endl;
	std::cout << "===============================================\n";
}

void fahrenheitToKelvine(double fahrenheit){
	std::cout << "\n============ Fahrenheit to Kelvine ============\n";
	std::cout << "===============================================\n";
	std::cout << "\nPlease enter a number: ";
	std::cin >> fahrenheit;
	kelvine = (fahrenheit + 459.67) * 5/9;
	std::cout << std::endl;
	std::cout << fahrenheit << "˚F is equivalent to " << kelvine << "˚K\n" << std::endl;
	std::cout << "===============================================\n";
}

void fahrenheitToRankine(double fahrenheit){
	std::cout << "\n============ Fahrenheit to Rankin ============\n";
	std::cout << "===============================================\n";
	std::cout << "\nPlease enter a number: ";
	std::cin >> fahrenheit;
	rankine = fahrenheit + 459.67;
	std::cout << std::endl;
	std::cout << fahrenheit << "˚F is equivalent to " << rankine << "˚R\n" << std::endl;
	std::cout << "===============================================\n";
}

void kelvineToCelcius(double kelvine){
	std::cout << "\n============ Kelvine to Celcius ============\n";
	std::cout << "===============================================\n";
	std::cout << "\nPlease enter a number: ";
	std::cin >> kelvine;
	celcius = kelvine - 273.15;
	std::cout << std::endl;
	std::cout << kelvine << "˚K is equivalent to " << celcius << "˚C\n" << std::endl;
	std::cout << "===============================================\n";
}

void kelvineToFahrenheit(double kelvine){
	std::cout << "\n============ Kelvine to Fahrenheit ============\n";
	std::cout << "===============================================\n";
	std::cout << "\nPlease enter a number: ";
	std::cin >> kelvine;
	fahrenheit = (kelvine * 9/5) -459.67;
	std::cout << std::endl;
	std::cout << kelvine << "˚K is equivalent to " << fahrenheit << "˚F\n" << std::endl;
	std::cout << "===============================================\n";
}

void kelvineToRankine(double kelvin){
	std::cout << "\n============ Kelvine to Rankine ============\n";
	std::cout << "===============================================\n";
	std::cout << "\nPlease enter a number: ";
	std::cin >> kelvine;
	rankine = (kelvine * 9/5);
	std::cout << std::endl;
	std::cout << kelvine << "˚K is equivalent to " << rankine << "˚R\n" << std::endl;
	std::cout << "===============================================\n";
}

void rankineToCelcius(double rankine){
	std::cout << "\n============ Rankine to Celcius ============\n";
	std::cout << "===============================================\n";
	std::cout << "\nPlease enter a number: ";
	std::cin >> rankine;
	celcius = (rankine - 491.67) * 5/9;
	std::cout << std::endl;
	std::cout << rankine << "˚R is equivalent to " << celcius << "˚C\n" << std::endl;
	std::cout << "===============================================\n";
}

void rankineToFahrenheit(double rankine){
	std::cout << "\n============ Rankine to Fahrenheit ============\n";
	std::cout << "===============================================\n";
	std::cout << "\nPlease enter a number: ";
	std::cin >> rankine;
	fahrenheit = rankine - 459.67;
	std::cout << std::endl;
	std::cout << rankine << "˚R is equivalent to " << fahrenheit << "˚F\n" << std::endl;
	std::cout << "===============================================\n";
}

void rankineToKelvine(double rankine){
	std::cout << "\n============ Rankine to Kelvine ============\n";
	std::cout << "===============================================\n";
	std::cout << "\nPlease enter a number: ";
	std::cin >> rankine;
	kelvine = rankine * 5/9;
	std::cout << std::endl;
	std::cout << rankine << "˚R is equivalent to " << kelvine << "˚K\n" << std::endl;
	std::cout << "===============================================\n";
}








