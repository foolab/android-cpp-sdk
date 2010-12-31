/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.ConcurrentModificationException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }


#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util {

	class ConcurrentModificationException;
	class ConcurrentModificationException
		: public object<ConcurrentModificationException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ConcurrentModificationException(jobject jobj)
		: object<ConcurrentModificationException>(jobj)
		{
		}

		operator local_ref<java::lang::RuntimeException>() const;


		ConcurrentModificationException();
		ConcurrentModificationException(local_ref< java::lang::String > const&);
	}; //class ConcurrentModificationException

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::ConcurrentModificationException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}


java::util::ConcurrentModificationException::ConcurrentModificationException()
: object<java::util::ConcurrentModificationException>(
	call_new_object<
		java::util::ConcurrentModificationException::J2CPP_CLASS_NAME,
		java::util::ConcurrentModificationException::J2CPP_METHOD_NAME(0),
		java::util::ConcurrentModificationException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::util::ConcurrentModificationException::ConcurrentModificationException(local_ref< java::lang::String > const &a0)
: object<java::util::ConcurrentModificationException>(
	call_new_object<
		java::util::ConcurrentModificationException::J2CPP_CLASS_NAME,
		java::util::ConcurrentModificationException::J2CPP_METHOD_NAME(1),
		java::util::ConcurrentModificationException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::util::ConcurrentModificationException,"java/util/ConcurrentModificationException")
J2CPP_DEFINE_METHOD(java::util::ConcurrentModificationException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::ConcurrentModificationException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENTMODIFICATIONEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
