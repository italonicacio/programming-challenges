#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.14159

int main()
{
    double radius;

    std::cin >> radius;
    double area = PI*pow(radius, 2);
    std::cout.precision(4);
    std::cout << "A=" << std::fixed << area << std::endl;

    return 0;
}