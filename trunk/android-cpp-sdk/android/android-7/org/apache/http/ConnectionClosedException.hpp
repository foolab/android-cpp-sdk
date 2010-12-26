/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.ConnectionClosedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class ConnectionClosedException;
	class ConnectionClosedException
		: public cpp_object<ConnectionClosedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		ConnectionClosedException(jobject jobj)
		: cpp_object<ConnectionClosedException>(jobj)
		{
		}

	}; //class ConnectionClosedException

} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::ConnectionClosedException > create< org::apache::http::ConnectionClosedException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::apache::http::ConnectionClosedException >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::ConnectionClosedException::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::ConnectionClosedException::J2CPP_CLASS_NAME, org::apache::http::ConnectionClosedException::J2CPP_METHOD_NAME(0), org::apache::http::ConnectionClosedException::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::ConnectionClosedException,"org/apache/http/ConnectionClosedException")
J2CPP_DEFINE_METHOD(org::apache::http::ConnectionClosedException,0,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONNECTIONCLOSEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
