#include <iostream>

int add(int x, int y)
{
    return x + y;
}

void printResult(int z)
{
    std::cout << "The answer is: " << z << '\n';
}

int getUserInput()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    int x{ getUserInput() };
std::cerr << "Int x is " << x <<'\n';
    int y{ getUserInput() };
std::cerr << "Int y is " << y <<'\n';

    int z { add(x, y) };
    printResult(z);

    return 0;
}