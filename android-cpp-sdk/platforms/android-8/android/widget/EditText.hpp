/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.EditText
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_EDITTEXT_HPP_DECL
#define J2CPP_ANDROID_WIDGET_EDITTEXT_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class TextView; } } }
namespace j2cpp { namespace android { namespace widget { namespace TextView_ { class BufferType; } } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }
namespace j2cpp { namespace android { namespace text { namespace TextUtils_ { class TruncateAt; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }


#include <android/content/Context.hpp>
#include <android/text/Editable.hpp>
#include <android/text/TextUtils.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class EditText;
	class EditText
		: public object<EditText>
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

		explicit EditText(jobject jobj)
		: object<EditText>(jobj)
		{
		}

		operator local_ref<android::widget::TextView>() const;


		EditText(local_ref< android::content::Context > const&);
		EditText(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		EditText(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		local_ref< android::text::Editable > getText();
		void setText(local_ref< java::lang::CharSequence >  const&, local_ref< android::widget::TextView_::BufferType >  const&);
		void setSelection(jint, jint);
		void setSelection(jint);
		void selectAll();
		void extendSelection(jint);
		void setEllipsize(local_ref< android::text::TextUtils_::TruncateAt >  const&);
		local_ref< java::lang::CharSequence > getText_1();
	}; //class EditText

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_EDITTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_EDITTEXT_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_EDITTEXT_HPP_IMPL

namespace j2cpp {



android::widget::EditText::operator local_ref<android::widget::TextView>() const
{
	return local_ref<android::widget::TextView>(get_jobject());
}


android::widget::EditText::EditText(local_ref< android::content::Context > const &a0)
: object<android::widget::EditText>(
	call_new_object<
		android::widget::EditText::J2CPP_CLASS_NAME,
		android::widget::EditText::J2CPP_METHOD_NAME(0),
		android::widget::EditText::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::widget::EditText::EditText(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::EditText>(
	call_new_object<
		android::widget::EditText::J2CPP_CLASS_NAME,
		android::widget::EditText::J2CPP_METHOD_NAME(1),
		android::widget::EditText::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



android::widget::EditText::EditText(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::widget::EditText>(
	call_new_object<
		android::widget::EditText::J2CPP_CLASS_NAME,
		android::widget::EditText::J2CPP_METHOD_NAME(2),
		android::widget::EditText::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}




local_ref< android::text::Editable > android::widget::EditText::getText()
{
	return call_method<
		android::widget::EditText::J2CPP_CLASS_NAME,
		android::widget::EditText::J2CPP_METHOD_NAME(5),
		android::widget::EditText::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::text::Editable > >
	(get_jobject());
}

void android::widget::EditText::setText(local_ref< java::lang::CharSequence > const &a0, local_ref< android::widget::TextView_::BufferType > const &a1)
{
	return call_method<
		android::widget::EditText::J2CPP_CLASS_NAME,
		android::widget::EditText::J2CPP_METHOD_NAME(6),
		android::widget::EditText::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1);
}

void android::widget::EditText::setSelection(jint a0, jint a1)
{
	return call_method<
		android::widget::EditText::J2CPP_CLASS_NAME,
		android::widget::EditText::J2CPP_METHOD_NAME(7),
		android::widget::EditText::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}

void android::widget::EditText::setSelection(jint a0)
{
	return call_method<
		android::widget::EditText::J2CPP_CLASS_NAME,
		android::widget::EditText::J2CPP_METHOD_NAME(8),
		android::widget::EditText::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void android::widget::EditText::selectAll()
{
	return call_method<
		android::widget::EditText::J2CPP_CLASS_NAME,
		android::widget::EditText::J2CPP_METHOD_NAME(9),
		android::widget::EditText::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject());
}

void android::widget::EditText::extendSelection(jint a0)
{
	return call_method<
		android::widget::EditText::J2CPP_CLASS_NAME,
		android::widget::EditText::J2CPP_METHOD_NAME(10),
		android::widget::EditText::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

void android::widget::EditText::setEllipsize(local_ref< android::text::TextUtils_::TruncateAt > const &a0)
{
	return call_method<
		android::widget::EditText::J2CPP_CLASS_NAME,
		android::widget::EditText::J2CPP_METHOD_NAME(11),
		android::widget::EditText::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::widget::EditText::getText_1()
{
	return call_method<
		android::widget::EditText::J2CPP_CLASS_NAME,
		android::widget::EditText::J2CPP_METHOD_NAME(12),
		android::widget::EditText::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::CharSequence > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::EditText,"android/widget/EditText")
J2CPP_DEFINE_METHOD(android::widget::EditText,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::EditText,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::EditText,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::EditText,3,"getDefaultEditable","()Z")
J2CPP_DEFINE_METHOD(android::widget::EditText,4,"getDefaultMovementMethod","()Landroid/text/method/MovementMethod;")
J2CPP_DEFINE_METHOD(android::widget::EditText,5,"getText","()Landroid/text/Editable;")
J2CPP_DEFINE_METHOD(android::widget::EditText,6,"setText","(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V")
J2CPP_DEFINE_METHOD(android::widget::EditText,7,"setSelection","(II)V")
J2CPP_DEFINE_METHOD(android::widget::EditText,8,"setSelection","(I)V")
J2CPP_DEFINE_METHOD(android::widget::EditText,9,"selectAll","()V")
J2CPP_DEFINE_METHOD(android::widget::EditText,10,"extendSelection","(I)V")
J2CPP_DEFINE_METHOD(android::widget::EditText,11,"setEllipsize","(Landroid/text/TextUtils$TruncateAt;)V")
J2CPP_DEFINE_METHOD(android::widget::EditText,12,"getText","()Ljava/lang/CharSequence;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_EDITTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION