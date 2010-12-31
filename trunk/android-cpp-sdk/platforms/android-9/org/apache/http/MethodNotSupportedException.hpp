/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.MethodNotSupportedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_METHODNOTSUPPORTEDEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_METHODNOTSUPPORTEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpException; } } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <org/apache/http/HttpException.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class MethodNotSupportedException;
	class MethodNotSupportedException
		: public object<MethodNotSupportedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit MethodNotSupportedException(jobject jobj)
		: object<MethodNotSupportedException>(jobj)
		{
		}

		operator local_ref<org::apache::http::HttpException>() const;


		MethodNotSupportedException(local_ref< java::lang::String > const&);
		MethodNotSupportedException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
	}; //class MethodNotSupportedException

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_METHODNOTSUPPORTEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_METHODNOTSUPPORTEDEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_METHODNOTSUPPORTEDEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::MethodNotSupportedException::operator local_ref<org::apache::http::HttpException>() const
{
	return local_ref<org::apache::http::HttpException>(get_jobject());
}


org::apache::http::MethodNotSupportedException::MethodNotSupportedException(local_ref< java::lang::String > const &a0)
: object<org::apache::http::MethodNotSupportedException>(
	call_new_object<
		org::apache::http::MethodNotSupportedException::J2CPP_CLASS_NAME,
		org::apache::http::MethodNotSupportedException::J2CPP_METHOD_NAME(0),
		org::apache::http::MethodNotSupportedException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



org::apache::http::MethodNotSupportedException::MethodNotSupportedException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<org::apache::http::MethodNotSupportedException>(
	call_new_object<
		org::apache::http::MethodNotSupportedException::J2CPP_CLASS_NAME,
		org::apache::http::MethodNotSupportedException::J2CPP_METHOD_NAME(1),
		org::apache::http::MethodNotSupportedException::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(org::apache::http::MethodNotSupportedException,"org/apache/http/MethodNotSupportedException")
J2CPP_DEFINE_METHOD(org::apache::http::MethodNotSupportedException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::MethodNotSupportedException,1,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_METHODNOTSUPPORTEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
