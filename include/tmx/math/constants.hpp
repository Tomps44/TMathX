#pragma once

#include <numbers>

namespace tmx
{
    namespace Math
    {
        namespace num
        {
            template<typename T>
            TMX_INLINE constexpr T espilon_T = static_cast<T>(1.0e-06L);
            template<typename T>
            TMX_INLINE constexpr T e_T = static_cast<T>(2.718281828459045235360287471352662498L);
            template<typename T>
            TMX_INLINE constexpr T pi_T = static_cast<T>(3.141592653589793238462643383279502884L);
            template<typename T>
            TMX_INLINE constexpr T halfPi_T = static_cast<T>(1.5707963267948966192564044797030931L);
            template<typename T>
            TMX_INLINE constexpr T twoPi_T = static_cast<T>(6.28318530717958647702561791881237241L);
            template<typename T>
            TMX_INLINE constexpr T tau_T = static_cast<T>(6.28318530717958647702561791881237241L);
            template<typename T>
            TMX_INLINE constexpr T quarterPi_T = static_cast<T>(0.785398163397448309628202239851546551L);
            template<typename T>
            TMX_INLINE constexpr T invPi_T = static_cast<T>(0.318309886183790671537767526745028724L);
            template<typename T>
            TMX_INLINE constexpr T sqrtPi_T = static_cast<T>(1.77245385090551602L);
            template<typename T>
            TMX_INLINE constexpr T invSqrtPi_T = static_cast<T>(0.564189583547756286948079451560772586L);
            template<typename T>
            TMX_INLINE constexpr T twoOverPi_T = static_cast<T>(0.636619772367581343076349542631220402L);
            template<typename T>
            TMX_INLINE constexpr T phi_T = static_cast<T>(1.618033988749894848204586834365638118L);
            template<typename T>
            TMX_INLINE constexpr T sqrt2_T = static_cast<T>(1.414213562373095048801688724209698079L);
            template<typename T>
            TMX_INLINE constexpr T sqrt3_T = static_cast<T>(1.732050807568877293527446341505872367L);
            template<typename T>
            TMX_INLINE constexpr T ln2_T = static_cast<T>(0.69314718055994530941723212145817656L);
            template<typename T>
            TMX_INLINE constexpr T lnPi_T = static_cast<T>(1.14472988584940017417739682726L);
            template<typename T>
            TMX_INLINE constexpr T ln10_T = static_cast<T>(2.302585092994045684017991454684364208L);
            template<typename T>
            TMX_INLINE constexpr T invSqrt3_T = static_cast<T>(0.577350269189625764509148780501957456L);
            // The Euler-Mascheroni constant  
            template<typename T>
            TMX_INLINE constexpr T egamma_T = static_cast<T>(0.577215664901532860606512090082402431L);
            template<typename T>
            TMX_INLINE constexpr T degToRad_T = static_cast<T>(0.0174532925199432957691391462423657899L);
            template<typename T>
            TMX_INLINE constexpr T radToDeg_T = static_cast<T>(57.295779513082320876654618402312735L);
            template<typename T>
            TMX_INLINE constexpr T oneThird_T = static_cast<T>(0.33333333333333333333333333333333333L);
            template<typename T>
            TMX_INLINE constexpr T twoThirds_T = static_cast<T>(0.66666666666666666666666666666666667L);
        }


        // A really small value, 1.0e-06
        TMX_INLINE constexpr float Espilon = num::espilon_T<float>;
        // Euler's number
        TMX_INLINE constexpr float E = num::e_T<float>;
        // The well known constant of 3.1415..., the ratio of the circumference of a circle to its diameter
        TMX_INLINE constexpr float PI = num::pi_T<float>;
        // `PI x 2.00`
        TMX_INLINE constexpr float TAU = num::tau_T<float>;
        // The Golden Ratio, 1.618...
        TMX_INLINE constexpr float PHI = num::phi_T<float>;
        /// @brief The Euler-Mascheroni constant 
        TMX_INLINE constexpr float GAMMA = num::egamma_T<float>;
        
        // `PI x 0.50`
        TMX_INLINE constexpr float HalfPI = num::halfPi_T<float>;
        // `PI x 2.00`
        TMX_INLINE constexpr float TwoPI = num::twoPi_T<float>;
        // `PI x 0.25`
        TMX_INLINE constexpr float QuarterPI = num::quarterPi_T<float>;
        // `1.00 / PI`
        TMX_INLINE constexpr float InvPI = num::invPi_T<float>;
        // `Sqrt(PI)`
        TMX_INLINE constexpr float SqrtPI = num::sqrtPi_T<float>;
        // `1 .00 / (Sqrt(PI))`
        TMX_INLINE constexpr float InvSqrtPI = num::invSqrtPi_T<float>;
        // `2.00 / PI`
        TMX_INLINE constexpr float TwoOverPI = num::twoOverPi_T<float>;
    
        
        // `Sqrt(2.00)`
        TMX_INLINE constexpr float Sqrt2 = num::sqrt2_T<float>;
        // `Sqrt(3.00)`
        TMX_INLINE constexpr float Sqrt3 = num::sqrt3_T<float>;
        // `1 .00 / (Sqrt(3.00))`
        TMX_INLINE constexpr float InvSqrt3 = num::invSqrt3_T<float>;
    
        
        // The natural logarithm of 2
        TMX_INLINE constexpr float Ln2 = num::ln2_T<float>;
        // The natural logarithm of PI
        TMX_INLINE constexpr float LnPI = num::lnPi_T<float>;
        // The natural logarithm of 10
        TMX_INLINE constexpr float Ln10 = num::ln10_T<float>;
    
    
        // The value used to convert degrees to radians
        TMX_INLINE constexpr float DegToRad = num::degToRad_T<float>;
        // The value used to convert radians to degrees
        TMX_INLINE constexpr float RadToDeg = num::radToDeg_T<float>;
    

        // `1.00 / 3.00`
        TMX_INLINE constexpr float OneThird = num::radToDeg_T<float>;
        // `2.00 / 3.00`
        TMX_INLINE constexpr float TwoThird = num::radToDeg_T<float>;


    }
} // namespace tmx

