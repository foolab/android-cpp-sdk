/*================================================================================
  code generated by: java2cpp
  class: java.security.AlgorithmParametersSpi
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERSSPI_HPP_DECL
#define J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERSSPI_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace security {

	class AlgorithmParametersSpi;
	class AlgorithmParametersSpi
		: public cpp_object<AlgorithmParametersSpi>
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

		explicit AlgorithmParametersSpi(jobject jobj)
		: cpp_object<AlgorithmParametersSpi>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AlgorithmParametersSpi();
	}; //class AlgorithmParametersSpi

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERSSPI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERSSPI_HPP_IMPL
#define J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERSSPI_HPP_IMPL

namespace j2cpp {



java::security::AlgorithmParametersSpi::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


java::security::AlgorithmParametersSpi::AlgorithmParametersSpi()
: cpp_object<java::security::AlgorithmParametersSpi>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::AlgorithmParametersSpi::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::AlgorithmParametersSpi::J2CPP_CLASS_NAME, java::security::AlgorithmParametersSpi::J2CPP_METHOD_NAME(0), java::security::AlgorithmParametersSpi::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}










J2CPP_DEFINE_CLASS(java::security::AlgorithmParametersSpi,"java/security/AlgorithmParametersSpi")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParametersSpi,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParametersSpi,1,"engineInit","(Ljava/security/spec/AlgorithmParameterSpec;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParametersSpi,2,"engineInit","([B)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParametersSpi,3,"engineInit","([BLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParametersSpi,4,"engineGetParameterSpec","(Ljava/lang/Class;)Ljava/security/spec/AlgorithmParameterSpec;")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParametersSpi,5,"engineGetEncoded","()[B")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParametersSpi,6,"engineGetEncoded","(Ljava/lang/String;)[B")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParametersSpi,7,"engineToString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERSSPI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
