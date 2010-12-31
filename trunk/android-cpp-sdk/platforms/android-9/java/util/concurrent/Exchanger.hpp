/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.Exchanger
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_EXCHANGER_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_EXCHANGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }


#include <java/lang/Object.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class Exchanger;
	class Exchanger
		: public object<Exchanger>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit Exchanger(jobject jobj)
		: object<Exchanger>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Exchanger();
		local_ref< java::lang::Object > exchange(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > exchange(local_ref< java::lang::Object >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
	}; //class Exchanger

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_EXCHANGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_EXCHANGER_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_EXCHANGER_HPP_IMPL

namespace j2cpp {



java::util::concurrent::Exchanger::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::util::concurrent::Exchanger::Exchanger()
: object<java::util::concurrent::Exchanger>(
	call_new_object<
		java::util::concurrent::Exchanger::J2CPP_CLASS_NAME,
		java::util::concurrent::Exchanger::J2CPP_METHOD_NAME(0),
		java::util::concurrent::Exchanger::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< java::lang::Object > java::util::concurrent::Exchanger::exchange(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::Exchanger::J2CPP_CLASS_NAME,
		java::util::concurrent::Exchanger::J2CPP_METHOD_NAME(1),
		java::util::concurrent::Exchanger::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::Exchanger::exchange(local_ref< java::lang::Object > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::Exchanger::J2CPP_CLASS_NAME,
		java::util::concurrent::Exchanger::J2CPP_METHOD_NAME(2),
		java::util::concurrent::Exchanger::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::Exchanger,"java/util/concurrent/Exchanger")
J2CPP_DEFINE_METHOD(java::util::concurrent::Exchanger,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::Exchanger,1,"exchange","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::Exchanger,2,"exchange","(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_EXCHANGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
