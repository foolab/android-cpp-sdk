/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.util.Patterns
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_PATTERNS_HPP_DECL
#define J2CPP_ANDROID_UTIL_PATTERNS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace regex { class Matcher; } } } }
namespace j2cpp { namespace java { namespace util { namespace regex { class Pattern; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/regex/Matcher.hpp>
#include <java/util/regex/Pattern.hpp>


namespace j2cpp {

namespace android { namespace util {

	class Patterns;
	class Patterns
		: public object<Patterns>
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

		explicit Patterns(jobject jobj)
		: object<Patterns>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::lang::String > concatGroups(local_ref< java::util::regex::Matcher >  const&);
		static local_ref< java::lang::String > digitsAndPlusOnly(local_ref< java::util::regex::Matcher >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > TOP_LEVEL_DOMAIN_STR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::util::regex::Pattern > > TOP_LEVEL_DOMAIN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > GOOD_IRI_CHAR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::util::regex::Pattern > > WEB_URL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::util::regex::Pattern > > IP_ADDRESS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::util::regex::Pattern > > DOMAIN_NAME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::util::regex::Pattern > > EMAIL_ADDRESS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::util::regex::Pattern > > PHONE;
	}; //class Patterns

} //namespace util
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_PATTERNS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_PATTERNS_HPP_IMPL
#define J2CPP_ANDROID_UTIL_PATTERNS_HPP_IMPL

namespace j2cpp {



android::util::Patterns::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > android::util::Patterns::concatGroups(local_ref< java::util::regex::Matcher > const &a0)
{
	return call_static_method<
		android::util::Patterns::J2CPP_CLASS_NAME,
		android::util::Patterns::J2CPP_METHOD_NAME(1),
		android::util::Patterns::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(a0);
}

local_ref< java::lang::String > android::util::Patterns::digitsAndPlusOnly(local_ref< java::util::regex::Matcher > const &a0)
{
	return call_static_method<
		android::util::Patterns::J2CPP_CLASS_NAME,
		android::util::Patterns::J2CPP_METHOD_NAME(2),
		android::util::Patterns::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(a0);
}



static_field<
	android::util::Patterns::J2CPP_CLASS_NAME,
	android::util::Patterns::J2CPP_FIELD_NAME(0),
	android::util::Patterns::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::util::Patterns::TOP_LEVEL_DOMAIN_STR;

static_field<
	android::util::Patterns::J2CPP_CLASS_NAME,
	android::util::Patterns::J2CPP_FIELD_NAME(1),
	android::util::Patterns::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::util::regex::Pattern >
> android::util::Patterns::TOP_LEVEL_DOMAIN;

static_field<
	android::util::Patterns::J2CPP_CLASS_NAME,
	android::util::Patterns::J2CPP_FIELD_NAME(2),
	android::util::Patterns::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::util::Patterns::TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL;

static_field<
	android::util::Patterns::J2CPP_CLASS_NAME,
	android::util::Patterns::J2CPP_FIELD_NAME(3),
	android::util::Patterns::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::util::Patterns::GOOD_IRI_CHAR;

static_field<
	android::util::Patterns::J2CPP_CLASS_NAME,
	android::util::Patterns::J2CPP_FIELD_NAME(4),
	android::util::Patterns::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::util::regex::Pattern >
> android::util::Patterns::WEB_URL;

static_field<
	android::util::Patterns::J2CPP_CLASS_NAME,
	android::util::Patterns::J2CPP_FIELD_NAME(5),
	android::util::Patterns::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::util::regex::Pattern >
> android::util::Patterns::IP_ADDRESS;

static_field<
	android::util::Patterns::J2CPP_CLASS_NAME,
	android::util::Patterns::J2CPP_FIELD_NAME(6),
	android::util::Patterns::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::util::regex::Pattern >
> android::util::Patterns::DOMAIN_NAME;

static_field<
	android::util::Patterns::J2CPP_CLASS_NAME,
	android::util::Patterns::J2CPP_FIELD_NAME(7),
	android::util::Patterns::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::util::regex::Pattern >
> android::util::Patterns::EMAIL_ADDRESS;

static_field<
	android::util::Patterns::J2CPP_CLASS_NAME,
	android::util::Patterns::J2CPP_FIELD_NAME(8),
	android::util::Patterns::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::util::regex::Pattern >
> android::util::Patterns::PHONE;


J2CPP_DEFINE_CLASS(android::util::Patterns,"android/util/Patterns")
J2CPP_DEFINE_METHOD(android::util::Patterns,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::util::Patterns,1,"concatGroups","(Ljava/util/regex/Matcher;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::util::Patterns,2,"digitsAndPlusOnly","(Ljava/util/regex/Matcher;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::util::Patterns,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::util::Patterns,0,"TOP_LEVEL_DOMAIN_STR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::util::Patterns,1,"TOP_LEVEL_DOMAIN","Ljava/util/regex/Pattern;")
J2CPP_DEFINE_FIELD(android::util::Patterns,2,"TOP_LEVEL_DOMAIN_STR_FOR_WEB_URL","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::util::Patterns,3,"GOOD_IRI_CHAR","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::util::Patterns,4,"WEB_URL","Ljava/util/regex/Pattern;")
J2CPP_DEFINE_FIELD(android::util::Patterns,5,"IP_ADDRESS","Ljava/util/regex/Pattern;")
J2CPP_DEFINE_FIELD(android::util::Patterns,6,"DOMAIN_NAME","Ljava/util/regex/Pattern;")
J2CPP_DEFINE_FIELD(android::util::Patterns,7,"EMAIL_ADDRESS","Ljava/util/regex/Pattern;")
J2CPP_DEFINE_FIELD(android::util::Patterns,8,"PHONE","Ljava/util/regex/Pattern;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_PATTERNS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
