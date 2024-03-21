#include <iostream>

void switch_with_fallthrough(int value)
{
    switch (value)
    {
    case 1:
        std::cout << "this is the 1st and the value is: " << value << '\n';
        // intentional fallthrough!
        [[fallthrough]];
    case 2:
        std::cout << "this is the 2nd case and the value is : " << value << '\n';
    case 3:
        std::cout << "this is the 3rd case and the value is : " << value << '\n';

    default:
        std::cout << "switch execution ended\n";
        break;  // even if there's a fallthrough break or return should be or execution will continue and undefined behavior expected
    }
}

void switch_with_initialized_variable(int_fast16_t input)
{
    switch (input)
    {
    case 1:
    {
        int y{};    // you can initialize inside case label if it's in curly braces
        std::cout << "this is 1 case y was initialized\n";
        break;
    }
    case 2:
        std::cout << "this is 2nd case and y wasnt declared\n";
        //y = 5; y wasn't declared error will appear
        break;
    default:
        std::cout << "switch's default\n";
    }
}

void task_from_section_6()
{
    std::cout << "Enter the first integer: ";
    int number1{};
    std::cin >> number1;
    if (!std::cin)
        return;

    std::cout << "Enter the second integer: ";
    int number2{};
    std::cin >> number2;
    if (!std::cin)
        return;

    std::cout << "Enter operator (+, -, *, /): ";
    char operator_for_calculator{};
    std::cin >> operator_for_calculator;

    switch (operator_for_calculator)
    {
    case '+':
        std::cout << "Output is " << number1 + number2 << '\n';
        return;
    case '-':
        std::cout << "Output is " << number1 - number2 << '\n';
        return;
    case '*':
        std::cout << "Output is " << number1 * number2 << '\n';
        return;
    case '/':
        std::cout << "Output is " << number1 / number2 << '\n';
        return;
    default:
        std::cout << "Uknown operator\n";
        return;
    }
}

void section_6()
{
    std::cout << "Enter value for switch with 3 cases and fallthrough: ";
    int16_t input{};
    std::cin >> input;
    // switch with intentional fallthrough
    switch_with_fallthrough(input);

    std::cout << "Enter value for switch with initialzations: ";
    std::cin >> input;
    switch_with_initialized_variable(input);

    task_from_section_6();
}
