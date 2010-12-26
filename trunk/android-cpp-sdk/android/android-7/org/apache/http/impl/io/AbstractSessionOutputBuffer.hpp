/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.io.AbstractSessionOutputBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONOUTPUTBUFFER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONOUTPUTBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/io/HttpTransportMetrics.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace io {

	class AbstractSessionOutputBuffer;
	class AbstractSessionOutputBuffer
		: public cpp_object<AbstractSessionOutputBuffer>
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
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)

		AbstractSessionOutputBuffer(jobject jobj)
		: cpp_object<AbstractSessionOutputBuffer>(jobj)
		{
		}

		void flush();
		void write(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		void write(local_ref< cpp_byte_array<1> > const&);
		void write(cpp_int const&);
		void writeLine(local_ref< java::lang::String > const&);
		void writeLine(local_ref< org::apache::http::util::CharArrayBuffer > const&);
		local_ref< org::apache::http::io::HttpTransportMetrics > getMetrics();
	}; //class AbstractSessionOutputBuffer

} //namespace io
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONOUTPUTBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONOUTPUTBUFFER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONOUTPUTBUFFER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::io::AbstractSessionOutputBuffer > create< org::apache::http::impl::io::AbstractSessionOutputBuffer>()
{
	return local_ref< org::apache::http::impl::io::AbstractSessionOutputBuffer >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::io::AbstractSessionOutputBuffer::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::io::AbstractSessionOutputBuffer::J2CPP_CLASS_NAME, org::apache::http::impl::io::AbstractSessionOutputBuffer::J2CPP_METHOD_NAME(0), org::apache::http::impl::io::AbstractSessionOutputBuffer::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}



void org::apache::http::impl::io::AbstractSessionOutputBuffer::flush()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void org::apache::http::impl::io::AbstractSessionOutputBuffer::write(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::apache::http::impl::io::AbstractSessionOutputBuffer::write(local_ref< cpp_byte_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::impl::io::AbstractSessionOutputBuffer::write(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::impl::io::AbstractSessionOutputBuffer::writeLine(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::impl::io::AbstractSessionOutputBuffer::writeLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::apache::http::io::HttpTransportMetrics > org::apache::http::impl::io::AbstractSessionOutputBuffer::getMetrics()
{
	return local_ref< org::apache::http::io::HttpTransportMetrics >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::io::AbstractSessionOutputBuffer,"org/apache/http/impl/io/AbstractSessionOutputBuffer")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionOutputBuffer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionOutputBuffer,1,"init","(Ljava/io/OutputStream;ILorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionOutputBuffer,2,"flushBuffer","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionOutputBuffer,3,"flush","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionOutputBuffer,4,"write","([BII)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionOutputBuffer,5,"write","([B)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionOutputBuffer,6,"write","(I)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionOutputBuffer,7,"writeLine","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionOutputBuffer,8,"writeLine","(Lorg/apache/http/util/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::io::AbstractSessionOutputBuffer,9,"getMetrics","()Lorg/apache/http/io/HttpTransportMetrics;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_IO_ABSTRACTSESSIONOUTPUTBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
