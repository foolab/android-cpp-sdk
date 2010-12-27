/*================================================================================
  code generated by: java2cpp
  class: javax.crypto.spec.DHPublicKeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_DHPUBLICKEYSPEC_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_SPEC_DHPUBLICKEYSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class KeySpec; } } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/spec/KeySpec.hpp>


namespace j2cpp {

namespace javax { namespace crypto { namespace spec {

	class DHPublicKeySpec;
	class DHPublicKeySpec
		: public cpp_object<DHPublicKeySpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit DHPublicKeySpec(jobject jobj)
		: cpp_object<DHPublicKeySpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::spec::KeySpec>() const;


		DHPublicKeySpec(local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&, local_ref< java::math::BigInteger > const&);
		local_ref< java::math::BigInteger > getY();
		local_ref< java::math::BigInteger > getP();
		local_ref< java::math::BigInteger > getG();
	}; //class DHPublicKeySpec

} //namespace spec
} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_DHPUBLICKEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_DHPUBLICKEYSPEC_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_SPEC_DHPUBLICKEYSPEC_HPP_IMPL

namespace j2cpp {



javax::crypto::spec::DHPublicKeySpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

javax::crypto::spec::DHPublicKeySpec::operator local_ref<java::security::spec::KeySpec>() const
{
	return local_ref<java::security::spec::KeySpec>(get_jtype());
}


javax::crypto::spec::DHPublicKeySpec::DHPublicKeySpec(local_ref< java::math::BigInteger > const &a0, local_ref< java::math::BigInteger > const &a1, local_ref< java::math::BigInteger > const &a2)
: cpp_object<javax::crypto::spec::DHPublicKeySpec>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::crypto::spec::DHPublicKeySpec::J2CPP_CLASS_NAME>(),
		get_method_id<javax::crypto::spec::DHPublicKeySpec::J2CPP_CLASS_NAME, javax::crypto::spec::DHPublicKeySpec::J2CPP_METHOD_NAME(0), javax::crypto::spec::DHPublicKeySpec::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}


local_ref< java::math::BigInteger > javax::crypto::spec::DHPublicKeySpec::getY()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::math::BigInteger > javax::crypto::spec::DHPublicKeySpec::getP()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::math::BigInteger > javax::crypto::spec::DHPublicKeySpec::getG()
{
	return local_ref< java::math::BigInteger >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::crypto::spec::DHPublicKeySpec,"javax/crypto/spec/DHPublicKeySpec")
J2CPP_DEFINE_METHOD(javax::crypto::spec::DHPublicKeySpec,0,"<init>","(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::DHPublicKeySpec,1,"getY","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(javax::crypto::spec::DHPublicKeySpec,2,"getP","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(javax::crypto::spec::DHPublicKeySpec,3,"getG","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_DHPUBLICKEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
