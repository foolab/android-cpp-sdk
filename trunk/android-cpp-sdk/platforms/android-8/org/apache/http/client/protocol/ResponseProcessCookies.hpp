/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.protocol.ResponseProcessCookies
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_RESPONSEPROCESSCOOKIES_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_RESPONSEPROCESSCOOKIES_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponseInterceptor; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/HttpResponseInterceptor.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace protocol {

	class ResponseProcessCookies;
	class ResponseProcessCookies
		: public object<ResponseProcessCookies>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ResponseProcessCookies(jobject jobj)
		: object<ResponseProcessCookies>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpResponseInterceptor>() const;


		ResponseProcessCookies();
		void process(local_ref< org::apache::http::HttpResponse >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
	}; //class ResponseProcessCookies

} //namespace protocol
} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_RESPONSEPROCESSCOOKIES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_RESPONSEPROCESSCOOKIES_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_RESPONSEPROCESSCOOKIES_HPP_IMPL

namespace j2cpp {



org::apache::http::client::protocol::ResponseProcessCookies::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::client::protocol::ResponseProcessCookies::operator local_ref<org::apache::http::HttpResponseInterceptor>() const
{
	return local_ref<org::apache::http::HttpResponseInterceptor>(get_jobject());
}


org::apache::http::client::protocol::ResponseProcessCookies::ResponseProcessCookies()
: object<org::apache::http::client::protocol::ResponseProcessCookies>(
	call_new_object<
		org::apache::http::client::protocol::ResponseProcessCookies::J2CPP_CLASS_NAME,
		org::apache::http::client::protocol::ResponseProcessCookies::J2CPP_METHOD_NAME(0),
		org::apache::http::client::protocol::ResponseProcessCookies::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void org::apache::http::client::protocol::ResponseProcessCookies::process(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		org::apache::http::client::protocol::ResponseProcessCookies::J2CPP_CLASS_NAME,
		org::apache::http::client::protocol::ResponseProcessCookies::J2CPP_METHOD_NAME(1),
		org::apache::http::client::protocol::ResponseProcessCookies::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::protocol::ResponseProcessCookies,"org/apache/http/client/protocol/ResponseProcessCookies")
J2CPP_DEFINE_METHOD(org::apache::http::client::protocol::ResponseProcessCookies,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::client::protocol::ResponseProcessCookies,1,"process","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_RESPONSEPROCESSCOOKIES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
