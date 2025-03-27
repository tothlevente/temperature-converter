#include <iostream>
#include <iomanip>

int main() {
    int choice;
    double temperature, convertedTemperature;

    std::cout << "Temperature Converter\n";
    std::cout << "1. Celsius to Fahrenheit\n";
    std::cout << "2. Fahrenheit to Celsius\n";

    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            std::cout << "Enter temperature in Celsius: ";
            std::cin >> temperature;
            convertedTemperature = (temperature * 9.0 / 5.0) + 32.0;
            std::cout << std::fixed << std::setprecision(2);
            std::cout << temperature << " Celsius is " << convertedTemperature << " Fahrenheit.\n";
            break;
        }
        case 2: {
            std::cout << "Enter temperature in Fahrenheit: ";
            std::cin >> temperature;
            convertedTemperature = (temperature - 32.0) * 5.0 / 9.0;
            std::cout << std::fixed << std::setprecision(2);
            std::cout << temperature << " Fahrenheit is " << convertedTemperature << " Celsius.\n";
            break;
        }
        default: {
            std::cout << "\nInvalid choice.\n";
            break;
        }
    }

    return 0;
}