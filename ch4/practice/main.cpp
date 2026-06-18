#include <iostream>
#include <cstddef>

int main()
{
    int x { 5 };
    std::size_t s { sizeof(x) };
    std::cout << s << '\n';

    return 0;
}