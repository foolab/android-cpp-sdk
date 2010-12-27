/*================================================================================
  code generated by: java2cpp
  class: android.net.Credentials
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_CREDENTIALS_HPP_DECL
#define J2CPP_ANDROID_NET_CREDENTIALS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace net {

	class Credentials;
	class Credentials
		: public cpp_object<Credentials>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit Credentials(jobject jobj)
		: cpp_object<Credentials>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Credentials(cpp_int const&, cpp_int const&, cpp_int const&);
		cpp_int getPid();
		cpp_int getUid();
		cpp_int getGid();
	}; //class Credentials

} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_CREDENTIALS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_CREDENTIALS_HPP_IMPL
#define J2CPP_ANDROID_NET_CREDENTIALS_HPP_IMPL

namespace j2cpp {



android::net::Credentials::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::net::Credentials::Credentials(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2)
: cpp_object<android::net::Credentials>(
	environment::get().get_jenv()->NewObject(
		get_class<android::net::Credentials::J2CPP_CLASS_NAME>(),
		get_method_id<android::net::Credentials::J2CPP_CLASS_NAME, android::net::Credentials::J2CPP_METHOD_NAME(0), android::net::Credentials::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}


cpp_int android::net::Credentials::getPid()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int android::net::Credentials::getUid()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::net::Credentials::getGid()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::net::Credentials,"android/net/Credentials")
J2CPP_DEFINE_METHOD(android::net::Credentials,0,"<init>","(III)V")
J2CPP_DEFINE_METHOD(android::net::Credentials,1,"getPid","()I")
J2CPP_DEFINE_METHOD(android::net::Credentials,2,"getUid","()I")
J2CPP_DEFINE_METHOD(android::net::Credentials,3,"getGid","()I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_CREDENTIALS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
