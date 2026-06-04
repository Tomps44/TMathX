#pragma once

#include "glb/internal/type_mat.hpp"

namespace glb
{
    namespace Mat
    {
        template<int R, int C, typename T>
        GLB_INLINE constexpr mat<R, C, T> Inverse(const mat<R, C, T>& m) noexcept;

        template<int R, int C, typename T>
        GLB_INLINE constexpr mat<R, C, T> AffineInverse(const mat<R, C, T>& m) noexcept;

        template<int R, int C, typename T>
        GLB_INLINE constexpr mat<R, C, T> InverseTranspose(const mat<R, C, T>& m) noexcept;

    } // namespace Mat
    
} // namespace glb

#include "glb/internal/mat/compute_inverse.inl"