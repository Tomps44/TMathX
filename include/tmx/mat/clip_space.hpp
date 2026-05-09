#pragma once

#include "tmx/internal/type_mat.hpp"

namespace tmx
{
    namespace Mat
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
         * Generates a `right-handed` perspective matrix, with `Z` in range of `[0; 1]` and `Y` going `upwards` (DirectX/Metal clip space)
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


    } // namespace Mat
} // namespace tmx


#include "tmx/internal/mat/compute_clip_space.inl"