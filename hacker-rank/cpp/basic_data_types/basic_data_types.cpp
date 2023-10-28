#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    int int32;
    long int int64;
    char char1;
    float real32;
    double real64;

    std::cin >> int32
             >> int64
             >> char1
             >> real32
             >> real64;
    
    std::cout << std::fixed;
    std::cout << int32 << "\n"
              << int64 << "\n"
              << char1 << "\n"
              << std::setprecision(3)
              << real32 << "\n"
              << std::setprecision(9)

              << real64 << "\n";

    
    return 0;
}