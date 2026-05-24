#pragma once

#include "tmx/internal/setup.hpp"

namespace tmx
{
    namespace internal
    {
        template<typename T, bool isFloating>
        struct computeEqual {};


        template<typename T>
        struct computeEqual<T, false>
        {
            TMX_INLINE static constexpr bool call(T a, T b) 
            {
                return a == b;
            }
        };

        template<>
        struct computeEqual<float, true>
        {
            TMX_INLINE static constexpr bool call(float a, float b) 
            {
                return std::abs(b - a) < 1.0e-06f;
            }
        };
        template<>
        struct computeEqual<double, true>
        {
            TMX_INLINE static constexpr bool call(double a, double b) 
            {
                return std::abs(b - a) < 1.0e-14;
            }
        };
        template<>
        struct computeEqual<long double, true>
        {
            TMX_INLINE static constexpr bool call(long double a, long double b) 
            {
                return std::abs(b - a) < 1.0e-17L;
            }
        };
    }
} // namespace tmx
