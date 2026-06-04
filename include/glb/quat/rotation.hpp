#pragma once

#include "glb/internal/type_quat.hpp"
#include "glb/internal/type_vec.hpp"
#include "glb/internal/type_mat.hpp"

namespace glb
{
    namespace Qua
    {
        /**
         * Rotates `point` counter-clockwise by the rotation `rot`
         * 
         * @param rot The unit Quaternion representing the rotation
         * @param point The point to rotate
         */
        template<typename T>
        GLB_INLINE constexpr vec<3, T> RotatePoint(const quat<T>& rot, const vec<3, T>& point) noexcept;
        /**
         * Rotates `point` clockwise around `pivot`, by the rotation `rot`
         * 
         * @param rot The unit Quaternion representing the rotation
         * @param point The point to rotate around `pivot`
         * @param pivot The pivot of the rotation
         */
        template<typename T>
        GLB_INLINE constexpr vec<3, T> RotatePointAroundPivot(const quat<T>& rot, const vec<3, T>& point, const vec<3, T>& pivot) noexcept;


        template<typename T>
        GLB_INLINE constexpr mat<3, 3, T> ToMat3x3(const quat<T>& rot) noexcept;
        template<typename T>
        GLB_INLINE constexpr mat<4, 4, T> ToMat4x4(const quat<T>& rot) noexcept;

        template<int R, int C, typename T>
        GLB_INLINE constexpr quat<T> FromMat(const mat<R, C, T>& m) noexcept;
        
        
    } // namespace Qua

    
} // namespace glb

#include "glb/internal/quat/compute_rotation.inl"