#include <iostream>

int main() {
    double temp;
    char unit;

    std::cout << "*********Temperatue conversion********\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "Choose a unit to convert to: ";
    std::cin >> unit;
    if ( unit = 'F'){
          std::cout << "Enter Celsuis temp";
          std::cin >> temp;

          temp = (1.8 * temp) + 32.0;
            std::cout << "Temperature is: " << temp << "F\n";
    } else if (unit = 'C') {
        std::cout << "Enter Fahrenheit temp";
          std::cin >> temp;

          temp = ( temp - 32) / 1.8;
          std::cout << "Temperature is: " << temp << "C\n";

    } else {
        std::cout << "Invalid input\n";
    }

      

    std::cout << "**************************************";
    
    
    
    return 0;
}