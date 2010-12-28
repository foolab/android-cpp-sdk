/*================================================================================
  code generated by: java2cpp
  class: java.lang.annotation.Documented
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_DOCUMENTED_HPP_DECL
#define J2CPP_JAVA_LANG_ANNOTATION_DOCUMENTED_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/annotation/Annotation.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace annotation {

	class Documented;
	class Documented
		: public cpp_object<Documented>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit Documented(jobject jobj)
		: cpp_object<Documented>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::annotation::Annotation>() const;

	}; //class Documented

} //namespace annotation
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_DOCUMENTED_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_DOCUMENTED_HPP_IMPL
#define J2CPP_JAVA_LANG_ANNOTATION_DOCUMENTED_HPP_IMPL

namespace j2cpp {



java::lang::annotation::Documented::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::lang::annotation::Documented::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jtype());
}

J2CPP_DEFINE_CLASS(java::lang::annotation::Documented,"java/lang/annotation/Documented")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_DOCUMENTED_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION