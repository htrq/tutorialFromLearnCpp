#include <iostream>

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
    float height {};
    float way { 1 };
    int time {};
    float { 9.8 };
    std::cout << "Please enter height where a ball will be dropped of: ";
    std::cin >> height;
    do
    {
        way += 9.8 * way;
        height -= way;
        time++;
        std::cout << "The ball is at the height of " << height << " at the moment of " << time << " seconds \n";
    }
    while(height >= 0);



    return 0;
}
