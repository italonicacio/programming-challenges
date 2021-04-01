#include <iostream>


int main()
{
    
    int value, aux_value;
    int banknotes_100;
    int banknotes_50;
    int banknotes_20;
    int banknotes_10;
    int banknotes_5;
    int banknotes_2;
    int banknotes_1;

    std::cin >> value;
    aux_value = value;

    banknotes_100 = aux_value/100;
    aux_value %= 100;

    banknotes_50 = aux_value/50;
    aux_value %= 50;

    banknotes_20 = aux_value/20;
    aux_value %= 20;

    banknotes_10 = aux_value/10;
    aux_value %= 10;

    banknotes_5 = aux_value/5;
    aux_value %= 5;

    banknotes_2 = aux_value/2;
    aux_value %= 2;

    banknotes_1 = aux_value;
    
    std::cout << value << std::endl;
    std::cout << banknotes_100 << " nota(s) de R$ 100,00" << std::endl;
    std::cout << banknotes_50 << " nota(s) de R$ 50,00" << std::endl;
    std::cout << banknotes_20 << " nota(s) de R$ 20,00" << std::endl;
    std::cout << banknotes_10 << " nota(s) de R$ 10,00" << std::endl;
    std::cout << banknotes_5 << " nota(s) de R$ 5,00" << std::endl;
    std::cout << banknotes_2 << " nota(s) de R$ 2,00" << std::endl;
    std::cout << banknotes_1 << " nota(s) de R$ 1,00" << std::endl;

    return 0;
}
