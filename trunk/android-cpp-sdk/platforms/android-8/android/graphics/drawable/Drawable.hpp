/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.Drawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_HPP_DECL


namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace util { class TypedValue; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { class Region; } } }
namespace j2cpp { namespace android { namespace graphics { namespace PorterDuff_ { class Mode; } } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class ConstantState; } } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class Callback; } } } } }
namespace j2cpp { namespace android { namespace graphics { namespace BitmapFactory_ { class Options; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/BitmapFactory.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/PorterDuff.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/Region.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/util/TypedValue.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/String.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class Drawable;
	namespace Drawable_ {

		class ConstantState;
		class ConstantState
			: public object<ConstantState>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)

			explicit ConstantState(jobject jobj)
			: object<ConstantState>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			ConstantState();
			local_ref< android::graphics::drawable::Drawable > newDrawable();
			local_ref< android::graphics::drawable::Drawable > newDrawable(local_ref< android::content::res::Resources >  const&);
			jint getChangingConfigurations();
		}; //class ConstantState

		class Callback;
		class Callback
			: public object<Callback>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)

			explicit Callback(jobject jobj)
			: object<Callback>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void invalidateDrawable(local_ref< android::graphics::drawable::Drawable >  const&);
			void scheduleDrawable(local_ref< android::graphics::drawable::Drawable >  const&, local_ref< java::lang::Runnable >  const&, jlong);
			void unscheduleDrawable(local_ref< android::graphics::drawable::Drawable >  const&, local_ref< java::lang::Runnable >  const&);
		}; //class Callback

	} //namespace Drawable_

	class Drawable
		: public object<Drawable>
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
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)

		typedef Drawable_::ConstantState ConstantState;
		typedef Drawable_::Callback Callback;

		explicit Drawable(jobject jobj)
		: object<Drawable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Drawable();
		void draw(local_ref< android::graphics::Canvas >  const&);
		void setBounds(jint, jint, jint, jint);
		void setBounds(local_ref< android::graphics::Rect >  const&);
		void copyBounds(local_ref< android::graphics::Rect >  const&);
		local_ref< android::graphics::Rect > copyBounds();
		local_ref< android::graphics::Rect > getBounds();
		void setChangingConfigurations(jint);
		jint getChangingConfigurations();
		void setDither(jboolean);
		void setFilterBitmap(jboolean);
		void setCallback(local_ref< android::graphics::drawable::Drawable_::Callback >  const&);
		void invalidateSelf();
		void scheduleSelf(local_ref< java::lang::Runnable >  const&, jlong);
		void unscheduleSelf(local_ref< java::lang::Runnable >  const&);
		void setAlpha(jint);
		void setColorFilter(local_ref< android::graphics::ColorFilter >  const&);
		void setColorFilter(jint, local_ref< android::graphics::PorterDuff_::Mode >  const&);
		void clearColorFilter();
		jboolean isStateful();
		jboolean setState(local_ref< array<jint,1> >  const&);
		local_ref< array<jint,1> > getState();
		local_ref< android::graphics::drawable::Drawable > getCurrent();
		jboolean setLevel(jint);
		jint getLevel();
		jboolean setVisible(jboolean, jboolean);
		jboolean isVisible();
		jint getOpacity();
		static jint resolveOpacity(jint, jint);
		local_ref< android::graphics::Region > getTransparentRegion();
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		jint getMinimumWidth();
		jint getMinimumHeight();
		jboolean getPadding(local_ref< android::graphics::Rect >  const&);
		local_ref< android::graphics::drawable::Drawable > mutate();
		static local_ref< android::graphics::drawable::Drawable > createFromStream(local_ref< java::io::InputStream >  const&, local_ref< java::lang::String >  const&);
		static local_ref< android::graphics::drawable::Drawable > createFromResourceStream(local_ref< android::content::res::Resources >  const&, local_ref< android::util::TypedValue >  const&, local_ref< java::io::InputStream >  const&, local_ref< java::lang::String >  const&);
		static local_ref< android::graphics::drawable::Drawable > createFromResourceStream(local_ref< android::content::res::Resources >  const&, local_ref< android::util::TypedValue >  const&, local_ref< java::io::InputStream >  const&, local_ref< java::lang::String >  const&, local_ref< android::graphics::BitmapFactory_::Options >  const&);
		static local_ref< android::graphics::drawable::Drawable > createFromXml(local_ref< android::content::res::Resources >  const&, local_ref< org::xmlpull::v1::XmlPullParser >  const&);
		static local_ref< android::graphics::drawable::Drawable > createFromXmlInner(local_ref< android::content::res::Resources >  const&, local_ref< org::xmlpull::v1::XmlPullParser >  const&, local_ref< android::util::AttributeSet >  const&);
		static local_ref< android::graphics::drawable::Drawable > createFromPath(local_ref< java::lang::String >  const&);
		void inflate(local_ref< android::content::res::Resources >  const&, local_ref< org::xmlpull::v1::XmlPullParser >  const&, local_ref< android::util::AttributeSet >  const&);
		local_ref< android::graphics::drawable::Drawable_::ConstantState > getConstantState();
	}; //class Drawable

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_HPP_IMPL

namespace j2cpp {




android::graphics::drawable::Drawable_::ConstantState::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::drawable::Drawable_::ConstantState::ConstantState()
: object<android::graphics::drawable::Drawable_::ConstantState>(
	call_new_object<
		android::graphics::drawable::Drawable_::ConstantState::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable_::ConstantState::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::Drawable_::ConstantState::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::Drawable_::ConstantState::newDrawable()
{
	return call_method<
		android::graphics::drawable::Drawable_::ConstantState::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable_::ConstantState::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::Drawable_::ConstantState::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject());
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::Drawable_::ConstantState::newDrawable(local_ref< android::content::res::Resources > const &a0)
{
	return call_method<
		android::graphics::drawable::Drawable_::ConstantState::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable_::ConstantState::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::Drawable_::ConstantState::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject(), a0);
}

jint android::graphics::drawable::Drawable_::ConstantState::getChangingConfigurations()
{
	return call_method<
		android::graphics::drawable::Drawable_::ConstantState::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable_::ConstantState::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::Drawable_::ConstantState::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::Drawable_::ConstantState,"android/graphics/drawable/Drawable$ConstantState")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable_::ConstantState,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable_::ConstantState,1,"newDrawable","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable_::ConstantState,2,"newDrawable","(Landroid/content/res/Resources;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable_::ConstantState,3,"getChangingConfigurations","()I")


android::graphics::drawable::Drawable_::Callback::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::graphics::drawable::Drawable_::Callback::invalidateDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::graphics::drawable::Drawable_::Callback::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable_::Callback::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::Drawable_::Callback::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::Drawable_::Callback::scheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1, jlong a2)
{
	return call_method<
		android::graphics::drawable::Drawable_::Callback::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable_::Callback::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::Drawable_::Callback::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::graphics::drawable::Drawable_::Callback::unscheduleDrawable(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::Runnable > const &a1)
{
	return call_method<
		android::graphics::drawable::Drawable_::Callback::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable_::Callback::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::Drawable_::Callback::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::Drawable_::Callback,"android/graphics/drawable/Drawable$Callback")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable_::Callback,0,"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable_::Callback,1,"scheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable_::Callback,2,"unscheduleDrawable","(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V")



android::graphics::drawable::Drawable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::drawable::Drawable::Drawable()
: object<android::graphics::drawable::Drawable>(
	call_new_object<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void android::graphics::drawable::Drawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::Drawable::setBounds(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::drawable::Drawable::setBounds(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::Drawable::copyBounds(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

local_ref< android::graphics::Rect > android::graphics::drawable::Drawable::copyBounds()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::graphics::Rect > >
	(get_jobject());
}

local_ref< android::graphics::Rect > android::graphics::drawable::Drawable::getBounds()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(6),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< android::graphics::Rect > >
	(get_jobject());
}

void android::graphics::drawable::Drawable::setChangingConfigurations(jint a0)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(7),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

jint android::graphics::drawable::Drawable::getChangingConfigurations()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(8),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject());
}

void android::graphics::drawable::Drawable::setDither(jboolean a0)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(9),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::Drawable::setFilterBitmap(jboolean a0)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(10),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::Drawable::setCallback(local_ref< android::graphics::drawable::Drawable_::Callback > const &a0)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(11),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::Drawable::invalidateSelf()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(12),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject());
}

void android::graphics::drawable::Drawable::scheduleSelf(local_ref< java::lang::Runnable > const &a0, jlong a1)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(13),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::drawable::Drawable::unscheduleSelf(local_ref< java::lang::Runnable > const &a0)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(14),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::Drawable::setAlpha(jint a0)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(15),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::Drawable::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(16),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::Drawable::setColorFilter(jint a0, local_ref< android::graphics::PorterDuff_::Mode > const &a1)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(17),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::drawable::Drawable::clearColorFilter()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(18),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject());
}

jboolean android::graphics::drawable::Drawable::isStateful()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(19),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(19), 
		jboolean >
	(get_jobject());
}

jboolean android::graphics::drawable::Drawable::setState(local_ref< array<jint,1> > const &a0)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(20),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< array<jint,1> > android::graphics::drawable::Drawable::getState()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(21),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< array<jint,1> > >
	(get_jobject());
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::Drawable::getCurrent()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(22),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject());
}

jboolean android::graphics::drawable::Drawable::setLevel(jint a0)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(23),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(23), 
		jboolean >
	(get_jobject(), a0);
}

jint android::graphics::drawable::Drawable::getLevel()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(24),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(24), 
		jint >
	(get_jobject());
}

jboolean android::graphics::drawable::Drawable::setVisible(jboolean a0, jboolean a1)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(25),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(25), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::drawable::Drawable::isVisible()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(26),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(26), 
		jboolean >
	(get_jobject());
}

jint android::graphics::drawable::Drawable::getOpacity()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(27),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(27), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::Drawable::resolveOpacity(jint a0, jint a1)
{
	return call_static_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(28),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(28), 
		jint >
	(a0, a1);
}

local_ref< android::graphics::Region > android::graphics::drawable::Drawable::getTransparentRegion()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(29),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< android::graphics::Region > >
	(get_jobject());
}




jint android::graphics::drawable::Drawable::getIntrinsicWidth()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(33),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(33), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::Drawable::getIntrinsicHeight()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(34),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(34), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::Drawable::getMinimumWidth()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(35),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(35), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::Drawable::getMinimumHeight()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(36),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(36), 
		jint >
	(get_jobject());
}

jboolean android::graphics::drawable::Drawable::getPadding(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(37),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(37), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::Drawable::mutate()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(38),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(38), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject());
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::Drawable::createFromStream(local_ref< java::io::InputStream > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(39),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(39), 
		local_ref< android::graphics::drawable::Drawable > >
	(a0, a1);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::Drawable::createFromResourceStream(local_ref< android::content::res::Resources > const &a0, local_ref< android::util::TypedValue > const &a1, local_ref< java::io::InputStream > const &a2, local_ref< java::lang::String > const &a3)
{
	return call_static_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(40),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(40), 
		local_ref< android::graphics::drawable::Drawable > >
	(a0, a1, a2, a3);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::Drawable::createFromResourceStream(local_ref< android::content::res::Resources > const &a0, local_ref< android::util::TypedValue > const &a1, local_ref< java::io::InputStream > const &a2, local_ref< java::lang::String > const &a3, local_ref< android::graphics::BitmapFactory_::Options > const &a4)
{
	return call_static_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(41),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(41), 
		local_ref< android::graphics::drawable::Drawable > >
	(a0, a1, a2, a3, a4);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::Drawable::createFromXml(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1)
{
	return call_static_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(42),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(42), 
		local_ref< android::graphics::drawable::Drawable > >
	(a0, a1);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::Drawable::createFromXmlInner(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return call_static_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(43),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(43), 
		local_ref< android::graphics::drawable::Drawable > >
	(a0, a1, a2);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::Drawable::createFromPath(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(44),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(44), 
		local_ref< android::graphics::drawable::Drawable > >
	(a0);
}

void android::graphics::drawable::Drawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(45),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(45), 
		void >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::graphics::drawable::Drawable_::ConstantState > android::graphics::drawable::Drawable::getConstantState()
{
	return call_method<
		android::graphics::drawable::Drawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::Drawable::J2CPP_METHOD_NAME(46),
		android::graphics::drawable::Drawable::J2CPP_METHOD_SIGNATURE(46), 
		local_ref< android::graphics::drawable::Drawable_::ConstantState > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::Drawable,"android/graphics/drawable/Drawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,1,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,2,"setBounds","(IIII)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,3,"setBounds","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,4,"copyBounds","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,5,"copyBounds","()Landroid/graphics/Rect;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,6,"getBounds","()Landroid/graphics/Rect;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,7,"setChangingConfigurations","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,8,"getChangingConfigurations","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,9,"setDither","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,10,"setFilterBitmap","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,11,"setCallback","(Landroid/graphics/drawable/Drawable$Callback;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,12,"invalidateSelf","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,13,"scheduleSelf","(Ljava/lang/Runnable;J)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,14,"unscheduleSelf","(Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,15,"setAlpha","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,16,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,17,"setColorFilter","(ILandroid/graphics/PorterDuff$Mode;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,18,"clearColorFilter","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,19,"isStateful","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,20,"setState","([I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,21,"getState","()[I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,22,"getCurrent","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,23,"setLevel","(I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,24,"getLevel","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,25,"setVisible","(ZZ)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,26,"isVisible","()Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,27,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,28,"resolveOpacity","(II)I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,29,"getTransparentRegion","()Landroid/graphics/Region;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,30,"onStateChange","([I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,31,"onLevelChange","(I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,32,"onBoundsChange","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,33,"getIntrinsicWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,34,"getIntrinsicHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,35,"getMinimumWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,36,"getMinimumHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,37,"getPadding","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,38,"mutate","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,39,"createFromStream","(Ljava/io/InputStream;Ljava/lang/String;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,40,"createFromResourceStream","(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Ljava/lang/String;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,41,"createFromResourceStream","(Landroid/content/res/Resources;Landroid/util/TypedValue;Ljava/io/InputStream;Ljava/lang/String;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,42,"createFromXml","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,43,"createFromXmlInner","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,44,"createFromPath","(Ljava/lang/String;)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,45,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::Drawable,46,"getConstantState","()Landroid/graphics/drawable/Drawable$ConstantState;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
