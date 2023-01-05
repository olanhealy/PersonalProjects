#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int >> pairlist_t; //really long datatype into just a variable _t = type
//typedef std::string text_t;
//typedef int number_t;   
using text_t = std::string;
using number_t = int;
int main() {
    /*
    typedef: reserved keyword used to create an additional name 
    (alias) for another data type. New indentifier for an excisting type.
    Helps with readability and reduces typos. Use when there is clear benefit.
    ****Replaced with 'using' (work better w/ templates)*****
    */
    text_t firstName = "Olan";
    std::cout << firstName << '\n';
    number_t age = 20;
    std::cout << age << '\n';
    
    
    return 0;
}