#include "tmx/vec/geometric.hpp"

namespace tmx
{
    namespace tmxDetail
    {
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> LookAt_LH(const vec<3, T>& eye, const vec<3, T>& target, const vec<3, T>& worldUp) noexcept
        {
            const vec<3, T>& forward = Vec::Normalize(target - eye);
            const vec<3, T>& right = Vec::Normalize(Vec::Cross(worldUp, forward));
            const vec<3, T>& up = Vec::Normalize(Vec::Cross(forward, right));

            mat<4, 4, T> res;

            res[0][0] = right.x;
            res[1][0] = right.y;
            res[2][0] = right.z;
            res[3][0] = -Vec::Dot(right, eye);

            res[0][1] = up.x;
            res[1][1] = up.y;
            res[2][1] = up.z;
            res[3][1] = -Vec::Dot(up, eye);

            res[0][2] = forward.x;
            res[1][2] = forward.y;
            res[2][2] = forward.z;
            res[3][2] = -Vec::Dot(forward, eye);
            
            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> LookAt_RH(const vec<3, T>& eye, const vec<3, T>& target, const vec<3, T>& worldUp) noexcept
        {
            const vec<3, T>& forward = Vec::Normalize(eye - target);
            const vec<3, T>& right = Vec::Normalize(Vec::Cross(worldUp, forward));
            const vec<3, T>& up = Vec::Normalize(Vec::Cross(forward, right));

            mat<4, 4, T> res;

            res[0][0] = right.x;
            res[1][0] = right.y;
            res[2][0] = right.z;
            res[3][0] = Vec::Dot(right, eye);

            res[0][1] = up.x;
            res[1][1] = up.y;
            res[2][1] = up.z;
            res[3][1] = Vec::Dot(up, eye);

            res[0][2] = forward.x;
            res[1][2] = forward.y;
            res[2][2] = forward.z;
            res[3][2] = Vec::Dot(forward, eye);
            
            return res;
        }
        
    } // namespace tmxDetail

    namespace Mat
    {
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> LookAt(const vec<3, T>& eye, const vec<3, T>& target, const vec<3, T>& worldUp) noexcept
        {
#           if defined(TMX_SET_COORDINATE_SYSTEM_LH)
                return tmxDetail::LookAt_LH(eye, target, worldUp);

#           else
                return tmxDetail::LookAt_RH(eye, target, worldUp);
                
#           endif
        }

    } // namespace Mat
    
} // namespace tmx
