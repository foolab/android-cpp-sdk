/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.io.SessionInputBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/io/HttpTransportMetrics.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace io {

	class SessionInputBuffer;
	class SessionInputBuffer
		: public cpp_object<SessionInputBuffer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)

		SessionInputBuffer(jobject jobj)
		: cpp_object<SessionInputBuffer>(jobj)
		{
		}

		cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_int read(local_ref< cpp_byte_array<1> > const&);
		cpp_int read();
		cpp_int readLine(local_ref< org::apache::http::util::CharArrayBuffer > const&);
		local_ref< java::lang::String > readLine();
		cpp_boolean isDataAvailable(cpp_int const&);
		local_ref< org::apache::http::io::HttpTransportMetrics > getMetrics();
	}; //class SessionInputBuffer

} //namespace io
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_HPP_IMPL

namespace j2cpp {


cpp_int org::apache::http::io::SessionInputBuffer::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int org::apache::http::io::SessionInputBuffer::read(local_ref< cpp_byte_array<1> > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::apache::http::io::SessionInputBuffer::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int org::apache::http::io::SessionInputBuffer::readLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::io::SessionInputBuffer::readLine()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean org::apache::http::io::SessionInputBuffer::isDataAvailable(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::apache::http::io::HttpTransportMetrics > org::apache::http::io::SessionInputBuffer::getMetrics()
{
	return local_ref< org::apache::http::io::HttpTransportMetrics >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::io::SessionInputBuffer,"org/apache/http/io/SessionInputBuffer")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,0,"read","([BII)I")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,1,"read","([B)I")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,2,"read","()I")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,3,"readLine","(Lorg/apache/http/util/CharArrayBuffer;)I")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,4,"readLine","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,5,"isDataAvailable","(I)Z")
J2CPP_DEFINE_METHOD(org::apache::http::io::SessionInputBuffer,6,"getMetrics","()Lorg/apache/http/io/HttpTransportMetrics;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IO_SESSIONINPUTBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
