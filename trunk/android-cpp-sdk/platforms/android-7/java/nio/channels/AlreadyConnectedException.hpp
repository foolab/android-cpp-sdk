/*================================================================================
  code generated by: java2cpp
  class: java.nio.channels.AlreadyConnectedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_ALREADYCONNECTEDEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_ALREADYCONNECTEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class IllegalStateException; } } }


#include <java/lang/IllegalStateException.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class AlreadyConnectedException;
	class AlreadyConnectedException
		: public cpp_object<AlreadyConnectedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit AlreadyConnectedException(jobject jobj)
		: cpp_object<AlreadyConnectedException>(jobj)
		{
		}

		operator local_ref<java::lang::IllegalStateException>() const;


		AlreadyConnectedException();
	}; //class AlreadyConnectedException

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_ALREADYCONNECTEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_ALREADYCONNECTEDEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_ALREADYCONNECTEDEXCEPTION_HPP_IMPL

namespace j2cpp {



java::nio::channels::AlreadyConnectedException::operator local_ref<java::lang::IllegalStateException>() const
{
	return local_ref<java::lang::IllegalStateException>(get_jtype());
}


java::nio::channels::AlreadyConnectedException::AlreadyConnectedException()
: cpp_object<java::nio::channels::AlreadyConnectedException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::nio::channels::AlreadyConnectedException::J2CPP_CLASS_NAME>(),
		get_method_id<java::nio::channels::AlreadyConnectedException::J2CPP_CLASS_NAME, java::nio::channels::AlreadyConnectedException::J2CPP_METHOD_NAME(0), java::nio::channels::AlreadyConnectedException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



J2CPP_DEFINE_CLASS(java::nio::channels::AlreadyConnectedException,"java/nio/channels/AlreadyConnectedException")
J2CPP_DEFINE_METHOD(java::nio::channels::AlreadyConnectedException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_ALREADYCONNECTEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION