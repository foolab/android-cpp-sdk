/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.Key
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEY_HPP_DECL
#define J2CPP_JAVA_SECURITY_KEY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace security {

	class Key;
	class Key
		: public object<Key>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)

		explicit Key(jobject jobj)
		: object<Key>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		local_ref< java::lang::String > getAlgorithm();
		local_ref< java::lang::String > getFormat();
		local_ref< array<jbyte,1> > getEncoded();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jlong > serialVersionUID;
	}; //class Key

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEY_HPP_IMPL
#define J2CPP_JAVA_SECURITY_KEY_HPP_IMPL

namespace j2cpp {



java::security::Key::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::Key::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

local_ref< java::lang::String > java::security::Key::getAlgorithm()
{
	return call_method<
		java::security::Key::J2CPP_CLASS_NAME,
		java::security::Key::J2CPP_METHOD_NAME(0),
		java::security::Key::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::security::Key::getFormat()
{
	return call_method<
		java::security::Key::J2CPP_CLASS_NAME,
		java::security::Key::J2CPP_METHOD_NAME(1),
		java::security::Key::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< array<jbyte,1> > java::security::Key::getEncoded()
{
	return call_method<
		java::security::Key::J2CPP_CLASS_NAME,
		java::security::Key::J2CPP_METHOD_NAME(2),
		java::security::Key::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}


static_field<
	java::security::Key::J2CPP_CLASS_NAME,
	java::security::Key::J2CPP_FIELD_NAME(0),
	java::security::Key::J2CPP_FIELD_SIGNATURE(0),
	jlong
> java::security::Key::serialVersionUID;


J2CPP_DEFINE_CLASS(java::security::Key,"java/security/Key")
J2CPP_DEFINE_METHOD(java::security::Key,0,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Key,1,"getFormat","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::Key,2,"getEncoded","()[B")
J2CPP_DEFINE_FIELD(java::security::Key,0,"serialVersionUID","J")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
