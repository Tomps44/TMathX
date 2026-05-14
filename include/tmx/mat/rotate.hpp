#pragma once

#include "tmx/internal/type_mat.hpp"
#include "tmx/internal/type_quat.hpp"

namespace tmx
{
    namespace Mat
    {
        /**
         * Generates 3x3 rotation Matrix, from a unit quaternion
         * 
         * @param rot The unit Quaternion representing the rotation
         */
        template<typename T>
        TMX_INLINE constexpr mat<3, 3, T> FromQuat(const quat<T>& rot) noexcept;
        /**
         * Generates 4x4 rotation Matrix, from a unit quaternion
         * 
         * @param rot The unit Quaternion representing the rotation
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> FromQuat(const quat<T>& rot) noexcept;


        template<typename T>
        TMX_INLINE constexpr mat<3, 3, T> FromAxisAngle(const vec<3, T>& axis, T angle) noexcept;

        


        template<typename T>
        TMX_INLINE constexpr mat<2, 2, T> RotateZ_LH(T angle) noexcept;
        template<typename T>
        TMX_INLINE constexpr mat<3, 3, T> RotateZ_LH(T angle) noexcept;
        
        template<typename T>
        TMX_INLINE constexpr mat<3, 3, T> RotateX_LH(T angle) noexcept;

        template<typename T>
        TMX_INLINE constexpr mat<3, 3, T> RotateY_LH(T angle) noexcept;

        template<typename T>
        TMX_INLINE constexpr mat<2, 2, T> RotateZ_RH(T angle) noexcept;
        template<typename T>
        TMX_INLINE constexpr mat<3, 3, T> RotateZ_RH(T angle) noexcept;
        
        template<typename T>
        TMX_INLINE constexpr mat<3, 3, T> RotateX_RH(T angle) noexcept;

        template<typename T>
        TMX_INLINE constexpr mat<3, 3, T> RotateY_RH(T angle) noexcept;
        
    } // namespace Mat
} // namespace tmx

#include "tmx/internal/mat/compute_rotate.inl"