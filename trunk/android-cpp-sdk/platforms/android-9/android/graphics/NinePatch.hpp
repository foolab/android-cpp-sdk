/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.NinePatch
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_NINEPATCH_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_NINEPATCH_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace android { namespace graphics { class RectF; } } }
namespace j2cpp { namespace android { namespace graphics { class Region; } } }


#include <android/graphics/Bitmap.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/RectF.hpp>
#include <android/graphics/Region.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class NinePatch;
	class NinePatch
		: public object<NinePatch>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)

		explicit NinePatch(jobject jobj)
		: object<NinePatch>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		NinePatch(local_ref< android::graphics::Bitmap > const&, local_ref< array<jbyte,1> > const&, local_ref< java::lang::String > const&);
		void setPaint(local_ref< android::graphics::Paint >  const&);
		void draw(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::RectF >  const&);
		void draw(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::Rect >  const&);
		void draw(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::Rect >  const&, local_ref< android::graphics::Paint >  const&);
		jint getDensity();
		jint getWidth();
		jint getHeight();
		jboolean hasAlpha();
		local_ref< android::graphics::Region > getTransparentRegion(local_ref< android::graphics::Rect >  const&);
		static jboolean isNinePatchChunk(local_ref< array<jbyte,1> >  const&);
	}; //class NinePatch

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_NINEPATCH_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_NINEPATCH_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_NINEPATCH_HPP_IMPL

namespace j2cpp {



android::graphics::NinePatch::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::NinePatch::NinePatch(local_ref< android::graphics::Bitmap > const &a0, local_ref< array<jbyte,1> > const &a1, local_ref< java::lang::String > const &a2)
: object<android::graphics::NinePatch>(
	call_new_object<
		android::graphics::NinePatch::J2CPP_CLASS_NAME,
		android::graphics::NinePatch::J2CPP_METHOD_NAME(0),
		android::graphics::NinePatch::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
{
}


void android::graphics::NinePatch::setPaint(local_ref< android::graphics::Paint > const &a0)
{
	return call_method<
		android::graphics::NinePatch::J2CPP_CLASS_NAME,
		android::graphics::NinePatch::J2CPP_METHOD_NAME(1),
		android::graphics::NinePatch::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

void android::graphics::NinePatch::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::RectF > const &a1)
{
	return call_method<
		android::graphics::NinePatch::J2CPP_CLASS_NAME,
		android::graphics::NinePatch::J2CPP_METHOD_NAME(2),
		android::graphics::NinePatch::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::NinePatch::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Rect > const &a1)
{
	return call_method<
		android::graphics::NinePatch::J2CPP_CLASS_NAME,
		android::graphics::NinePatch::J2CPP_METHOD_NAME(3),
		android::graphics::NinePatch::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::NinePatch::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Rect > const &a1, local_ref< android::graphics::Paint > const &a2)
{
	return call_method<
		android::graphics::NinePatch::J2CPP_CLASS_NAME,
		android::graphics::NinePatch::J2CPP_METHOD_NAME(4),
		android::graphics::NinePatch::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1, a2);
}

jint android::graphics::NinePatch::getDensity()
{
	return call_method<
		android::graphics::NinePatch::J2CPP_CLASS_NAME,
		android::graphics::NinePatch::J2CPP_METHOD_NAME(5),
		android::graphics::NinePatch::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

jint android::graphics::NinePatch::getWidth()
{
	return call_method<
		android::graphics::NinePatch::J2CPP_CLASS_NAME,
		android::graphics::NinePatch::J2CPP_METHOD_NAME(6),
		android::graphics::NinePatch::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

jint android::graphics::NinePatch::getHeight()
{
	return call_method<
		android::graphics::NinePatch::J2CPP_CLASS_NAME,
		android::graphics::NinePatch::J2CPP_METHOD_NAME(7),
		android::graphics::NinePatch::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}

jboolean android::graphics::NinePatch::hasAlpha()
{
	return call_method<
		android::graphics::NinePatch::J2CPP_CLASS_NAME,
		android::graphics::NinePatch::J2CPP_METHOD_NAME(8),
		android::graphics::NinePatch::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}

local_ref< android::graphics::Region > android::graphics::NinePatch::getTransparentRegion(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::NinePatch::J2CPP_CLASS_NAME,
		android::graphics::NinePatch::J2CPP_METHOD_NAME(9),
		android::graphics::NinePatch::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::graphics::Region > >
	(get_jobject(), a0);
}

jboolean android::graphics::NinePatch::isNinePatchChunk(local_ref< array<jbyte,1> > const &a0)
{
	return call_static_method<
		android::graphics::NinePatch::J2CPP_CLASS_NAME,
		android::graphics::NinePatch::J2CPP_METHOD_NAME(10),
		android::graphics::NinePatch::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(a0);
}


J2CPP_DEFINE_CLASS(android::graphics::NinePatch,"android/graphics/NinePatch")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,0,"<init>","(Landroid/graphics/Bitmap;[BLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,1,"setPaint","(Landroid/graphics/Paint;)V")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,2,"draw","(Landroid/graphics/Canvas;Landroid/graphics/RectF;)V")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,3,"draw","(Landroid/graphics/Canvas;Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,4,"draw","(Landroid/graphics/Canvas;Landroid/graphics/Rect;Landroid/graphics/Paint;)V")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,5,"getDensity","()I")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,6,"getWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,7,"getHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,8,"hasAlpha","()Z")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,9,"getTransparentRegion","(Landroid/graphics/Rect;)Landroid/graphics/Region;")
J2CPP_DEFINE_METHOD(android::graphics::NinePatch,10,"isNinePatchChunk","([B)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_NINEPATCH_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
