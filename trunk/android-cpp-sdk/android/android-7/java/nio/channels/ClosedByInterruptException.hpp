/*================================================================================
  code generated by: java2cpp
  class: java.nio.channels.ClosedByInterruptException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION_HPP_DECL






namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class ClosedByInterruptException;
	class ClosedByInterruptException
		: public cpp_object<ClosedByInterruptException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		ClosedByInterruptException(jobject jobj)
		: cpp_object<ClosedByInterruptException>(jobj)
		{
		}

	}; //class ClosedByInterruptException

} //namespace channels
} //namespace nio
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::nio::channels::ClosedByInterruptException > create< java::nio::channels::ClosedByInterruptException>()
{
	return local_ref< java::nio::channels::ClosedByInterruptException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::nio::channels::ClosedByInterruptException::J2CPP_CLASS_NAME>(),
			get_method_id<java::nio::channels::ClosedByInterruptException::J2CPP_CLASS_NAME, java::nio::channels::ClosedByInterruptException::J2CPP_METHOD_NAME(0), java::nio::channels::ClosedByInterruptException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::nio::channels::ClosedByInterruptException,"java/nio/channels/ClosedByInterruptException")
J2CPP_DEFINE_METHOD(java::nio::channels::ClosedByInterruptException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_CLOSEDBYINTERRUPTEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
