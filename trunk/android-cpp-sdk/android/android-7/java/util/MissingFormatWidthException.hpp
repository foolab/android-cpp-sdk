/*================================================================================
  code generated by: java2cpp
  class: java.util.MissingFormatWidthException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_MISSINGFORMATWIDTHEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_MISSINGFORMATWIDTHEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util {

	class MissingFormatWidthException;
	class MissingFormatWidthException
		: public cpp_object<MissingFormatWidthException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		MissingFormatWidthException(jobject jobj)
		: cpp_object<MissingFormatWidthException>(jobj)
		{
		}

		local_ref< java::lang::String > getFormatSpecifier();
		local_ref< java::lang::String > getMessage();
	}; //class MissingFormatWidthException

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_MISSINGFORMATWIDTHEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_MISSINGFORMATWIDTHEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_MISSINGFORMATWIDTHEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::MissingFormatWidthException > create< java::util::MissingFormatWidthException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::MissingFormatWidthException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::MissingFormatWidthException::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::MissingFormatWidthException::J2CPP_CLASS_NAME, java::util::MissingFormatWidthException::J2CPP_METHOD_NAME(0), java::util::MissingFormatWidthException::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::MissingFormatWidthException::getFormatSpecifier()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > java::util::MissingFormatWidthException::getMessage()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::MissingFormatWidthException,"java/util/MissingFormatWidthException")
J2CPP_DEFINE_METHOD(java::util::MissingFormatWidthException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::MissingFormatWidthException,1,"getFormatSpecifier","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::MissingFormatWidthException,2,"getMessage","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_MISSINGFORMATWIDTHEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
