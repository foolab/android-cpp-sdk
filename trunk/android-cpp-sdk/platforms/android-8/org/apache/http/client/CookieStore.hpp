/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.CookieStore
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }


#include <java/lang/Object.hpp>
#include <java/util/Date.hpp>
#include <java/util/List.hpp>
#include <org/apache/http/cookie/Cookie.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class CookieStore;
	class CookieStore
		: public object<CookieStore>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit CookieStore(jobject jobj)
		: object<CookieStore>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void addCookie(local_ref< org::apache::http::cookie::Cookie >  const&);
		local_ref< java::util::List > getCookies();
		jboolean clearExpired(local_ref< java::util::Date >  const&);
		void clear();
	}; //class CookieStore

} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_HPP_IMPL

namespace j2cpp {



org::apache::http::client::CookieStore::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void org::apache::http::client::CookieStore::addCookie(local_ref< org::apache::http::cookie::Cookie > const &a0)
{
	return call_method<
		org::apache::http::client::CookieStore::J2CPP_CLASS_NAME,
		org::apache::http::client::CookieStore::J2CPP_METHOD_NAME(0),
		org::apache::http::client::CookieStore::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0);
}

local_ref< java::util::List > org::apache::http::client::CookieStore::getCookies()
{
	return call_method<
		org::apache::http::client::CookieStore::J2CPP_CLASS_NAME,
		org::apache::http::client::CookieStore::J2CPP_METHOD_NAME(1),
		org::apache::http::client::CookieStore::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::List > >
	(get_jobject());
}

jboolean org::apache::http::client::CookieStore::clearExpired(local_ref< java::util::Date > const &a0)
{
	return call_method<
		org::apache::http::client::CookieStore::J2CPP_CLASS_NAME,
		org::apache::http::client::CookieStore::J2CPP_METHOD_NAME(2),
		org::apache::http::client::CookieStore::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}

void org::apache::http::client::CookieStore::clear()
{
	return call_method<
		org::apache::http::client::CookieStore::J2CPP_CLASS_NAME,
		org::apache::http::client::CookieStore::J2CPP_METHOD_NAME(3),
		org::apache::http::client::CookieStore::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::client::CookieStore,"org/apache/http/client/CookieStore")
J2CPP_DEFINE_METHOD(org::apache::http::client::CookieStore,0,"addCookie","(Lorg/apache/http/cookie/Cookie;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::CookieStore,1,"getCookies","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::client::CookieStore,2,"clearExpired","(Ljava/util/Date;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::client::CookieStore,3,"clear","()V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
