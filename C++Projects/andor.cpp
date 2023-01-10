#include <iostream>

int main() {
 /*
 && = check if 2 conditionsn are true
 || = check if at least 1 of 2 conditions is true
 !  = reverse the logical state of operand
 */

int temp; 
std::cout << "Enter the temperature";
std::cin >> temp;
if(temp > 0 && temp < 30) {
    std::cout << "Temperature is good";
} else{
        std::cout << "Temperature is bad";
    }
  return 0;
}

  
