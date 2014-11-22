//  File implement/eglplus/enums/gl_colorspace_range.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/eglplus/gl_colorspace.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
EGLPLUS_LIB_FUNC aux::CastIterRange<
	const EGLenum*,
	GLColorspace
> ValueRange_(GLColorspace*) noexcept
#if (!EGLPLUS_LINK_LIBRARY || defined(EGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(EGLPLUS_IMPL_EVR_GLCOLORSPACE)
#define EGLPLUS_IMPL_EVR_GLCOLORSPACE
{
static const EGLenum _values[] = {
#if defined EGL_GL_COLORSPACE_sRGB
EGL_GL_COLORSPACE_sRGB,
#endif
#if defined EGL_GL_COLORSPACE_LINEAR
EGL_GL_COLORSPACE_LINEAR,
#endif
0
};
return aux::CastIterRange<
	const EGLenum*,
	GLColorspace
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#else
;
#endif
} // namespace enums

