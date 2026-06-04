#pragma once

#include "glb/internal/type_mat.hpp"
#include "glb/internal/type_vec.hpp"

namespace glb
{
    namespace Mat
    {
        template<int R, int C, typename T>
        GLB_INLINE constexpr T Determinant(const mat<R, C, T>& m) noexcept;

        template<int R, int C, typename T>
        GLB_INLINE constexpr mat<C, R, T> Transpose(const mat<R, C, T>& m) noexcept;

        template<int R, int C, typename T>
        GLB_INLINE constexpr mat<C, R, T> Cross(const vec<3, T>& v) noexcept;

    } // namespace Mat
    
} // namespace glb

#include "glb/internal/mat/compute_geometric.inl"