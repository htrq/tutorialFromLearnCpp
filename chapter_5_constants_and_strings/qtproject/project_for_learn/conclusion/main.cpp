#include "ask_for_age.h"
#include "maria_apples.h"
#include <iostream>

// gets tower height from user and returns it
double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}

// Returns ball height from ground after "seconds" seconds
constexpr double calculateBallHeight(double towerHeight, int seconds)
{
    const double gravity{ 9.8 };

    // Using formula: [ s = u * t + (a * t^2) / 2 ], here u(initial velocity) = 0
    const double distanceFallen{ (gravity * (seconds * seconds)) / 2.0 };
    const double currentHeight{ towerHeight - distanceFallen };

    return currentHeight;
}

// Prints ball height above ground
void printBallHeight(double ballHeight, int seconds)
{
    if (ballHeight > 0.0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

// Calculates the current ball height and then prints it
// This is a helper function to make it easier to do this
void printCalculatedBallHeight(double towerHeight, int seconds)
{
    double ballHeight{ calculateBallHeight(towerHeight, seconds) };
    printBallHeight(ballHeight, seconds);
}

int main()
{
    // 1 task
    double towerHeight{ getTowerHeight() };

    printCalculatedBallHeight(towerHeight, 0);
    printCalculatedBallHeight(towerHeight, 1);
    printCalculatedBallHeight(towerHeight, 2);
    printCalculatedBallHeight(towerHeight, 3);
    printCalculatedBallHeight(towerHeight, 4);
    printCalculatedBallHeight(towerHeight, 5);
    // 2 task
    ask_and_return_biggest_of_two_ages();

    // 3 task
    constexpr int maryApples { 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";


    return 0;
}
