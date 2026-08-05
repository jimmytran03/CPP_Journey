#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int smaller{};
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    int larger{};
    std::cin >> larger;

    if (larger < smaller)
    {
        int temp{};

        temp = larger;
        larger = smaller;
        smaller = temp;

        std::cout << "Swapping the values" << '\n';
        std::cout << "The smaller value is " << smaller << '\n';
        std::cout << "The larger value is " << larger << '\n';
    } // temp dies here
    else
    {
        std::cout << "The smaller value is " << smaller << '\n';
        std::cout << "The larger value is " << larger << '\n';
    }

    return 0;
} // larger and smaller die here