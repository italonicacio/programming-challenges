#include <iostream>
#include <string>
#include <math.h>


int MDC(int a, int b)
{
    if(b == 0)
        return a;
    else
        return MDC(b, a%b);
}


int main()
{

    int number_operations;
    int N1, N2, D1, D2;
    int num, den, mdc;
    char OP, aux;
    
    
    std::cin >> number_operations;

    for(int i = 0; i < number_operations; i++)
    {
        std::cin    >> N1 >> aux >> D1  //fraction 1
                    >> OP               // Operation
                    >> N2 >> aux >> D2; // fraction      

        switch (OP)
        {
            case '+':
                num =  (N1*D2 + N2*D1);
                den =  (D1*D2);
            break;

            case '-':
                num =  (N1*D2 - N2*D1);
                den =  (D1*D2);
            break;

            case '*':
                num =  (N1*N2);
                den =  (D1*D2);
            break;

            case '/':
                num =  (N1*D2);
                den =  (N2*D1);
            break;
        }

        mdc = abs(MDC(num, den));
        std::cout << num << "/" << den << " = " << num/mdc << "/" << den/mdc << std::endl;

    }

    return 0;
}