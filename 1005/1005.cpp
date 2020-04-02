#include <iostream>


int main()
{

    double a;
    double b;

    std::cin >> a >> b;
    std::cout.precision(5);
    std::cout << "MEDIA = " << std::fixed << (a*3.5+b*7.5)/11 << std::endl;



    return 0;
}