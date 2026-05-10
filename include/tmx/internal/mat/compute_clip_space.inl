#include <cmath>

namespace tmx
{
    namespace Mat
    {
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_LH_Z0_YUP(T fovY, T aspect, T zNear, T zFar) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovY * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (zFar - zNear);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = invTanHalfFov;
            res[2][2] = zFar * invFarMinusNear;
            res[2][3] = static_cast<T>(1);
            res[3][2] = -(zFar * zNear) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_LH_ZN1_YUP(T fovY, T aspect, T zNear, T zFar) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovY * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (zFar - zNear);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = invTanHalfFov;
            res[2][2] = -(zFar + zNear) * invFarMinusNear;
            res[2][3] = static_cast<T>(1);
            res[3][2] = (static_cast<T>(2) * zFar * zNear) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_LH_Z0_YDOWN(T fovY, T aspect, T zNear, T zFar) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovY * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (zFar - zNear);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = -invTanHalfFov;
            res[2][2] = zFar * invFarMinusNear;
            res[2][3] = static_cast<T>(1);
            res[3][2] = -(zFar * zNear) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_LH_ZN1_YDOWN(T fovY, T aspect, T zNear, T zFar) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovY * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (zFar - zNear);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = -invTanHalfFov;
            res[2][2] = -(zFar + zNear) * invFarMinusNear;
            res[2][3] = static_cast<T>(1);
            res[3][2] = (static_cast<T>(2) * zFar * zNear) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_RH_Z0_YUP(T fovY, T aspect, T zNear, T zFar) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovY * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (zFar - zNear);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = invTanHalfFov;
            res[2][2] = zFar * invFarMinusNear;
            res[2][3] = static_cast<T>(-1);
            res[3][2] = (zFar * zNear) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_RH_ZN1_YUP(T fovY, T aspect, T zNear, T zFar) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovY * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (zFar - zNear);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = invTanHalfFov;
            res[2][2] = -(zFar + zNear) * invFarMinusNear;
            res[2][3] = static_cast<T>(-1);
            res[3][2] = -(static_cast<T>(2) * zFar * zNear) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_RH_Z0_YDOWN(T fovY, T aspect, T zNear, T zFar) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovY * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (zFar - zNear);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = -invTanHalfFov;
            res[2][2] = zFar * invFarMinusNear;
            res[2][3] = static_cast<T>(-1);
            res[3][2] = (zFar * zNear) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_RH_ZN1_YDOWN(T fovY, T aspect, T zNear, T zFar) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovY * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (zFar - zNear);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = -invTanHalfFov;
            res[2][2] = -(zFar + zNear) * invFarMinusNear;
            res[2][3] = static_cast<T>(-1);
            res[3][2] = -(static_cast<T>(2) * zFar * zNear) * invFarMinusNear;

            return res;
        }






        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Orthographic_LH_Z0_YUP(T left, T right, T bottom, T top, T near, T far) noexcept
        {
            mat<4, 4, T> res;

            const T invRightMinusLeft = static_cast<T>(1) / (right - left); 
            const T invTopMinusBottom = static_cast<T>(1) / (top - bottom); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near); 

            res[0][0] = static_cast<T>(2) * invRightMinusLeft;
            res[1][1] = static_cast<T>(2) * invTopMinusBottom;
            res[2][2] = static_cast<T>(1) * invFarMinusNear;
            res[3][0] = -(right + left) * invRightMinusLeft;
            res[3][1] = -(top + bottom) * invTopMinusBottom;
            res[3][2] = -near * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Orthographic_RH_Z0_YUP(T left, T right, T bottom, T top, T near, T far) noexcept
        {
            mat<4, 4, T> res;

            const T invRightMinusLeft = static_cast<T>(1) / (right - left); 
            const T invTopMinusBottom = static_cast<T>(1) / (top - bottom); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near); 

            res[0][0] = static_cast<T>(2) * invRightMinusLeft;
            res[1][1] = static_cast<T>(2) * invTopMinusBottom;
            res[2][2] = static_cast<T>(-1) * invFarMinusNear;
            res[3][0] = -(right + left) * invRightMinusLeft;
            res[3][1] = -(top + bottom) * invTopMinusBottom;
            res[3][2] = near * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Orthographic_LH_Z0_YDOWN(T left, T right, T bottom, T top, T near, T far) noexcept
        {
            mat<4, 4, T> res;

            const T invRightMinusLeft = static_cast<T>(1) / (right - left); 
            const T invTopMinusBottom = static_cast<T>(1) / (top - bottom); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near); 

            res[0][0] = static_cast<T>(2) * invRightMinusLeft;
            res[1][1] = static_cast<T>(-2) * invTopMinusBottom;
            res[2][2] = static_cast<T>(1) * invFarMinusNear;
            res[3][0] = -(right + left) * invRightMinusLeft;
            res[3][1] = (top + bottom) * invTopMinusBottom;
            res[3][2] = -near * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Orthographic_RH_Z0_YDOWN(T left, T right, T bottom, T top, T near, T far) noexcept
        {
            mat<4, 4, T> res;

            const T invRightMinusLeft = static_cast<T>(1) / (right - left); 
            const T invTopMinusBottom = static_cast<T>(1) / (top - bottom); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near); 

            res[0][0] = static_cast<T>(2) * invRightMinusLeft;
            res[1][1] = static_cast<T>(-2) * invTopMinusBottom;
            res[2][2] = static_cast<T>(-1) * invFarMinusNear;
            res[3][0] = -(right + left) * invRightMinusLeft;
            res[3][1] = (top + bottom) * invTopMinusBottom;
            res[3][2] = near * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Orthographic_LH_ZN1_YUP(T left, T right, T bottom, T top, T near, T far) noexcept
        {
            mat<4, 4, T> res;

            const T invRightMinusLeft = static_cast<T>(1) / (right - left); 
            const T invTopMinusBottom = static_cast<T>(1) / (top - bottom); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near); 

            res[0][0] = static_cast<T>(2) * invRightMinusLeft;
            res[1][1] = static_cast<T>(2) * invTopMinusBottom;
            res[2][2] = static_cast<T>(2) * invFarMinusNear;
            res[3][0] = -(right + left) * invRightMinusLeft;
            res[3][1] = -(top + bottom) * invTopMinusBottom;
            res[3][2] = (far + near) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Orthographic_RH_ZN1_YUP(T left, T right, T bottom, T top, T near, T far) noexcept
        {
            mat<4, 4, T> res;

            const T invRightMinusLeft = static_cast<T>(1) / (right - left); 
            const T invTopMinusBottom = static_cast<T>(1) / (top - bottom); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near); 

            res[0][0] = static_cast<T>(2) * invRightMinusLeft;
            res[1][1] = static_cast<T>(2) * invTopMinusBottom;
            res[2][2] = static_cast<T>(-2) * invFarMinusNear;
            res[3][0] = -(right + left) * invRightMinusLeft;
            res[3][1] = -(top + bottom) * invTopMinusBottom;
            res[3][2] = -(far + near) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Orthographic_LH_ZN1_YDOWN(T left, T right, T bottom, T top, T near, T far) noexcept
        {
            mat<4, 4, T> res;

            const T invRightMinusLeft = static_cast<T>(1) / (right - left); 
            const T invTopMinusBottom = static_cast<T>(1) / (top - bottom); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near); 

            res[0][0] = static_cast<T>(2) * invRightMinusLeft;
            res[1][1] = static_cast<T>(-2) * invTopMinusBottom;
            res[2][2] = static_cast<T>(2) * invFarMinusNear;
            res[3][0] = -(right + left) * invRightMinusLeft;
            res[3][1] = (top + bottom) * invTopMinusBottom;
            res[3][2] = (far + near) * invFarMinusNear;

            return res;
        }
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Orthographic_RH_ZN1_YDOWN(T left, T right, T bottom, T top, T near, T far) noexcept
        {
            mat<4, 4, T> res;

            const T invRightMinusLeft = static_cast<T>(1) / (right - left); 
            const T invTopMinusBottom = static_cast<T>(1) / (top - bottom); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near); 

            res[0][0] = static_cast<T>(2) * invRightMinusLeft;
            res[1][1] = static_cast<T>(-2) * invTopMinusBottom;
            res[2][2] = static_cast<T>(-2) * invFarMinusNear;
            res[3][0] = -(right + left) * invRightMinusLeft;
            res[3][1] = (top + bottom) * invTopMinusBottom;
            res[3][2] = -(far + near) * invFarMinusNear;

            return res;
        }

        

    } // namespace Mat
} // namespace tmx
