/*================================================================================
  code generated by: java2cpp
  class: java.util.concurrent.Delayed
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_DELAYED_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_DELAYED_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }


#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class Delayed;
	class Delayed
		: public cpp_object<Delayed>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit Delayed(jobject jobj)
		: cpp_object<Delayed>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Comparable>() const;


		cpp_long getDelay(local_ref< java::util::concurrent::TimeUnit > const&);
	}; //class Delayed

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_DELAYED_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_DELAYED_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_DELAYED_HPP_IMPL

namespace j2cpp {



java::util::concurrent::Delayed::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::util::concurrent::Delayed::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jtype());
}

cpp_long java::util::concurrent::Delayed::getDelay(local_ref< java::util::concurrent::TimeUnit > const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::Delayed,"java/util/concurrent/Delayed")
J2CPP_DEFINE_METHOD(java::util::concurrent::Delayed,0,"getDelay","(Ljava/util/concurrent/TimeUnit;)J")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_DELAYED_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
