#include <iostream>

int main()
{
    int outer_num{ 5 };
    while (outer_num >= 1)
    {
        int inner_num{ outer_num };
        while (inner_num >= 1)
        {
            std::cout << inner_num << ' ';
            --inner_num;
        }
        std::cout << '\n';
        --outer_num;
    }

    return 0;
}