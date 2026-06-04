#pragma once

#include "glb/mat/rotation.hpp"
#include "glb/mat/translate.hpp"
#include "glb/mat/scale.hpp"

#include "glb/internal/type_quat.hpp"
#include "glb/internal/type_vec.hpp"

namespace glb
{
    namespace Mat
    {
        template<typename T>
        GLB_INLINE constexpr mat<4, 4, T> TRS(const vec<3, T>& trsl, const quat<T>& rot, const vec<3, T>& scale) noexcept;

        template<typename T>
        GLB_INLINE constexpr mat<4, 4, T> TRS(const vec<3, T>& trsl, const vec<3, T>& rot, const vec<3, T>& scale) noexcept;
    }

}

#include "glb/internal/mat/compute_transform.inl"