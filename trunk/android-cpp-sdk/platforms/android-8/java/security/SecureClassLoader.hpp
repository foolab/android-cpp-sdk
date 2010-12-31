/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.SecureClassLoader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SECURECLASSLOADER_HPP_DECL
#define J2CPP_JAVA_SECURITY_SECURECLASSLOADER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }


#include <java/lang/ClassLoader.hpp>


namespace j2cpp {

namespace java { namespace security {

	class SecureClassLoader;
	class SecureClassLoader
		: public object<SecureClassLoader>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit SecureClassLoader(jobject jobj)
		: object<SecureClassLoader>(jobj)
		{
		}

		operator local_ref<java::lang::ClassLoader>() const;


	}; //class SecureClassLoader

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SECURECLASSLOADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SECURECLASSLOADER_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SECURECLASSLOADER_HPP_IMPL

namespace j2cpp {



java::security::SecureClassLoader::operator local_ref<java::lang::ClassLoader>() const
{
	return local_ref<java::lang::ClassLoader>(get_jobject());
}







J2CPP_DEFINE_CLASS(java::security::SecureClassLoader,"java/security/SecureClassLoader")
J2CPP_DEFINE_METHOD(java::security::SecureClassLoader,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::SecureClassLoader,1,"<init>","(Ljava/lang/ClassLoader;)V")
J2CPP_DEFINE_METHOD(java::security::SecureClassLoader,2,"getPermissions","(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;")
J2CPP_DEFINE_METHOD(java::security::SecureClassLoader,3,"defineClass","(Ljava/lang/String;[BIILjava/security/CodeSource;)Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::security::SecureClassLoader,4,"defineClass","(Ljava/lang/String;Ljava/nio/ByteBuffer;Ljava/security/CodeSource;)Ljava/lang/Class;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SECURECLASSLOADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
