#include <iostream>

int main() {
    const double PI = 3.14159;
    //const keyword which means a variable cannot be assigned another value once declared a const 
    
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << "cm";



    
    
    
    return 0;
}