#pragma once

#include "tmx/internal/mat/type_mat4x4.hpp"

namespace tmx
{
    // A 4x4 Matrix of `floats`
    using Mat4x4 = tmx::mat<4, 4, float>;
    // A 4x4 Matrix of `doubles`
    using Mat4x4HighP = tmx::mat<4, 4, double>;
    // A 4x4 Matrix of `int32_t`
    using Mat4x4Int = tmx::mat<4, 4, int32_t>;
    // A 4x4 Matrix of `int64_t`
    using Mat4x4Long = mat<4, 4, int64_t>;
}