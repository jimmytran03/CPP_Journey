#include <iostream>

int accumulate(int x)
{
    static int num{};
    num += x;
    return num;
}

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}

// Short comings of accumulate: 
// 1. There is no conventional way to reset the accumulation without restarting the program.
// 2. There is no conventional way to have multiple accumulators running.