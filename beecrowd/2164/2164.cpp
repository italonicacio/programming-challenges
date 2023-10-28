#include <iostream>
#include <cmath>

double Fib( unsigned int pos )
{
    double term1 = pow( ( 1.0 + sqrt(5.0 ))/2.0 , pos );
    double term2 = pow( ( 1.0 - sqrt(5.0) )/2.0, pos);
    
    return (term1 - term2)/sqrt(5.0);
}



int main()
{
    unsigned int pos;

    std::cin >> pos;

    std::cout.precision(1);
    std::cout << std::fixed <<  Fib( pos ) << std::endl;

    return 0;
}