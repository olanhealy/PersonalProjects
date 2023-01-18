#include <iostream>

int main() {

std::string name;

std::cout << "Enter your name: ";
std::getline(std::cin, name);
name.insert(0, "L");

if (name.length() > 12  ) {
    std::cout << "Name too long";
} else {
    std::cout << "Welcome " << name;
}

    return 0;
}