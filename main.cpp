#include <iostream>

int main()
{
    int total{};
    for(int i{ 0 }; i <= 5; ++i)
    {
        total += i;
    }
    std::cout << total;
    
    return 0;
}