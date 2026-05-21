#pragma once

#include "tmx/internal/type_mat.hpp"
#include "tmx/internal/type_vec.hpp"

namespace tmx
{
    namespace Mat
    {
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Translate(const vec<3, T>& trsl) noexcept;

    } // namespace Mat
    
} // namespace tmx

#include "tmx/internal/mat/compute_scale.inl"