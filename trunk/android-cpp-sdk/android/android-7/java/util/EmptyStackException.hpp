/*================================================================================
  code generated by: java2cpp
  class: java.util.EmptyStackException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_EMPTYSTACKEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_EMPTYSTACKEXCEPTION_HPP_DECL






namespace j2cpp {

namespace java { namespace util {

	class EmptyStackException;
	class EmptyStackException
		: public cpp_object<EmptyStackException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		EmptyStackException(jobject jobj)
		: cpp_object<EmptyStackException>(jobj)
		{
		}

	}; //class EmptyStackException

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_EMPTYSTACKEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_EMPTYSTACKEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_EMPTYSTACKEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::EmptyStackException > create< java::util::EmptyStackException>()
{
	return local_ref< java::util::EmptyStackException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::EmptyStackException::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::EmptyStackException::J2CPP_CLASS_NAME, java::util::EmptyStackException::J2CPP_METHOD_NAME(0), java::util::EmptyStackException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::EmptyStackException,"java/util/EmptyStackException")
J2CPP_DEFINE_METHOD(java::util::EmptyStackException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_EMPTYSTACKEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
