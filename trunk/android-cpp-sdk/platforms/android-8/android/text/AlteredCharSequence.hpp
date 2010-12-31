/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.AlteredCharSequence
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_ALTEREDCHARSEQUENCE_HPP_DECL
#define J2CPP_ANDROID_TEXT_ALTEREDCHARSEQUENCE_HPP_DECL


namespace j2cpp { namespace android { namespace text { class GetChars; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/text/GetChars.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text {

	class AlteredCharSequence;
	class AlteredCharSequence
		: public object<AlteredCharSequence>
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

		explicit AlteredCharSequence(jobject jobj)
		: object<AlteredCharSequence>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::CharSequence>() const;
		operator local_ref<android::text::GetChars>() const;


		static local_ref< android::text::AlteredCharSequence > make(local_ref< java::lang::CharSequence >  const&, local_ref< array<jchar,1> >  const&, jint, jint);
		jchar charAt(jint);
		jint length();
		local_ref< java::lang::CharSequence > subSequence(jint, jint);
		void getChars(jint, jint, local_ref< array<jchar,1> >  const&, jint);
		local_ref< java::lang::String > toString();
	}; //class AlteredCharSequence

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_ALTEREDCHARSEQUENCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_ALTEREDCHARSEQUENCE_HPP_IMPL
#define J2CPP_ANDROID_TEXT_ALTEREDCHARSEQUENCE_HPP_IMPL

namespace j2cpp {



android::text::AlteredCharSequence::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::text::AlteredCharSequence::operator local_ref<java::lang::CharSequence>() const
{
	return local_ref<java::lang::CharSequence>(get_jobject());
}

android::text::AlteredCharSequence::operator local_ref<android::text::GetChars>() const
{
	return local_ref<android::text::GetChars>(get_jobject());
}


local_ref< android::text::AlteredCharSequence > android::text::AlteredCharSequence::make(local_ref< java::lang::CharSequence > const &a0, local_ref< array<jchar,1> > const &a1, jint a2, jint a3)
{
	return call_static_method<
		android::text::AlteredCharSequence::J2CPP_CLASS_NAME,
		android::text::AlteredCharSequence::J2CPP_METHOD_NAME(1),
		android::text::AlteredCharSequence::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::text::AlteredCharSequence > >
	(a0, a1, a2, a3);
}

jchar android::text::AlteredCharSequence::charAt(jint a0)
{
	return call_method<
		android::text::AlteredCharSequence::J2CPP_CLASS_NAME,
		android::text::AlteredCharSequence::J2CPP_METHOD_NAME(2),
		android::text::AlteredCharSequence::J2CPP_METHOD_SIGNATURE(2), 
		jchar >
	(get_jobject(), a0);
}

jint android::text::AlteredCharSequence::length()
{
	return call_method<
		android::text::AlteredCharSequence::J2CPP_CLASS_NAME,
		android::text::AlteredCharSequence::J2CPP_METHOD_NAME(3),
		android::text::AlteredCharSequence::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

local_ref< java::lang::CharSequence > android::text::AlteredCharSequence::subSequence(jint a0, jint a1)
{
	return call_method<
		android::text::AlteredCharSequence::J2CPP_CLASS_NAME,
		android::text::AlteredCharSequence::J2CPP_METHOD_NAME(4),
		android::text::AlteredCharSequence::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::CharSequence > >
	(get_jobject(), a0, a1);
}

void android::text::AlteredCharSequence::getChars(jint a0, jint a1, local_ref< array<jchar,1> > const &a2, jint a3)
{
	return call_method<
		android::text::AlteredCharSequence::J2CPP_CLASS_NAME,
		android::text::AlteredCharSequence::J2CPP_METHOD_NAME(5),
		android::text::AlteredCharSequence::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::lang::String > android::text::AlteredCharSequence::toString()
{
	return call_method<
		android::text::AlteredCharSequence::J2CPP_CLASS_NAME,
		android::text::AlteredCharSequence::J2CPP_METHOD_NAME(6),
		android::text::AlteredCharSequence::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::text::AlteredCharSequence,"android/text/AlteredCharSequence")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,1,"make","(Ljava/lang/CharSequence;[CII)Landroid/text/AlteredCharSequence;")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,2,"charAt","(I)C")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,3,"length","()I")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,4,"subSequence","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,5,"getChars","(II[CI)V")
J2CPP_DEFINE_METHOD(android::text::AlteredCharSequence,6,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_ALTEREDCHARSEQUENCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
