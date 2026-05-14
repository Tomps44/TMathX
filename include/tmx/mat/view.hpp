#pragma once

#include "tmx/internal/type_mat.hpp"
#include "tmx/internal/type_vec.hpp"

namespace tmx
{
    namespace Mat
    {
        /**
         * Generates a `left-handed` view matrix 
         * 
         * @param eye The position of the eye (camera)
         * @param target The position of the object to look at
         * @param worldUp The normalized vector representing the direction of the up axis in world space
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> LookAt_LH(const vec<3, T>& eye, const vec<3, T>& target, const vec<3, T>& worldUp) noexcept;

        /**
         * Generates a `right-handed` view matrix 
         * 
         * @param eye The position of the eye (camera)
         * @param target The position of the object to look at
         * @param worldUp The normalized vector representing the direction of the up axis in world space
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> LookAt_RH(const vec<3, T>& eye, const vec<3, T>& target, const vec<3, T>& worldUp) noexcept;
        
    } // namespace Mat
} // namespace tmx

#include "tmx/internal/mat/compute_view.inl"