/*================================================================================
  code generated by: java2cpp
  class: java.security.spec.PSSParameterSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_PSSPARAMETERSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_PSSPARAMETERSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class PSSParameterSpec;
	class PSSParameterSpec
		: public cpp_object<PSSParameterSpec>
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
		J2CPP_DECLARE_FIELD(0)

		explicit PSSParameterSpec(jobject jobj)
		: cpp_object<PSSParameterSpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::spec::AlgorithmParameterSpec>() const;


		PSSParameterSpec(cpp_int const&);
		PSSParameterSpec(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::security::spec::AlgorithmParameterSpec > const&, cpp_int const&, cpp_int const&);
		cpp_int getSaltLength();
		local_ref< java::lang::String > getDigestAlgorithm();
		local_ref< java::lang::String > getMGFAlgorithm();
		local_ref< java::security::spec::AlgorithmParameterSpec > getMGFParameters();
		cpp_int getTrailerField();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::security::spec::PSSParameterSpec > > DEFAULT;
	}; //class PSSParameterSpec

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_PSSPARAMETERSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_PSSPARAMETERSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_PSSPARAMETERSPEC_HPP_IMPL

namespace j2cpp {



java::security::spec::PSSParameterSpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::security::spec::PSSParameterSpec::operator local_ref<java::security::spec::AlgorithmParameterSpec>() const
{
	return local_ref<java::security::spec::AlgorithmParameterSpec>(get_jtype());
}


java::security::spec::PSSParameterSpec::PSSParameterSpec(cpp_int const &a0)
: cpp_object<java::security::spec::PSSParameterSpec>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::spec::PSSParameterSpec::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::spec::PSSParameterSpec::J2CPP_CLASS_NAME, java::security::spec::PSSParameterSpec::J2CPP_METHOD_NAME(0), java::security::spec::PSSParameterSpec::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



java::security::spec::PSSParameterSpec::PSSParameterSpec(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::security::spec::AlgorithmParameterSpec > const &a2, cpp_int const &a3, cpp_int const &a4)
: cpp_object<java::security::spec::PSSParameterSpec>(
	environment::get().get_jenv()->NewObject(
		get_class<java::security::spec::PSSParameterSpec::J2CPP_CLASS_NAME>(),
		get_method_id<java::security::spec::PSSParameterSpec::J2CPP_CLASS_NAME, java::security::spec::PSSParameterSpec::J2CPP_METHOD_NAME(1), java::security::spec::PSSParameterSpec::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
	)
)
{
}


cpp_int java::security::spec::PSSParameterSpec::getSaltLength()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > java::security::spec::PSSParameterSpec::getDigestAlgorithm()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::lang::String > java::security::spec::PSSParameterSpec::getMGFAlgorithm()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::security::spec::AlgorithmParameterSpec > java::security::spec::PSSParameterSpec::getMGFParameters()
{
	return local_ref< java::security::spec::AlgorithmParameterSpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int java::security::spec::PSSParameterSpec::getTrailerField()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}



static_field<
	java::security::spec::PSSParameterSpec::J2CPP_CLASS_NAME,
	java::security::spec::PSSParameterSpec::J2CPP_FIELD_NAME(0),
	java::security::spec::PSSParameterSpec::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::security::spec::PSSParameterSpec >
> java::security::spec::PSSParameterSpec::DEFAULT;


J2CPP_DEFINE_CLASS(java::security::spec::PSSParameterSpec,"java/security/spec/PSSParameterSpec")
J2CPP_DEFINE_METHOD(java::security::spec::PSSParameterSpec,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::security::spec::PSSParameterSpec,1,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;II)V")
J2CPP_DEFINE_METHOD(java::security::spec::PSSParameterSpec,2,"getSaltLength","()I")
J2CPP_DEFINE_METHOD(java::security::spec::PSSParameterSpec,3,"getDigestAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::spec::PSSParameterSpec,4,"getMGFAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::spec::PSSParameterSpec,5,"getMGFParameters","()Ljava/security/spec/AlgorithmParameterSpec;")
J2CPP_DEFINE_METHOD(java::security::spec::PSSParameterSpec,6,"getTrailerField","()I")
J2CPP_DEFINE_METHOD(java::security::spec::PSSParameterSpec,7,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::security::spec::PSSParameterSpec,0,"DEFAULT","Ljava/security/spec/PSSParameterSpec;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_PSSPARAMETERSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
