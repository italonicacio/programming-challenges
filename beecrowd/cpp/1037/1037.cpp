#include <iostream> 

#define COND1 1 // [0,25]
#define COND2 2 // (25,50]
#define COND3 3 // (50,75]
#define COND4 4 // (75,100]
#define ERROR 0 // Out of range

int Interval(float value)
{
    if( 0.00 <= value and value <= 25.00)
        return COND1;
    else if(25.00 < value and value <= 50.00)
        return COND2;
    else if(50 < value and value <= 75)
        return COND3;
    else if(75 < value and value <= 100)
        return COND4;
    else 
        return ERROR;
}



int main()
{
    float value;
    int cond;

    std::cin >> value;

    cond = Interval(value);

    switch(cond)
    {
    case COND1:
        std::cout << "Intervalo [0,25]" << std::endl;
        break;
    case COND2:
        std::cout << "Intervalo (25,50]" << std::endl;
        break;
    case COND3:
        std::cout << "Intervalo (50,75]" << std::endl;
        break;
    case COND4:
        std::cout << "Intervalo (75,100]" << std::endl;
        break;
    default:
        std::cout << "Fora de intervalo" << std::endl;
        break;
    }

    return 0;
}