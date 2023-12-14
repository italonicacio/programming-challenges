#include <iostream>

#define year 365
#define month 30

int main()
{

    int age_in_days, aux;
    int years, months, days;


    std::cin >> age_in_days;

    years = age_in_days/year;
    aux = age_in_days%year;

    months = aux/month;
    aux = aux%month;

    days = aux;

    std::cout   << years    << " ano(s)"  << std::endl
                << months   << " mes(es)" << std::endl
                << days     << " dia(s)"  << std::endl;
 

    return 0;
}