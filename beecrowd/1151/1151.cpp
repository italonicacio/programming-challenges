#include <iostream>

int main()
{
    int N;

    std::cin >> N;
    std::cout << 0 << " " << 1 << " ";
    
    int aux;
    int aux1 = 0;
    int aux2 = 1;
    for(int i = 2; i < N; i++)
    {
        aux = aux1 + aux2;
        aux1 = aux2;
        aux2 = aux;
        
        std::cout << aux;

        if(i < N-1)
            std::cout << " ";
    }

    std::cout << std::endl;

    return 0;
}