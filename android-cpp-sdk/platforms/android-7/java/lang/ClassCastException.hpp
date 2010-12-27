/*================================================================================
  code generated by: java2cpp
  class: java.lang.ClassCastException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_CLASSCASTEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_CLASSCASTEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class ClassCastException;
	class ClassCastException
		: public cpp_object<ClassCastException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ClassCastException(jobject jobj)
		: cpp_object<ClassCastException>(jobj)
		{
		}

		operator local_ref<java::lang::RuntimeException>() const;


		ClassCastException();
		ClassCastException(local_ref< java::lang::String > const&);
	}; //class ClassCastException

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_CLASSCASTEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_CLASSCASTEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_CLASSCASTEXCEPTION_HPP_IMPL

namespace j2cpp {



java::lang::ClassCastException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jtype());
}


java::lang::ClassCastException::ClassCastException()
: cpp_object<java::lang::ClassCastException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::lang::ClassCastException::J2CPP_CLASS_NAME>(),
		get_method_id<java::lang::ClassCastException::J2CPP_CLASS_NAME, java::lang::ClassCastException::J2CPP_METHOD_NAME(0), java::lang::ClassCastException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



java::lang::ClassCastException::ClassCastException(local_ref< java::lang::String > const &a0)
: cpp_object<java::lang::ClassCastException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::lang::ClassCastException::J2CPP_CLASS_NAME>(),
		get_method_id<java::lang::ClassCastException::J2CPP_CLASS_NAME, java::lang::ClassCastException::J2CPP_METHOD_NAME(1), java::lang::ClassCastException::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(java::lang::ClassCastException,"java/lang/ClassCastException")
J2CPP_DEFINE_METHOD(java::lang::ClassCastException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::ClassCastException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_CLASSCASTEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
