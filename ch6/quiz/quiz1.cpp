#include <iostream>

int getUserInput()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

constexpr int oddEven(int x)
{
    if ((x % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x { getUserInput() };
    if (oddEven(x))
    {
        std::cout << x << " is even\n";
    }
    else
    {
        std::cout << x << " is odd\n";
    }

    return 0;
}