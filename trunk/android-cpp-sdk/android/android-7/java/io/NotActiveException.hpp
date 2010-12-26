/*================================================================================
  code generated by: java2cpp
  class: java.io.NotActiveException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_NOTACTIVEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_IO_NOTACTIVEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class NotActiveException;
	class NotActiveException
		: public cpp_object<NotActiveException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		NotActiveException(jobject jobj)
		: cpp_object<NotActiveException>(jobj)
		{
		}

	}; //class NotActiveException

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_NOTACTIVEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_NOTACTIVEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_IO_NOTACTIVEEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::io::NotActiveException > create< java::io::NotActiveException>()
{
	return local_ref< java::io::NotActiveException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::NotActiveException::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::NotActiveException::J2CPP_CLASS_NAME, java::io::NotActiveException::J2CPP_METHOD_NAME(0), java::io::NotActiveException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::io::NotActiveException > create< java::io::NotActiveException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::io::NotActiveException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::NotActiveException::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::NotActiveException::J2CPP_CLASS_NAME, java::io::NotActiveException::J2CPP_METHOD_NAME(1), java::io::NotActiveException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::io::NotActiveException,"java/io/NotActiveException")
J2CPP_DEFINE_METHOD(java::io::NotActiveException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::NotActiveException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_NOTACTIVEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
