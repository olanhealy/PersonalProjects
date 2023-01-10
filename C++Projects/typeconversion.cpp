#include <iostream>
int main() {
/* type conversion = converting a value of one data type to another
                            implicit = automatic
                            Explicit = Preede value with new data type (int)*/
  //  double x = (int) 3.14;

   // std::cout << x; 
  // char x = (int) 100;
 //  std::cout << x;                       
int correct = 8;
int qs = 10; 
double score = correct/(double) qs * 100;

std::cout << score << "%";



    return 0;
}
