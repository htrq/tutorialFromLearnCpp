#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace constants_for_section // proper way to store global const variables
{                               // the only downside is to recompile every file if one of the constants changed
    inline constexpr double pi{ 3.1458558 };    // constexpr variables are not implicitly inline
    inline constexpr double avogadro{ 6.0221413e23 };   // constexpr functions btw implicitly inline
    inline constexpr double my_gravity{ 9.2303048 };
}

#endif // CONSTANTS_H
