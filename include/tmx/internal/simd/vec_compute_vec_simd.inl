namespace tmx
{
    namespace internal
    {
    
        // #include <immintrin.h>

#       if defined(TMX_SIMD_SSE)

        template<>
        struct vecAdd<4, float, true> 
        {
            TMX_INLINE static vec<4, float> call(const vec<4, float>& a, const vec<4, float>& b)
            {
                vec<4, float> res;

                res.reg = _mm_add_ps(a.reg, b.reg);
                return res;
            }
        };

        template<>
        struct vecSub<4, float, true> 
        {
            TMX_INLINE static vec<4, float> call(const vec<4, float>& a, const vec<4, float>& b)
            {
                vec<4, float> res;

                res.reg = _mm_sub_ps(a.reg, b.reg);
                return res;
            }
        };

        template<>
        struct vecMul<4, float, true> 
        {
            TMX_INLINE static vec<4, float> call(const vec<4, float>& a, const vec<4, float>& b)
            {
                vec<4, float> res;

                res.reg = _mm_mul_ps(a.reg, b.reg);
                return res;
            }
        };

        template<>
        struct vecDiv<4, float, true> 
        {
            TMX_INLINE static vec<4, float> call(const vec<4, float>& a, const vec<4, float>& b)
            {
                vec<4, float> res;

                res.reg = _mm_div_ps(a.reg, b.reg);
                return res;
            }
        };

#       endif


#       if defined(TMX_SIMD_AVX)

        template<>
        struct vecAdd<4, double, true> 
        {
            TMX_INLINE static vec<4, double> call(const vec<4, double>& a, const vec<4, double>& b)
            {
                vec<4, double> res;

                res.reg = _mm256_add_pd(a.reg, b.reg);
                return res;
            }
        };

        template<>
        struct vecSub<4, double, true> 
        {
            TMX_INLINE static vec<4, double> call(const vec<4, double>& a, const vec<4, double>& b)
            {
                vec<4, double> res;

                res.reg = _mm256_sub_pd(a.reg, b.reg);
                return res;
            }
        };

        template<>
        struct vecMul<4, double, true> 
        {
            TMX_INLINE static vec<4, double> call(const vec<4, double>& a, const vec<4, double>& b)
            {
                vec<4, double> res;

                res.reg = _mm256_mul_pd(a.reg, b.reg);
                return res;
            }
        };

        template<>
        struct vecDiv<4, double, true> 
        {
            TMX_INLINE static vec<4, double> call(const vec<4, double>& a, const vec<4, double>& b)
            {
                vec<4, double> res;

                res.reg = _mm256_div_pd(a.reg, b.reg);
                return res;
            }
        };

#       endif



#       if defined(TMX_SIMD_SSE2)

        template<>
        struct vecAdd<4, int32_t, true> 
        {
            TMX_INLINE static vec<4, int32_t> call(const vec<4, int32_t>& a, const vec<4, int32_t>& b)
            {
                vec<4, int32_t> res;

                res.reg = _mm_add_epi32(a.reg, b.reg);
                return res;
            }
        };

        template<>
        struct vecSub<4, int32_t, true> 
        {
            TMX_INLINE static vec<4, int32_t> call(const vec<4, int32_t>& a, const vec<4, int32_t>& b)
            {
                vec<4, int32_t> res;

                res.reg = _mm_sub_epi32(a.reg, b.reg);
                return res;
            }
        };

#       if defined(TMX_SIMD_SSE4)
        template<>
        struct vecMul<4, int32_t, true> 
        {
            TMX_INLINE static vec<4, int32_t> call(const vec<4, int32_t>& a, const vec<4, int32_t>& b)
            {
                vec<4, int32_t> res;

                res.reg = _mm_mul_epi32(a.reg, b.reg);
                return res;
            }
        };
#       endif

#       endif
    }
}