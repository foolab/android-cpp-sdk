/*================================================================================
  code generated by: java2cpp
  class: javax.crypto.spec.PBEKeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_PBEKEYSPEC_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_SPEC_PBEKEYSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class KeySpec; } } } }


#include <java/lang/Object.hpp>
#include <java/security/spec/KeySpec.hpp>


namespace j2cpp {

namespace javax { namespace crypto { namespace spec {

	class PBEKeySpec;
	class PBEKeySpec
		: public cpp_object<PBEKeySpec>
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

		explicit PBEKeySpec(jobject jobj)
		: cpp_object<PBEKeySpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::spec::KeySpec>() const;


		PBEKeySpec(local_ref< cpp_char_array<1> > const&);
		PBEKeySpec(local_ref< cpp_char_array<1> > const&, local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		PBEKeySpec(local_ref< cpp_char_array<1> > const&, local_ref< cpp_byte_array<1> > const&, cpp_int const&);
		void clearPassword();
		local_ref< cpp_char_array<1> > getPassword();
		local_ref< cpp_byte_array<1> > getSalt();
		cpp_int getIterationCount();
		cpp_int getKeyLength();
	}; //class PBEKeySpec

} //namespace spec
} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_PBEKEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_PBEKEYSPEC_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_SPEC_PBEKEYSPEC_HPP_IMPL

namespace j2cpp {



javax::crypto::spec::PBEKeySpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

javax::crypto::spec::PBEKeySpec::operator local_ref<java::security::spec::KeySpec>() const
{
	return local_ref<java::security::spec::KeySpec>(get_jtype());
}


javax::crypto::spec::PBEKeySpec::PBEKeySpec(local_ref< cpp_char_array<1> > const &a0)
: cpp_object<javax::crypto::spec::PBEKeySpec>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::crypto::spec::PBEKeySpec::J2CPP_CLASS_NAME>(),
		get_method_id<javax::crypto::spec::PBEKeySpec::J2CPP_CLASS_NAME, javax::crypto::spec::PBEKeySpec::J2CPP_METHOD_NAME(0), javax::crypto::spec::PBEKeySpec::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



javax::crypto::spec::PBEKeySpec::PBEKeySpec(local_ref< cpp_char_array<1> > const &a0, local_ref< cpp_byte_array<1> > const &a1, cpp_int const &a2, cpp_int const &a3)
: cpp_object<javax::crypto::spec::PBEKeySpec>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::crypto::spec::PBEKeySpec::J2CPP_CLASS_NAME>(),
		get_method_id<javax::crypto::spec::PBEKeySpec::J2CPP_CLASS_NAME, javax::crypto::spec::PBEKeySpec::J2CPP_METHOD_NAME(1), javax::crypto::spec::PBEKeySpec::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
	)
)
{
}



javax::crypto::spec::PBEKeySpec::PBEKeySpec(local_ref< cpp_char_array<1> > const &a0, local_ref< cpp_byte_array<1> > const &a1, cpp_int const &a2)
: cpp_object<javax::crypto::spec::PBEKeySpec>(
	environment::get().get_jenv()->NewObject(
		get_class<javax::crypto::spec::PBEKeySpec::J2CPP_CLASS_NAME>(),
		get_method_id<javax::crypto::spec::PBEKeySpec::J2CPP_CLASS_NAME, javax::crypto::spec::PBEKeySpec::J2CPP_METHOD_NAME(2), javax::crypto::spec::PBEKeySpec::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}


void javax::crypto::spec::PBEKeySpec::clearPassword()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< cpp_char_array<1> > javax::crypto::spec::PBEKeySpec::getPassword()
{
	return local_ref< cpp_char_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > javax::crypto::spec::PBEKeySpec::getSalt()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int javax::crypto::spec::PBEKeySpec::getIterationCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int javax::crypto::spec::PBEKeySpec::getKeyLength()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::crypto::spec::PBEKeySpec,"javax/crypto/spec/PBEKeySpec")
J2CPP_DEFINE_METHOD(javax::crypto::spec::PBEKeySpec,0,"<init>","([C)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::PBEKeySpec,1,"<init>","([C[BII)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::PBEKeySpec,2,"<init>","([C[BI)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::PBEKeySpec,3,"clearPassword","()V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::PBEKeySpec,4,"getPassword","()[C")
J2CPP_DEFINE_METHOD(javax::crypto::spec::PBEKeySpec,5,"getSalt","()[B")
J2CPP_DEFINE_METHOD(javax::crypto::spec::PBEKeySpec,6,"getIterationCount","()I")
J2CPP_DEFINE_METHOD(javax::crypto::spec::PBEKeySpec,7,"getKeyLength","()I")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_PBEKEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
