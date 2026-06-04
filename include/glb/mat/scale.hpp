#pragma once

#include "glb/internal/type_mat.hpp"
#include "glb/internal/type_vec.hpp"

namespace glb
{
    namespace Mat
    {
        template<typename T>
        GLB_INLINE constexpr mat<3, 3, T> Scale_3x3(const vec<3, T>& scale) noexcept;
        
        template<typename T>
        GLB_INLINE constexpr mat<4, 4, T> Scale_4x4(const vec<3, T>& scale) noexcept;



    } // namespace Mat
    
} // namespace glb

#include "glb/internal/mat/compute_scale.inl"