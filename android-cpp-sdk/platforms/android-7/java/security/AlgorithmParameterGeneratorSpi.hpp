/*================================================================================
  code generated by: java2cpp
  class: java.security.AlgorithmParameterGeneratorSpi
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERGENERATORSPI_HPP_DECL
#define J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERGENERATORSPI_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace security {

	class AlgorithmParameterGeneratorSpi;
	class AlgorithmParameterGeneratorSpi
		: public cpp_object<AlgorithmParameterGeneratorSpi>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit AlgorithmParameterGeneratorSpi(jobject jobj)
		: cpp_object<AlgorithmParameterGeneratorSpi>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AlgorithmParameterGeneratorSpi();
	}; //class AlgorithmParameterGeneratorSpi

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERGENERATORSPI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERGENERATORSPI_HPP_IMPL
#define J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERGENERATORSPI_HPP_IMPL

namespace j2cpp {



java::security::AlgorithmParameterGeneratorSpi::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


java::security::AlgorithmParameterGeneratorSpi::AlgorithmParameterGeneratorSpi()
: cpp_object<java::security::AlgorithmParameterGeneratorSpi>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::AlgorithmParameterGeneratorSpi::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::AlgorithmParameterGeneratorSpi::J2CPP_CLASS_NAME, java::security::AlgorithmParameterGeneratorSpi::J2CPP_METHOD_NAME(0), java::security::AlgorithmParameterGeneratorSpi::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}






J2CPP_DEFINE_CLASS(java::security::AlgorithmParameterGeneratorSpi,"java/security/AlgorithmParameterGeneratorSpi")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGeneratorSpi,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGeneratorSpi,1,"engineInit","(ILjava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGeneratorSpi,2,"engineInit","(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(java::security::AlgorithmParameterGeneratorSpi,3,"engineGenerateParameters","()Ljava/security/AlgorithmParameters;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ALGORITHMPARAMETERGENERATORSPI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
