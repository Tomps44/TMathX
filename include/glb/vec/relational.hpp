#pragma once

#include "glb/internal/type_vec.hpp"

namespace glb
{
    namespace Vec
    {
        template<int S, typename T>
        GLB_INLINE constexpr vec<S, bool> GreaterThan(const vec<S, T>& a, const vec<S, T>& b) noexcept;
        template<int S, typename T>
        GLB_INLINE constexpr vec<S, bool> GreaterThanOrEqual(const vec<S, T>& a, const vec<S, T>& b) noexcept;

        template<int S, typename T>
        GLB_INLINE constexpr vec<S, bool> LessThan(const vec<S, T>& a, const vec<S, T>& b) noexcept;
        template<int S, typename T>
        GLB_INLINE constexpr vec<S, bool> LessThanOrEqual(const vec<S, T>& a, const vec<S, T>& b) noexcept;

        template<int S, typename T>
        GLB_INLINE constexpr vec<S, bool> Equal(const vec<S, T>& a, const vec<S, T>& b) noexcept;
        template<int S, typename T>
        GLB_INLINE constexpr vec<S, bool> NotEqual(const vec<S, T>& a, const vec<S, T>& b) noexcept;

        template<int S>
        GLB_INLINE constexpr bool Any(const vec<S, bool>& v) noexcept;
        template<int S>
        GLB_INLINE constexpr bool All(const vec<S, bool>& v) noexcept;

    } // namespace Vector
} // namespace glb

#include "glb/internal/vec/compute_relational.inl"