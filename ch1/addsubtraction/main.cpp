#include <iostream>

// Program that gets user to enter 2 numbers and tells the result of adding and subtracting the two numbers
int main()
{
    int num1{};
    int num2{};

    std::cout << "Enter an integer: ";
    std::cin >> num1;

    std::cout << "Enter another integer: ";
    std::cin >> num2;

    std::cout << num1 << " + " << num2 << " is " << num1 + num2 << ".\n";
    std::cout << num1 << " - " << num2 << " is " << num1 - num2 << ".\n";

    return 0;
}