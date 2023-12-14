#include <iostream>
#include <string>
#include <bits/stdc++.h>

#define BEGIN 0

void SumAsc(std::string* str, int value, int begin, bool All_chars = false)
{
    char c;
    for(int i = begin; i < str->length(); i++)
    {
        c = str->at(i);

        if(All_chars)
            str->at(i) += value;
        else
            if( ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
                str->at(i) += value;

    } 
       
} 


int main()
{

    int displacement1 = 3;
    int displacement2 = -1;
    

    int cont;
    
    std::cin >> cont;

    for(int i = 0; i < cont; i++)
    {
        std::string message;

        std::cin.ignore();
        std::getline(std::cin, message);

        SumAsc(&message, displacement1, BEGIN);

        std::reverse(message.begin(), message.end());

        SumAsc(&message, displacement2, message.length()/2, true);

        std::cout << message << std::endl;
    
    }
    
    return 0;
}