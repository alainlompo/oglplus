
/*
 *  Automatically generated file, do not edit manually!
 *
 *  Copyright 2010-2015 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */
//[oglplus_object_BoundObjOps_Framebuffer

template <>
class __BoundObjOps<__tag_Framebuffer>
{
private:
	typedef typename __ObjectOps_Explicit_Framebuffer<__tag_ExplicitSel, __tag_Framebuffer> ExplicitOps;
public:
	typedef typename ExplicitOps::Target Target;

	Target target;

	BoundObjOps(void);

	BoundObjOps(Target init_tgt);
	FramebufferStatus Status(void) const;

	bool IsComplete(void) const;

	const BoundObjOps& HandleIncompleteError(
		FramebufferStatus status
	) const;

	const BoundObjOps& Complete(void) const;

	const BoundObjOps& AttachRenderbuffer(
		ExplicitOps::Property::Attachment attachment,
		RenderbufferName renderbuffer
	) const;

	const BoundObjOps& AttachColorRenderbuffer(
		FramebufferColorAttachmentNumber attachment_no,
		RenderbufferName renderbuffer
	) const;

#if GL_VERSION_3_2
	const BoundObjOps& AttachTexture(
		ExplicitOps::Property::Attachment attachment,
		TextureName texture,
		GLint level
	) const;
#endif

	const BoundObjOps& AttachColorTexture(
		FramebufferColorAttachmentNumber attachment_no,
		TextureName texture,
		GLint level
	) const;

	const BoundObjOps& AttachTexture1D(
		ExplicitOps::Property::Attachment attachment,
		TextureTarget textarget,
		TextureName texture,
		GLint level
	) const;

	const BoundObjOps& AttachTexture2D(
		ExplicitOps::Property::Attachment attachment,
		TextureTarget textarget,
		TextureName texture,
		GLint level
	) const;

	const BoundObjOps& AttachTexture3D(
		ExplicitOps::Property::Attachment attachment,
		TextureTarget textarget,
		TextureName texture,
		GLint level,
		GLint layer
	) const;

	const BoundObjOps& AttachTextureLayer(
		ExplicitOps::Property::Attachment attachment,
		TextureName texture,
		GLint level,
		GLint layer
	) const;

#if GL_VERSION_4_3 || GL_ARB_invalidate_subdata
	const BoundObjOps& Invalidate(
		const EnumArray< ExplicitOps::Property::Buffer > & buffers
	) const;
#endif

#if GL_VERSION_4_3 || GL_ARB_invalidate_subdata
	const BoundObjOps& Invalidate(
		SizeType count,
		const ExplicitOps::Property::Buffer * buffers
	) const;
#endif

#if GL_VERSION_4_3 || GL_ARB_invalidate_subdata
	const BoundObjOps& Invalidate(
		const EnumArray< ExplicitOps::Property::Buffer > & buffers,
		GLint x,
		GLint y,
		SizeType width,
		SizeType height
	) const;
#endif

#if GL_VERSION_4_3 || GL_ARB_invalidate_subdata
	const BoundObjOps& Invalidate(
		SizeType count,
		const ExplicitOps::Property::Buffer * buffers,
		GLint x,
		GLint y,
		SizeType width,
		SizeType height
	) const;
#endif


};
//]
