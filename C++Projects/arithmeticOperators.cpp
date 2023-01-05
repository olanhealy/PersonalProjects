#include <iostream>

int main() {

    //arithmetic operators = return the rsult of specific arithmetic operation (+ - * /)

    int students = 20;
    //students + 1
    students++;

    //students - 1
    students--;

    //students * 2
    students*=2;

    //students /2

    students /=3;

    int remainder = students % 2;

    std::cout << remainder; 

    return 0;
}