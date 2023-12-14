#include <iostream>


unsigned long long int fib( int pos )
{
    unsigned long long int aux;

    unsigned long long int n0 = 0;
    unsigned long long int n1 = 1;

    if( pos == 0)
        return n0;
    else if( pos == 1)
        return n1;

    for( int i = 1; i < pos; i++ )
    {
        aux = n0 + n1;
        n0 = n1;
        n1 = aux;

    }


    return aux;

} 

int main()
{

    int number_cases;

    std::cin >> number_cases;

    for( int i =0; i < number_cases; i++ )
    {
        int pos;
        std::cin >> pos;
        std::cout << "Fib(" << pos << ") = " << fib( pos ) << std::endl;

    }

    return 0;
}