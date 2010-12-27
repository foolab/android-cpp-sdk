/*================================================================================
  code generated by: java2cpp
  class: java.util.TimeZone
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TIMEZONE_HPP_DECL
#define J2CPP_JAVA_UTIL_TIMEZONE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Date.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace java { namespace util {

	class TimeZone;
	class TimeZone
		: public cpp_object<TimeZone>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		TimeZone(jobject jobj)
		: cpp_object<TimeZone>(jobj)
		{
		}

		local_ref< java::lang::Object > clone();
		static local_ref< cpp_object_array<java::lang::String, 1> > getAvailableIDs();
		static local_ref< cpp_object_array<java::lang::String, 1> > getAvailableIDs(cpp_int const&);
		static local_ref< java::util::TimeZone > getDefault();
		local_ref< java::lang::String > getDisplayName();
		local_ref< java::lang::String > getDisplayName(local_ref< java::util::Locale > const&);
		local_ref< java::lang::String > getDisplayName(cpp_boolean const&, cpp_int const&);
		local_ref< java::lang::String > getDisplayName(cpp_boolean const&, cpp_int const&, local_ref< java::util::Locale > const&);
		local_ref< java::lang::String > getID();
		cpp_int getDSTSavings();
		cpp_int getOffset(cpp_long const&);
		cpp_int getOffset(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		cpp_int getRawOffset();
		static local_ref< java::util::TimeZone > getTimeZone(local_ref< java::lang::String > const&);
		cpp_boolean hasSameRules(local_ref< java::util::TimeZone > const&);
		cpp_boolean inDaylightTime(local_ref< java::util::Date > const&);
		static void setDefault(local_ref< java::util::TimeZone > const&);
		void setID(local_ref< java::lang::String > const&);
		void setRawOffset(cpp_int const&);
		cpp_boolean useDaylightTime();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > SHORT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > LONG;
	}; //class TimeZone

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TIMEZONE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TIMEZONE_HPP_IMPL
#define J2CPP_JAVA_UTIL_TIMEZONE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::TimeZone > create< java::util::TimeZone>()
{
	return local_ref< java::util::TimeZone >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::TimeZone::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::TimeZone::J2CPP_CLASS_NAME, java::util::TimeZone::J2CPP_METHOD_NAME(0), java::util::TimeZone::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::TimeZone::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > java::util::TimeZone::getAvailableIDs()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > java::util::TimeZone::getAvailableIDs(cpp_int const &a0)
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::TimeZone > java::util::TimeZone::getDefault()
{
	return local_ref< java::util::TimeZone >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>()
		)
	);
}

local_ref< java::lang::String > java::util::TimeZone::getDisplayName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::lang::String > java::util::TimeZone::getDisplayName(local_ref< java::util::Locale > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::TimeZone::getDisplayName(cpp_boolean const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::TimeZone::getDisplayName(cpp_boolean const &a0, cpp_int const &a1, local_ref< java::util::Locale > const &a2)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::TimeZone::getID()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int java::util::TimeZone::getDSTSavings()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_int java::util::TimeZone::getOffset(cpp_long const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::TimeZone::getOffset(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4, cpp_int const &a5)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

cpp_int java::util::TimeZone::getRawOffset()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< java::util::TimeZone > java::util::TimeZone::getTimeZone(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::TimeZone >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::TimeZone::hasSameRules(local_ref< java::util::TimeZone > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::TimeZone::inDaylightTime(local_ref< java::util::Date > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::TimeZone::setDefault(local_ref< java::util::TimeZone > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), true>(),
			a0.get_jtype()
		)
	);
}

void java::util::TimeZone::setID(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::TimeZone::setRawOffset(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::TimeZone::useDaylightTime()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}


static_field<
	java::util::TimeZone::J2CPP_CLASS_NAME,
	java::util::TimeZone::J2CPP_FIELD_NAME(0),
	java::util::TimeZone::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> java::util::TimeZone::SHORT;

static_field<
	java::util::TimeZone::J2CPP_CLASS_NAME,
	java::util::TimeZone::J2CPP_FIELD_NAME(1),
	java::util::TimeZone::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> java::util::TimeZone::LONG;


J2CPP_DEFINE_CLASS(java::util::TimeZone,"java/util/TimeZone")
J2CPP_DEFINE_METHOD(java::util::TimeZone,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::TimeZone,1,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TimeZone,2,"getAvailableIDs","()[java.lang.String")
J2CPP_DEFINE_METHOD(java::util::TimeZone,3,"getAvailableIDs","(I)[java.lang.String")
J2CPP_DEFINE_METHOD(java::util::TimeZone,4,"getDefault","()Ljava/util/TimeZone;")
J2CPP_DEFINE_METHOD(java::util::TimeZone,5,"getDisplayName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::TimeZone,6,"getDisplayName","(Ljava/util/Locale;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::TimeZone,7,"getDisplayName","(ZI)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::TimeZone,8,"getDisplayName","(ZILjava/util/Locale;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::TimeZone,9,"getID","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::TimeZone,10,"getDSTSavings","()I")
J2CPP_DEFINE_METHOD(java::util::TimeZone,11,"getOffset","(J)I")
J2CPP_DEFINE_METHOD(java::util::TimeZone,12,"getOffset","(IIIIII)I")
J2CPP_DEFINE_METHOD(java::util::TimeZone,13,"getRawOffset","()I")
J2CPP_DEFINE_METHOD(java::util::TimeZone,14,"getTimeZone","(Ljava/lang/String;)Ljava/util/TimeZone;")
J2CPP_DEFINE_METHOD(java::util::TimeZone,15,"hasSameRules","(Ljava/util/TimeZone;)Z")
J2CPP_DEFINE_METHOD(java::util::TimeZone,16,"inDaylightTime","(Ljava/util/Date;)Z")
J2CPP_DEFINE_METHOD(java::util::TimeZone,17,"setDefault","(Ljava/util/TimeZone;)V")
J2CPP_DEFINE_METHOD(java::util::TimeZone,18,"setID","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::TimeZone,19,"setRawOffset","(I)V")
J2CPP_DEFINE_METHOD(java::util::TimeZone,20,"useDaylightTime","()Z")
J2CPP_DEFINE_FIELD(java::util::TimeZone,0,"SHORT","I")
J2CPP_DEFINE_FIELD(java::util::TimeZone,1,"LONG","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TIMEZONE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION