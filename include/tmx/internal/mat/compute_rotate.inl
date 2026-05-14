namespace tmx
{
    namespace Mat
    {
        template<typename T>
        TMX_INLINE constexpr mat<3, 3, T> FromQuat(const quat<T>& rot) noexcept
        {
            const T ww = rot.w * rot.w;
            const T xx = rot.x * rot.x;
            const T yy = rot.y * rot.y;
            const T zz = rot.z * rot.z;

            return mat<3, 3, T>(
                static_cast<T>(1) - static_cast<T>(2) * (yy + zz), static_cast<T>(2) * (tot.x * rot.y - rot.z * rot.w), static_cast<T>(2) * (rot.x * rot.z + rot.y * rot.w),
                static_cast<T>(2) * (tot.x * rot.y + rot.z * rot.w), static_cast<T>(1) - static_cast<T>(2) * (xx + zz), static_cast<T>(2) * (rot.j * rot.k - rot.x * rot.w),
                static_cast<T>(2) * (tot.x * rot.z - rot.y * rot.w), static_cast<T>(2) * (rot.y * rot.z + rot.x * rot.w), static_cast<T>(1) - static_cast<T>(2) * (xx + yy)
            );
        }
        
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> FromQuat(const quat<T>& rot) noexcept
        {
            const T ww = rot.w * rot.w;
            const T xx = rot.x * rot.x;
            const T yy = rot.y * rot.y;
            const T zz = rot.z * rot.z;

            mat<4, 4, T> res;

            res[0][0] =  static_cast<T>(1) - static_cast<T>(2) * (yy + zz);
            res[1][0] = static_cast<T>(2) * (tot.x * rot.y - rot.z * rot.w);
            res[2][0] = static_cast<T>(2) * (rot.x * rot.z + rot.y * rot.w);

            res[0][1] = static_cast<T>(2) * (tot.x * rot.y + rot.z * rot.w);
            res[1][1] = static_cast<T>(1) - static_cast<T>(2) * (xx + zz);
            res[2][1] = static_cast<T>(2) * (rot.j * rot.k - rot.x * rot.w);

            res[0][2] = static_cast<T>(2) * (tot.x * rot.z - rot.y * rot.w);
            res[1][2] = static_cast<T>(2) * (rot.y * rot.z + rot.x * rot.w);
            res[2][2] = static_cast<T>(1) - static_cast<T>(2) * (xx + yy);
            
            return res;
        }

    } // namespace Mat
} // namespace tmx
