#pragma once

#include "tmx/internal/type_quat.hpp"

namespace tmx
{
    namespace Qua
    {
        /// @brief Linearly interpolates between two Quaternions (start - end), by time t.
        /// @param start The first Quaternion, starting the interpolation. It has to be a `unit` Quaternion ! 
        /// @param end The second Quaternion, ending the interpolation. It has to be a `unit` Quaternion ! 
        /// @param t The time the interpolation is at.
        template<typename T>
        TMX_INLINE constexpr quat<T> LerpUnclamped(const quat<T>& start, const quat<T>& end, T t) noexcept;
        /// @brief Linearly interpolates between two Quaternions (start - end), by time t.
        /// @param start The first Quaternion, starting the interpolation. It has to be a `unit` Quaternion ! 
        /// @param end The second Quaternion, ending the interpolation. It has to be a `unit` Quaternion ! 
        /// @param t The time the interpolation is at. Gets clamped between 0 and 1.
        template<typename T>
        TMX_INLINE constexpr quat<T> Lerp(const quat<T>& start, const quat<T>& end, T t) noexcept;

        /// @brief Spherically interpolates between two Quaternions (start - end), by time t.
        /// @param start The first Quaternion, starting the interpolation. It has to be a `unit` Quaternion ! 
        /// @param end The second Quaternion, ending the interpolation. It has to be a `unit` Quaternion ! 
        /// @param t The time the interpolation is at.
        template<typename T>
        TMX_INLINE constexpr quat<T> SlerpUnclamped(const quat<T>& start, const quat<T>& end, T t) noexcept;
        /// @brief Spherically interpolates between two Quaternions (start - end), by time t.
        /// @param start The first Quaternion, starting the interpolation. It has to be a `unit` Quaternion ! 
        /// @param end The second Quaternion, ending the interpolation. It has to be a `unit` Quaternion ! 
        /// @param t The time the interpolation is at. Gets clamped between 0 and 1.
        template<typename T>
        TMX_INLINE constexpr quat<T> Slerp(const quat<T>& start, const quat<T>& end, T t) noexcept;


        /**
         * Rotates `point` counter-clockwise by the rotation `rot`
         * 
         * @param rot The unit Quaternion representing the rotation
         * @param point The point to rotate
         */
        template<typename T>
        TMX_INLINE constexpr vec<3, T> RotatePoint(const quat<T>& rot, const vec<3, T>& point) noexcept;
        /**
         * Rotates `point` counter-clockwise around `pivot`, by the rotation `rot`
         * 
         * @param rot The unit Quaternion representing the rotation
         * @param point The point to rotate around `pivot`
         * @param pivot The pivot of the rotation
         */
        template<typename T>
        TMX_INLINE constexpr vec<3, T> RotatePointAroundPivot(const quat<T>& rot, const vec<3, T>& point, const vec<3, T>& pivot) noexcept;

    } // namespace Vec
    
} // namespace tmx

#include "tmx/internal/quat/compute_interpolation.inl"
