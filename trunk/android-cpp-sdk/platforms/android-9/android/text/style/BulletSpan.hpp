/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.style.BulletSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_BULLETSPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_BULLETSPAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace text { class ParcelableSpan; } } }
namespace j2cpp { namespace android { namespace text { class Layout; } } }
namespace j2cpp { namespace android { namespace text { namespace style { class LeadingMarginSpan; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/os/Parcel.hpp>
#include <android/text/Layout.hpp>
#include <android/text/ParcelableSpan.hpp>
#include <android/text/style/LeadingMarginSpan.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class BulletSpan;
	class BulletSpan
		: public object<BulletSpan>
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
		J2CPP_DECLARE_FIELD(0)

		explicit BulletSpan(jobject jobj)
		: object<BulletSpan>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::text::style::LeadingMarginSpan>() const;
		operator local_ref<android::text::ParcelableSpan>() const;


		BulletSpan();
		BulletSpan(jint);
		BulletSpan(jint, jint);
		BulletSpan(local_ref< android::os::Parcel > const&);
		jint getSpanTypeId();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
		jint getLeadingMargin(jboolean);
		void drawLeadingMargin(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::Paint >  const&, jint, jint, jint, jint, jint, local_ref< java::lang::CharSequence >  const&, jint, jint, jboolean, local_ref< android::text::Layout >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > STANDARD_GAP_WIDTH;
	}; //class BulletSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_BULLETSPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_BULLETSPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_BULLETSPAN_HPP_IMPL

namespace j2cpp {



android::text::style::BulletSpan::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::style::BulletSpan::operator local_ref<android::text::style::LeadingMarginSpan>() const
{
	return local_ref<android::text::style::LeadingMarginSpan>(get_jobject());
}

android::text::style::BulletSpan::operator local_ref<android::text::ParcelableSpan>() const
{
	return local_ref<android::text::ParcelableSpan>(get_jobject());
}


android::text::style::BulletSpan::BulletSpan()
: object<android::text::style::BulletSpan>(
	call_new_object<
		android::text::style::BulletSpan::J2CPP_CLASS_NAME,
		android::text::style::BulletSpan::J2CPP_METHOD_NAME(0),
		android::text::style::BulletSpan::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::text::style::BulletSpan::BulletSpan(jint a0)
: object<android::text::style::BulletSpan>(
	call_new_object<
		android::text::style::BulletSpan::J2CPP_CLASS_NAME,
		android::text::style::BulletSpan::J2CPP_METHOD_NAME(1),
		android::text::style::BulletSpan::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



android::text::style::BulletSpan::BulletSpan(jint a0, jint a1)
: object<android::text::style::BulletSpan>(
	call_new_object<
		android::text::style::BulletSpan::J2CPP_CLASS_NAME,
		android::text::style::BulletSpan::J2CPP_METHOD_NAME(2),
		android::text::style::BulletSpan::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



android::text::style::BulletSpan::BulletSpan(local_ref< android::os::Parcel > const &a0)
: object<android::text::style::BulletSpan>(
	call_new_object<
		android::text::style::BulletSpan::J2CPP_CLASS_NAME,
		android::text::style::BulletSpan::J2CPP_METHOD_NAME(3),
		android::text::style::BulletSpan::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}


jint android::text::style::BulletSpan::getSpanTypeId()
{
	return call_method<
		android::text::style::BulletSpan::J2CPP_CLASS_NAME,
		android::text::style::BulletSpan::J2CPP_METHOD_NAME(4),
		android::text::style::BulletSpan::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

jint android::text::style::BulletSpan::describeContents()
{
	return call_method<
		android::text::style::BulletSpan::J2CPP_CLASS_NAME,
		android::text::style::BulletSpan::J2CPP_METHOD_NAME(5),
		android::text::style::BulletSpan::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

void android::text::style::BulletSpan::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::text::style::BulletSpan::J2CPP_CLASS_NAME,
		android::text::style::BulletSpan::J2CPP_METHOD_NAME(6),
		android::text::style::BulletSpan::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1);
}

jint android::text::style::BulletSpan::getLeadingMargin(jboolean a0)
{
	return call_method<
		android::text::style::BulletSpan::J2CPP_CLASS_NAME,
		android::text::style::BulletSpan::J2CPP_METHOD_NAME(7),
		android::text::style::BulletSpan::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject(), a0);
}

void android::text::style::BulletSpan::drawLeadingMargin(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Paint > const &a1, jint a2, jint a3, jint a4, jint a5, jint a6, local_ref< java::lang::CharSequence > const &a7, jint a8, jint a9, jboolean a10, local_ref< android::text::Layout > const &a11)
{
	return call_method<
		android::text::style::BulletSpan::J2CPP_CLASS_NAME,
		android::text::style::BulletSpan::J2CPP_METHOD_NAME(8),
		android::text::style::BulletSpan::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}


static_field<
	android::text::style::BulletSpan::J2CPP_CLASS_NAME,
	android::text::style::BulletSpan::J2CPP_FIELD_NAME(0),
	android::text::style::BulletSpan::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::text::style::BulletSpan::STANDARD_GAP_WIDTH;


J2CPP_DEFINE_CLASS(android::text::style::BulletSpan,"android/text/style/BulletSpan")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,2,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,3,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,4,"getSpanTypeId","()I")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,5,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,6,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,7,"getLeadingMargin","(Z)I")
J2CPP_DEFINE_METHOD(android::text::style::BulletSpan,8,"drawLeadingMargin","(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V")
J2CPP_DEFINE_FIELD(android::text::style::BulletSpan,0,"STANDARD_GAP_WIDTH","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_BULLETSPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
