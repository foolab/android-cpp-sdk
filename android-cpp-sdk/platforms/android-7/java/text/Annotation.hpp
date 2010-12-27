/*================================================================================
  code generated by: java2cpp
  class: java.text.Annotation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_ANNOTATION_HPP_DECL
#define J2CPP_JAVA_TEXT_ANNOTATION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace text {

	class Annotation;
	class Annotation
		: public cpp_object<Annotation>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit Annotation(jobject jobj)
		: cpp_object<Annotation>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Annotation(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > getValue();
		local_ref< java::lang::String > toString();
	}; //class Annotation

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_ANNOTATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_ANNOTATION_HPP_IMPL
#define J2CPP_JAVA_TEXT_ANNOTATION_HPP_IMPL

namespace j2cpp {



java::text::Annotation::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


java::text::Annotation::Annotation(local_ref< java::lang::Object > const &a0)
: cpp_object<java::text::Annotation>(
	environment::get().get_jenv()->NewObject(
		get_class<java::text::Annotation::J2CPP_CLASS_NAME>(),
		get_method_id<java::text::Annotation::J2CPP_CLASS_NAME, java::text::Annotation::J2CPP_METHOD_NAME(0), java::text::Annotation::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}


local_ref< java::lang::Object > java::text::Annotation::getValue()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > java::text::Annotation::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::text::Annotation,"java/text/Annotation")
J2CPP_DEFINE_METHOD(java::text::Annotation,0,"<init>","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::text::Annotation,1,"getValue","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::Annotation,2,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_ANNOTATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
