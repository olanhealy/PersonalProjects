#include <iostream>

int main() {
/* do while loops = do some block of code first,
THEN repeat it again if the condition is true*/
int number;

do {
    std::cout << "Enter positive number : ";
    std::cin >> number;
}while (number < 0);
std::cout << "Number = " << number ;


return 0;
}