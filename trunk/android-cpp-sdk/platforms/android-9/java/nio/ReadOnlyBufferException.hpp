/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.ReadOnlyBufferException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_READONLYBUFFEREXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_READONLYBUFFEREXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class UnsupportedOperationException; } } }


#include <java/lang/UnsupportedOperationException.hpp>


namespace j2cpp {

namespace java { namespace nio {

	class ReadOnlyBufferException;
	class ReadOnlyBufferException
		: public object<ReadOnlyBufferException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit ReadOnlyBufferException(jobject jobj)
		: object<ReadOnlyBufferException>(jobj)
		{
		}

		operator local_ref<java::lang::UnsupportedOperationException>() const;


		ReadOnlyBufferException();
	}; //class ReadOnlyBufferException

} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_READONLYBUFFEREXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_READONLYBUFFEREXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_READONLYBUFFEREXCEPTION_HPP_IMPL

namespace j2cpp {



java::nio::ReadOnlyBufferException::operator local_ref<java::lang::UnsupportedOperationException>() const
{
	return local_ref<java::lang::UnsupportedOperationException>(get_jobject());
}


java::nio::ReadOnlyBufferException::ReadOnlyBufferException()
: object<java::nio::ReadOnlyBufferException>(
	call_new_object<
		java::nio::ReadOnlyBufferException::J2CPP_CLASS_NAME,
		java::nio::ReadOnlyBufferException::J2CPP_METHOD_NAME(0),
		java::nio::ReadOnlyBufferException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



J2CPP_DEFINE_CLASS(java::nio::ReadOnlyBufferException,"java/nio/ReadOnlyBufferException")
J2CPP_DEFINE_METHOD(java::nio::ReadOnlyBufferException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_READONLYBUFFEREXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
