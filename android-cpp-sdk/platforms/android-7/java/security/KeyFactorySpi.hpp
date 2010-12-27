/*================================================================================
  code generated by: java2cpp
  class: java.security.KeyFactorySpi
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEYFACTORYSPI_HPP_DECL
#define J2CPP_JAVA_SECURITY_KEYFACTORYSPI_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace security {

	class KeyFactorySpi;
	class KeyFactorySpi
		: public cpp_object<KeyFactorySpi>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit KeyFactorySpi(jobject jobj)
		: cpp_object<KeyFactorySpi>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		KeyFactorySpi();
	}; //class KeyFactorySpi

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEYFACTORYSPI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEYFACTORYSPI_HPP_IMPL
#define J2CPP_JAVA_SECURITY_KEYFACTORYSPI_HPP_IMPL

namespace j2cpp {



java::security::KeyFactorySpi::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


java::security::KeyFactorySpi::KeyFactorySpi()
: cpp_object<java::security::KeyFactorySpi>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::KeyFactorySpi::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::KeyFactorySpi::J2CPP_CLASS_NAME, java::security::KeyFactorySpi::J2CPP_METHOD_NAME(0), java::security::KeyFactorySpi::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}







J2CPP_DEFINE_CLASS(java::security::KeyFactorySpi,"java/security/KeyFactorySpi")
J2CPP_DEFINE_METHOD(java::security::KeyFactorySpi,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::KeyFactorySpi,1,"engineGeneratePublic","(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;")
J2CPP_DEFINE_METHOD(java::security::KeyFactorySpi,2,"engineGeneratePrivate","(Ljava/security/spec/KeySpec;)Ljava/security/PrivateKey;")
J2CPP_DEFINE_METHOD(java::security::KeyFactorySpi,3,"engineGetKeySpec","(Ljava/security/Key;Ljava/lang/Class;)Ljava/security/spec/KeySpec;")
J2CPP_DEFINE_METHOD(java::security::KeyFactorySpi,4,"engineTranslateKey","(Ljava/security/Key;)Ljava/security/Key;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEYFACTORYSPI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
