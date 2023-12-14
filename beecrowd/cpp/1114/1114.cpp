#include <iostream>

#define password 2002

int main()
{
    int test_password;

    while (true)
    {
        std::cin >> test_password;
        if(test_password != password)
        {
            std::cout << "Senha Invalida" << std::endl;
        }else{
            std::cout << "Acesso Permitido" << std::endl;
            break;
        }
            
    } 
    
    return 0;
}