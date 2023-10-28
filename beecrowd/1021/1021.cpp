#include <iostream>
#include <math.h>

void DecomposingBankNotes(int *banknotes, int banknotes_type, float *value)
{
    *banknotes = *value/banknotes_type;
    *value -= *banknotes*banknotes_type;
}

void DecomposingCoins( int *coins, float coin_type, float  *value)
{
    *coins = *value/coin_type;
    *value -= *coins*coin_type;
    *value += 0.001f;
}


int main()
{
    float value, aux_value;
    int banknotes[6]; // 100 pos 0, 50 pos 1, ...
    int coins[6]; // 1 pos 0, .50 pos 1, ...

    std::cin >> value;
    aux_value = value;

    DecomposingBankNotes(&banknotes[0], 100, &aux_value);
    DecomposingBankNotes(&banknotes[1], 50, &aux_value);
    DecomposingBankNotes(&banknotes[2], 20, &aux_value);
    DecomposingBankNotes(&banknotes[3], 10, &aux_value);
    DecomposingBankNotes(&banknotes[4], 5, &aux_value);
    DecomposingBankNotes(&banknotes[5], 2, &aux_value);

    DecomposingCoins(&coins[0], 1.0f, &aux_value);
    DecomposingCoins(&coins[1], 0.5f, &aux_value);
    DecomposingCoins(&coins[2], 0.25f, &aux_value);
    DecomposingCoins(&coins[3], 0.10f, &aux_value);
    DecomposingCoins(&coins[4], 0.05f, &aux_value);
    DecomposingCoins(&coins[5], 0.01f, &aux_value);

    std::cout   << "NOTAS:"                                 << std::endl
                << banknotes[0] << " nota(s) de R$ 100.00"  << std::endl
                << banknotes[1] << " nota(s) de R$ 50.00"   << std::endl
                << banknotes[2] << " nota(s) de R$ 20.00"   << std::endl
                << banknotes[3] << " nota(s) de R$ 10.00"   << std::endl
                << banknotes[4] << " nota(s) de R$ 5.00"    << std::endl
                << banknotes[5] << " nota(s) de R$ 2.00"    << std::endl;

    std::cout   << "MOEDAS:"                            << std::endl
                << coins[0] << " moeda(s) de R$ 1.00"   << std::endl
                << coins[1] << " moeda(s) de R$ 0.50"   << std::endl
                << coins[2] << " moeda(s) de R$ 0.25"   << std::endl
                << coins[3] << " moeda(s) de R$ 0.10"   << std::endl
                << coins[4] << " moeda(s) de R$ 0.05"   << std::endl
                << coins[5] << " moeda(s) de R$ 0.01"   << std::endl;


    return 0;
}