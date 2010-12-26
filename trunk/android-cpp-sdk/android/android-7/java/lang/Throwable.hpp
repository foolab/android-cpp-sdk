/*================================================================================
  code generated by: java2cpp
  class: java.lang.Throwable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_THROWABLE_HPP_DECL
#define J2CPP_JAVA_LANG_THROWABLE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class PrintStream; } } }
namespace j2cpp { namespace java { namespace io { class PrintWriter; } } }
namespace j2cpp { namespace java { namespace lang { class StackTraceElement; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/PrintStream.hpp>
#include <java/io/PrintWriter.hpp>
#include <java/lang/StackTraceElement.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Throwable;
	class Throwable
		: public cpp_object<Throwable>
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

		Throwable(jobject jobj)
		: cpp_object<Throwable>(jobj)
		{
		}

		local_ref< java::lang::Throwable > fillInStackTrace();
		local_ref< java::lang::String > getMessage();
		local_ref< java::lang::String > getLocalizedMessage();
		local_ref< cpp_object_array<java::lang::StackTraceElement, 1> > getStackTrace();
		void setStackTrace(local_ref< cpp_object_array<java::lang::StackTraceElement, 1> > const&);
		void printStackTrace();
		void printStackTrace(local_ref< java::io::PrintStream > const&);
		void printStackTrace(local_ref< java::io::PrintWriter > const&);
		local_ref< java::lang::String > toString();
		local_ref< java::lang::Throwable > initCause(local_ref< java::lang::Throwable > const&);
		local_ref< java::lang::Throwable > getCause();
	}; //class Throwable

} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_THROWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_THROWABLE_HPP_IMPL
#define J2CPP_JAVA_LANG_THROWABLE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::lang::Throwable > create< java::lang::Throwable>()
{
	return local_ref< java::lang::Throwable >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::Throwable::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::Throwable::J2CPP_CLASS_NAME, java::lang::Throwable::J2CPP_METHOD_NAME(0), java::lang::Throwable::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::lang::Throwable > create< java::lang::Throwable>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Throwable >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::Throwable::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::Throwable::J2CPP_CLASS_NAME, java::lang::Throwable::J2CPP_METHOD_NAME(1), java::lang::Throwable::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::lang::Throwable > create< java::lang::Throwable>(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return local_ref< java::lang::Throwable >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::Throwable::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::Throwable::J2CPP_CLASS_NAME, java::lang::Throwable::J2CPP_METHOD_NAME(2), java::lang::Throwable::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::lang::Throwable > create< java::lang::Throwable>(local_ref< java::lang::Throwable > const &a0)
{
	return local_ref< java::lang::Throwable >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::Throwable::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::Throwable::J2CPP_CLASS_NAME, java::lang::Throwable::J2CPP_METHOD_NAME(3), java::lang::Throwable::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Throwable > java::lang::Throwable::fillInStackTrace()
{
	return local_ref< java::lang::Throwable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::Throwable::getMessage()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::Throwable::getLocalizedMessage()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::StackTraceElement, 1> > java::lang::Throwable::getStackTrace()
{
	return local_ref< cpp_object_array<java::lang::StackTraceElement, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void java::lang::Throwable::setStackTrace(local_ref< cpp_object_array<java::lang::StackTraceElement, 1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void java::lang::Throwable::printStackTrace()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void java::lang::Throwable::printStackTrace(local_ref< java::io::PrintStream > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

void java::lang::Throwable::printStackTrace(local_ref< java::io::PrintWriter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::lang::Throwable::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::lang::Throwable > java::lang::Throwable::initCause(local_ref< java::lang::Throwable > const &a0)
{
	return local_ref< java::lang::Throwable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Throwable > java::lang::Throwable::getCause()
{
	return local_ref< java::lang::Throwable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::Throwable,"java/lang/Throwable")
J2CPP_DEFINE_METHOD(java::lang::Throwable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::Throwable,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::Throwable,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::lang::Throwable,3,"<init>","(Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::lang::Throwable,4,"fillInStackTrace","()Ljava/lang/Throwable;")
J2CPP_DEFINE_METHOD(java::lang::Throwable,5,"getMessage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Throwable,6,"getLocalizedMessage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Throwable,7,"getStackTrace","()[java.lang.StackTraceElement")
J2CPP_DEFINE_METHOD(java::lang::Throwable,8,"setStackTrace","([java.lang.StackTraceElement)V")
J2CPP_DEFINE_METHOD(java::lang::Throwable,9,"printStackTrace","()V")
J2CPP_DEFINE_METHOD(java::lang::Throwable,10,"printStackTrace","(Ljava/io/PrintStream;)V")
J2CPP_DEFINE_METHOD(java::lang::Throwable,11,"printStackTrace","(Ljava/io/PrintWriter;)V")
J2CPP_DEFINE_METHOD(java::lang::Throwable,12,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Throwable,13,"initCause","(Ljava/lang/Throwable;)Ljava/lang/Throwable;")
J2CPP_DEFINE_METHOD(java::lang::Throwable,14,"getCause","()Ljava/lang/Throwable;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_THROWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
