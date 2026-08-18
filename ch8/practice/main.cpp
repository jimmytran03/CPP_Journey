#include <iostream>

void switchExample(int x)
{
    switch (x)
    {
    case 1:
        std::cout << "One";
        return; 
    case 2:
        std::cout << "two";
        return; 
    case 3:
        std::cout << "three";
        return; 
    default:
        std::cout << "unknown";
        return;    
    }
}

int main()
{
    switchExample(2);
    std::cout << '\n';

    return 0;
}