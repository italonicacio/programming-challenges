#include <iostream>
#include <cmath>

#define PI 3.14159


int main()
{
    double a, b, c;

    std::cin >> a >> b >> c;

    std::cout.precision(3);
    std::cout << std::fixed << "TRIANGULO: "  << (a * c)/2       << std::endl 
                            << "CIRCULO: "   << PI * pow(c, 2.0) << std::endl
                            << "TRAPEZIO: "  << ( (a + b) * c)/2 << std::endl
                            << "QUADRADO: "  << b * b            << std::endl
                            << "RETANGULO: " << a * b            << std::endl;


    return 0;
}