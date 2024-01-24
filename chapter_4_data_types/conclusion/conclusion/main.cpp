#include <iostream>
#include <math.h>

int main()
{
    double numb { 404999.56789 };
    std::cout << "value of the numb variable is " << numb << "\n";
    std::cout << "its size is " << sizeof(numb) << "\n" << size_t(numb) << "\n";

    std::cout << sizeof(int16_t) << "\n";

    //task 2
    double n1 {};
    double n2 {};
    char operation {};
    std::cout << "Enter two numbers: ";
    std::cin >> n1;
    std::cin >> n2;

    std::cout << "Choose operation: + - * / " << "\n";
    std::cin >> operation;

    switch(operation)
    {
    case '+':
        std::cout << n1 + n2 << "\n";
        break;
    case '-':
        std::cout << n1 - n2 << "\n";
        break;
    case '*':
        std::cout << n1 * n2 << "\n";
        break;
    case '/':
        std::cout << n1 / n2 << "\n";
        break;
    default:
        std::cout << "wrong operation was provided\n";
        break;
    }

    // task 3
    double height {};
    double way {};
    int time {};
    float { 9.8 };
    std::cout << "Please enter height where a ball will be dropped of: ";
    std::cin >> height;
    while(height > 0)
    {
        way = 9.8 * std::pow(time, 2)/2;
        height -= way;

        if (height <= 0)
        {
            height = 0;
            std::cout << "At the " << time << " second the ball fell on the ground.\n";
            break;
        }

        std::cout << "The ball is at the height of " << height << " at the moment of " << time << " seconds \n";
        time++;
    }

    return 0;
}
