#include <iostream>
int main() {
    /* ternary operator ?: = replacement to an if/else staement
    condition ? expression1 : expression 2*/
    int grade = 80;
    grade >= 40 ? std::cout << "PASS" << '\n' : std::cout << "FAIL" << '\n';

    bool hungry = true;
    hungry ? std::cout << "IM HUNGRY" : std::cout << "NOT HUNGRY";

    return 0;
}