/*================================================================================
  code generated by: java2cpp
  class: java.util.concurrent.BrokenBarrierException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class BrokenBarrierException;
	class BrokenBarrierException
		: public cpp_object<BrokenBarrierException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		BrokenBarrierException(jobject jobj)
		: cpp_object<BrokenBarrierException>(jobj)
		{
		}

	}; //class BrokenBarrierException

} //namespace concurrent
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::concurrent::BrokenBarrierException > create< java::util::concurrent::BrokenBarrierException>()
{
	return local_ref< java::util::concurrent::BrokenBarrierException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::BrokenBarrierException::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::BrokenBarrierException::J2CPP_CLASS_NAME, java::util::concurrent::BrokenBarrierException::J2CPP_METHOD_NAME(0), java::util::concurrent::BrokenBarrierException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::util::concurrent::BrokenBarrierException > create< java::util::concurrent::BrokenBarrierException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::concurrent::BrokenBarrierException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::BrokenBarrierException::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::BrokenBarrierException::J2CPP_CLASS_NAME, java::util::concurrent::BrokenBarrierException::J2CPP_METHOD_NAME(1), java::util::concurrent::BrokenBarrierException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::BrokenBarrierException,"java/util/concurrent/BrokenBarrierException")
J2CPP_DEFINE_METHOD(java::util::concurrent::BrokenBarrierException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::BrokenBarrierException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_BROKENBARRIEREXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION