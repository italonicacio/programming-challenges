#include <iostream>
#include <string>

int main()
{
    std::string employee_name;   
    double salary, sold_total;

    std::cin >> employee_name >> salary >> sold_total;
    std::cout.precision(2);
    std::cout << "TOTAL = R$ " << std::fixed << salary + (sold_total*0.15) << std::endl; 

    return 0;
}