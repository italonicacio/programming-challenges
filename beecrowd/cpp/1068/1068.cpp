#include <iostream>
#include <string>

int main()
{
    std::string expression;

    while(std::cin >> expression)
    {
        int count_parentheses = 0;

        for(int i = 0; i < expression.size(); i++)
        {
            if( count_parentheses == 0 && expression[i] == ')' )
            {
                --count_parentheses;
                break;
            }else{
                if( expression[i] == '(' )
                    ++count_parentheses;
                else if( expression[i] == ')')
                    --count_parentheses;
            }
        }  

        if( count_parentheses != 0)
            std::cout << "incorrect" <<std::endl;
        else
            std::cout << "correct" << std::endl;
    }
    
    return 0;
}