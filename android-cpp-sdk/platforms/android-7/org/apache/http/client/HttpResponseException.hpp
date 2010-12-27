/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.client.HttpResponseException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPRESPONSEEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPRESPONSEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { class ClientProtocolException; } } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/client/ClientProtocolException.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client {

	class HttpResponseException;
	class HttpResponseException
		: public cpp_object<HttpResponseException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit HttpResponseException(jobject jobj)
		: cpp_object<HttpResponseException>(jobj)
		{
		}

		operator local_ref<org::apache::http::client::ClientProtocolException>() const;


		HttpResponseException(cpp_int const&, local_ref< java::lang::String > const&);
		cpp_int getStatusCode();
	}; //class HttpResponseException

} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPRESPONSEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPRESPONSEEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPRESPONSEEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::client::HttpResponseException::operator local_ref<org::apache::http::client::ClientProtocolException>() const
{
	return local_ref<org::apache::http::client::ClientProtocolException>(get_jtype());
}


org::apache::http::client::HttpResponseException::HttpResponseException(cpp_int const &a0, local_ref< java::lang::String > const &a1)
: cpp_object<org::apache::http::client::HttpResponseException>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::client::HttpResponseException::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::client::HttpResponseException::J2CPP_CLASS_NAME, org::apache::http::client::HttpResponseException::J2CPP_METHOD_NAME(0), org::apache::http::client::HttpResponseException::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


cpp_int org::apache::http::client::HttpResponseException::getStatusCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::client::HttpResponseException,"org/apache/http/client/HttpResponseException")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpResponseException,0,"<init>","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::client::HttpResponseException,1,"getStatusCode","()I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_HTTPRESPONSEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
