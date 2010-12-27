/*================================================================================
  code generated by: java2cpp
  class: javax.crypto.BadPaddingException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_BADPADDINGEXCEPTION_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_BADPADDINGEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class BadPaddingException;
	class BadPaddingException
		: public cpp_object<BadPaddingException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		BadPaddingException(jobject jobj)
		: cpp_object<BadPaddingException>(jobj)
		{
		}

	}; //class BadPaddingException

} //namespace crypto
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_BADPADDINGEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_BADPADDINGEXCEPTION_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_BADPADDINGEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::crypto::BadPaddingException > create< javax::crypto::BadPaddingException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< javax::crypto::BadPaddingException >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::crypto::BadPaddingException::J2CPP_CLASS_NAME>(),
			get_method_id<javax::crypto::BadPaddingException::J2CPP_CLASS_NAME, javax::crypto::BadPaddingException::J2CPP_METHOD_NAME(0), javax::crypto::BadPaddingException::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< javax::crypto::BadPaddingException > create< javax::crypto::BadPaddingException>()
{
	return local_ref< javax::crypto::BadPaddingException >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::crypto::BadPaddingException::J2CPP_CLASS_NAME>(),
			get_method_id<javax::crypto::BadPaddingException::J2CPP_CLASS_NAME, javax::crypto::BadPaddingException::J2CPP_METHOD_NAME(1), javax::crypto::BadPaddingException::J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::crypto::BadPaddingException,"javax/crypto/BadPaddingException")
J2CPP_DEFINE_METHOD(javax::crypto::BadPaddingException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::crypto::BadPaddingException,1,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_BADPADDINGEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION