#pragma once


#if defined(_MSC_VER)
#   define TMX_COMPILER_MSVC

#elif defined(__clang__)
#   define TMX_COMPILER_CLANG

#elif defined(__GNUC__) 
#   define TMX_COMPILER_GCC

#endif





#if !defined(TMX_FORCE_SIMD_NONE)
#   if defined(TMX_FORCE_AVX2)
#       define TMX_SIMD_AVX2
#       define TMX_SIMD_AVX
#       define TMX_SIMD_SSE4
#       define TMX_SIMD_SSSE3
#       define TMX_SIMD_SSE3
#       define TMX_SIMD_SSE2
#       define TMX_SIMD_SSE

#   elif defined(TMX_FORCE_AVX)
#       define TMX_SIMD_AVX
#       define TMX_SIMD_SSE4
#       define TMX_SIMD_SSSE3
#       define TMX_SIMD_SSE3
#       define TMX_SIMD_SSE2
#       define TMX_SIMD_SSE

#   elif defined(TMX_FORCE_SSE4)
#       define TMX_SIMD_SSE4
#       define TMX_SIMD_SSSE3
#       define TMX_SIMD_SSE3
#       define TMX_SIMD_SSE2
#       define TMX_SIMD_SSE

#   elif defined(TMX_FORCE_SSSE3)
#       define TMX_SIMD_SSSE3
#       define TMX_SIMD_SSE3
#       define TMX_SIMD_SSE2
#       define TMX_SIMD_SSE

#   elif defined(TMX_FORCE_SSE3)
#       define TMX_SIMD_SSE3
#       define TMX_SIMD_SSE2
#       define TMX_SIMD_SSE

#   elif defined(TMX_FORCE_SSE2)
#       define TMX_SIMD_SSE2
#       define TMX_SIMD_SSE

#   elif defined(TMX_FORCE_SSE)
#       define TMX_SIMD_SSE

#   else 
#       if defined(__AVX2__)  
#           define TMX_SIMD_AVX2
#           define TMX_SIMD_AVX
#           define TMX_SIMD_SSE4
#           define TMX_SIMD_SSSE3
#           define TMX_SIMD_SSE3
#           define TMX_SIMD_SSE2
#           define TMX_SIMD_SSE

#       elif defined(__AVX__)
#           define TMX_SIMD_AVX
#           define TMX_SIMD_SSE4
#           define TMX_SIMD_SSSE3
#           define TMX_SIMD_SSE3
#           define TMX_SIMD_SSE2
#           define TMX_SIMD_SSE

#       elif defined(__SSE4_2__) || defined(__SSE4_1__)
#           define TMX_SIMD_SSE4
#           define TMX_SIMD_SSSE3
#           define TMX_SIMD_SSE3
#           define TMX_SIMD_SSE2
#           define TMX_SIMD_SSE

#       elif defined(__SSSE3__) 
#           define TMX_SIMD_SSSE3
#           define TMX_SIMD_SSE3
#           define TMX_SIMD_SSE2
#           define TMX_SIMD_SSE

#       elif defined(__SSE3__) 
#           define TMX_SIMD_SSE3
#           define TMX_SIMD_SSE2
#           define TMX_SIMD_SSE


#       elif defined(__SSE2__)
#           define TMX_SIMD_SSE2 
#           define TMX_SIMD_SSE 

#       elif defined(__SSE__)
#           define TMX_SIMD_SSE

#       else 
#           define TMX_SIMD_NONE

#       endif

#   endif

#else 
#   define TMX_SIMD_NONE

#endif




#if !defined(TMX_SET_COORDINATE_SYSTEM_LH) && !defined(TMX_SET_COORDINATE_SYSTEM_RH)
 
#   error Coordinate system (Left-Handed or Right-Handed) not specified ! Use TMX_SET_COORDINATE_SYSTEM_LH or TMX_SET_COORDINATE_SYSTEM_RH.
#endif


#if !defined(TMX_SET_Z_RANGE_0_1) && !defined(TMX_SET_Z_RANGE_N1_1)
 
#   error Z-range ([0; 1] or [-1; 1]) not specified ! Use TMX_SET_Z_RANGE_0_1 or TMX_SET_Z_RANGE_N1_1.
#endif


#if !defined(TMX_SET_Y_AXIS_UPWARDS) && !defined(TMX_SET_Y_AXIS_DOWNWARDS)
 
#   error Y axis direction (upwards or downwards) not specified ! Use TMX_SET_Y_AXIS_UPWARDS or TMX_SET_Y_AXIS_DOWNWARDS.
#endif


#if !defined(TMX_SET_ROTATION_ORDER_XYZ) && !defined(TMX_SET_ROTATION_ORDER_XZY) && !defined(TMX_SET_ROTATION_ORDER_YXZ) && \
    !defined(TMX_SET_ROTATION_ORDER_YZX) && !defined(TMX_SET_ROTATION_ORDER_ZXY) && !defined(TMX_SET_ROTATION_ORDER_ZYX) 

#   error Rotation order (XYZ, XZY, YXZ, YZX, ZXY or ZYX) not specified ! Use TMX_SET_ROTATION_SYSTEM_... with ... being either XYZ, XZY, YXZ, YZX, ZXY or ZYX.
#endif


#if !defined(TMX_SET_ROTATION_TYPE_INTRINSIC) && !defined(TMX_SET_ROTATION_TYPE_EXTRINSIC) 

#   error State of the rotation axis (rotating or static) not specified ! Use TMX_SET_ROTATION_TYPE_INSTRINSIC or TMX_SET_ROTATION_TYPE_EXTRINSIC.
#endif






#if defined(TMX_SIMD_AVX)
#	include <immintrin.h>

#elif defined(TMX_SIMD_SSE4)
#	include <smmintrin.h>

#elif defined(TMX_SIMD_SSSE3)
#	include <tmmintrin.h>

#elif defined(TMX_SIMD_SSE3)
#	include <pmmintrin.h>

#elif defined(TMX_SIMD_SSE2)
#	include <emmintrin.h>

#elif defined(TMX_SIMD_SSE)
#	include <xmmintrin.h>

#endif





#if !defined(TMX_SIMD_NONE)
#if defined(TMX_COMPILER_MSVC) 
#   define TMX_ALIGN_(type) __declspec(align(sizeof(type) * 4))

#else
#   define TMX_ALIGN_(type) __attribute__((aligned(sizeof(type) * 4)))
#endif

#else
#   define TMX_ALIGN_(type) 

#endif




#if defined(TMX_FORCE_ALWAYS_INLINE)
#   if defined(TMX_COMPILER_MSVC)
#       define TMX_INLINE __forceinline

#   else
#       define TMX_INLINE __attribute__((always_inline))

#   endif

#else
#   define TMX_INLINE inline

#endif 






