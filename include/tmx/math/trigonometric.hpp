#pragma once

#include "tmx/internal/definitions.hpp"
#include <cmath>

namespace tmx
{
    namespace Math
    {
        template<typename T>
        TMX_INLINE constexpr T ToRad(T val) noexcept { return val * static_cast<T>(0.0174532925199432957691391462423657899L); };
        template<typename T>
        TMX_INLINE constexpr T ToDeg(T val) noexcept { return val * static_cast<T>(57.295779513082320876654618402312735L); };


        template<typename T>
        TMX_INLINE constexpr T Sin(T val) noexcept { return std::sin(val); }; 
        template<typename T>
        TMX_INLINE constexpr T Cos(T val) noexcept { return std::cos(val); }; 
        template<typename T>
        TMX_INLINE constexpr T Tan(T val) noexcept { return std::tan(val); };
         
        template<typename T>
        TMX_INLINE constexpr T Sinh(T val) noexcept { return std::sinh(val); }; 
        template<typename T>
        TMX_INLINE constexpr T Cosh(T val) noexcept { return std::cosh(val); }; 
        template<typename T>
        TMX_INLINE constexpr T Tanh(T val) noexcept { return std::tanh(val); }; 

        template<typename T>
        TMX_INLINE constexpr T Asin(T val) noexcept { return std::asin(val); }; 
        template<typename T>
        TMX_INLINE constexpr T Acos(T val) noexcept { return std::acos(val); }; 
        template<typename T>
        TMX_INLINE constexpr T Atan(T val) noexcept { return std::atan(val); };
        template<typename T>
        TMX_INLINE constexpr T Atan2(T val) noexcept { return std::atan2(val); };
         
        template<typename T>
        TMX_INLINE constexpr T Asinh(T val) noexcept { return std::asinh(val); }; 
        template<typename T>
        TMX_INLINE constexpr T Acosh(T val) noexcept { return std::acosh(val); }; 
        template<typename T>
        TMX_INLINE constexpr T Atanh(T val) noexcept { return std::atanh(val); }; 


    }
}