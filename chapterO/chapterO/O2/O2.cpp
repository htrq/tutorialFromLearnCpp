#include "O2.h"
#include <iostream>
#include <bitset>

template<size_t N>  // я не знаю что это такое но оно помогло сделать функцию constexpr что-то вроде шаблона
constexpr std::bitset<N> oneByteShiftBitRight(std::bitset<N> bitset, int n)
{
    return bitset >> n;
}

template<size_t N>  // можно без этих функций они только больше объема добавляют, это ради эксперимента с constexpr и template
constexpr std::bitset<N> oneByteShiftBitLeft(std::bitset<N> bitset, int n)
{
    return bitset << n;
}

void O2()
{
    std::bitset<8> a8 { 0b0000'0111 };
    std::bitset<16> b16 { 0b0000'0000'1111'1111};
    std::cout << "Значение а:" << a8 << "\nЗначение b:" << b16 << '\n';
    std::cout << "Сдвиг направо a " << oneByteShiftBitRight(a8, 2) << '\n';
    std::cout << "Сдвиг налево a " << oneByteShiftBitLeft(a8, 2) << '\n';
    std::cout << "Сдвиг направо b " << oneByteShiftBitRight(b16, 2) << '\n';
    std::cout << "Сдвиг налево b " << oneByteShiftBitLeft(b16, 2) << '\n';
    std::cout << "Сдвиг направо a a затем NOT(~) " << ~oneByteShiftBitRight(a8, 2) << '\n';
    std::cout << "Сдвиг налево a a затем NOT(~) " << ~oneByteShiftBitLeft(a8, 2) << '\n';
    std::cout << "Сдвиг направо b a затем NOT(~) " << ~oneByteShiftBitRight(b16, 2) << '\n';
    std::cout << "Сдвиг налево b a затем NOT(~) " << ~oneByteShiftBitLeft(b16, 2) << '\n';
    std::cout << "a and a сдвинутый направо " << (a8 & oneByteShiftBitRight(a8, 2)) << '\n';
    std::cout << "b or b сдвинутый направо " << (b16 | oneByteShiftBitRight(b16, 2)) << '\n';   // and и or не работают с битсетами разной длины
    std::cout << "b xor b сдвинутый направо " << (b16 ^ oneByteShiftBitRight(b16, 2)) << "\n\n\n";


    // finally assignments!
    a8 <<= 2;
    std::cout << "Мы присвоили a значение сдвинутое налево на два(a8 <<= 2) " << a8 << '\n';
    b16 ^= b16;
    std::cout << "Мы сделали XOR для b16 саму на себя (b16 ^= b16) " << b16 << '\n';
    // for not we can use simple assignment x = !x
    b16 = ~b16;
    std::cout << "И мы проинвертировали все значения в измененном xor'ом b (b16 = ~b16) " << b16 << '\n';

}
