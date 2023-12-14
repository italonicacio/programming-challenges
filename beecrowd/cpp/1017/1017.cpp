#include <iostream>
#include <cmath>

#define KML 12.0

int main()
{

    int time, average_speed;
    std::cin >> time >> average_speed;
    std::cout.precision(3);
    std::cout << std::fixed << (time * average_speed)/KML << std::endl;
    

    return 0;
}