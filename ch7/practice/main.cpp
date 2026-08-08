#include <iostream>

namespace constants
{
    constexpr double gravity { 9.8 };
}

int main()
{
    std::cout << constants::gravity << '\n';

    return 0;
}