/*================================================================================
  code generated by: java2cpp
  class: java.util.UUID
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_UUID_HPP_DECL
#define J2CPP_JAVA_UTIL_UUID_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util {

	class UUID;
	class UUID
		: public cpp_object<UUID>
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

		UUID(jobject jobj)
		: cpp_object<UUID>(jobj)
		{
		}

		static local_ref< java::util::UUID > randomUUID();
		static local_ref< java::util::UUID > nameUUIDFromBytes(local_ref< cpp_byte_array<1> > const&);
		static local_ref< java::util::UUID > fromString(local_ref< java::lang::String > const&);
		cpp_long getLeastSignificantBits();
		cpp_long getMostSignificantBits();
		cpp_int version();
		cpp_int variant();
		cpp_long timestamp();
		cpp_int clockSequence();
		cpp_long node();
		cpp_int compareTo(local_ref< java::util::UUID > const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int hashCode();
		local_ref< java::lang::String > toString();
		cpp_int compareTo(local_ref< java::lang::Object > const&);
	}; //class UUID

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_UUID_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_UUID_HPP_IMPL
#define J2CPP_JAVA_UTIL_UUID_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::UUID > create< java::util::UUID>(cpp_long const &a0, cpp_long const &a1)
{
	return local_ref< java::util::UUID >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::UUID::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::UUID::J2CPP_CLASS_NAME, java::util::UUID::J2CPP_METHOD_NAME(0), java::util::UUID::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::UUID > java::util::UUID::randomUUID()
{
	return local_ref< java::util::UUID >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

local_ref< java::util::UUID > java::util::UUID::nameUUIDFromBytes(local_ref< cpp_byte_array<1> > const &a0)
{
	return local_ref< java::util::UUID >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::UUID > java::util::UUID::fromString(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::UUID >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::util::UUID::getLeastSignificantBits()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_long java::util::UUID::getMostSignificantBits()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int java::util::UUID::version()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_int java::util::UUID::variant()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_long java::util::UUID::timestamp()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int java::util::UUID::clockSequence()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_long java::util::UUID::node()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_int java::util::UUID::compareTo(local_ref< java::util::UUID > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::UUID::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::UUID::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< java::lang::String > java::util::UUID::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_int java::util::UUID::compareTo(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::UUID,"java/util/UUID")
J2CPP_DEFINE_METHOD(java::util::UUID,0,"<init>","(JJ)V")
J2CPP_DEFINE_METHOD(java::util::UUID,1,"randomUUID","()Ljava/util/UUID;")
J2CPP_DEFINE_METHOD(java::util::UUID,2,"nameUUIDFromBytes","([B)Ljava/util/UUID;")
J2CPP_DEFINE_METHOD(java::util::UUID,3,"fromString","(Ljava/lang/String;)Ljava/util/UUID;")
J2CPP_DEFINE_METHOD(java::util::UUID,4,"getLeastSignificantBits","()J")
J2CPP_DEFINE_METHOD(java::util::UUID,5,"getMostSignificantBits","()J")
J2CPP_DEFINE_METHOD(java::util::UUID,6,"version","()I")
J2CPP_DEFINE_METHOD(java::util::UUID,7,"variant","()I")
J2CPP_DEFINE_METHOD(java::util::UUID,8,"timestamp","()J")
J2CPP_DEFINE_METHOD(java::util::UUID,9,"clockSequence","()I")
J2CPP_DEFINE_METHOD(java::util::UUID,10,"node","()J")
J2CPP_DEFINE_METHOD(java::util::UUID,11,"compareTo","(Ljava/util/UUID;)I")
J2CPP_DEFINE_METHOD(java::util::UUID,12,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::UUID,13,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::UUID,14,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::UUID,15,"compareTo","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_UUID_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
