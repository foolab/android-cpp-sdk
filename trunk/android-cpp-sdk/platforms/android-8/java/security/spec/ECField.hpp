/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.spec.ECField
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECFIELD_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_ECFIELD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class ECField;
	class ECField
		: public object<ECField>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit ECField(jobject jobj)
		: object<ECField>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint getFieldSize();
	}; //class ECField

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECFIELD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECFIELD_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_ECFIELD_HPP_IMPL

namespace j2cpp {



java::security::spec::ECField::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint java::security::spec::ECField::getFieldSize()
{
	return call_method<
		java::security::spec::ECField::J2CPP_CLASS_NAME,
		java::security::spec::ECField::J2CPP_METHOD_NAME(0),
		java::security::spec::ECField::J2CPP_METHOD_SIGNATURE(0), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::spec::ECField,"java/security/spec/ECField")
J2CPP_DEFINE_METHOD(java::security::spec::ECField,0,"getFieldSize","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECFIELD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
