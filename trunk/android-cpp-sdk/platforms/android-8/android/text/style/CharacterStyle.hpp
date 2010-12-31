/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.style.CharacterStyle
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_CHARACTERSTYLE_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_CHARACTERSTYLE_HPP_DECL


namespace j2cpp { namespace android { namespace text { class TextPaint; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/text/TextPaint.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class CharacterStyle;
	class CharacterStyle
		: public object<CharacterStyle>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit CharacterStyle(jobject jobj)
		: object<CharacterStyle>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CharacterStyle();
		void updateDrawState(local_ref< android::text::TextPaint >  const&);
		static local_ref< android::text::style::CharacterStyle > wrap(local_ref< android::text::style::CharacterStyle >  const&);
		local_ref< android::text::style::CharacterStyle > getUnderlying();
	}; //class CharacterStyle

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_CHARACTERSTYLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_CHARACTERSTYLE_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_CHARACTERSTYLE_HPP_IMPL

namespace j2cpp {



android::text::style::CharacterStyle::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::text::style::CharacterStyle::CharacterStyle()
: object<android::text::style::CharacterStyle>(
	call_new_object<
		android::text::style::CharacterStyle::J2CPP_CLASS_NAME,
		android::text::style::CharacterStyle::J2CPP_METHOD_NAME(0),
		android::text::style::CharacterStyle::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void android::text::style::CharacterStyle::updateDrawState(local_ref< android::text::TextPaint > const &a0)
{
	return call_method<
		android::text::style::CharacterStyle::J2CPP_CLASS_NAME,
		android::text::style::CharacterStyle::J2CPP_METHOD_NAME(1),
		android::text::style::CharacterStyle::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

local_ref< android::text::style::CharacterStyle > android::text::style::CharacterStyle::wrap(local_ref< android::text::style::CharacterStyle > const &a0)
{
	return call_static_method<
		android::text::style::CharacterStyle::J2CPP_CLASS_NAME,
		android::text::style::CharacterStyle::J2CPP_METHOD_NAME(2),
		android::text::style::CharacterStyle::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::text::style::CharacterStyle > >
	(a0);
}

local_ref< android::text::style::CharacterStyle > android::text::style::CharacterStyle::getUnderlying()
{
	return call_method<
		android::text::style::CharacterStyle::J2CPP_CLASS_NAME,
		android::text::style::CharacterStyle::J2CPP_METHOD_NAME(3),
		android::text::style::CharacterStyle::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::text::style::CharacterStyle > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::text::style::CharacterStyle,"android/text/style/CharacterStyle")
J2CPP_DEFINE_METHOD(android::text::style::CharacterStyle,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::style::CharacterStyle,1,"updateDrawState","(Landroid/text/TextPaint;)V")
J2CPP_DEFINE_METHOD(android::text::style::CharacterStyle,2,"wrap","(Landroid/text/style/CharacterStyle;)Landroid/text/style/CharacterStyle;")
J2CPP_DEFINE_METHOD(android::text::style::CharacterStyle,3,"getUnderlying","()Landroid/text/style/CharacterStyle;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_CHARACTERSTYLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
