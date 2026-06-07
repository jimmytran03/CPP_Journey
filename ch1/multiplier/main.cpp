#include <iostream>

// Program that gets a user to enter a number and multiplies it by 2 and 3 and dislays the result
int main()
{
	std::cout << "Enter an integer\n";

    int num{};
    std::cin >> num;
    
    std::cout << "Double " << num << " is: " << num * 2 << '\n';
    std::cout << "Triple " << num << " is: " << num * 3 << '\n';

    return 0;
}