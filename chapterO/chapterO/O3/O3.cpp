#include "O3.h"
#include <bitset>
#include <cstdint>
#include <iostream>

void O3()
{
    __attribute_maybe_unused__ constexpr std::uint8_t option_viewed{ 0x01 };
    __attribute_maybe_unused__ constexpr std::uint8_t option_edited{ 0x02 };
    __attribute_maybe_unused__ constexpr std::uint8_t option_favorited{ 0x04 };
    __attribute_maybe_unused__ constexpr std::uint8_t option_shared{ 0x08 };
    __attribute_maybe_unused__ constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };



    std::cout << static_cast<std::bitset<8>>(myArticleFlags) << '\n';
    std::cout << "Article is favorited: " << (static_cast<bool>(myArticleFlags & option_deleted) ? "True" : "False") << '\n';
    myArticleFlags |= option_viewed;
    std::cout << "Article with viewed flag: " << static_cast<std::bitset<8>>(myArticleFlags) << '\n';
    myArticleFlags ^= option_favorited;
    std::cout << "Article removed as favorited: " << static_cast<std::bitset<8>>(myArticleFlags) << '\n';
}

