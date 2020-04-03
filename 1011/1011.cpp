#include <iostream> 
#include <math.h>

#define PI 3.14159

int main()
{
    double radius;

    std::cin >> radius;

    std::cout.precision(3);
    std::cout << "VOLUME = " << std::fixed << (4.0/3.0) * PI * pow(radius,3) << std::endl;


    return 0;
}