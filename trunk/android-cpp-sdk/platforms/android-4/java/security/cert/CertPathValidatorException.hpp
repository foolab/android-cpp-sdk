/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.CertPathValidatorException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace security { class GeneralSecurityException; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPath; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/security/GeneralSecurityException.hpp>
#include <java/security/cert/CertPath.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CertPathValidatorException;
	class CertPathValidatorException
		: public object<CertPathValidatorException>
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

		explicit CertPathValidatorException(jobject jobj)
		: object<CertPathValidatorException>(jobj)
		{
		}

		operator local_ref<java::security::GeneralSecurityException>() const;


		CertPathValidatorException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&, local_ref< java::security::cert::CertPath > const&, jint);
		CertPathValidatorException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		CertPathValidatorException(local_ref< java::lang::Throwable > const&);
		CertPathValidatorException(local_ref< java::lang::String > const&);
		CertPathValidatorException();
		local_ref< java::security::cert::CertPath > getCertPath();
		jint getIndex();
	}; //class CertPathValidatorException

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::cert::CertPathValidatorException::operator local_ref<java::security::GeneralSecurityException>() const
{
	return local_ref<java::security::GeneralSecurityException>(get_jobject());
}


java::security::cert::CertPathValidatorException::CertPathValidatorException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1, local_ref< java::security::cert::CertPath > const &a2, jint a3)
: object<java::security::cert::CertPathValidatorException>(
	call_new_object<
		java::security::cert::CertPathValidatorException::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_NAME(0),
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3)
)
{
}



java::security::cert::CertPathValidatorException::CertPathValidatorException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<java::security::cert::CertPathValidatorException>(
	call_new_object<
		java::security::cert::CertPathValidatorException::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_NAME(1),
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



java::security::cert::CertPathValidatorException::CertPathValidatorException(local_ref< java::lang::Throwable > const &a0)
: object<java::security::cert::CertPathValidatorException>(
	call_new_object<
		java::security::cert::CertPathValidatorException::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_NAME(2),
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}



java::security::cert::CertPathValidatorException::CertPathValidatorException(local_ref< java::lang::String > const &a0)
: object<java::security::cert::CertPathValidatorException>(
	call_new_object<
		java::security::cert::CertPathValidatorException::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_NAME(3),
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}



java::security::cert::CertPathValidatorException::CertPathValidatorException()
: object<java::security::cert::CertPathValidatorException>(
	call_new_object<
		java::security::cert::CertPathValidatorException::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_NAME(4),
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_SIGNATURE(4)>
	()
)
{
}


local_ref< java::security::cert::CertPath > java::security::cert::CertPathValidatorException::getCertPath()
{
	return call_method<
		java::security::cert::CertPathValidatorException::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_NAME(5),
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::security::cert::CertPath > >
	(get_jobject());
}

jint java::security::cert::CertPathValidatorException::getIndex()
{
	return call_method<
		java::security::cert::CertPathValidatorException::J2CPP_CLASS_NAME,
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_NAME(6),
		java::security::cert::CertPathValidatorException::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::cert::CertPathValidatorException,"java/security/cert/CertPathValidatorException")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidatorException,0,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;Ljava/security/cert/CertPath;I)V")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidatorException,1,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidatorException,2,"<init>","(Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidatorException,3,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidatorException,4,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidatorException,5,"getCertPath","()Ljava/security/cert/CertPath;")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathValidatorException,6,"getIndex","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTPATHVALIDATOREXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION