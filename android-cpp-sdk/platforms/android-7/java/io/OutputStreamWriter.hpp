/*================================================================================
  code generated by: java2cpp
  class: java.io.OutputStreamWriter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OUTPUTSTREAMWRITER_HPP_DECL
#define J2CPP_JAVA_IO_OUTPUTSTREAMWRITER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class CharsetEncoder; } } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class Charset; } } } }


#include <java/io/OutputStream.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/String.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/nio/charset/CharsetEncoder.hpp>


namespace j2cpp {

namespace java { namespace io {

	class OutputStreamWriter;
	class OutputStreamWriter
		: public cpp_object<OutputStreamWriter>
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

		explicit OutputStreamWriter(jobject jobj)
		: cpp_object<OutputStreamWriter>(jobj)
		{
		}

		operator local_ref<java::io::Writer>() const;


		OutputStreamWriter(local_ref< java::io::OutputStream > const&);
		OutputStreamWriter(local_ref< java::io::OutputStream > const&, local_ref< java::lang::String > const&);
		OutputStreamWriter(local_ref< java::io::OutputStream > const&, local_ref< java::nio::charset::Charset > const&);
		OutputStreamWriter(local_ref< java::io::OutputStream > const&, local_ref< java::nio::charset::CharsetEncoder > const&);
		void close();
		void flush();
		local_ref< java::lang::String > getEncoding();
		void write(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		void write(cpp_int const&);
		void write(local_ref< java::lang::String > const&, cpp_int const&, cpp_int const&);
	}; //class OutputStreamWriter

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_OUTPUTSTREAMWRITER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OUTPUTSTREAMWRITER_HPP_IMPL
#define J2CPP_JAVA_IO_OUTPUTSTREAMWRITER_HPP_IMPL

namespace j2cpp {



java::io::OutputStreamWriter::operator local_ref<java::io::Writer>() const
{
	return local_ref<java::io::Writer>(get_jtype());
}


java::io::OutputStreamWriter::OutputStreamWriter(local_ref< java::io::OutputStream > const &a0)
: cpp_object<java::io::OutputStreamWriter>(
	environment::get().get_jenv()->NewObject(
		get_class<java::io::OutputStreamWriter::J2CPP_CLASS_NAME>(),
		get_method_id<java::io::OutputStreamWriter::J2CPP_CLASS_NAME, java::io::OutputStreamWriter::J2CPP_METHOD_NAME(0), java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



java::io::OutputStreamWriter::OutputStreamWriter(local_ref< java::io::OutputStream > const &a0, local_ref< java::lang::String > const &a1)
: cpp_object<java::io::OutputStreamWriter>(
	environment::get().get_jenv()->NewObject(
		get_class<java::io::OutputStreamWriter::J2CPP_CLASS_NAME>(),
		get_method_id<java::io::OutputStreamWriter::J2CPP_CLASS_NAME, java::io::OutputStreamWriter::J2CPP_METHOD_NAME(1), java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



java::io::OutputStreamWriter::OutputStreamWriter(local_ref< java::io::OutputStream > const &a0, local_ref< java::nio::charset::Charset > const &a1)
: cpp_object<java::io::OutputStreamWriter>(
	environment::get().get_jenv()->NewObject(
		get_class<java::io::OutputStreamWriter::J2CPP_CLASS_NAME>(),
		get_method_id<java::io::OutputStreamWriter::J2CPP_CLASS_NAME, java::io::OutputStreamWriter::J2CPP_METHOD_NAME(2), java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



java::io::OutputStreamWriter::OutputStreamWriter(local_ref< java::io::OutputStream > const &a0, local_ref< java::nio::charset::CharsetEncoder > const &a1)
: cpp_object<java::io::OutputStreamWriter>(
	environment::get().get_jenv()->NewObject(
		get_class<java::io::OutputStreamWriter::J2CPP_CLASS_NAME>(),
		get_method_id<java::io::OutputStreamWriter::J2CPP_CLASS_NAME, java::io::OutputStreamWriter::J2CPP_METHOD_NAME(3), java::io::OutputStreamWriter::J2CPP_METHOD_SIGNATURE(3), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


void java::io::OutputStreamWriter::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void java::io::OutputStreamWriter::flush()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > java::io::OutputStreamWriter::getEncoding()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void java::io::OutputStreamWriter::write(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::io::OutputStreamWriter::write(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::OutputStreamWriter::write(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::io::OutputStreamWriter,"java/io/OutputStreamWriter")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,0,"<init>","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,1,"<init>","(Ljava/io/OutputStream;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,2,"<init>","(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,3,"<init>","(Ljava/io/OutputStream;Ljava/nio/charset/CharsetEncoder;)V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,4,"close","()V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,5,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,6,"getEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,7,"write","([CII)V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,8,"write","(I)V")
J2CPP_DEFINE_METHOD(java::io::OutputStreamWriter,9,"write","(Ljava/lang/String;II)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_OUTPUTSTREAMWRITER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
