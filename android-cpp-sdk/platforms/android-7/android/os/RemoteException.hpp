/*================================================================================
  code generated by: java2cpp
  class: android.os.RemoteException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_REMOTEEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_OS_REMOTEEXCEPTION_HPP_DECL


namespace j2cpp { namespace android { namespace util { class AndroidException; } } }


#include <android/util/AndroidException.hpp>


namespace j2cpp {

namespace android { namespace os {

	class RemoteException;
	class RemoteException
		: public cpp_object<RemoteException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit RemoteException(jobject jobj)
		: cpp_object<RemoteException>(jobj)
		{
		}

		operator local_ref<android::util::AndroidException>() const;


		RemoteException();
	}; //class RemoteException

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_REMOTEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_REMOTEEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_OS_REMOTEEXCEPTION_HPP_IMPL

namespace j2cpp {



android::os::RemoteException::operator local_ref<android::util::AndroidException>() const
{
	return local_ref<android::util::AndroidException>(get_jtype());
}


android::os::RemoteException::RemoteException()
: cpp_object<android::os::RemoteException>(
	environment::get().get_jenv()->NewObject(
		get_class<android::os::RemoteException::J2CPP_CLASS_NAME>(),
		get_method_id<android::os::RemoteException::J2CPP_CLASS_NAME, android::os::RemoteException::J2CPP_METHOD_NAME(0), android::os::RemoteException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



J2CPP_DEFINE_CLASS(android::os::RemoteException,"android/os/RemoteException")
J2CPP_DEFINE_METHOD(android::os::RemoteException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_REMOTEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
