#pragma once

#include "glb/internal/definitions.hpp"
#include <bit>

namespace glb
{
    namespace Math
    {
        template<typename T>
        GLB_INLINE constexpr uint32_t Clz(uint32_t val) noexcept 
        {
            return std::countl_zero(val);
        }
        template<typename T>
        GLB_INLINE constexpr uint64_t Clz(uint64_t val) noexcept 
        {
            return std::countl_zero(val);
        }


        template<typename T>
        GLB_INLINE constexpr uint32_t Popcount(uint32_t val) noexcept 
        {
            return std::popcount(val);
        }
        template<typename T>
        GLB_INLINE constexpr uint64_t Popcount(uint64_t val) noexcept 
        {
            return std::popcount(val);
        }


        template<typename From, typename To>
        GLB_INLINE constexpr To BitCast(From val) noexcept
        {
            std::bit_cast(val);
        }

    } // namespace Math
} // namespace glb

