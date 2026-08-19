#include <iostream>

void calculate(int x, char symbol, int y)
{
    switch (symbol)
    {
    case '+':
        std::cout << x +y << '\n';
        break;
    case '-':
        std::cout << x - y << '\n';
        break;
    case '*':
        std::cout << x * y << '\n';
        break;
    case '/': 
        std::cout << x / y << '\n';
        break;
    case '%':
        std::cout << x % y << '\n';
        break;
    default:
        std::cout << "Invalid" << '\n';
        break;
    }
}

int main()
{
    std::cout << "Enter first number" << '\n';
    int x{};
    std::cin >> x;

    std::cout << "Enter operation" << '\n';
    char symbol{};
    std::cin >> symbol;

    std::cout << "Enter second number" << '\n';
    int y{};
    std::cin >> y;

    calculate(x, symbol, y);

    return 0;
}