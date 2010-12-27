/*================================================================================
  code generated by: java2cpp
  class: java.security.cert.CertificateException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTIFICATEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CERTIFICATEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace security { class GeneralSecurityException; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/security/GeneralSecurityException.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CertificateException;
	class CertificateException
		: public cpp_object<CertificateException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit CertificateException(jobject jobj)
		: cpp_object<CertificateException>(jobj)
		{
		}

		operator local_ref<java::security::GeneralSecurityException>() const;


		CertificateException(local_ref< java::lang::String > const&);
		CertificateException();
		CertificateException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		CertificateException(local_ref< java::lang::Throwable > const&);
	}; //class CertificateException

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTIFICATEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTIFICATEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CERTIFICATEEXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::cert::CertificateException::operator local_ref<java::security::GeneralSecurityException>() const
{
	return local_ref<java::security::GeneralSecurityException>(get_jtype());
}


java::security::cert::CertificateException::CertificateException(local_ref< java::lang::String > const &a0)
: cpp_object<java::security::cert::CertificateException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::cert::CertificateException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::cert::CertificateException::J2CPP_CLASS_NAME, java::security::cert::CertificateException::J2CPP_METHOD_NAME(0), java::security::cert::CertificateException::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



java::security::cert::CertificateException::CertificateException()
: cpp_object<java::security::cert::CertificateException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::cert::CertificateException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::cert::CertificateException::J2CPP_CLASS_NAME, java::security::cert::CertificateException::J2CPP_METHOD_NAME(1), java::security::cert::CertificateException::J2CPP_METHOD_SIGNATURE(1), false>()
	)
)
{
}



java::security::cert::CertificateException::CertificateException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: cpp_object<java::security::cert::CertificateException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::cert::CertificateException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::cert::CertificateException::J2CPP_CLASS_NAME, java::security::cert::CertificateException::J2CPP_METHOD_NAME(2), java::security::cert::CertificateException::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



java::security::cert::CertificateException::CertificateException(local_ref< java::lang::Throwable > const &a0)
: cpp_object<java::security::cert::CertificateException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::cert::CertificateException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::cert::CertificateException::J2CPP_CLASS_NAME, java::security::cert::CertificateException::J2CPP_METHOD_NAME(3), java::security::cert::CertificateException::J2CPP_METHOD_SIGNATURE(3), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(java::security::cert::CertificateException,"java/security/cert/CertificateException")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateException,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::security::cert::CertificateException,3,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTIFICATEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
