#include <iostream>

int main()
{
    char symbol{ 'a' };
    while (symbol <= 'z')
    {
        std::cout << symbol << ": " << static_cast<int>(symbol) <<'\n';
        ++symbol;
    }   

    return 0;
}