/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.GradientDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_HPP_DECL


namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class ConstantState; } } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace GradientDrawable_ { class Orientation; } } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/graphics/drawable/GradientDrawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/String.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class GradientDrawable;
	namespace GradientDrawable_ {

		class Orientation;
		class Orientation
			: public object<Orientation>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)
			J2CPP_DECLARE_FIELD(6)
			J2CPP_DECLARE_FIELD(7)
			J2CPP_DECLARE_FIELD(8)

			explicit Orientation(jobject jobj)
			: object<Orientation>(jobj)
			{
			}

			operator local_ref<java::lang::Enum>() const;


			static local_ref< array< local_ref< android::graphics::drawable::GradientDrawable_::Orientation >, 1> > values();
			static local_ref< android::graphics::drawable::GradientDrawable_::Orientation > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::drawable::GradientDrawable_::Orientation > > BL_TR;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::drawable::GradientDrawable_::Orientation > > BOTTOM_TOP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::graphics::drawable::GradientDrawable_::Orientation > > BR_TL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::graphics::drawable::GradientDrawable_::Orientation > > LEFT_RIGHT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::graphics::drawable::GradientDrawable_::Orientation > > RIGHT_LEFT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< android::graphics::drawable::GradientDrawable_::Orientation > > TL_BR;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< android::graphics::drawable::GradientDrawable_::Orientation > > TOP_BOTTOM;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< android::graphics::drawable::GradientDrawable_::Orientation > > TR_BL;
		}; //class Orientation

	} //namespace GradientDrawable_

	class GradientDrawable
		: public object<GradientDrawable>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		typedef GradientDrawable_::Orientation Orientation;

		explicit GradientDrawable(jobject jobj)
		: object<GradientDrawable>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::Drawable>() const;


		GradientDrawable();
		GradientDrawable(local_ref< android::graphics::drawable::GradientDrawable_::Orientation > const&, local_ref< array<jint,1> > const&);
		jboolean getPadding(local_ref< android::graphics::Rect >  const&);
		void setCornerRadii(local_ref< array<jfloat,1> >  const&);
		void setCornerRadius(jfloat);
		void setStroke(jint, jint);
		void setStroke(jint, jint, jfloat, jfloat);
		void setSize(jint, jint);
		void setShape(jint);
		void setGradientType(jint);
		void setGradientCenter(jfloat, jfloat);
		void setGradientRadius(jfloat);
		void setUseLevel(jboolean);
		void draw(local_ref< android::graphics::Canvas >  const&);
		void setColor(jint);
		jint getChangingConfigurations();
		void setAlpha(jint);
		void setDither(jboolean);
		void setColorFilter(local_ref< android::graphics::ColorFilter >  const&);
		jint getOpacity();
		void inflate(local_ref< android::content::res::Resources >  const&, local_ref< org::xmlpull::v1::XmlPullParser >  const&, local_ref< android::util::AttributeSet >  const&);
		jint getIntrinsicWidth();
		jint getIntrinsicHeight();
		local_ref< android::graphics::drawable::Drawable_::ConstantState > getConstantState();
		local_ref< android::graphics::drawable::Drawable > mutate();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > RECTANGLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > OVAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > LINE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > RING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > LINEAR_GRADIENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > RADIAL_GRADIENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > SWEEP_GRADIENT;
	}; //class GradientDrawable

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_HPP_IMPL

namespace j2cpp {




android::graphics::drawable::GradientDrawable_::Orientation::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

local_ref< array< local_ref< android::graphics::drawable::GradientDrawable_::Orientation >, 1> > android::graphics::drawable::GradientDrawable_::Orientation::values()
{
	return call_static_method<
		android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::graphics::drawable::GradientDrawable_::Orientation >, 1> > >
	();
}

local_ref< android::graphics::drawable::GradientDrawable_::Orientation > android::graphics::drawable::GradientDrawable_::Orientation::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::drawable::GradientDrawable_::Orientation > >
	(a0);
}




static_field<
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_NAME(0),
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::drawable::GradientDrawable_::Orientation >
> android::graphics::drawable::GradientDrawable_::Orientation::BL_TR;

static_field<
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_NAME(1),
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::drawable::GradientDrawable_::Orientation >
> android::graphics::drawable::GradientDrawable_::Orientation::BOTTOM_TOP;

static_field<
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_NAME(2),
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::graphics::drawable::GradientDrawable_::Orientation >
> android::graphics::drawable::GradientDrawable_::Orientation::BR_TL;

static_field<
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_NAME(3),
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::graphics::drawable::GradientDrawable_::Orientation >
> android::graphics::drawable::GradientDrawable_::Orientation::LEFT_RIGHT;

static_field<
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_NAME(4),
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::graphics::drawable::GradientDrawable_::Orientation >
> android::graphics::drawable::GradientDrawable_::Orientation::RIGHT_LEFT;

static_field<
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_NAME(5),
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_SIGNATURE(5),
	local_ref< android::graphics::drawable::GradientDrawable_::Orientation >
> android::graphics::drawable::GradientDrawable_::Orientation::TL_BR;

static_field<
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_NAME(6),
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_SIGNATURE(6),
	local_ref< android::graphics::drawable::GradientDrawable_::Orientation >
> android::graphics::drawable::GradientDrawable_::Orientation::TOP_BOTTOM;

static_field<
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_NAME(7),
	android::graphics::drawable::GradientDrawable_::Orientation::J2CPP_FIELD_SIGNATURE(7),
	local_ref< android::graphics::drawable::GradientDrawable_::Orientation >
> android::graphics::drawable::GradientDrawable_::Orientation::TR_BL;


J2CPP_DEFINE_CLASS(android::graphics::drawable::GradientDrawable_::Orientation,"android/graphics/drawable/GradientDrawable$Orientation")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable_::Orientation,0,"values","()[android.graphics.drawable.GradientDrawable.Orientation")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable_::Orientation,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/drawable/GradientDrawable$Orientation;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable_::Orientation,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable_::Orientation,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable_::Orientation,0,"BL_TR","Landroid/graphics/drawable/GradientDrawable$Orientation;")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable_::Orientation,1,"BOTTOM_TOP","Landroid/graphics/drawable/GradientDrawable$Orientation;")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable_::Orientation,2,"BR_TL","Landroid/graphics/drawable/GradientDrawable$Orientation;")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable_::Orientation,3,"LEFT_RIGHT","Landroid/graphics/drawable/GradientDrawable$Orientation;")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable_::Orientation,4,"RIGHT_LEFT","Landroid/graphics/drawable/GradientDrawable$Orientation;")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable_::Orientation,5,"TL_BR","Landroid/graphics/drawable/GradientDrawable$Orientation;")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable_::Orientation,6,"TOP_BOTTOM","Landroid/graphics/drawable/GradientDrawable$Orientation;")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable_::Orientation,7,"TR_BL","Landroid/graphics/drawable/GradientDrawable$Orientation;")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable_::Orientation,8,"$VALUES","[android.graphics.drawable.GradientDrawable.Orientation")



android::graphics::drawable::GradientDrawable::operator local_ref<android::graphics::drawable::Drawable>() const
{
	return local_ref<android::graphics::drawable::Drawable>(get_jobject());
}


android::graphics::drawable::GradientDrawable::GradientDrawable()
: object<android::graphics::drawable::GradientDrawable>(
	call_new_object<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::graphics::drawable::GradientDrawable::GradientDrawable(local_ref< android::graphics::drawable::GradientDrawable_::Orientation > const &a0, local_ref< array<jint,1> > const &a1)
: object<android::graphics::drawable::GradientDrawable>(
	call_new_object<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}


jboolean android::graphics::drawable::GradientDrawable::getPadding(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(2),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}

void android::graphics::drawable::GradientDrawable::setCornerRadii(local_ref< array<jfloat,1> > const &a0)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(3),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::GradientDrawable::setCornerRadius(jfloat a0)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(4),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::GradientDrawable::setStroke(jint a0, jint a1)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(5),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::drawable::GradientDrawable::setStroke(jint a0, jint a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(6),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::drawable::GradientDrawable::setSize(jint a0, jint a1)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(7),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::drawable::GradientDrawable::setShape(jint a0)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(8),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::GradientDrawable::setGradientType(jint a0)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(9),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::GradientDrawable::setGradientCenter(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(10),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::drawable::GradientDrawable::setGradientRadius(jfloat a0)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(11),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::GradientDrawable::setUseLevel(jboolean a0)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(12),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::GradientDrawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(13),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::GradientDrawable::setColor(jint a0)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(14),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0);
}

jint android::graphics::drawable::GradientDrawable::getChangingConfigurations()
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(15),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(15), 
		jint >
	(get_jobject());
}

void android::graphics::drawable::GradientDrawable::setAlpha(jint a0)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(16),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::GradientDrawable::setDither(jboolean a0)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(17),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

void android::graphics::drawable::GradientDrawable::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(18),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0);
}

jint android::graphics::drawable::GradientDrawable::getOpacity()
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(19),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(19), 
		jint >
	(get_jobject());
}



void android::graphics::drawable::GradientDrawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(22),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0, a1, a2);
}

jint android::graphics::drawable::GradientDrawable::getIntrinsicWidth()
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(23),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(23), 
		jint >
	(get_jobject());
}

jint android::graphics::drawable::GradientDrawable::getIntrinsicHeight()
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(24),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(24), 
		jint >
	(get_jobject());
}

local_ref< android::graphics::drawable::Drawable_::ConstantState > android::graphics::drawable::GradientDrawable::getConstantState()
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(25),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< android::graphics::drawable::Drawable_::ConstantState > >
	(get_jobject());
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::GradientDrawable::mutate()
{
	return call_method<
		android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_NAME(26),
		android::graphics::drawable::GradientDrawable::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< android::graphics::drawable::Drawable > >
	(get_jobject());
}


static_field<
	android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_NAME(0),
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::graphics::drawable::GradientDrawable::RECTANGLE;

static_field<
	android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_NAME(1),
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::graphics::drawable::GradientDrawable::OVAL;

static_field<
	android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_NAME(2),
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::graphics::drawable::GradientDrawable::LINE;

static_field<
	android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_NAME(3),
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::graphics::drawable::GradientDrawable::RING;

static_field<
	android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_NAME(4),
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::graphics::drawable::GradientDrawable::LINEAR_GRADIENT;

static_field<
	android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_NAME(5),
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::graphics::drawable::GradientDrawable::RADIAL_GRADIENT;

static_field<
	android::graphics::drawable::GradientDrawable::J2CPP_CLASS_NAME,
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_NAME(6),
	android::graphics::drawable::GradientDrawable::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::graphics::drawable::GradientDrawable::SWEEP_GRADIENT;


J2CPP_DEFINE_CLASS(android::graphics::drawable::GradientDrawable,"android/graphics/drawable/GradientDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,1,"<init>","(Landroid/graphics/drawable/GradientDrawable$Orientation;[I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,2,"getPadding","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,3,"setCornerRadii","([F)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,4,"setCornerRadius","(F)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,5,"setStroke","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,6,"setStroke","(IIFF)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,7,"setSize","(II)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,8,"setShape","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,9,"setGradientType","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,10,"setGradientCenter","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,11,"setGradientRadius","(F)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,12,"setUseLevel","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,13,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,14,"setColor","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,15,"getChangingConfigurations","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,16,"setAlpha","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,17,"setDither","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,18,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,19,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,20,"onBoundsChange","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,21,"onLevelChange","(I)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,22,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,23,"getIntrinsicWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,24,"getIntrinsicHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,25,"getConstantState","()Landroid/graphics/drawable/Drawable$ConstantState;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::GradientDrawable,26,"mutate","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable,0,"RECTANGLE","I")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable,1,"OVAL","I")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable,2,"LINE","I")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable,3,"RING","I")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable,4,"LINEAR_GRADIENT","I")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable,5,"RADIAL_GRADIENT","I")
J2CPP_DEFINE_FIELD(android::graphics::drawable::GradientDrawable,6,"SWEEP_GRADIENT","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_GRADIENTDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
