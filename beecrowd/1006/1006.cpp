#include <iostream>


int main()
{
    double a, b, c;

    std::cin >> a >> b >> c;
    std::cout.precision(1);
    std::cout << "MEDIA = " << std::fixed << ((a*2) + (b*3) + (c*5))/10 << std::endl;


    return 0;
}