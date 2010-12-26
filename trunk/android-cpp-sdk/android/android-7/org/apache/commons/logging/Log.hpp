/*================================================================================
  code generated by: java2cpp
  class: org.apache.commons.logging.Log
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_COMMONS_LOGGING_LOG_HPP_DECL
#define J2CPP_ORG_APACHE_COMMONS_LOGGING_LOG_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace commons { namespace logging {

	class Log;
	class Log
		: public cpp_object<Log>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)

		Log(jobject jobj)
		: cpp_object<Log>(jobj)
		{
		}

		cpp_boolean isDebugEnabled();
		cpp_boolean isErrorEnabled();
		cpp_boolean isFatalEnabled();
		cpp_boolean isInfoEnabled();
		cpp_boolean isTraceEnabled();
		cpp_boolean isWarnEnabled();
		void trace(local_ref< java::lang::Object > const&);
		void trace(local_ref< java::lang::Object > const&, local_ref< java::lang::Throwable > const&);
		void debug(local_ref< java::lang::Object > const&);
		void debug(local_ref< java::lang::Object > const&, local_ref< java::lang::Throwable > const&);
		void info(local_ref< java::lang::Object > const&);
		void info(local_ref< java::lang::Object > const&, local_ref< java::lang::Throwable > const&);
		void warn(local_ref< java::lang::Object > const&);
		void warn(local_ref< java::lang::Object > const&, local_ref< java::lang::Throwable > const&);
		void error(local_ref< java::lang::Object > const&);
		void error(local_ref< java::lang::Object > const&, local_ref< java::lang::Throwable > const&);
		void fatal(local_ref< java::lang::Object > const&);
		void fatal(local_ref< java::lang::Object > const&, local_ref< java::lang::Throwable > const&);
	}; //class Log

} //namespace logging
} //namespace commons
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_COMMONS_LOGGING_LOG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_COMMONS_LOGGING_LOG_HPP_IMPL
#define J2CPP_ORG_APACHE_COMMONS_LOGGING_LOG_HPP_IMPL

namespace j2cpp {


cpp_boolean org::apache::commons::logging::Log::isDebugEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean org::apache::commons::logging::Log::isErrorEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean org::apache::commons::logging::Log::isFatalEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean org::apache::commons::logging::Log::isInfoEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean org::apache::commons::logging::Log::isTraceEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean org::apache::commons::logging::Log::isWarnEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void org::apache::commons::logging::Log::trace(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::commons::logging::Log::trace(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::commons::logging::Log::debug(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::commons::logging::Log::debug(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::commons::logging::Log::info(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::commons::logging::Log::info(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::commons::logging::Log::warn(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::commons::logging::Log::warn(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::commons::logging::Log::error(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::commons::logging::Log::error(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::commons::logging::Log::fatal(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::commons::logging::Log::fatal(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::commons::logging::Log,"org/apache/commons/logging/Log")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,0,"isDebugEnabled","()Z")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,1,"isErrorEnabled","()Z")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,2,"isFatalEnabled","()Z")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,3,"isInfoEnabled","()Z")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,4,"isTraceEnabled","()Z")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,5,"isWarnEnabled","()Z")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,6,"trace","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,7,"trace","(Ljava/lang/Object;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,8,"debug","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,9,"debug","(Ljava/lang/Object;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,10,"info","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,11,"info","(Ljava/lang/Object;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,12,"warn","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,13,"warn","(Ljava/lang/Object;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,14,"error","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,15,"error","(Ljava/lang/Object;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,16,"fatal","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::apache::commons::logging::Log,17,"fatal","(Ljava/lang/Object;Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_COMMONS_LOGGING_LOG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
