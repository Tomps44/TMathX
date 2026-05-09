#pragma once

#include "tmx/internal/type_quat.hpp"

namespace tmx
{
    // A Quaternion of `floats`
    using Quat = quat<float>;
    // A Quaternion of `doubles`
    using QuatHighP = quat<double>;
}