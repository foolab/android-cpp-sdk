/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.ThreadGroup
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_THREADGROUP_HPP_DECL
#define J2CPP_JAVA_LANG_THREADGROUP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Thread; } } }
namespace j2cpp { namespace java { namespace lang { namespace Thread_ { class UncaughtExceptionHandler; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Thread.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class ThreadGroup;
	class ThreadGroup
		: public object<ThreadGroup>
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
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)

		explicit ThreadGroup(jobject jobj)
		: object<ThreadGroup>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Thread_::UncaughtExceptionHandler>() const;


		ThreadGroup(local_ref< java::lang::String > const&);
		ThreadGroup(local_ref< java::lang::ThreadGroup > const&, local_ref< java::lang::String > const&);
		jint activeCount();
		jint activeGroupCount();
		jboolean allowThreadSuspension(jboolean);
		void checkAccess();
		void destroy();
		jint enumerate(local_ref< array< local_ref< java::lang::Thread >, 1> >  const&);
		jint enumerate(local_ref< array< local_ref< java::lang::Thread >, 1> >  const&, jboolean);
		jint enumerate(local_ref< array< local_ref< java::lang::ThreadGroup >, 1> >  const&);
		jint enumerate(local_ref< array< local_ref< java::lang::ThreadGroup >, 1> >  const&, jboolean);
		jint getMaxPriority();
		local_ref< java::lang::String > getName();
		local_ref< java::lang::ThreadGroup > getParent();
		void interrupt();
		jboolean isDaemon();
		jboolean isDestroyed();
		void list();
		jboolean parentOf(local_ref< java::lang::ThreadGroup >  const&);
		void resume();
		void setDaemon(jboolean);
		void setMaxPriority(jint);
		void stop();
		void suspend();
		local_ref< java::lang::String > toString();
		void uncaughtException(local_ref< java::lang::Thread >  const&, local_ref< java::lang::Throwable >  const&);
	}; //class ThreadGroup

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_THREADGROUP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_THREADGROUP_HPP_IMPL
#define J2CPP_JAVA_LANG_THREADGROUP_HPP_IMPL

namespace j2cpp {



java::lang::ThreadGroup::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::ThreadGroup::operator local_ref<java::lang::Thread_::UncaughtExceptionHandler>() const
{
	return local_ref<java::lang::Thread_::UncaughtExceptionHandler>(get_jobject());
}


java::lang::ThreadGroup::ThreadGroup(local_ref< java::lang::String > const &a0)
: object<java::lang::ThreadGroup>(
	call_new_object<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(0),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::lang::ThreadGroup::ThreadGroup(local_ref< java::lang::ThreadGroup > const &a0, local_ref< java::lang::String > const &a1)
: object<java::lang::ThreadGroup>(
	call_new_object<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(1),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}


jint java::lang::ThreadGroup::activeCount()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(2),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jint java::lang::ThreadGroup::activeGroupCount()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(3),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

jboolean java::lang::ThreadGroup::allowThreadSuspension(jboolean a0)
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(4),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject(), a0);
}

void java::lang::ThreadGroup::checkAccess()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(5),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

void java::lang::ThreadGroup::destroy()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(6),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}

jint java::lang::ThreadGroup::enumerate(local_ref< array< local_ref< java::lang::Thread >, 1> > const &a0)
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(7),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject(), a0);
}

jint java::lang::ThreadGroup::enumerate(local_ref< array< local_ref< java::lang::Thread >, 1> > const &a0, jboolean a1)
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(8),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject(), a0, a1);
}

jint java::lang::ThreadGroup::enumerate(local_ref< array< local_ref< java::lang::ThreadGroup >, 1> > const &a0)
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(9),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject(), a0);
}

jint java::lang::ThreadGroup::enumerate(local_ref< array< local_ref< java::lang::ThreadGroup >, 1> > const &a0, jboolean a1)
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(10),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject(), a0, a1);
}

jint java::lang::ThreadGroup::getMaxPriority()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(11),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > java::lang::ThreadGroup::getName()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(12),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::ThreadGroup > java::lang::ThreadGroup::getParent()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(13),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::ThreadGroup > >
	(get_jobject());
}

void java::lang::ThreadGroup::interrupt()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(14),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject());
}

jboolean java::lang::ThreadGroup::isDaemon()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(15),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(15), 
		jboolean >
	(get_jobject());
}

jboolean java::lang::ThreadGroup::isDestroyed()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(16),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(16), 
		jboolean >
	(get_jobject());
}

void java::lang::ThreadGroup::list()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(17),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject());
}

jboolean java::lang::ThreadGroup::parentOf(local_ref< java::lang::ThreadGroup > const &a0)
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(18),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(18), 
		jboolean >
	(get_jobject(), a0);
}

void java::lang::ThreadGroup::resume()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(19),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject());
}

void java::lang::ThreadGroup::setDaemon(jboolean a0)
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(20),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0);
}

void java::lang::ThreadGroup::setMaxPriority(jint a0)
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(21),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0);
}

void java::lang::ThreadGroup::stop()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(22),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject());
}

void java::lang::ThreadGroup::suspend()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(23),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(23), 
		void >
	(get_jobject());
}

local_ref< java::lang::String > java::lang::ThreadGroup::toString()
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(24),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void java::lang::ThreadGroup::uncaughtException(local_ref< java::lang::Thread > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return call_method<
		java::lang::ThreadGroup::J2CPP_CLASS_NAME,
		java::lang::ThreadGroup::J2CPP_METHOD_NAME(25),
		java::lang::ThreadGroup::J2CPP_METHOD_SIGNATURE(25), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::lang::ThreadGroup,"java/lang/ThreadGroup")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,1,"<init>","(Ljava/lang/ThreadGroup;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,2,"activeCount","()I")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,3,"activeGroupCount","()I")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,4,"allowThreadSuspension","(Z)Z")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,5,"checkAccess","()V")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,6,"destroy","()V")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,7,"enumerate","([java.lang.Thread)I")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,8,"enumerate","([java.lang.ThreadZ)I")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,9,"enumerate","([java.lang.ThreadGroup)I")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,10,"enumerate","([java.lang.ThreadGroupZ)I")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,11,"getMaxPriority","()I")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,12,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,13,"getParent","()Ljava/lang/ThreadGroup;")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,14,"interrupt","()V")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,15,"isDaemon","()Z")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,16,"isDestroyed","()Z")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,17,"list","()V")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,18,"parentOf","(Ljava/lang/ThreadGroup;)Z")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,19,"resume","()V")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,20,"setDaemon","(Z)V")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,21,"setMaxPriority","(I)V")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,22,"stop","()V")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,23,"suspend","()V")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,24,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::ThreadGroup,25,"uncaughtException","(Ljava/lang/Thread;Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_THREADGROUP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
