#pragma once

#include "glb/internal/type_quat.hpp"

namespace glb
{
    namespace Qua
    {
        /// @brief Linearly interpolates between two Quaternions (start - end), by time t.
        /// @param start The first Quaternion, starting the interpolation. It has to be a `unit` Quaternion ! 
        /// @param end The second Quaternion, ending the interpolation. It has to be a `unit` Quaternion ! 
        /// @param t The time the interpolation is at.
        template<typename T>
        GLB_INLINE constexpr quat<T> LerpUnclamped(const quat<T>& start, const quat<T>& end, T t) noexcept;
        /// @brief Linearly interpolates between two Quaternions (start - end), by time t.
        /// @param start The first Quaternion, starting the interpolation. It has to be a `unit` Quaternion ! 
        /// @param end The second Quaternion, ending the interpolation. It has to be a `unit` Quaternion ! 
        /// @param t The time the interpolation is at. Gets clamped between 0 and 1.
        template<typename T>
        GLB_INLINE constexpr quat<T> Lerp(const quat<T>& start, const quat<T>& end, T t) noexcept;

        /// @brief Spherically interpolates between two Quaternions (start - end), by time t.
        /// @param start The first Quaternion, starting the interpolation. It has to be a `unit` Quaternion ! 
        /// @param end The second Quaternion, ending the interpolation. It has to be a `unit` Quaternion ! 
        /// @param t The time the interpolation is at.
        template<typename T>
        GLB_INLINE constexpr quat<T> SlerpUnclamped(const quat<T>& start, const quat<T>& end, T t) noexcept;
        /// @brief Spherically interpolates between two Quaternions (start - end), by time t.
        /// @param start The first Quaternion, starting the interpolation. It has to be a `unit` Quaternion ! 
        /// @param end The second Quaternion, ending the interpolation. It has to be a `unit` Quaternion ! 
        /// @param t The time the interpolation is at. Gets clamped between 0 and 1.
        template<typename T>
        GLB_INLINE constexpr quat<T> Slerp(const quat<T>& start, const quat<T>& end, T t) noexcept;

    } // namespace Vec
    
} // namespace glb

#include "glb/internal/quat/compute_interpolation.inl"
