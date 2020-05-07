#include <iostream>


int main()
{
    int mean = 0;
    int count = 0;
    while( true )
    {
        int age;
        std::cin >> age;
        if( age >= 0 )
        {
            mean += age;
            count++;

        }else{
            break;
        }

    }

    std::cout.precision(2);
    std::cout << std::fixed << (mean/float(count)) << std::endl;

    return 0;
}