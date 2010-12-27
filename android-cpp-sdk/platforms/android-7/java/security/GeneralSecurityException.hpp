/*================================================================================
  code generated by: java2cpp
  class: java.security.GeneralSecurityException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_GENERALSECURITYEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_GENERALSECURITYEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/lang/Exception.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace security {

	class GeneralSecurityException;
	class GeneralSecurityException
		: public cpp_object<GeneralSecurityException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit GeneralSecurityException(jobject jobj)
		: cpp_object<GeneralSecurityException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;


		GeneralSecurityException(local_ref< java::lang::String > const&);
		GeneralSecurityException();
		GeneralSecurityException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		GeneralSecurityException(local_ref< java::lang::Throwable > const&);
	}; //class GeneralSecurityException

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_GENERALSECURITYEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_GENERALSECURITYEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_GENERALSECURITYEXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::GeneralSecurityException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jtype());
}


java::security::GeneralSecurityException::GeneralSecurityException(local_ref< java::lang::String > const &a0)
: cpp_object<java::security::GeneralSecurityException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::GeneralSecurityException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::GeneralSecurityException::J2CPP_CLASS_NAME, java::security::GeneralSecurityException::J2CPP_METHOD_NAME(0), java::security::GeneralSecurityException::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



java::security::GeneralSecurityException::GeneralSecurityException()
: cpp_object<java::security::GeneralSecurityException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::GeneralSecurityException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::GeneralSecurityException::J2CPP_CLASS_NAME, java::security::GeneralSecurityException::J2CPP_METHOD_NAME(1), java::security::GeneralSecurityException::J2CPP_METHOD_SIGNATURE(1), false>()
	)
)
{
}



java::security::GeneralSecurityException::GeneralSecurityException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: cpp_object<java::security::GeneralSecurityException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::GeneralSecurityException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::GeneralSecurityException::J2CPP_CLASS_NAME, java::security::GeneralSecurityException::J2CPP_METHOD_NAME(2), java::security::GeneralSecurityException::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



java::security::GeneralSecurityException::GeneralSecurityException(local_ref< java::lang::Throwable > const &a0)
: cpp_object<java::security::GeneralSecurityException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::GeneralSecurityException::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::GeneralSecurityException::J2CPP_CLASS_NAME, java::security::GeneralSecurityException::J2CPP_METHOD_NAME(3), java::security::GeneralSecurityException::J2CPP_METHOD_SIGNATURE(3), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(java::security::GeneralSecurityException,"java/security/GeneralSecurityException")
J2CPP_DEFINE_METHOD(java::security::GeneralSecurityException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::GeneralSecurityException,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::GeneralSecurityException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::security::GeneralSecurityException,3,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_GENERALSECURITYEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
