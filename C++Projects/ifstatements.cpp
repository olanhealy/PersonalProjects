#include <iostream>

int main() {
/* if statements = do something if condition is true
if not, then don't do it*/
int age;
std::cout << "Enter Age: " ;
std::cin >> age;

   if (age >= 100) {
        std::cout << "You are too old to enter site";

}else if (age < 0) {
    std::cout << "You haven't been born yet";
}
    else if(age >= 18) {
   std::cout << "Welcome to this site!" ;
    }

else {
    std::cout << "You are too young to enter this site";
}




    return 0;
}