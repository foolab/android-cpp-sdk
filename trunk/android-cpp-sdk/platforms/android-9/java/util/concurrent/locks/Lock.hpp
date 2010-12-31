/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.locks.Lock
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_LOCK_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_LOCK_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { namespace locks { class Condition; } } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }


#include <java/lang/Object.hpp>
#include <java/util/concurrent/TimeUnit.hpp>
#include <java/util/concurrent/locks/Condition.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace locks {

	class Lock;
	class Lock
		: public object<Lock>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit Lock(jobject jobj)
		: object<Lock>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void lock();
		void lockInterruptibly();
		jboolean tryLock();
		jboolean tryLock(jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		void unlock();
		local_ref< java::util::concurrent::locks::Condition > newCondition();
	}; //class Lock

} //namespace locks
} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_LOCK_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_LOCK_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_LOCK_HPP_IMPL

namespace j2cpp {



java::util::concurrent::locks::Lock::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void java::util::concurrent::locks::Lock::lock()
{
	return call_method<
		java::util::concurrent::locks::Lock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::Lock::J2CPP_METHOD_NAME(0),
		java::util::concurrent::locks::Lock::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject());
}

void java::util::concurrent::locks::Lock::lockInterruptibly()
{
	return call_method<
		java::util::concurrent::locks::Lock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::Lock::J2CPP_METHOD_NAME(1),
		java::util::concurrent::locks::Lock::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

jboolean java::util::concurrent::locks::Lock::tryLock()
{
	return call_method<
		java::util::concurrent::locks::Lock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::Lock::J2CPP_METHOD_NAME(2),
		java::util::concurrent::locks::Lock::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject());
}

jboolean java::util::concurrent::locks::Lock::tryLock(jlong a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return call_method<
		java::util::concurrent::locks::Lock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::Lock::J2CPP_METHOD_NAME(3),
		java::util::concurrent::locks::Lock::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0, a1);
}

void java::util::concurrent::locks::Lock::unlock()
{
	return call_method<
		java::util::concurrent::locks::Lock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::Lock::J2CPP_METHOD_NAME(4),
		java::util::concurrent::locks::Lock::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

local_ref< java::util::concurrent::locks::Condition > java::util::concurrent::locks::Lock::newCondition()
{
	return call_method<
		java::util::concurrent::locks::Lock::J2CPP_CLASS_NAME,
		java::util::concurrent::locks::Lock::J2CPP_METHOD_NAME(5),
		java::util::concurrent::locks::Lock::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::util::concurrent::locks::Condition > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::locks::Lock,"java/util/concurrent/locks/Lock")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::Lock,0,"lock","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::Lock,1,"lockInterruptibly","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::Lock,2,"tryLock","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::Lock,3,"tryLock","(JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::Lock,4,"unlock","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::locks::Lock,5,"newCondition","()Ljava/util/concurrent/locks/Condition;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_LOCKS_LOCK_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
