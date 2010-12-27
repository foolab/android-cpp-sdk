/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.protocol.ResponseContent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_RESPONSECONTENT_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_RESPONSECONTENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponseInterceptor; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/HttpResponseInterceptor.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace protocol {

	class ResponseContent;
	class ResponseContent
		: public cpp_object<ResponseContent>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ResponseContent(jobject jobj)
		: cpp_object<ResponseContent>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpResponseInterceptor>() const;


		ResponseContent();
		void process(local_ref< org::apache::http::HttpResponse > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
	}; //class ResponseContent

} //namespace protocol
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_RESPONSECONTENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_RESPONSECONTENT_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_RESPONSECONTENT_HPP_IMPL

namespace j2cpp {



org::apache::http::protocol::ResponseContent::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

org::apache::http::protocol::ResponseContent::operator local_ref<org::apache::http::HttpResponseInterceptor>() const
{
	return local_ref<org::apache::http::HttpResponseInterceptor>(get_jtype());
}


org::apache::http::protocol::ResponseContent::ResponseContent()
: cpp_object<org::apache::http::protocol::ResponseContent>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::protocol::ResponseContent::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::protocol::ResponseContent::J2CPP_CLASS_NAME, org::apache::http::protocol::ResponseContent::J2CPP_METHOD_NAME(0), org::apache::http::protocol::ResponseContent::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


void org::apache::http::protocol::ResponseContent::process(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::protocol::ResponseContent,"org/apache/http/protocol/ResponseContent")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::ResponseContent,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::ResponseContent,1,"process","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpContext;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_RESPONSECONTENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
