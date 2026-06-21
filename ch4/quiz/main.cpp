#include <iostream>

double getUserInput()
{
    std::cout << "Enter a double value: ";
    double x {};
    std::cin >> x;

    return x;
}

char getSymbol()
{
    std::cout << "Enter +, -, *, or /: ";
    char c {};
    std::cin >> c;

    return c;
}

int main()
{
    double num1 { getUserInput() };
    double num2 { getUserInput() };
    char symbol { getSymbol() };

    if (symbol == '+')
        std::cout << num1 << " + " << num2 << " is " << num1 + num2;
    else if (symbol == '-')
        std::cout << num1 << " - " << num2 << " is " << num1 - num2;
    else if (symbol == '*')
        std::cout << num1 << " * " << num2 << " is " << num1 * num2;
    else if (symbol == '/') 
        std::cout << num1 << " / " << num2 << " is " << num1 / num2 << '\n';
    else
        return;

    return 0;
}