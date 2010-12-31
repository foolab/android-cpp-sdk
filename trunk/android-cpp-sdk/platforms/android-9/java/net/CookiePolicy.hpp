/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.CookiePolicy
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_COOKIEPOLICY_HPP_DECL
#define J2CPP_JAVA_NET_COOKIEPOLICY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class HttpCookie; } } }
namespace j2cpp { namespace java { namespace net { class URI; } } }


#include <java/lang/Object.hpp>
#include <java/net/HttpCookie.hpp>
#include <java/net/URI.hpp>


namespace j2cpp {

namespace java { namespace net {

	class CookiePolicy;
	class CookiePolicy
		: public object<CookiePolicy>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit CookiePolicy(jobject jobj)
		: object<CookiePolicy>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jboolean shouldAccept(local_ref< java::net::URI >  const&, local_ref< java::net::HttpCookie >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::net::CookiePolicy > > ACCEPT_ALL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::net::CookiePolicy > > ACCEPT_NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::net::CookiePolicy > > ACCEPT_ORIGINAL_SERVER;
	}; //class CookiePolicy

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_COOKIEPOLICY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_COOKIEPOLICY_HPP_IMPL
#define J2CPP_JAVA_NET_COOKIEPOLICY_HPP_IMPL

namespace j2cpp {



java::net::CookiePolicy::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean java::net::CookiePolicy::shouldAccept(local_ref< java::net::URI > const &a0, local_ref< java::net::HttpCookie > const &a1)
{
	return call_method<
		java::net::CookiePolicy::J2CPP_CLASS_NAME,
		java::net::CookiePolicy::J2CPP_METHOD_NAME(0),
		java::net::CookiePolicy::J2CPP_METHOD_SIGNATURE(0), 
		jboolean >
	(get_jobject(), a0, a1);
}



static_field<
	java::net::CookiePolicy::J2CPP_CLASS_NAME,
	java::net::CookiePolicy::J2CPP_FIELD_NAME(0),
	java::net::CookiePolicy::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::net::CookiePolicy >
> java::net::CookiePolicy::ACCEPT_ALL;

static_field<
	java::net::CookiePolicy::J2CPP_CLASS_NAME,
	java::net::CookiePolicy::J2CPP_FIELD_NAME(1),
	java::net::CookiePolicy::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::net::CookiePolicy >
> java::net::CookiePolicy::ACCEPT_NONE;

static_field<
	java::net::CookiePolicy::J2CPP_CLASS_NAME,
	java::net::CookiePolicy::J2CPP_FIELD_NAME(2),
	java::net::CookiePolicy::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::net::CookiePolicy >
> java::net::CookiePolicy::ACCEPT_ORIGINAL_SERVER;


J2CPP_DEFINE_CLASS(java::net::CookiePolicy,"java/net/CookiePolicy")
J2CPP_DEFINE_METHOD(java::net::CookiePolicy,0,"shouldAccept","(Ljava/net/URI;Ljava/net/HttpCookie;)Z")
J2CPP_DEFINE_METHOD(java::net::CookiePolicy,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::net::CookiePolicy,0,"ACCEPT_ALL","Ljava/net/CookiePolicy;")
J2CPP_DEFINE_FIELD(java::net::CookiePolicy,1,"ACCEPT_NONE","Ljava/net/CookiePolicy;")
J2CPP_DEFINE_FIELD(java::net::CookiePolicy,2,"ACCEPT_ORIGINAL_SERVER","Ljava/net/CookiePolicy;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_COOKIEPOLICY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
