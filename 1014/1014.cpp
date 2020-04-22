#include <iostream>

int main()
{
    int x;
    float y;

    std::cin >> x >> y;

    std::cout.precision(3);
    std::cout << std::fixed << x/y << " km/l" << std::endl;



    return 0;
}