#pragma once

#include "glb/internal/type_quat.hpp"

namespace glb
{
    // A Quaternion of `floats`
    using Quat = quat<float>;
    // A Quaternion of `doubles`
    using QuatHighP = quat<double>;
}