#include <iostream>

int sumTo(int num)
{
    int total{};
    for(int i{ 0 }; i <= num; ++i)
    {
        total += i;
    }
    return total;
}

int main()
{
    std::cout << sumTo(5);

    return 0;
}