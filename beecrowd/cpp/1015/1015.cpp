#include <iostream>
#include <cmath>


int main()
{
    float p1[2], p2[2];

    std::cin >> p1[0] >> p1[1] >> p2[0] >> p2[1];
    std::cout.precision(4);
    std::cout << std::fixed << sqrt( pow(p2[0] - p1[0],2) + pow(p2[1] - p1[1], 2) ) << std::endl;

    return 0;
}