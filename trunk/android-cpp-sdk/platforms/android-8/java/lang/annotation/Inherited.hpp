/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.annotation.Inherited
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_INHERITED_HPP_DECL
#define J2CPP_JAVA_LANG_ANNOTATION_INHERITED_HPP_DECL


namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/annotation/Annotation.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace annotation {

	class Inherited;
	class Inherited
		: public object<Inherited>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit Inherited(jobject jobj)
		: object<Inherited>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::annotation::Annotation>() const;

	}; //class Inherited

} //namespace annotation
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_INHERITED_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_ANNOTATION_INHERITED_HPP_IMPL
#define J2CPP_JAVA_LANG_ANNOTATION_INHERITED_HPP_IMPL

namespace j2cpp {



java::lang::annotation::Inherited::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::annotation::Inherited::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jobject());
}

J2CPP_DEFINE_CLASS(java::lang::annotation::Inherited,"java/lang/annotation/Inherited")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_ANNOTATION_INHERITED_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
