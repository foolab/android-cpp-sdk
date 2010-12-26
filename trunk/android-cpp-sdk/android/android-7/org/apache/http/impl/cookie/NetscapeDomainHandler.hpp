/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.cookie.NetscapeDomainHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDOMAINHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDOMAINHANDLER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }


#include <org/apache/http/cookie/Cookie.hpp>
#include <org/apache/http/cookie/CookieOrigin.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class NetscapeDomainHandler;
	class NetscapeDomainHandler
		: public cpp_object<NetscapeDomainHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		NetscapeDomainHandler(jobject jobj)
		: cpp_object<NetscapeDomainHandler>(jobj)
		{
		}

		void validate(local_ref< org::apache::http::cookie::Cookie > const&, local_ref< org::apache::http::cookie::CookieOrigin > const&);
		cpp_boolean match(local_ref< org::apache::http::cookie::Cookie > const&, local_ref< org::apache::http::cookie::CookieOrigin > const&);
	}; //class NetscapeDomainHandler

} //namespace cookie
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDOMAINHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDOMAINHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDOMAINHANDLER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::cookie::NetscapeDomainHandler > create< org::apache::http::impl::cookie::NetscapeDomainHandler>()
{
	return local_ref< org::apache::http::impl::cookie::NetscapeDomainHandler >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::cookie::NetscapeDomainHandler::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::cookie::NetscapeDomainHandler::J2CPP_CLASS_NAME, org::apache::http::impl::cookie::NetscapeDomainHandler::J2CPP_METHOD_NAME(0), org::apache::http::impl::cookie::NetscapeDomainHandler::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void org::apache::http::impl::cookie::NetscapeDomainHandler::validate(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::impl::cookie::NetscapeDomainHandler::match(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::NetscapeDomainHandler,"org/apache/http/impl/cookie/NetscapeDomainHandler")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::NetscapeDomainHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::NetscapeDomainHandler,1,"validate","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::NetscapeDomainHandler,2,"match","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDOMAINHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
