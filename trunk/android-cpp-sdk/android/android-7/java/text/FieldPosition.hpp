/*================================================================================
  code generated by: java2cpp
  class: java.text.FieldPosition
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_FIELDPOSITION_HPP_DECL
#define J2CPP_JAVA_TEXT_FIELDPOSITION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace text { namespace Format_ { class Field; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/text/Format.hpp>


namespace j2cpp {

namespace java { namespace text {

	class FieldPosition;
	class FieldPosition
		: public cpp_object<FieldPosition>
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

		FieldPosition(jobject jobj)
		: cpp_object<FieldPosition>(jobj)
		{
		}

		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int getBeginIndex();
		cpp_int getEndIndex();
		cpp_int getField();
		local_ref< java::text::Format_::Field > getFieldAttribute();
		cpp_int hashCode();
		void setBeginIndex(cpp_int const&);
		void setEndIndex(cpp_int const&);
		local_ref< java::lang::String > toString();
	}; //class FieldPosition

} //namespace text
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_FIELDPOSITION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_FIELDPOSITION_HPP_IMPL
#define J2CPP_JAVA_TEXT_FIELDPOSITION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::text::FieldPosition > create< java::text::FieldPosition>(cpp_int const &a0)
{
	return local_ref< java::text::FieldPosition >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::FieldPosition::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::FieldPosition::J2CPP_CLASS_NAME, java::text::FieldPosition::J2CPP_METHOD_NAME(0), java::text::FieldPosition::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::text::FieldPosition > create< java::text::FieldPosition>(local_ref< java::text::Format_::Field > const &a0)
{
	return local_ref< java::text::FieldPosition >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::FieldPosition::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::FieldPosition::J2CPP_CLASS_NAME, java::text::FieldPosition::J2CPP_METHOD_NAME(1), java::text::FieldPosition::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::text::FieldPosition > create< java::text::FieldPosition>(local_ref< java::text::Format_::Field > const &a0, cpp_int const &a1)
{
	return local_ref< java::text::FieldPosition >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::FieldPosition::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::FieldPosition::J2CPP_CLASS_NAME, java::text::FieldPosition::J2CPP_METHOD_NAME(2), java::text::FieldPosition::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::text::FieldPosition::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::text::FieldPosition::getBeginIndex()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int java::text::FieldPosition::getEndIndex()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int java::text::FieldPosition::getField()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::text::Format_::Field > java::text::FieldPosition::getFieldAttribute()
{
	return local_ref< java::text::Format_::Field >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int java::text::FieldPosition::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void java::text::FieldPosition::setBeginIndex(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::FieldPosition::setEndIndex(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::text::FieldPosition::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::text::FieldPosition,"java/text/FieldPosition")
J2CPP_DEFINE_METHOD(java::text::FieldPosition,0,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::text::FieldPosition,1,"<init>","(Ljava/text/Format$Field;)V")
J2CPP_DEFINE_METHOD(java::text::FieldPosition,2,"<init>","(Ljava/text/Format$Field;I)V")
J2CPP_DEFINE_METHOD(java::text::FieldPosition,3,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::FieldPosition,4,"getBeginIndex","()I")
J2CPP_DEFINE_METHOD(java::text::FieldPosition,5,"getEndIndex","()I")
J2CPP_DEFINE_METHOD(java::text::FieldPosition,6,"getField","()I")
J2CPP_DEFINE_METHOD(java::text::FieldPosition,7,"getFieldAttribute","()Ljava/text/Format$Field;")
J2CPP_DEFINE_METHOD(java::text::FieldPosition,8,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::FieldPosition,9,"setBeginIndex","(I)V")
J2CPP_DEFINE_METHOD(java::text::FieldPosition,10,"setEndIndex","(I)V")
J2CPP_DEFINE_METHOD(java::text::FieldPosition,11,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_FIELDPOSITION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
