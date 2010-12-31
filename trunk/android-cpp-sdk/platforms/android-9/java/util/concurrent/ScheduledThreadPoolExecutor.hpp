/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.ScheduledThreadPoolExecutor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDTHREADPOOLEXECUTOR_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDTHREADPOOLEXECUTOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Callable; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class ThreadPoolExecutor; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Future; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class ThreadFactory; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class ScheduledFuture; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class RejectedExecutionHandler; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class ScheduledExecutorService; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class BlockingQueue; } } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/util/List.hpp>
#include <java/util/concurrent/BlockingQueue.hpp>
#include <java/util/concurrent/Callable.hpp>
#include <java/util/concurrent/Future.hpp>
#include <java/util/concurrent/RejectedExecutionHandler.hpp>
#include <java/util/concurrent/ScheduledExecutorService.hpp>
#include <java/util/concurrent/ScheduledFuture.hpp>
#include <java/util/concurrent/ThreadFactory.hpp>
#include <java/util/concurrent/ThreadPoolExecutor.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class ScheduledThreadPoolExecutor;
	class ScheduledThreadPoolExecutor
		: public object<ScheduledThreadPoolExecutor>
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
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)

		explicit ScheduledThreadPoolExecutor(jobject jobj)
		: object<ScheduledThreadPoolExecutor>(jobj)
		{
		}

		operator local_ref<java::util::concurrent::ThreadPoolExecutor>() const;
		operator local_ref<java::util::concurrent::ScheduledExecutorService>() const;


		ScheduledThreadPoolExecutor(jint);
		ScheduledThreadPoolExecutor(jint, local_ref< java::util::concurrent::ThreadFactory > const&);
		ScheduledThreadPoolExecutor(jint, local_ref< java::util::concurrent::RejectedExecutionHandler > const&);
		ScheduledThreadPoolExecutor(jint, local_ref< java::util::concurrent::ThreadFactory > const&, local_ref< java::util::concurrent::RejectedExecutionHandler > const&);
		local_ref< java::util::concurrent::ScheduledFuture > schedule(local_ref< java::lang::Runnable >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::util::concurrent::ScheduledFuture > schedule(local_ref< java::util::concurrent::Callable >  const&, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::util::concurrent::ScheduledFuture > scheduleAtFixedRate(local_ref< java::lang::Runnable >  const&, jlong, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		local_ref< java::util::concurrent::ScheduledFuture > scheduleWithFixedDelay(local_ref< java::lang::Runnable >  const&, jlong, jlong, local_ref< java::util::concurrent::TimeUnit >  const&);
		void execute(local_ref< java::lang::Runnable >  const&);
		local_ref< java::util::concurrent::Future > submit(local_ref< java::lang::Runnable >  const&);
		local_ref< java::util::concurrent::Future > submit(local_ref< java::lang::Runnable >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::util::concurrent::Future > submit(local_ref< java::util::concurrent::Callable >  const&);
		void setContinueExistingPeriodicTasksAfterShutdownPolicy(jboolean);
		jboolean getContinueExistingPeriodicTasksAfterShutdownPolicy();
		void setExecuteExistingDelayedTasksAfterShutdownPolicy(jboolean);
		jboolean getExecuteExistingDelayedTasksAfterShutdownPolicy();
		void shutdown();
		local_ref< java::util::List > shutdownNow();
		local_ref< java::util::concurrent::BlockingQueue > getQueue();
	}; //class ScheduledThreadPoolExecutor

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDTHREADPOOLEXECUTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDTHREADPOOLEXECUTOR_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDTHREADPOOLEXECUTOR_HPP_IMPL

namespace j2cpp {



java::util::concurrent::ScheduledThreadPoolExecutor::operator local_ref<java::util::concurrent::ThreadPoolExecutor>() const
{
	return local_ref<java::util::concurrent::ThreadPoolExecutor>(get_jobject());
}

java::util::concurrent::ScheduledThreadPoolExecutor::operator local_ref<java::util::concurrent::ScheduledExecutorService>() const
{
	return local_ref<java::util::concurrent::ScheduledExecutorService>(get_jobject());
}


java::util::concurrent::ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(jint a0)
: object<java::util::concurrent::ScheduledThreadPoolExecutor>(
	call_new_object<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(0),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::util::concurrent::ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(jint a0, local_ref< java::util::concurrent::ThreadFactory > const &a1)
: object<java::util::concurrent::ScheduledThreadPoolExecutor>(
	call_new_object<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(1),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



java::util::concurrent::ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(jint a0, local_ref< java::util::concurrent::RejectedExecutionHandler > const &a1)
: object<java::util::concurrent::ScheduledThreadPoolExecutor>(
	call_new_object<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(2),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



java::util::concurrent::ScheduledThreadPoolExecutor::ScheduledThreadPoolExecutor(jint a0, local_ref< java::util::concurrent::ThreadFactory > const &a1, local_ref< java::util::concurrent::RejectedExecutionHandler > const &a2)
: object<java::util::concurrent::ScheduledThreadPoolExecutor>(
	call_new_object<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(3),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(3)>
	(a0, a1, a2)
)
{
}




local_ref< java::util::concurrent::ScheduledFuture > java::util::concurrent::ScheduledThreadPoolExecutor::schedule(local_ref< java::lang::Runnable > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(6),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::concurrent::ScheduledFuture > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::util::concurrent::ScheduledFuture > java::util::concurrent::ScheduledThreadPoolExecutor::schedule(local_ref< java::util::concurrent::Callable > const &a0, jlong a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(7),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::util::concurrent::ScheduledFuture > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::util::concurrent::ScheduledFuture > java::util::concurrent::ScheduledThreadPoolExecutor::scheduleAtFixedRate(local_ref< java::lang::Runnable > const &a0, jlong a1, jlong a2, local_ref< java::util::concurrent::TimeUnit > const &a3)
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(8),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::concurrent::ScheduledFuture > >
	(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::util::concurrent::ScheduledFuture > java::util::concurrent::ScheduledThreadPoolExecutor::scheduleWithFixedDelay(local_ref< java::lang::Runnable > const &a0, jlong a1, jlong a2, local_ref< java::util::concurrent::TimeUnit > const &a3)
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(9),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::concurrent::ScheduledFuture > >
	(get_jobject(), a0, a1, a2, a3);
}

void java::util::concurrent::ScheduledThreadPoolExecutor::execute(local_ref< java::lang::Runnable > const &a0)
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(10),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

local_ref< java::util::concurrent::Future > java::util::concurrent::ScheduledThreadPoolExecutor::submit(local_ref< java::lang::Runnable > const &a0)
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(11),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::util::concurrent::Future > >
	(get_jobject(), a0);
}

local_ref< java::util::concurrent::Future > java::util::concurrent::ScheduledThreadPoolExecutor::submit(local_ref< java::lang::Runnable > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(12),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::util::concurrent::Future > >
	(get_jobject(), a0, a1);
}

local_ref< java::util::concurrent::Future > java::util::concurrent::ScheduledThreadPoolExecutor::submit(local_ref< java::util::concurrent::Callable > const &a0)
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(13),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::util::concurrent::Future > >
	(get_jobject(), a0);
}

void java::util::concurrent::ScheduledThreadPoolExecutor::setContinueExistingPeriodicTasksAfterShutdownPolicy(jboolean a0)
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(14),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::ScheduledThreadPoolExecutor::getContinueExistingPeriodicTasksAfterShutdownPolicy()
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(15),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(15), 
		jboolean >
	(get_jobject());
}

void java::util::concurrent::ScheduledThreadPoolExecutor::setExecuteExistingDelayedTasksAfterShutdownPolicy(jboolean a0)
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(16),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::ScheduledThreadPoolExecutor::getExecuteExistingDelayedTasksAfterShutdownPolicy()
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(17),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(17), 
		jboolean >
	(get_jobject());
}

void java::util::concurrent::ScheduledThreadPoolExecutor::shutdown()
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(18),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject());
}

local_ref< java::util::List > java::util::concurrent::ScheduledThreadPoolExecutor::shutdownNow()
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(19),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::util::List > >
	(get_jobject());
}

local_ref< java::util::concurrent::BlockingQueue > java::util::concurrent::ScheduledThreadPoolExecutor::getQueue()
{
	return call_method<
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_CLASS_NAME,
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_NAME(20),
		java::util::concurrent::ScheduledThreadPoolExecutor::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::util::concurrent::BlockingQueue > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::ScheduledThreadPoolExecutor,"java/util/concurrent/ScheduledThreadPoolExecutor")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,1,"<init>","(ILjava/util/concurrent/ThreadFactory;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,2,"<init>","(ILjava/util/concurrent/RejectedExecutionHandler;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,3,"<init>","(ILjava/util/concurrent/ThreadFactory;Ljava/util/concurrent/RejectedExecutionHandler;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,4,"decorateTask","(Ljava/lang/Runnable;Ljava/util/concurrent/RunnableScheduledFuture;)Ljava/util/concurrent/RunnableScheduledFuture;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,5,"decorateTask","(Ljava/util/concurrent/Callable;Ljava/util/concurrent/RunnableScheduledFuture;)Ljava/util/concurrent/RunnableScheduledFuture;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,6,"schedule","(Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,7,"schedule","(Ljava/util/concurrent/Callable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,8,"scheduleAtFixedRate","(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,9,"scheduleWithFixedDelay","(Ljava/lang/Runnable;JJLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,10,"execute","(Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,11,"submit","(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,12,"submit","(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,13,"submit","(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,14,"setContinueExistingPeriodicTasksAfterShutdownPolicy","(Z)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,15,"getContinueExistingPeriodicTasksAfterShutdownPolicy","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,16,"setExecuteExistingDelayedTasksAfterShutdownPolicy","(Z)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,17,"getExecuteExistingDelayedTasksAfterShutdownPolicy","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,18,"shutdown","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,19,"shutdownNow","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ScheduledThreadPoolExecutor,20,"getQueue","()Ljava/util/concurrent/BlockingQueue;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_SCHEDULEDTHREADPOOLEXECUTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
