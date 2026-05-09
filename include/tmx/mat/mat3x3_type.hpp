#pragma once

#include "tmx/internal/mat/type_mat3x3.hpp"

namespace tmx
{
    // A 3x3 Matrix of `floats`
    using Mat3x3 = tmx::mat<3, 3, float>;
    // A 3x3 Matrix of `doubles`
    using Mat3x3HighP = tmx::mat<3, 3, double>;
    // A 3x3 Matrix of `int32_t`
    using Mat3x3Int = tmx::mat<3, 3, int32_t>;
    // A 3x3 Matrix of `int64_t`
    using Mat3x3Long = mat<3, 3, int64_t>;
}