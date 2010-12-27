/*================================================================================
  code generated by: java2cpp
  class: android.view.inputmethod.ExtractedText
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view { namespace inputmethod {

	class ExtractedText;
	class ExtractedText
		: public cpp_object<ExtractedText>
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
		J2CPP_DECLARE_FIELD(9)

		explicit ExtractedText(jobject jobj)
		: cpp_object<ExtractedText>(jobj)
, text(jobj)
, startOffset(jobj)
, partialStartOffset(jobj)
, partialEndOffset(jobj)
, selectionStart(jobj)
, selectionEnd(jobj)
, flags(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		ExtractedText();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		cpp_int describeContents();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::CharSequence > > text;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > startOffset;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > partialStartOffset;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > partialEndOffset;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > selectionStart;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > selectionEnd;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > FLAG_SINGLE_LINE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > FLAG_SELECTING;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > flags;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ExtractedText

} //namespace inputmethod
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT_HPP_IMPL

namespace j2cpp {



android::view::inputmethod::ExtractedText::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

android::view::inputmethod::ExtractedText::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jtype());
}


android::view::inputmethod::ExtractedText::ExtractedText()
: cpp_object<android::view::inputmethod::ExtractedText>(
	environment::get().get_jenv()->NewObject(
		get_class<android::view::inputmethod::ExtractedText::J2CPP_CLASS_NAME>(),
		get_method_id<android::view::inputmethod::ExtractedText::J2CPP_CLASS_NAME, android::view::inputmethod::ExtractedText::J2CPP_METHOD_NAME(0), android::view::inputmethod::ExtractedText::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
, text(get_jtype())
, startOffset(get_jtype())
, partialStartOffset(get_jtype())
, partialEndOffset(get_jtype())
, selectionStart(get_jtype())
, selectionEnd(get_jtype())
, flags(get_jtype())
{
}


void android::view::inputmethod::ExtractedText::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::view::inputmethod::ExtractedText::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}



static_field<
	android::view::inputmethod::ExtractedText::J2CPP_CLASS_NAME,
	android::view::inputmethod::ExtractedText::J2CPP_FIELD_NAME(6),
	android::view::inputmethod::ExtractedText::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::view::inputmethod::ExtractedText::FLAG_SINGLE_LINE;

static_field<
	android::view::inputmethod::ExtractedText::J2CPP_CLASS_NAME,
	android::view::inputmethod::ExtractedText::J2CPP_FIELD_NAME(7),
	android::view::inputmethod::ExtractedText::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::view::inputmethod::ExtractedText::FLAG_SELECTING;

static_field<
	android::view::inputmethod::ExtractedText::J2CPP_CLASS_NAME,
	android::view::inputmethod::ExtractedText::J2CPP_FIELD_NAME(9),
	android::view::inputmethod::ExtractedText::J2CPP_FIELD_SIGNATURE(9),
	local_ref< android::os::Parcelable_::Creator >
> android::view::inputmethod::ExtractedText::CREATOR;


J2CPP_DEFINE_CLASS(android::view::inputmethod::ExtractedText,"android/view/inputmethod/ExtractedText")
J2CPP_DEFINE_METHOD(android::view::inputmethod::ExtractedText,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::ExtractedText,1,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::ExtractedText,2,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::view::inputmethod::ExtractedText,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,0,"text","Ljava/lang/CharSequence;")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,1,"startOffset","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,2,"partialStartOffset","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,3,"partialEndOffset","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,4,"selectionStart","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,5,"selectionEnd","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,6,"FLAG_SINGLE_LINE","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,7,"FLAG_SELECTING","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,8,"flags","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::ExtractedText,9,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_EXTRACTEDTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
