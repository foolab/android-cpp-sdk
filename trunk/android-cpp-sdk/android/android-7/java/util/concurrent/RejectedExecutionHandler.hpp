/*================================================================================
  code generated by: java2cpp
  class: java.util.concurrent.RejectedExecutionHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONHANDLER_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class ThreadPoolExecutor; } } } }


#include <java/lang/Runnable.hpp>
#include <java/util/concurrent/ThreadPoolExecutor.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class RejectedExecutionHandler;
	class RejectedExecutionHandler
		: public cpp_object<RejectedExecutionHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		RejectedExecutionHandler(jobject jobj)
		: cpp_object<RejectedExecutionHandler>(jobj)
		{
		}

		void rejectedExecution(local_ref< java::lang::Runnable > const&, local_ref< java::util::concurrent::ThreadPoolExecutor > const&);
	}; //class RejectedExecutionHandler

} //namespace concurrent
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONHANDLER_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONHANDLER_HPP_IMPL

namespace j2cpp {


void java::util::concurrent::RejectedExecutionHandler::rejectedExecution(local_ref< java::lang::Runnable > const &a0, local_ref< java::util::concurrent::ThreadPoolExecutor > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::RejectedExecutionHandler,"java/util/concurrent/RejectedExecutionHandler")
J2CPP_DEFINE_METHOD(java::util::concurrent::RejectedExecutionHandler,0,"rejectedExecution","(Ljava/lang/Runnable;Ljava/util/concurrent/ThreadPoolExecutor;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_REJECTEDEXECUTIONHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
