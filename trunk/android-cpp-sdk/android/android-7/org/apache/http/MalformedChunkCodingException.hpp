/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.MalformedChunkCodingException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MALFORMEDCHUNKCODINGEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MALFORMEDCHUNKCODINGEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class MalformedChunkCodingException;
	class MalformedChunkCodingException
		: public cpp_object<MalformedChunkCodingException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		MalformedChunkCodingException(jobject jobj)
		: cpp_object<MalformedChunkCodingException>(jobj)
		{
		}

	}; //class MalformedChunkCodingException

} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MALFORMEDCHUNKCODINGEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MALFORMEDCHUNKCODINGEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MALFORMEDCHUNKCODINGEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::MalformedChunkCodingException > create< org::apache::http::MalformedChunkCodingException>()
{
	return local_ref< org::apache::http::MalformedChunkCodingException >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::MalformedChunkCodingException::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::MalformedChunkCodingException::J2CPP_CLASS_NAME, org::apache::http::MalformedChunkCodingException::J2CPP_METHOD_NAME(0), org::apache::http::MalformedChunkCodingException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< org::apache::http::MalformedChunkCodingException > create< org::apache::http::MalformedChunkCodingException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::apache::http::MalformedChunkCodingException >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::MalformedChunkCodingException::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::MalformedChunkCodingException::J2CPP_CLASS_NAME, org::apache::http::MalformedChunkCodingException::J2CPP_METHOD_NAME(1), org::apache::http::MalformedChunkCodingException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::MalformedChunkCodingException,"org/apache/http/MalformedChunkCodingException")
J2CPP_DEFINE_METHOD(org::apache::http::MalformedChunkCodingException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::MalformedChunkCodingException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MALFORMEDCHUNKCODINGEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
