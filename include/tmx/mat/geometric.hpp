#pragma once

#include "tmx/internal/type_mat.hpp"
#include "tmx/internal/type_vec.hpp"

namespace tmx
{
    namespace Mat
    {
        template<int R, int C, typename T>
        TMX_INLINE constexpr T Determinant(const mat<R, C, T>& m) noexcept;

        template<int R, int C, typename T>
        TMX_INLINE constexpr mat<C, R, T> Transpose(const mat<R, C, T>& m) noexcept;

        template<int R, int C, typename T>
        TMX_INLINE constexpr mat<C, R, T> Cross(const vec<3, T>& v) noexcept;

    } // namespace Mat
    
} // namespace tmx

#include "tmx/internal/mat/compute_geometric.inl"