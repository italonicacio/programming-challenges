#include <iostream>


int main()
{

    int part_code[2], number_pieces[2];
    float part_value[2];

    std::cin >> part_code[0] >> number_pieces[0] >> part_value[0];
    std::cin >> part_code[1] >> number_pieces[1] >> part_value[1];
    
    float total = number_pieces[0]*part_value[0] + number_pieces[1]*part_value[1];

    std::cout.precision(2);
    std::cout << "VALOR A PAGAR: R$ " << std::fixed << total << std::endl;

    return 0;
}