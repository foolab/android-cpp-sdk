/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.ScaleDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class ConstantState; } } } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <java/lang/Runnable.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class ScaleDrawable;
	class ScaleDrawable
		: public object<ScaleDrawable>
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
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)

		explicit ScaleDrawable(jobject jobj)
		: object<ScaleDrawable>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::Drawable>() const;
		operator local_ref<android::graphics::drawable::Drawable_::Callback>() const;


		ScaleDrawable(local_ref< android::graphics::drawable::Drawable > const&, jint, jfloat, jfloat);
		local_ref< android::graphics::drawable::Drawable > getDrawable();
		void inflate(local_ref< android::content::res::Resources >  const&, local_ref< org::xmlpull::v1::XmlPullParser >  const&, local_ref< android::util::AttributeSet >  const&);
		void invalidateDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
		void scheduleDrawable(local_ref< android::graphics::drawable::Drawable >  const&, local_ref< java::lang::Runnable >  const&, jlong);
		void unscheduleDrawable(local_ref< android::graphics::drawable::Drawable >  const&, local_ref< java::lang::Runnable >  const&);
		void draw(local_ref< android::graphics::Canvas >  const&);
		jint getChangingConfigurations();
		jboolean getPadding(local_ref< android::graphics::Rect >  const&);
		jboolean setVisible(jboolean, jboolean);
		void setAlpha(jint);
		void setColorFilter(local_ref< android::graphics::ColorFilter >  const&);
		jint getOpacity();
		jboolean isStateful();
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		local_ref< android::graphics::drawable::Drawable_::ConstantState > getConstantState();
		local_ref< android::graphics::drawable::Drawable > mutate();
	}; //class ScaleDrawable

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::ScaleDrawable::operator local_ref<android::graphics::drawable::Drawable>() const
{
	return local_ref<android::graphics::drawable::Drawable>(get_jobject());
}

android::graphics::drawable::ScaleDrawable::operator local_ref<android::graphics::drawable::Drawable_::Callback>() const
{
	return local_ref<android::graphics::drawable::Drawable_::Callback>(get_jobject());
}


android::graphics::drawable::ScaleDrawable::ScaleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, jint a1, jfloat a2, jfloat a3)
: object<android::graphics::drawable::ScaleDrawable>(
	call_new_object<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3)
)
{
}


local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::ScaleDrawable::getDrawable()
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject());
}

void android::graphics::drawable::ScaleDrawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::graphics::drawable::ScaleDrawable::invalidateDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::ScaleDrawable::scheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1, jlong a2)
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::graphics::drawable::ScaleDrawable::unscheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1)
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::drawable::ScaleDrawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(6),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

jint android::graphics::drawable::ScaleDrawable::getChangingConfigurations()
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(7),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}

jboolean android::graphics::drawable::ScaleDrawable::getPadding(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(8),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::graphics::drawable::ScaleDrawable::setVisible(jboolean a0, jboolean a1)
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(9),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject(), a0, a1);
}

void android::graphics::drawable::ScaleDrawable::setAlpha(jint a0)
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(10),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::ScaleDrawable::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(11),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

jint android::graphics::drawable::ScaleDrawable::getOpacity()
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(12),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject());
}

jboolean android::graphics::drawable::ScaleDrawable::isStateful()
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(13),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(13), 
		jboolean >
	(get_jobject());
}




jint android::graphics::drawable::ScaleDrawable::getIntrinsicWidth()
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(17),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(17), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::ScaleDrawable::getIntrinsicHeight()
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(18),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(18), 
		jint >
	(get_jobject());
}

local_ref< android::graphics::drawable::Drawable_::ConstantState > android::graphics::drawable::ScaleDrawable::getConstantState()
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(19),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< android::graphics::drawable::Drawable_::ConstantState > >
	(get_jobject());
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::ScaleDrawable::mutate()
{
	return call_method<
		android::graphics::drawable::ScaleDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_NAME(20),
		android::graphics::drawable::ScaleDrawable::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::ScaleDrawable,"android/graphics/drawable/ScaleDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,0,"<init>","(Landroid/graphics/drawable/Drawable;IFF)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,1,"getDrawable","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,2,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,3,"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,4,"scheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,5,"unscheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,6,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,7,"getChangingConfigurations","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,8,"getPadding","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,9,"setVisible","(ZZ)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,10,"setAlpha","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,11,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,12,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,13,"isStateful","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,14,"onStateChange","([I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,15,"onLevelChange","(I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,16,"onBoundsChange","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,17,"getIntrinsicWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,18,"getIntrinsicHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,19,"getConstantState","()Landroid/graphics/drawable/Drawable$ConstantState;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ScaleDrawable,20,"mutate","()Landroid/graphics/drawable/Drawable;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SCALEDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
