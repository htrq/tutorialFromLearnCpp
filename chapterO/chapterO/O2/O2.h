#ifndef O2_H
#define O2_H
#include <bitset>

template<size_t N>
constexpr std::bitset<N> oneByteShiftBitRight(std::bitset<N> bitset, int n);

template<size_t N>
std::bitset<N> oneByteShiftBitLeft(std::bitset<N> bitset, int n);

void O2();

#endif // O2_H
