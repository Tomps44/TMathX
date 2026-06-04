#pragma once

#include "glb/internal/type_quat.hpp"

namespace glb
{
    namespace Qua
    {
        template<typename From, typename To>
        GLB_INLINE constexpr quat<To> CastTo(const quat<From>& q) noexcept
        {
            return quat<To>(
                static_cast<To>(q.w),
                static_cast<To>(q.x),
                static_cast<To>(q.y),
                static_cast<To>(q.z);
            )
        }


    } // namespace Qua
} // namespace glb
