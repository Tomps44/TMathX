#include <iostream>
#include <iomanip>
#include <chrono>


// #define TMX_FORCE_SIMD_NONE
// #define TMX_FORCE_SSE2
// #define TMX_FORCE_AVX
#define TMX_SET_COORDINATE_SYSTEM_RH
#define TMX_SET_ROTATION_ORDER_ZXY
#define TMX_SET_ROTATION_TYPE_EXTRINSIC
#define TMX_SET_Z_RANGE_N1_1
#define TMX_SET_Y_AXIS_UPWARDS


#include "tmx/vec/vec_type.hpp"
#include "tmx/vec/functions.hpp"

#include "tmx/mat/mat_type.hpp"
#include "tmx/mat/functions.hpp"

#include "tmx/quat/quat_type.hpp"
#include "tmx/quat/functions.hpp"

#include "tmx/math/functions.hpp"


template<typename T>
void logVal(T val) 
{
    std::cout << ((std::abs(val) < static_cast<T>(5.0e-05)) ? static_cast<T>(0) : val);
}

template<int S, typename T>
void logVec(const tmx::vec<S, T>& vec)
{
    std::cout << "(";
    for (int i = 0; i < S - 1; i++)
    {
        std::cout << vec.values[i] << ", ";
    }
    std::cout << vec.values[S - 1];
    std::cout << ")" << '\n';
}

template<int R, int C, typename T>
void logMat(const tmx::mat<R, C, T>& mat)
{
    for (int r = 0; r < R; r++)
    {
        std::cout << "(";
        for (int c = 0; c < C - 1; c++)
        {
            logVal(mat[c][r]);
            std::cout << " ";
        }
        logVal(mat[C - 1][r]);
        std::cout << ")" << '\n';
    }
}

template<typename T>
void logQuat(const tmx::quat<T>& qua)
{
    std::cout << "(";
    for (int i = 0; i < 3; i++)
    {
        std::cout << qua.values[i] << ", ";
    }
    std::cout << qua.values[3];
    std::cout << ")" << '\n';
}








int main()
{
    // std::cout << std::setprecision(10);

    using namespace tmx;
    using namespace Math;


    Mat3x3 a3(
        12.9f, 8.2f, -0.2f, 
        -7.8f, 2.0f, 4.9f, 
        9.0f, -6.8f, 1.9f
    );

    Mat4x4 a(
        12.9f, 8.2f, -0.2f, 10.7f, 
        -7.8f, 2.0f, 4.9f, 17.8f,
        9.0f, -6.8f, 1.9f, 0.0f,
        0.0f, -2.0f, -8.1f, 1.0f
    );
    Mat4x4 b(
        0.3f, 1.0f, -2.9f, 0.0f,
        0.0f, 0.0f, 6.2f, -2.0f, 
        -1.9f, -1.1f, 2.2f, 8.5f,
        7.9f, 0.2f, -6.8f, 1.0f
    );

    // Mat4x4 mul0 = internal::matMul<4, 4, float, false>::call(a, b);
    // Mat4x4 mul1 = a * b;

    // logMat(mul0);
    // std::cout << '\n';
    // logMat(mul1);
    // std::cout << '\n' << (mul0 == mul1);

    logMat(internal::matInverse<4, 4, float, false>::call(a));
    std::cout << '\n';
    logMat(Mat::Transpose(Mat::Inverse(a)));
    std::cout << '\n' << (internal::matInverse<4, 4, float, false>::call(a) == Mat::Transpose(Mat::Inverse(a)));




    

  
    return 0;
}


