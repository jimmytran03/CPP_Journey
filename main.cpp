#include "io.h"
#include <iostream>

int main()
{
    std::cout << "Enter your first number: " << '\n';
    int num1 { readNumber() };

    std::cout << "Enter your second number: " << '\n';
    int num2 { readNumber() };

    writeAnswer(num1 + num2);
    
    return 0;
}