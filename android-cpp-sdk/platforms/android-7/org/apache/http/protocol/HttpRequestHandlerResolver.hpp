/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.protocol.HttpRequestHandlerResolver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERRESOLVER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERRESOLVER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpRequestHandler; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/protocol/HttpRequestHandler.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace protocol {

	class HttpRequestHandlerResolver;
	class HttpRequestHandlerResolver
		: public cpp_object<HttpRequestHandlerResolver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit HttpRequestHandlerResolver(jobject jobj)
		: cpp_object<HttpRequestHandlerResolver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::apache::http::protocol::HttpRequestHandler > lookup(local_ref< java::lang::String > const&);
	}; //class HttpRequestHandlerResolver

} //namespace protocol
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERRESOLVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERRESOLVER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERRESOLVER_HPP_IMPL

namespace j2cpp {



org::apache::http::protocol::HttpRequestHandlerResolver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

local_ref< org::apache::http::protocol::HttpRequestHandler > org::apache::http::protocol::HttpRequestHandlerResolver::lookup(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::apache::http::protocol::HttpRequestHandler >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::protocol::HttpRequestHandlerResolver,"org/apache/http/protocol/HttpRequestHandlerResolver")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestHandlerResolver,0,"lookup","(Ljava/lang/String;)Lorg/apache/http/protocol/HttpRequestHandler;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTHANDLERRESOLVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
