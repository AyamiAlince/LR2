#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    double temperature;
    std::cout << "Enter the temperature: ";
    std::cin >> temperature;

    char choice;
    std::cout << "Choose the conversion (C for Celsius to Fahrenheit, F for Fahrenheit to Celsius): ";
    std::cin >> choice;

    if (choice == 'C') {
        double fahrenheit = celsiusToFahrenheit(temperature);
        std::cout << temperature << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << std::endl;
    }
    else if (choice == 'F') {
        double celsius = fahrenheitToCelsius(temperature);
        std::cout << temperature << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << std::endl;
    }
    else {
        std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}