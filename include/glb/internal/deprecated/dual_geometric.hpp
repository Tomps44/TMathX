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
        GLB_INLINE constexpr dQuat<T> normalize(const dQuat<T>& dq) noexcept;

        template<typename T>
        GLB_INLINE constexpr dQuat<T> conjugate(const dQuat<T>& dq) noexcept;

        template<typename T>
        GLB_INLINE constexpr dQuat<T> inverse(const dQuat<T>& dq) noexcept;


        template<typename T>
        GLB_INLINE constexpr quat<T> getRotation(const dQuat<T>& dq) noexcept;

        template<typename T>
        GLB_INLINE constexpr vec<3, T> getTranslation(const dQuat<T>& dq) noexcept;

    } // namespace DQua
} // namespace glb

#include "glb/internal/quat/compute_dual_geometric.inl"