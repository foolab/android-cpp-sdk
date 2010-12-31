/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.StringBuilderPrinter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_STRINGBUILDERPRINTER_HPP_DECL
#define J2CPP_ANDROID_UTIL_STRINGBUILDERPRINTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class StringBuilder; } } }
namespace j2cpp { namespace android { namespace util { class Printer; } } }


#include <android/util/Printer.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuilder.hpp>


namespace j2cpp {

namespace android { namespace util {

	class StringBuilderPrinter;
	class StringBuilderPrinter
		: public object<StringBuilderPrinter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit StringBuilderPrinter(jobject jobj)
		: object<StringBuilderPrinter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::util::Printer>() const;


		StringBuilderPrinter(local_ref< java::lang::StringBuilder > const&);
		void println(local_ref< java::lang::String >  const&);
	}; //class StringBuilderPrinter

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_STRINGBUILDERPRINTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_STRINGBUILDERPRINTER_HPP_IMPL
#define J2CPP_ANDROID_UTIL_STRINGBUILDERPRINTER_HPP_IMPL

namespace j2cpp {



android::util::StringBuilderPrinter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::util::StringBuilderPrinter::operator local_ref<android::util::Printer>() const
{
	return local_ref<android::util::Printer>(get_jobject());
}


android::util::StringBuilderPrinter::StringBuilderPrinter(local_ref< java::lang::StringBuilder > const &a0)
: object<android::util::StringBuilderPrinter>(
	call_new_object<
		android::util::StringBuilderPrinter::J2CPP_CLASS_NAME,
		android::util::StringBuilderPrinter::J2CPP_METHOD_NAME(0),
		android::util::StringBuilderPrinter::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


void android::util::StringBuilderPrinter::println(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::util::StringBuilderPrinter::J2CPP_CLASS_NAME,
		android::util::StringBuilderPrinter::J2CPP_METHOD_NAME(1),
		android::util::StringBuilderPrinter::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::util::StringBuilderPrinter,"android/util/StringBuilderPrinter")
J2CPP_DEFINE_METHOD(android::util::StringBuilderPrinter,0,"<init>","(Ljava/lang/StringBuilder;)V")
J2CPP_DEFINE_METHOD(android::util::StringBuilderPrinter,1,"println","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_STRINGBUILDERPRINTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
