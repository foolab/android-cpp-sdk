/*================================================================================
  code generated by: java2cpp
  class: java.lang.Number
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_NUMBER_HPP_DECL
#define J2CPP_JAVA_LANG_NUMBER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Number;
	class Number
		: public cpp_object<Number>
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

		explicit Number(jobject jobj)
		: cpp_object<Number>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		Number();
		cpp_byte byteValue();
		cpp_double doubleValue();
		cpp_float floatValue();
		cpp_int intValue();
		cpp_long longValue();
		cpp_short shortValue();
	}; //class Number

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_NUMBER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_NUMBER_HPP_IMPL
#define J2CPP_JAVA_LANG_NUMBER_HPP_IMPL

namespace j2cpp {



java::lang::Number::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::lang::Number::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jtype());
}


java::lang::Number::Number()
: cpp_object<java::lang::Number>(
	environment::get().get_jenv()->NewObject(
		get_class<java::lang::Number::J2CPP_CLASS_NAME>(),
		get_method_id<java::lang::Number::J2CPP_CLASS_NAME, java::lang::Number::J2CPP_METHOD_NAME(0), java::lang::Number::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


cpp_byte java::lang::Number::byteValue()
{
	return cpp_byte(
		environment::get().get_jenv()->CallByteMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_double java::lang::Number::doubleValue()
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_float java::lang::Number::floatValue()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int java::lang::Number::intValue()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_long java::lang::Number::longValue()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_short java::lang::Number::shortValue()
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::Number,"java/lang/Number")
J2CPP_DEFINE_METHOD(java::lang::Number,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::Number,1,"byteValue","()B")
J2CPP_DEFINE_METHOD(java::lang::Number,2,"doubleValue","()D")
J2CPP_DEFINE_METHOD(java::lang::Number,3,"floatValue","()F")
J2CPP_DEFINE_METHOD(java::lang::Number,4,"intValue","()I")
J2CPP_DEFINE_METHOD(java::lang::Number,5,"longValue","()J")
J2CPP_DEFINE_METHOD(java::lang::Number,6,"shortValue","()S")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_NUMBER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
