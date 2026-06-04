#pragma once

#include "glb/internal/definitions.hpp"

namespace glb
{
    template<typename T>
    struct quat
    {
    public:
        
        union 
        {
            struct { T w, x, y, z; };
            T values[4];
            typename glbInternal::simdReg<4, T>::type reg;
        };


        GLB_INLINE constexpr quat(T qw, T qx, T qy, T qz) noexcept;
        GLB_INLINE constexpr quat(T qw, const vec<3, T>& xyz) noexcept;
        GLB_INLINE constexpr quat(const quat<T>& q) noexcept;
        GLB_INLINE constexpr quat() noexcept;


        GLB_INLINE constexpr const T* data() const noexcept { return &w; };


        GLB_INLINE constexpr T& operator[](int i);
        GLB_INLINE constexpr const T operator[](int i) const;

        GLB_INLINE constexpr const vec<3, T>& xyz() const { return vec<3, T>(x, y, z); };

        GLB_INLINE constexpr quat<T>& operator=(const quat<T>& q) noexcept = default;


        
        GLB_INLINE constexpr quat<T>& operator+=(const quat<T>& q) noexcept;
        GLB_INLINE constexpr quat<T>& operator-=(const quat<T>& q) noexcept;

        GLB_INLINE constexpr quat<T>& operator*=(T scalar) noexcept;
        GLB_INLINE constexpr quat<T>& operator*=(const quat<T>& q) noexcept;

        GLB_INLINE constexpr quat<T>& operator/=(T scalar) noexcept;
        
    };

    template<typename T>
    GLB_INLINE constexpr quat<T> operator+(const quat<T>& q) noexcept;
    template<typename T>
    GLB_INLINE constexpr quat<T> operator-(const quat<T>& q) noexcept;


    template<typename T>
    GLB_INLINE constexpr quat<T> operator+(const quat<T>& a, const quat<T>& b) noexcept;
    template<typename T>
    GLB_INLINE constexpr quat<T> operator-(const quat<T>& a, const quat<T>& b) noexcept;

    template<typename T>
    GLB_INLINE constexpr quat<T> operator*(const quat<T>& a, const quat<T>& b) noexcept;
    template<typename T>
    GLB_INLINE constexpr quat<T> operator*(const quat<T>& a, T scalar) noexcept;
    template<typename T>
    GLB_INLINE constexpr quat<T> operator*(T scalar, const quat<T>& a) noexcept;
    template<typename T>
    GLB_INLINE constexpr vec<3, T> operator*(const quat<T>& q, const vec<3, T>& v) noexcept;

    template<typename T>
    GLB_INLINE constexpr quat<T> operator/(const quat<T>& q, T scalar) noexcept;
    template<typename T>
    GLB_INLINE constexpr quat<T> operator/(T scalar, const quat<T>& q) noexcept;


    template<typename T>
    GLB_INLINE constexpr bool operator==(const quat<T>& a, const quat<T>& b) noexcept;
    template<typename T>
    GLB_INLINE constexpr bool operator!=(const quat<T>& a, const quat<T>& b) noexcept;
}

#include "glb/internal/type_quat.inl"