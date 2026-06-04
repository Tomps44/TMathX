#pragma once

#include "glb/internal/type_mat.hpp"
#include "glb/internal/type_vec.hpp"

namespace glb
{
    namespace Mat
    {
        template<typename T>
        GLB_INLINE constexpr mat<4, 4, T> Translate(const vec<3, T>& trsl) noexcept;

    } // namespace Mat
    
} // namespace glb

#include "glb/internal/mat/compute_translate.inl"