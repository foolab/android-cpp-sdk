/*================================================================================
  code generated by: java2cpp
  class: java.security.cert.CertStoreSpi
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTSTORESPI_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CERTSTORESPI_HPP_DECL


namespace j2cpp { namespace java { namespace security { namespace cert { class CertStoreParameters; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertSelector; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CRLSelector; } } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }


#include <java/security/cert/CRLSelector.hpp>
#include <java/security/cert/CertSelector.hpp>
#include <java/security/cert/CertStoreParameters.hpp>
#include <java/util/Collection.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CertStoreSpi;
	class CertStoreSpi
		: public cpp_object<CertStoreSpi>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		CertStoreSpi(jobject jobj)
		: cpp_object<CertStoreSpi>(jobj)
		{
		}

		local_ref< java::util::Collection > engineGetCertificates(local_ref< java::security::cert::CertSelector > const&);
		local_ref< java::util::Collection > engineGetCRLs(local_ref< java::security::cert::CRLSelector > const&);
	}; //class CertStoreSpi

} //namespace cert
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTSTORESPI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTSTORESPI_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CERTSTORESPI_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::cert::CertStoreSpi > create< java::security::cert::CertStoreSpi>(local_ref< java::security::cert::CertStoreParameters > const &a0)
{
	return local_ref< java::security::cert::CertStoreSpi >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::cert::CertStoreSpi::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::cert::CertStoreSpi::J2CPP_CLASS_NAME, java::security::cert::CertStoreSpi::J2CPP_METHOD_NAME(0), java::security::cert::CertStoreSpi::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Collection > java::security::cert::CertStoreSpi::engineGetCertificates(local_ref< java::security::cert::CertSelector > const &a0)
{
	return local_ref< java::util::Collection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Collection > java::security::cert::CertStoreSpi::engineGetCRLs(local_ref< java::security::cert::CRLSelector > const &a0)
{
	return local_ref< java::util::Collection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::cert::CertStoreSpi,"java/security/cert/CertStoreSpi")
J2CPP_DEFINE_METHOD(java::security::cert::CertStoreSpi,0,"<init>","(Ljava/security/cert/CertStoreParameters;)V")
J2CPP_DEFINE_METHOD(java::security::cert::CertStoreSpi,1,"engineGetCertificates","(Ljava/security/cert/CertSelector;)Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::security::cert::CertStoreSpi,2,"engineGetCRLs","(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTSTORESPI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
