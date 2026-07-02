#include <iostream>

int max (int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

constexpr int xmax(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int m1 { max(5, 6) };
    const int m2 { max(5, 6) };
    constexpr int m3 { max(5, 6) };

    int m4 { cmax(5, 6) };
    const int m5 { cmax(5, 6) };
    constexpr int m6 { cmax(5, 6) };

    return 0;
}