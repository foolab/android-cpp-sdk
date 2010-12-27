/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.cookie.params.CookieSpecPNames
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPNAMES_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPNAMES_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace cookie { namespace params {

	class CookieSpecPNames;
	class CookieSpecPNames
		: public cpp_object<CookieSpecPNames>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit CookieSpecPNames(jobject jobj)
		: cpp_object<CookieSpecPNames>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > DATE_PATTERNS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > SINGLE_COOKIE_HEADER;
	}; //class CookieSpecPNames

} //namespace params
} //namespace cookie
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPNAMES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPNAMES_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPNAMES_HPP_IMPL

namespace j2cpp {



org::apache::http::cookie::params::CookieSpecPNames::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

static_field<
	org::apache::http::cookie::params::CookieSpecPNames::J2CPP_CLASS_NAME,
	org::apache::http::cookie::params::CookieSpecPNames::J2CPP_FIELD_NAME(0),
	org::apache::http::cookie::params::CookieSpecPNames::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::cookie::params::CookieSpecPNames::DATE_PATTERNS;

static_field<
	org::apache::http::cookie::params::CookieSpecPNames::J2CPP_CLASS_NAME,
	org::apache::http::cookie::params::CookieSpecPNames::J2CPP_FIELD_NAME(1),
	org::apache::http::cookie::params::CookieSpecPNames::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> org::apache::http::cookie::params::CookieSpecPNames::SINGLE_COOKIE_HEADER;


J2CPP_DEFINE_CLASS(org::apache::http::cookie::params::CookieSpecPNames,"org/apache/http/cookie/params/CookieSpecPNames")
J2CPP_DEFINE_FIELD(org::apache::http::cookie::params::CookieSpecPNames,0,"DATE_PATTERNS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::cookie::params::CookieSpecPNames,1,"SINGLE_COOKIE_HEADER","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPNAMES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
