#include "O2.h"
#include <iostream>
#include <bitset>

template<size_t N>  // я не знаю что это такое но оно помогло сделать функцию constexpr что-то вроде шаблона
constexpr std::bitset<N> oneByteShiftBitRight(std::bitset<N> bitset, int n)
{
    return bitset >> n;
}

template<size_t N>
std::bitset<N> oneByteShiftBitLeft(std::bitset<N> bitset, int n)
{
    return bitset << n;
}

void O2()
{
    std::bitset<8> a8 { 0b0000'0111 };
    std::bitset<16> b16 { 0b0000'0000'1111'1111};
    std::cout << "Сдвиг направо a " << oneByteShiftBitRight(a8, 2) << '\n';
    std::cout << "Сдвиг налево a " <<oneByteShiftBitLeft(a8, 2) << '\n';
    std::cout << "Сдвиг направо b " << oneByteShiftBitRight(b16, 2) << '\n';
    std::cout << "Сдвиг налево b " <<oneByteShiftBitLeft(b16, 2) << '\n';
}
