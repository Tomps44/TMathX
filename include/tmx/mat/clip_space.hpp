#pragma once

#include "tmx/internal/type_mat.hpp"

namespace tmx
{
    namespace tmxDetail
    {
        /**
         * Generates a `left-handed` perspective matrix, with `Z` in range of `[0; 1]` and `Y` going `upwards` (DirectX/Metal clip space)
         * 
         * @param fovY The vertical Field Of View of the camera, in RADIANS
         * @param aspect The aspect ratio of the camera
         * @param zNear The Z value of the near plane
         * @param zFar The Z value of the far plane
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_LH_Z0_YUP(T fovY, T aspect, T zNear, T zFar) noexcept;

        /**
         * Generates a `left-handed` perspective matrix, with `Z` in range of `[-1; 1]` and `Y` going `upwards` (OpenGL clip space)
         * 
         * @param fovY The vertical Field Of View of the camera, in RADIANS
         * @param aspect The aspect ratio of the camera
         * @param zNear The Z value of the near plane
         * @param zFar The Z value of the far plane
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_LH_ZN1_YUP(T fovY, T aspect, T zNear, T zFar) noexcept;

        /**
         * Generates a `left-handed` perspective matrix, with `Z` in range of `[0; 1]` and `Y` going `downwards` (Vulkan clip space)
         * 
         * @param fovY The vertical Field Of View of the camera, in RADIANS
         * @param aspect The aspect ratio of the camera
         * @param zNear The Z value of the near plane
         * @param zFar The Z value of the far plane
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_LH_Z0_YDOWN(T fovY, T aspect, T zNear, T zFar) noexcept;

        /**
         * Generates a `left-handed` perspective matrix, with `Z` in range of `[-1; 1]` and `Y` going `downwards`
         * 
         * @param fovY The vertical Field Of View of the camera, in RADIANS
         * @param aspect The aspect ratio of the camera
         * @param zNear The Z value of the near plane
         * @param zFar The Z value of the far plane
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_LH_ZN1_YDOWN(T fovY, T aspect, T zNear, T zFar) noexcept;

        /**
         * @brief Generates a `right-handed` perspective matrix, with `Z` in range of `[0; 1]` and `Y` going `upwards` (DirectX/Metal clip space)
         * 
         * @param fovY The vertical Field Of View of the camera, in RADIANS
         * @param aspect The aspect ratio of the camera
         * @param zNear The Z value of the near plane
         * @param zFar The Z value of the far plane
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_RH_Z0_YUP(T fovY, T aspect, T zNear, T zFar) noexcept;

        /**
         * Generates a `right-handed` perspective matrix, with `Z` in range of `[-1; 1]` and `Y` going `upwards` (OpenGL clip space)
         * 
         * @param fovY The vertical Field Of View of the camera, in RADIANS
         * @param aspect The aspect ratio of the camera
         * @param zNear The Z value of the near plane
         * @param zFar The Z value of the far plane
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_RH_ZN1_YUP(T fovY, T aspect, T zNear, T zFar) noexcept;

        /**
         * Generates a `right-handed` perspective matrix, with `Z` in range of `[0; 1]` and `Y` going `downwards` (Vulkan clip space)
         * 
         * @param fovY The vertical Field Of View of the camera, in RADIANS
         * @param aspect The aspect ratio of the camera
         * @param zNear The Z value of the near plane
         * @param zFar The Z value of the far plane
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_RH_Z0_YDOWN(T fovY, T aspect, T zNear, T zFar) noexcept;

        /**
         * Generates a `right-handed` perspective matrix, with `Z` in range of `[-1; 1]` and `Y` going `downwards` 
         * 
         * @param fovY The vertical Field Of View of the camera, in RADIANS
         * @param aspect The aspect ratio of the camera
         * @param zNear The Z value of the near plane
         * @param zFar The Z value of the far plane
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective_RH_ZN1_YDOWN(T fovY, T aspect, T zNear, T zFar) noexcept;





        /**
         * Generates a `left-handed` orthographic matrix, with `Z` in range of `[0; 1]` and `Y` going `upwards`
         * 
         * @param left The X coordinate of the left corner
         * @param right The X coordinate of the right corner
         * @param bottom The Y coordinate of the botton corner
         * @param top The Y coordinate of the top corner
         * @param near the Z coordinate of the near corner
         * @param far The Z coordinate of the far corner
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Orthographic_LH_Z0(T left, T right, T bottom, T top, T near, T far) noexcept;
        // TMX_INLINE constexpr mat<4, 4, T> Orthographic_LH_Z0_YUP(T left, T right, T bottom, T top, T near, T far) noexcept;

        /**
         * Generates a `left-handed` orthographic matrix, with `Z` in range of `[-1; 1]` and `Y` going `upwards`
         * 
         * @param left The X coordinate of the left corner
         * @param right The X coordinate of the right corner
         * @param bottom The Y coordinate of the botton corner
         * @param top The Y coordinate of the top corner
         * @param near the Z coordinate of the near corner
         * @param far The Z coordinate of the far corner
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Orthographic_LH_ZN1(T left, T right, T bottom, T top, T near, T far) noexcept;
        // TMX_INLINE constexpr mat<4, 4, T> Orthographic_LH_ZN1_YUP(T left, T right, T bottom, T top, T near, T far) noexcept;

        // /**
        //  * Generates a `left-handed` orthographic matrix, with `Z` in range of `[0; 1]` and `Y` going `downwards`
        //  * 
        //  * @param left The X coordinate of the left corner
        //  * @param right The X coordinate of the right corner
        //  * @param bottom The Y coordinate of the botton corner
        //  * @param top The Y coordinate of the top corner
        //  * @param near the Z coordinate of the near corner
        //  * @param far The Z coordinate of the far corner
        //  */
        // template<typename T>
        // TMX_INLINE constexpr mat<4, 4, T> Orthographic_LH_Z0_YDOWN(T left, T right, T bottom, T top, T near, T far) noexcept;

        // /**
        //  * Generates a `left-handed` orthographic matrix, with `Z` in range of `[-1; 1]` and `Y` going `downwards`
        //  * 
        //  * @param left The X coordinate of the left corner
        //  * @param right The X coordinate of the right corner
        //  * @param bottom The Y coordinate of the botton corner
        //  * @param top The Y coordinate of the top corner
        //  * @param near the Z coordinate of the near corner
        //  * @param far The Z coordinate of the far corner
        //  */
        // template<typename T>
        // TMX_INLINE constexpr mat<4, 4, T> Orthographic_LH_ZN1_YDOWN(T left, T right, T bottom, T top, T near, T far) noexcept;

        /**
         * Generates a `right-handed` orthographic matrix, with `Z` in range of `[0; 1]` and `Y` going `upwards`
         * 
         * @param left The X coordinate of the left corner
         * @param right The X coordinate of the right corner
         * @param bottom The Y coordinate of the botton corner
         * @param top The Y coordinate of the top corner
         * @param near the Z coordinate of the near corner
         * @param far The Z coordinate of the far corner
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Orthographic_RH_Z0(T left, T right, T bottom, T top, T near, T far) noexcept;
        // TMX_INLINE constexpr mat<4, 4, T> Orthographic_RH_Z0_YUP(T left, T right, T bottom, T top, T near, T far) noexcept;

        /**
         * Generates a `right-handed` orthographic matrix, with `Z` in range of `[-1; 1]` and `Y` going `upwards`
         * 
         * @param left The X coordinate of the left corner
         * @param right The X coordinate of the right corner
         * @param bottom The Y coordinate of the botton corner
         * @param top The Y coordinate of the top corner
         * @param near the Z coordinate of the near corner
         * @param far The Z coordinate of the far corner
         */
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Orthographic_RH_ZN1(T left, T right, T bottom, T top, T near, T far) noexcept;
        // TMX_INLINE constexpr mat<4, 4, T> Orthographic_RH_ZN1_YUP(T left, T right, T bottom, T top, T near, T far) noexcept;

        // /**
        //  * Generates a `right-handed` orthographic matrix, with `Z` in range of `[0; 1]` and `Y` going `downwards`
        //  * 
        //  * @param left The X coordinate of the left corner
        //  * @param right The X coordinate of the right corner
        //  * @param bottom The Y coordinate of the botton corner
        //  * @param top The Y coordinate of the top corner
        //  * @param near the Z coordinate of the near corner
        //  * @param far The Z coordinate of the far corner
        //  */
        // template<typename T>
        // TMX_INLINE constexpr mat<4, 4, T> Orthographic_RH_Z0_YDOWN(T left, T right, T bottom, T top, T near, T far) noexcept;

        // /**
        //  * Generates a `right-handed` orthographic matrix, with `Z` in range of `[-1; 1]` and `Y` going `downwards`
        //  * 
        //  * @param left The X coordinate of the left corner
        //  * @param right The X coordinate of the right corner
        //  * @param bottom The Y coordinate of the botton corner
        //  * @param top The Y coordinate of the top corner
        //  * @param near the Z coordinate of the near corner
        //  * @param far The Z coordinate of the far corner
        //  */
        // template<typename T>
        // TMX_INLINE constexpr mat<4, 4, T> Orthographic_RH_ZN1_YDOWN(T left, T right, T bottom, T top, T near, T far) noexcept;


    } // namespace tmxDetail

    namespace Mat
    {
        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Perspective(T fovY, T aspect, T zNear, T zFar) noexcept;

        template<typename T>
        TMX_INLINE constexpr mat<4, 4, T> Orthographic(T left, T right, T bottom, T top, T near, T far) noexcept;

    } // namespace Mat
    
} // namespace tmx


#include "tmx/internal/mat/compute_clip_space.inl"