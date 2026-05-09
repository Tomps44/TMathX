#include <cmath>

namespace tmx
{
    namespace Mat
    {
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_LH_Z0_YUP(T fovy, T aspect, T near, T far) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovy * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = invTanHalfFov;
            res[2][2] = far * invFarMinusNear;
            res[2][3] = static_cast<T>(1);
            res[3][2] = -(far * near) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_LH_ZN1_YUP(T fovy, T aspect, T near, T far) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovy * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = invTanHalfFov;
            res[2][2] = -(far + near) * invFarMinusNear;
            res[2][3] = static_cast<T>(1);
            res[3][2] = (static_cast<T>(2) * far * near) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_LH_Z0_YDOWN(T fovy, T aspect, T near, T far) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovy * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = -invTanHalfFov;
            res[2][2] = far * invFarMinusNear;
            res[2][3] = static_cast<T>(1);
            res[3][2] = -(far * near) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_LH_ZN1_YDOWN(T fovy, T aspect, T near, T far) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovy * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = -invTanHalfFov;
            res[2][2] = -(far + near) * invFarMinusNear;
            res[2][3] = static_cast<T>(1);
            res[3][2] = (static_cast<T>(2) * far * near) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_RH_Z0_YUP(T fovy, T aspect, T near, T far) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovy * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = invTanHalfFov;
            res[2][2] = far * invFarMinusNear;
            res[2][3] = static_cast<T>(-1);
            res[3][2] = (far * near) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_RH_ZN1_YUP(T fovy, T aspect, T near, T far) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovy * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = invTanHalfFov;
            res[2][2] = -(far + near) * invFarMinusNear;
            res[2][3] = static_cast<T>(-1);
            res[3][2] = -(static_cast<T>(2) * far * near) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_RH_Z0_YDOWN(T fovy, T aspect, T near, T far) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovy * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = -invTanHalfFov;
            res[2][2] = far * invFarMinusNear;
            res[2][3] = static_cast<T>(-1);
            res[3][2] = (far * near) * invFarMinusNear;

            return res;
        }

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_RH_ZN1_YDOWN(T fovy, T aspect, T near, T far) noexcept
        {
            mat<4, 4, T> res(static_cast<T>(0)); // Sets the matrix to all 0

            const T invTanHalfFov = static_cast<T>(1) / std::tan(fovy * static_cast<T>(0.5)); 
            const T invFarMinusNear = static_cast<T>(1) / (far - near);

            res[0][0] = invTanHalfFov / aspect;
            res[1][1] = -invTanHalfFov;
            res[2][2] = -(far + near) * invFarMinusNear;
            res[2][3] = static_cast<T>(-1);
            res[3][2] = -(static_cast<T>(2) * far * near) * invFarMinusNear;

            return res;
        }

    } // namespace Mat
} // namespace tmx
