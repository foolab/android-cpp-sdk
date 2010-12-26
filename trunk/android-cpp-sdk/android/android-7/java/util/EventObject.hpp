/*================================================================================
  code generated by: java2cpp
  class: java.util.EventObject
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_EVENTOBJECT_HPP_DECL
#define J2CPP_JAVA_UTIL_EVENTOBJECT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util {

	class EventObject;
	class EventObject
		: public cpp_object<EventObject>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)

		EventObject(jobject jobj)
		: cpp_object<EventObject>(jobj)
		{
		}

		local_ref< java::lang::Object > getSource();
		local_ref< java::lang::String > toString();

	}; //class EventObject

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_EVENTOBJECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_EVENTOBJECT_HPP_IMPL
#define J2CPP_JAVA_UTIL_EVENTOBJECT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::EventObject > create< java::util::EventObject>(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::util::EventObject >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::EventObject::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::EventObject::J2CPP_CLASS_NAME, java::util::EventObject::J2CPP_METHOD_NAME(0), java::util::EventObject::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::EventObject::getSource()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > java::util::EventObject::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(java::util::EventObject,"java/util/EventObject")
J2CPP_DEFINE_METHOD(java::util::EventObject,0,"<init>","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::EventObject,1,"getSource","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::EventObject,2,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::util::EventObject,0,"source","Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_EVENTOBJECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
