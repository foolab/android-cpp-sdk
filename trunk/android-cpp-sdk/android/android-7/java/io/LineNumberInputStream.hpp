/*================================================================================
  code generated by: java2cpp
  class: java.io.LineNumberInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_LINENUMBERINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_LINENUMBERINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }


#include <java/io/InputStream.hpp>


namespace j2cpp {

namespace java { namespace io {

	class LineNumberInputStream;
	class LineNumberInputStream
		: public cpp_object<LineNumberInputStream>
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

		LineNumberInputStream(jobject jobj)
		: cpp_object<LineNumberInputStream>(jobj)
		{
		}

		cpp_int available();
		cpp_int getLineNumber();
		void mark(cpp_int const&);
		cpp_int read();
		cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		void reset();
		void setLineNumber(cpp_int const&);
		cpp_long skip(cpp_long const&);
	}; //class LineNumberInputStream

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_LINENUMBERINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_LINENUMBERINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_LINENUMBERINPUTSTREAM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::io::LineNumberInputStream > create< java::io::LineNumberInputStream>(local_ref< java::io::InputStream > const &a0)
{
	return local_ref< java::io::LineNumberInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::LineNumberInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::LineNumberInputStream::J2CPP_CLASS_NAME, java::io::LineNumberInputStream::J2CPP_METHOD_NAME(0), java::io::LineNumberInputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::io::LineNumberInputStream::available()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int java::io::LineNumberInputStream::getLineNumber()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::io::LineNumberInputStream::mark(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::io::LineNumberInputStream::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::io::LineNumberInputStream::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::io::LineNumberInputStream::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void java::io::LineNumberInputStream::setLineNumber(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::io::LineNumberInputStream::skip(cpp_long const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::io::LineNumberInputStream,"java/io/LineNumberInputStream")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,0,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,1,"available","()I")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,2,"getLineNumber","()I")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,3,"mark","(I)V")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,4,"read","()I")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,5,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,6,"reset","()V")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,7,"setLineNumber","(I)V")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,8,"skip","(J)J")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_LINENUMBERINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
