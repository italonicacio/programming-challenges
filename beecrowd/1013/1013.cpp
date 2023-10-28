#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;

    std::cin >> a >> b >> c;

    int maior_AB = (a + b + abs(a - b))/2;

    if(maior_AB == a && a >= c)
        std::cout << a << " eh o maior" << std::endl;
    else if(maior_AB == b && b >= c)
        std::cout << b << " eh o maior" << std::endl;
    else
        std::cout << c << " eh o maior" << std::endl;


    return 0;
}