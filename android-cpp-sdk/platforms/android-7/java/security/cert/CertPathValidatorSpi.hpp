/*================================================================================
  code generated by: java2cpp
  class: java.security.cert.CertPathValidatorSpi
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATORSPI_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATORSPI_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPath; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPathValidatorResult; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPathParameters; } } } }


#include <java/lang/Object.hpp>
#include <java/security/cert/CertPath.hpp>
#include <java/security/cert/CertPathParameters.hpp>
#include <java/security/cert/CertPathValidatorResult.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CertPathValidatorSpi;
	class CertPathValidatorSpi
		: public cpp_object<CertPathValidatorSpi>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit CertPathValidatorSpi(jobject jobj)
		: cpp_object<CertPathValidatorSpi>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CertPathValidatorSpi();
		local_ref< java::security::cert::CertPathValidatorResult > engineValidate(local_ref< java::security::cert::CertPath > const&, local_ref< java::security::cert::CertPathParameters > const&);
	}; //class CertPathValidatorSpi

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATORSPI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATORSPI_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATORSPI_HPP_IMPL

namespace j2cpp {



java::security::cert::CertPathValidatorSpi::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


java::security::cert::CertPathValidatorSpi::CertPathValidatorSpi()
: cpp_object<java::security::cert::CertPathValidatorSpi>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::cert::CertPathValidatorSpi::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::cert::CertPathValidatorSpi::J2CPP_CLASS_NAME, java::security::cert::CertPathValidatorSpi::J2CPP_METHOD_NAME(0), java::security::cert::CertPathValidatorSpi::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


local_ref< java::security::cert::CertPathValidatorResult > java::security::cert::CertPathValidatorSpi::engineValidate(local_ref< java::security::cert::CertPath > const &a0, local_ref< java::security::cert::CertPathParameters > const &a1)
{
	return local_ref< java::security::cert::CertPathValidatorResult >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::cert::CertPathValidatorSpi,"java/security/cert/CertPathValidatorSpi")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidatorSpi,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidatorSpi,1,"engineValidate","(Ljava/security/cert/CertPath;Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathValidatorResult;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATORSPI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
