// I had to look at the solution of quiz 2
// This is my attempt of redoing it without looking

#include <iostream>

double getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double height {};
    std::cin >> height;
    return height;
}

void distanceFallen(double height, int seconds)
{
    double distanceFallen { 9.8 * (seconds * seconds) / 2 };
    double ballHeight { height - distanceFallen };

    if (ballHeight > 0.0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground." << '\n';
}

int main()
{
    double height { getHeight() };

    distanceFallen(height, 0);
    distanceFallen(height, 1);
    distanceFallen(height, 2);
    distanceFallen(height, 3);
    distanceFallen(height, 4);
    distanceFallen(height, 5);

    return 0;
} 

// I actually like my solution here more than the solution that learncpp.com gives