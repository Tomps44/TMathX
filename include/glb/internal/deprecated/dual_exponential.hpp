/** 
 * -------------------------------------------------------------
 * 
 * This file is deprecated !
 * Dual Quaternions will maybe be implemented in a later version.
 * For now, do not include any of that :
 * 
 * --------------------------------------------------------------
 */



 

#pragma once

#include "glb/internal/type_dualquat.hpp"

namespace glb
{
    namespace DQua
    {
        template<typename T>
        GLB_INLINE constexpr dQuat<T> exp(const dQuat<T>& q) noexcept;
        
        template<typename T>
        GLB_INLINE constexpr dQuat<T> log(const dQuat<T>& q) noexcept;

        template<typename T>
        GLB_INLINE constexpr dQuat<T> pow(const dQuat<T>& q, T exponent) noexcept;
        template<typename T>
        GLB_INLINE constexpr dQuat<T> sqrt(const dQuat<T>& q) noexcept;

    } // namespace Quaternion
    
} // namespace glb

#include "glb/internal/quat/compute_dual_exponential.inl"
