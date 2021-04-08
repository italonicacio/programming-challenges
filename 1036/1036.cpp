#include <iostream>
#include <cmath>

double Delta(double A, double B, double C)
{
    return (B*B - 4*A*C);
}

void Bhaskara(double A, double B, double C, double *R1, double *R2)
{
    double delta = Delta(A, B, C);
    if(delta < 0.0 || A == 0.0)
    {
        std::cout << "Impossivel calcular" << std::endl;
        exit(0);
    }

    *R1 = (-B + sqrt(delta))/(2*A);
    *R2 = (-B - sqrt(delta))/(2*A);

}


int main()
{

    double A, B, C;
    double R1, R2;

    std::cin >> A >> B >> C;

    Bhaskara(A, B, C, &R1, &R2);

    std::cout.precision(5);
    std::cout   << "R1 = " << std::fixed << R1 << std::endl
                << "R2 = " << std::fixed << R2 << std::endl;

    return 0;
}