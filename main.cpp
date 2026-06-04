#include <iostream>
#include <iomanip>
#include <chrono>


// #define GLB_FORCE_SIMD_NONE
// #define GLB_FORCE_SSE2
// #define GLB_FORCE_AVX
#define GLB_SET_COORDINATE_SYSTEM_RH
#define GLB_SET_ROTATION_ORDER_ZXY
#define GLB_SET_ROTATION_TYPE_EXTRINSIC
#define GLB_SET_Z_RANGE_N1_1
#define GLB_SET_Y_AXIS_UPWARDS


#include "glb/vec/vec_type.hpp"
#include "glb/vec/functions.hpp"

#include "glb/mat/mat_type.hpp"
#include "glb/mat/functions.hpp"

#include "glb/quat/quat_type.hpp"
#include "glb/quat/functions.hpp"

#include "glb/math/functions.hpp"

#include "glb/internal/hash.hpp"


template<typename T>
void logVal(T val) 
{
    std::cout << ((std::abs(val) < static_cast<T>(5.0e-05)) ? static_cast<T>(0) : val);
}

template<int S, typename T>
void logVec(const glb::vec<S, T>& vec)
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
void logMat(const glb::mat<R, C, T>& mat)
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
void logQuat(const glb::quat<T>& qua)
{
    std::cout << "(";
    for (int i = 0; i < 3; i++)
    {
        std::cout << qua.values[i] << ", ";
    }
    std::cout << qua.values[3];
    std::cout << ")" << '\n';
}





using namespace glb;


int main()
{
    return 0;
}




