#include <iostream>
#include <iomanip>

#define TMX_FORCE_SIMD_NONE

#include "tmx/vec/vec_type.hpp"
#include "tmx/vec/functions.hpp"

#include "tmx/mat/mat_type.hpp"
#include "tmx/mat/clip_space.hpp"

#include "tmx/quat/quat_type.hpp"
#include "tmx/quat/functions.hpp"

#include "tmx/math/functions.hpp"




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
        for (int c = 0; c < C; c++)
        {
            std::cout << mat[c][r] << " ";
        }
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
    std::cout << std::setprecision(5);

    using namespace tmx;
    using namespace Math;


    
    Vec3 fVec(1.0f, 2.0f, 3.0f);
    Vec3HighP dVec(4.0, 5.0, 6.0);

    Vec3Int i32Vec = Vec::ToVecInt(fVec);
    Vec3Long i64Vec = Vec::ToVecInt(dVec);

    logVec(i32Vec);
    logVec(i64Vec);


    
  
    return 0;
}


