#pragma once

#include "glb/internal/vec/type_vec2.hpp"
#include "glb/internal/vec/type_vec3.hpp"
#include "glb/internal/vec/type_vec4.hpp"

#include "glb/internal/mat/type_mat2x2.hpp"
#include "glb/internal/mat/type_mat3x3.hpp"
#include "glb/internal/mat/type_mat4x4.hpp"

#include "glb/internal/type_quat.hpp"

#include <functional>

namespace glb
{
    namespace glbInternal
    {
        GLB_INLINE constexpr void hashCombine(size_t& seed, size_t hash)
        {
            hash += 0x9e3779b9 + (seed << 6) + (seed >> 2);
            seed ^= hash;
        }
    }
}


    // template<typename T>
    // GLB_INLINE constexpr size_t hash<glb::vec<2, T>>::operator()(const glb::vec<2, T>& v) const

namespace std
{
    template<typename T>
    struct hash<glb::vec<2, T>>
    {
        size_t operator()(const glb::vec<2, T>& v) const noexcept
        {
            size_t res = 0;
            hash<T> hasher;

            glb::glbInternal::hashCombine(res, hasher(v.x));
            glb::glbInternal::hashCombine(res, hasher(v.y));

            return res;
        }
    };
    template<typename T>
    struct hash<glb::vec<3, T>>
    {
        size_t operator()(const glb::vec<3, T>& v) const noexcept
        {
            size_t res = 0;
            hash<T> hasher;

            glb::glbInternal::hashCombine(res, hasher(v.x));
            glb::glbInternal::hashCombine(res, hasher(v.y));
            glb::glbInternal::hashCombine(res, hasher(v.z));

            return res;
        }
    };

    template<typename T>
    struct hash<glb::vec<4, T>>
    {
        size_t operator()(const glb::vec<4, T>& v) const noexcept
        {
            size_t res = 0;
            hash<T> hasher;

            glb::glbInternal::hashCombine(res, hasher(v.x));
            glb::glbInternal::hashCombine(res, hasher(v.y));
            glb::glbInternal::hashCombine(res, hasher(v.z));
            glb::glbInternal::hashCombine(res, hasher(v.w));

            return res;
        }
    };


    template<typename T>
    struct hash<glb::quat<T>>
    {
        size_t operator()(const glb::quat<T>& v) const noexcept
        {
            size_t res = 0;
            hash<T> hasher;

            glb::glbInternal::hashCombine(res, hasher(v.w));
            glb::glbInternal::hashCombine(res, hasher(v.x));
            glb::glbInternal::hashCombine(res, hasher(v.y));
            glb::glbInternal::hashCombine(res, hasher(v.z));

            return res;
        }
    };


    template<typename T>
    struct hash<glb::mat<2, 2, T>>
    {
        size_t operator()(const glb::mat<2, 2, T>& v) const noexcept
        {
            size_t res = 0;
            hash<glb::vec<2, T>> hasher;

            glb::glbInternal::hashCombine(res, hasher(v[0]));
            glb::glbInternal::hashCombine(res, hasher(v[1]));

            return res;
        }
    };

    template<typename T>
    struct hash<glb::mat<3, 3, T>>
    {
        size_t operator()(const glb::mat<3, 3, T>& v) const noexcept
        {
            size_t res = 0;
            hash<glb::vec<3, T>> hasher;

            glb::glbInternal::hashCombine(res, hasher(v[0]));
            glb::glbInternal::hashCombine(res, hasher(v[1]));
            glb::glbInternal::hashCombine(res, hasher(v[2]));

            return res;
        }
    };

    template<typename T>
    struct hash<glb::mat<4, 4, T>>
    {
        size_t operator()(const glb::mat<3, 3, T>& v) const noexcept
        {
            size_t res = 0;
            hash<glb::vec<4, T>> hasher;

            glb::glbInternal::hashCombine(res, hasher(v[0]));
            glb::glbInternal::hashCombine(res, hasher(v[1]));
            glb::glbInternal::hashCombine(res, hasher(v[2]));
            glb::glbInternal::hashCombine(res, hasher(v[3]));

            return res;
        }
    };
    

} // namespace std


