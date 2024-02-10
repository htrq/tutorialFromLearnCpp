#include "maria_apples.h"

using namespace std::string_literals;

std::string_view getQuantityPhrase(int apples)
{
    if (apples == 0)
        return "none";
    if (apples == 1)
        return "a single";
    if (apples == 2)
        return "a couple of";
    if (apples == 3)
        return "a few";
    if (apples > 3)
        return "many";
    return "negative";
}

std::string_view getApplesPluralized(int apples)
{
    return (apples == 1) ? "apple" : "apples";
}
