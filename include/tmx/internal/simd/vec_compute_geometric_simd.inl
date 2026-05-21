#include "tmx/internal/simd/vec_geometric.inl"

namespace tmx
{
    namespace internal
    {

#       if defined(TMX_SIMD_SSE)

        template<>
        struct vecDot<4, float, true>
        {
            TMX_INLINE static float call(const vec<4, float>& a, const vec<4, float>& b) noexcept
            {
                return _mm_cvtss_f32(internal::vecDot__m128(a.reg, b.reg));
            }
        };
        template<>
        struct vecDot<3, float, true>
        {
            TMX_INLINE static float call(const vec<3, float>& a, const vec<3, float>& b) noexcept
            {
                vec<4, float> a0(a);
                vec<4, float> b0(b);

                return _mm_cvtss_f32(internal::vecDot__m128(a0.reg, b0.reg));
            }
        };

        // ...

#       endif

    }
}