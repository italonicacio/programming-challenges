#include <iostream>
#include <climits>

int main()
{
    unsigned int max = 0 , pos;

    for(int i = 0; i < 100; i++)
    {
        unsigned int aux;
        std::cin >> aux;
        if( aux > max)
        {
            max = aux;
            pos = i + 1;
        }
            
        
    }

    std::cout << max << std::endl
              << pos << std::endl;
        
    


    return 0;
}