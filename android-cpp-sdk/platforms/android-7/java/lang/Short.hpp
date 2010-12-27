/*================================================================================
  code generated by: java2cpp
  class: java.lang.Short
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_SHORT_HPP_DECL
#define J2CPP_JAVA_LANG_SHORT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Number; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Short;
	class Short
		: public cpp_object<Short>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit Short(jobject jobj)
		: cpp_object<Short>(jobj)
		{
		}

		operator local_ref<java::lang::Number>() const;
		operator local_ref<java::lang::Comparable>() const;


		Short(local_ref< java::lang::String > const&);
		Short(cpp_short const&);
		cpp_byte byteValue();
		cpp_int compareTo(local_ref< java::lang::Short > const&);
		static local_ref< java::lang::Short > decode(local_ref< java::lang::String > const&);
		cpp_double doubleValue();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_float floatValue();
		cpp_int hashCode();
		cpp_int intValue();
		cpp_long longValue();
		static cpp_short parseShort(local_ref< java::lang::String > const&);
		static cpp_short parseShort(local_ref< java::lang::String > const&, cpp_int const&);
		cpp_short shortValue();
		local_ref< java::lang::String > toString();
		static local_ref< java::lang::String > toString(cpp_short const&);
		static local_ref< java::lang::Short > valueOf(local_ref< java::lang::String > const&);
		static local_ref< java::lang::Short > valueOf(local_ref< java::lang::String > const&, cpp_int const&);
		static cpp_short reverseBytes(cpp_short const&);
		static local_ref< java::lang::Short > valueOf(cpp_short const&);
		cpp_int compareTo(local_ref< java::lang::Object > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_short > MAX_VALUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_short > MIN_VALUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > SIZE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::Class > > TYPE;
	}; //class Short

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_SHORT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_SHORT_HPP_IMPL
#define J2CPP_JAVA_LANG_SHORT_HPP_IMPL

namespace j2cpp {



java::lang::Short::operator local_ref<java::lang::Number>() const
{
	return local_ref<java::lang::Number>(get_jtype());
}

java::lang::Short::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jtype());
}


java::lang::Short::Short(local_ref< java::lang::String > const &a0)
: cpp_object<java::lang::Short>(
	environment::get().get_jenv()->NewObject(
		get_class<java::lang::Short::J2CPP_CLASS_NAME>(),
		get_method_id<java::lang::Short::J2CPP_CLASS_NAME, java::lang::Short::J2CPP_METHOD_NAME(0), java::lang::Short::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



java::lang::Short::Short(cpp_short const &a0)
: cpp_object<java::lang::Short>(
	environment::get().get_jenv()->NewObject(
		get_class<java::lang::Short::J2CPP_CLASS_NAME>(),
		get_method_id<java::lang::Short::J2CPP_CLASS_NAME, java::lang::Short::J2CPP_METHOD_NAME(1), java::lang::Short::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}


cpp_byte java::lang::Short::byteValue()
{
	return cpp_byte(
		environment::get().get_jenv()->CallByteMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int java::lang::Short::compareTo(local_ref< java::lang::Short > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Short > java::lang::Short::decode(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Short >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype()
		)
	);
}

cpp_double java::lang::Short::doubleValue()
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean java::lang::Short::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float java::lang::Short::floatValue()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int java::lang::Short::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int java::lang::Short::intValue()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_long java::lang::Short::longValue()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_short java::lang::Short::parseShort(local_ref< java::lang::String > const &a0)
{
	return cpp_short(
		environment::get().get_jenv()->CallStaticShortMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), true>(),
			a0.get_jtype()
		)
	);
}

cpp_short java::lang::Short::parseShort(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return cpp_short(
		environment::get().get_jenv()->CallStaticShortMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_short java::lang::Short::shortValue()
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::Short::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::Short::toString(cpp_short const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Short > java::lang::Short::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Short >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Short > java::lang::Short::valueOf(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::Short >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_short java::lang::Short::reverseBytes(cpp_short const &a0)
{
	return cpp_short(
		environment::get().get_jenv()->CallStaticShortMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Short > java::lang::Short::valueOf(cpp_short const &a0)
{
	return local_ref< java::lang::Short >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::lang::Short::compareTo(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}



static_field<
	java::lang::Short::J2CPP_CLASS_NAME,
	java::lang::Short::J2CPP_FIELD_NAME(0),
	java::lang::Short::J2CPP_FIELD_SIGNATURE(0),
	cpp_short
> java::lang::Short::MAX_VALUE;

static_field<
	java::lang::Short::J2CPP_CLASS_NAME,
	java::lang::Short::J2CPP_FIELD_NAME(1),
	java::lang::Short::J2CPP_FIELD_SIGNATURE(1),
	cpp_short
> java::lang::Short::MIN_VALUE;

static_field<
	java::lang::Short::J2CPP_CLASS_NAME,
	java::lang::Short::J2CPP_FIELD_NAME(2),
	java::lang::Short::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> java::lang::Short::SIZE;

static_field<
	java::lang::Short::J2CPP_CLASS_NAME,
	java::lang::Short::J2CPP_FIELD_NAME(3),
	java::lang::Short::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::Class >
> java::lang::Short::TYPE;


J2CPP_DEFINE_CLASS(java::lang::Short,"java/lang/Short")
J2CPP_DEFINE_METHOD(java::lang::Short,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::Short,1,"<init>","(S)V")
J2CPP_DEFINE_METHOD(java::lang::Short,2,"byteValue","()B")
J2CPP_DEFINE_METHOD(java::lang::Short,3,"compareTo","(Ljava/lang/Short;)I")
J2CPP_DEFINE_METHOD(java::lang::Short,4,"decode","(Ljava/lang/String;)Ljava/lang/Short;")
J2CPP_DEFINE_METHOD(java::lang::Short,5,"doubleValue","()D")
J2CPP_DEFINE_METHOD(java::lang::Short,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::Short,7,"floatValue","()F")
J2CPP_DEFINE_METHOD(java::lang::Short,8,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::lang::Short,9,"intValue","()I")
J2CPP_DEFINE_METHOD(java::lang::Short,10,"longValue","()J")
J2CPP_DEFINE_METHOD(java::lang::Short,11,"parseShort","(Ljava/lang/String;)S")
J2CPP_DEFINE_METHOD(java::lang::Short,12,"parseShort","(Ljava/lang/String;I)S")
J2CPP_DEFINE_METHOD(java::lang::Short,13,"shortValue","()S")
J2CPP_DEFINE_METHOD(java::lang::Short,14,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Short,15,"toString","(S)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Short,16,"valueOf","(Ljava/lang/String;)Ljava/lang/Short;")
J2CPP_DEFINE_METHOD(java::lang::Short,17,"valueOf","(Ljava/lang/String;I)Ljava/lang/Short;")
J2CPP_DEFINE_METHOD(java::lang::Short,18,"reverseBytes","(S)S")
J2CPP_DEFINE_METHOD(java::lang::Short,19,"valueOf","(S)Ljava/lang/Short;")
J2CPP_DEFINE_METHOD(java::lang::Short,20,"compareTo","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::lang::Short,21,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::lang::Short,0,"MAX_VALUE","S")
J2CPP_DEFINE_FIELD(java::lang::Short,1,"MIN_VALUE","S")
J2CPP_DEFINE_FIELD(java::lang::Short,2,"SIZE","I")
J2CPP_DEFINE_FIELD(java::lang::Short,3,"TYPE","Ljava/lang/Class;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_SHORT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
