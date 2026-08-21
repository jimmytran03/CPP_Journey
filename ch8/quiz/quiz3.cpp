#include <iostream>

int main()
{
    int num1{ 5 };
    while (num1 >= 1)
    {
        int num2{ num1 };
        while (num2 >= 1)
        {
            std::cout << num2 << ' ';
            --num2; 
        }   
        std::cout << '\n';
        --num1;
    }
    return 0;
}