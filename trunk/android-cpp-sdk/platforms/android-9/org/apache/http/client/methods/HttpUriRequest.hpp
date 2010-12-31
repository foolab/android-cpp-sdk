/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.methods.HttpUriRequest
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPURIREQUEST_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPURIREQUEST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class URI; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/URI.hpp>
#include <org/apache/http/HttpRequest.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace methods {

	class HttpUriRequest;
	class HttpUriRequest
		: public object<HttpUriRequest>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit HttpUriRequest(jobject jobj)
		: object<HttpUriRequest>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpRequest>() const;


		local_ref< java::lang::String > getMethod();
		local_ref< java::net::URI > getURI();
		void abort();
		jboolean isAborted();
	}; //class HttpUriRequest

} //namespace methods
} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPURIREQUEST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPURIREQUEST_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPURIREQUEST_HPP_IMPL

namespace j2cpp {



org::apache::http::client::methods::HttpUriRequest::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::client::methods::HttpUriRequest::operator local_ref<org::apache::http::HttpRequest>() const
{
	return local_ref<org::apache::http::HttpRequest>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::client::methods::HttpUriRequest::getMethod()
{
	return call_method<
		org::apache::http::client::methods::HttpUriRequest::J2CPP_CLASS_NAME,
		org::apache::http::client::methods::HttpUriRequest::J2CPP_METHOD_NAME(0),
		org::apache::http::client::methods::HttpUriRequest::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::net::URI > org::apache::http::client::methods::HttpUriRequest::getURI()
{
	return call_method<
		org::apache::http::client::methods::HttpUriRequest::J2CPP_CLASS_NAME,
		org::apache::http::client::methods::HttpUriRequest::J2CPP_METHOD_NAME(1),
		org::apache::http::client::methods::HttpUriRequest::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::net::URI > >
	(get_jobject());
}

void org::apache::http::client::methods::HttpUriRequest::abort()
{
	return call_method<
		org::apache::http::client::methods::HttpUriRequest::J2CPP_CLASS_NAME,
		org::apache::http::client::methods::HttpUriRequest::J2CPP_METHOD_NAME(2),
		org::apache::http::client::methods::HttpUriRequest::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}

jboolean org::apache::http::client::methods::HttpUriRequest::isAborted()
{
	return call_method<
		org::apache::http::client::methods::HttpUriRequest::J2CPP_CLASS_NAME,
		org::apache::http::client::methods::HttpUriRequest::J2CPP_METHOD_NAME(3),
		org::apache::http::client::methods::HttpUriRequest::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::client::methods::HttpUriRequest,"org/apache/http/client/methods/HttpUriRequest")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpUriRequest,0,"getMethod","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpUriRequest,1,"getURI","()Ljava/net/URI;")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpUriRequest,2,"abort","()V")
J2CPP_DEFINE_METHOD(org::apache::http::client::methods::HttpUriRequest,3,"isAborted","()Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_METHODS_HTTPURIREQUEST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
