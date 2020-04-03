#include <iostream>


int main()
{
    int employee_number, worked_hours;
    float salary;

    std::cin >> employee_number >> worked_hours >> salary;

    std::cout << "NUMBER = " << employee_number << std::endl;
    std::cout.precision(2);
    std::cout << "SALARY = U$ " << std::fixed << salary * worked_hours << std::endl;

    return 0;
}