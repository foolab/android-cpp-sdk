/*================================================================================
  code generated by: java2cpp
  class: java.util.jar.JarException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_JAR_JAREXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_JAR_JAREXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class ZipException; } } } }


#include <java/lang/String.hpp>
#include <java/util/zip/ZipException.hpp>


namespace j2cpp {

namespace java { namespace util { namespace jar {

	class JarException;
	class JarException
		: public cpp_object<JarException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit JarException(jobject jobj)
		: cpp_object<JarException>(jobj)
		{
		}

		operator local_ref<java::util::zip::ZipException>() const;


		JarException();
		JarException(local_ref< java::lang::String > const&);
	}; //class JarException

} //namespace jar
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_JAR_JAREXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_JAR_JAREXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_JAR_JAREXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::jar::JarException::operator local_ref<java::util::zip::ZipException>() const
{
	return local_ref<java::util::zip::ZipException>(get_jtype());
}


java::util::jar::JarException::JarException()
: cpp_object<java::util::jar::JarException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::jar::JarException::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::jar::JarException::J2CPP_CLASS_NAME, java::util::jar::JarException::J2CPP_METHOD_NAME(0), java::util::jar::JarException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



java::util::jar::JarException::JarException(local_ref< java::lang::String > const &a0)
: cpp_object<java::util::jar::JarException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::util::jar::JarException::J2CPP_CLASS_NAME>(),
		get_method_id<java::util::jar::JarException::J2CPP_CLASS_NAME, java::util::jar::JarException::J2CPP_METHOD_NAME(1), java::util::jar::JarException::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(java::util::jar::JarException,"java/util/jar/JarException")
J2CPP_DEFINE_METHOD(java::util::jar::JarException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::jar::JarException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_JAR_JAREXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION