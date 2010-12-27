/*================================================================================
  code generated by: java2cpp
  class: android.text.SpannableStringInternal
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SPANNABLESTRINGINTERNAL_HPP_DECL
#define J2CPP_ANDROID_TEXT_SPANNABLESTRINGINTERNAL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text {

	class SpannableStringInternal;
	class SpannableStringInternal
		: public cpp_object<SpannableStringInternal>
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

		explicit SpannableStringInternal(jobject jobj)
		: cpp_object<SpannableStringInternal>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		cpp_int length();
		cpp_char charAt(cpp_int const&);
		local_ref< java::lang::String > toString();
		void getChars(cpp_int const&, cpp_int const&, local_ref< cpp_char_array<1> > const&, cpp_int const&);
		cpp_int getSpanStart(local_ref< java::lang::Object > const&);
		cpp_int getSpanEnd(local_ref< java::lang::Object > const&);
		cpp_int getSpanFlags(local_ref< java::lang::Object > const&);
		local_ref< cpp_object_array<java::lang::Object, 1> > getSpans(cpp_int const&, cpp_int const&, local_ref< java::lang::Class > const&);
		cpp_int nextSpanTransition(cpp_int const&, cpp_int const&, local_ref< java::lang::Class > const&);
	}; //class SpannableStringInternal

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SPANNABLESTRINGINTERNAL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_SPANNABLESTRINGINTERNAL_HPP_IMPL
#define J2CPP_ANDROID_TEXT_SPANNABLESTRINGINTERNAL_HPP_IMPL

namespace j2cpp {



android::text::SpannableStringInternal::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


cpp_int android::text::SpannableStringInternal::length()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_char android::text::SpannableStringInternal::charAt(cpp_int const &a0)
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::text::SpannableStringInternal::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::text::SpannableStringInternal::getChars(cpp_int const &a0, cpp_int const &a1, local_ref< cpp_char_array<1> > const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_int android::text::SpannableStringInternal::getSpanStart(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::SpannableStringInternal::getSpanEnd(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::SpannableStringInternal::getSpanFlags(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > android::text::SpannableStringInternal::getSpans(cpp_int const &a0, cpp_int const &a1, local_ref< java::lang::Class > const &a2)
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::text::SpannableStringInternal::nextSpanTransition(cpp_int const &a0, cpp_int const &a1, local_ref< java::lang::Class > const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::SpannableStringInternal,"android/text/SpannableStringInternal")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,1,"length","()I")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,2,"charAt","(I)C")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,4,"getChars","(II[CI)V")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,5,"getSpanStart","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,6,"getSpanEnd","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,7,"getSpanFlags","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,8,"getSpans","(IILjava/lang/Class;)[java.lang.Object")
J2CPP_DEFINE_METHOD(android::text::SpannableStringInternal,9,"nextSpanTransition","(IILjava/lang/Class;)I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_SPANNABLESTRINGINTERNAL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
