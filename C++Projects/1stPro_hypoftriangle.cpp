#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Enter value for side A: ";
    std::cin >> a;

    std::cout << "Enter value for side B: ";
    std::cin >> b;

    //a = pow(a, 2);
   // b = pow(b, 2);

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "The value of the hypotenuse is: " << c;











    return 0;
}