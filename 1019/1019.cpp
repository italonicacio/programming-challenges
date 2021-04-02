#include <iostream> 


int main()
{

    int time_in_seconds, aux;
    int hours, minutes, seconds;

    std::cin >> time_in_seconds;
    
    hours = (time_in_seconds/60)/60;
    aux =  abs((hours*60*60) - time_in_seconds);

    minutes =  aux/60;
    aux = aux%60;

    seconds = aux;


    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;

    return 0;
}