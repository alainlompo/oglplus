//  File implement/oglplus/enums/texture_swizzle_coord_range.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/texture_swizzle_coord.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	TextureSwizzleCoord
> ValueRange_(TextureSwizzleCoord*) noexcept
#if (!OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(OGLPLUS_IMPL_EVR_TEXTURESWIZZLECOORD)
#define OGLPLUS_IMPL_EVR_TEXTURESWIZZLECOORD
{
static const GLenum _values[] = {
#if defined GL_TEXTURE_SWIZZLE_R
GL_TEXTURE_SWIZZLE_R,
#endif
#if defined GL_TEXTURE_SWIZZLE_G
GL_TEXTURE_SWIZZLE_G,
#endif
#if defined GL_TEXTURE_SWIZZLE_B
GL_TEXTURE_SWIZZLE_B,
#endif
#if defined GL_TEXTURE_SWIZZLE_A
GL_TEXTURE_SWIZZLE_A,
#endif
#if defined GL_TEXTURE_SWIZZLE_RGBA
GL_TEXTURE_SWIZZLE_RGBA,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	TextureSwizzleCoord
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#else
;
#endif
} // namespace enums

