#pragma once

#include "tmx/internal/type_mat.hpp"

namespace tmx
{
    namespace Mat
    {
        template<int R, int C, typename T>
        TMX_INLINE constexpr mat<R, C, T> Inverse(const mat<R, C, T>& m) noexcept;

        template<int R, int C, typename T>
        TMX_INLINE constexpr mat<R, C, T> AffineInverse(const mat<R, C, T>& m) noexcept;

        template<int R, int C, typename T>
        TMX_INLINE constexpr mat<R, C, T> InverseTranspose(const mat<R, C, T>& m) noexcept;

    } // namespace Mat
    
} // namespace tmx

#include "tmx/internal/mat/compute_inverse.inl"