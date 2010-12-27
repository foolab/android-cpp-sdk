/*================================================================================
  code generated by: java2cpp
  class: java.util.Calendar
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CALENDAR_HPP_DECL
#define J2CPP_JAVA_UTIL_CALENDAR_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace util { class TimeZone; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Date.hpp>
#include <java/util/Locale.hpp>
#include <java/util/TimeZone.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Calendar;
	class Calendar
		: public cpp_object<Calendar>
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
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)
		J2CPP_DECLARE_FIELD(24)
		J2CPP_DECLARE_FIELD(25)
		J2CPP_DECLARE_FIELD(26)
		J2CPP_DECLARE_FIELD(27)
		J2CPP_DECLARE_FIELD(28)
		J2CPP_DECLARE_FIELD(29)
		J2CPP_DECLARE_FIELD(30)
		J2CPP_DECLARE_FIELD(31)
		J2CPP_DECLARE_FIELD(32)
		J2CPP_DECLARE_FIELD(33)
		J2CPP_DECLARE_FIELD(34)
		J2CPP_DECLARE_FIELD(35)
		J2CPP_DECLARE_FIELD(36)
		J2CPP_DECLARE_FIELD(37)
		J2CPP_DECLARE_FIELD(38)
		J2CPP_DECLARE_FIELD(39)
		J2CPP_DECLARE_FIELD(40)
		J2CPP_DECLARE_FIELD(41)
		J2CPP_DECLARE_FIELD(42)
		J2CPP_DECLARE_FIELD(43)
		J2CPP_DECLARE_FIELD(44)
		J2CPP_DECLARE_FIELD(45)

		explicit Calendar(jobject jobj)
		: cpp_object<Calendar>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Comparable>() const;


		void add(cpp_int const&, cpp_int const&);
		cpp_boolean after(local_ref< java::lang::Object > const&);
		cpp_boolean before(local_ref< java::lang::Object > const&);
		void clear();
		void clear(cpp_int const&);
		local_ref< java::lang::Object > clone();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		cpp_int get(cpp_int const&);
		cpp_int getActualMaximum(cpp_int const&);
		cpp_int getActualMinimum(cpp_int const&);
		static local_ref< cpp_object_array<java::util::Locale, 1> > getAvailableLocales();
		cpp_int getFirstDayOfWeek();
		cpp_int getGreatestMinimum(cpp_int const&);
		static local_ref< java::util::Calendar > getInstance();
		static local_ref< java::util::Calendar > getInstance(local_ref< java::util::Locale > const&);
		static local_ref< java::util::Calendar > getInstance(local_ref< java::util::TimeZone > const&);
		static local_ref< java::util::Calendar > getInstance(local_ref< java::util::TimeZone > const&, local_ref< java::util::Locale > const&);
		cpp_int getLeastMaximum(cpp_int const&);
		cpp_int getMaximum(cpp_int const&);
		cpp_int getMinimalDaysInFirstWeek();
		cpp_int getMinimum(cpp_int const&);
		local_ref< java::util::Date > getTime();
		cpp_long getTimeInMillis();
		local_ref< java::util::TimeZone > getTimeZone();
		cpp_int hashCode();
		cpp_boolean isLenient();
		cpp_boolean isSet(cpp_int const&);
		void roll(cpp_int const&, cpp_int const&);
		void roll(cpp_int const&, cpp_boolean const&);
		void set(cpp_int const&, cpp_int const&);
		void set(cpp_int const&, cpp_int const&, cpp_int const&);
		void set(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void set(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void setFirstDayOfWeek(cpp_int const&);
		void setLenient(cpp_boolean const&);
		void setMinimalDaysInFirstWeek(cpp_int const&);
		void setTime(local_ref< java::util::Date > const&);
		void setTimeInMillis(cpp_long const&);
		void setTimeZone(local_ref< java::util::TimeZone > const&);
		local_ref< java::lang::String > toString();
		cpp_int compareTo(local_ref< java::util::Calendar > const&);
		cpp_int compareTo(local_ref< java::lang::Object > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > JANUARY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > FEBRUARY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > MARCH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > APRIL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_int > MAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), cpp_int > JUNE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), cpp_int > JULY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), cpp_int > AUGUST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), cpp_int > SEPTEMBER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), cpp_int > OCTOBER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), cpp_int > NOVEMBER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), cpp_int > DECEMBER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), cpp_int > UNDECIMBER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), cpp_int > SUNDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), cpp_int > MONDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), cpp_int > TUESDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), cpp_int > WEDNESDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), cpp_int > THURSDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), cpp_int > FRIDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), cpp_int > SATURDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), cpp_int > ERA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), cpp_int > YEAR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), cpp_int > MONTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), cpp_int > WEEK_OF_YEAR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(29), J2CPP_FIELD_SIGNATURE(29), cpp_int > WEEK_OF_MONTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(30), J2CPP_FIELD_SIGNATURE(30), cpp_int > DATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(31), J2CPP_FIELD_SIGNATURE(31), cpp_int > DAY_OF_MONTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(32), J2CPP_FIELD_SIGNATURE(32), cpp_int > DAY_OF_YEAR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(33), J2CPP_FIELD_SIGNATURE(33), cpp_int > DAY_OF_WEEK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(34), J2CPP_FIELD_SIGNATURE(34), cpp_int > DAY_OF_WEEK_IN_MONTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(35), J2CPP_FIELD_SIGNATURE(35), cpp_int > AM_PM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(36), J2CPP_FIELD_SIGNATURE(36), cpp_int > HOUR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(37), J2CPP_FIELD_SIGNATURE(37), cpp_int > HOUR_OF_DAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(38), J2CPP_FIELD_SIGNATURE(38), cpp_int > MINUTE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(39), J2CPP_FIELD_SIGNATURE(39), cpp_int > SECOND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(40), J2CPP_FIELD_SIGNATURE(40), cpp_int > MILLISECOND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(41), J2CPP_FIELD_SIGNATURE(41), cpp_int > ZONE_OFFSET;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(42), J2CPP_FIELD_SIGNATURE(42), cpp_int > DST_OFFSET;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(43), J2CPP_FIELD_SIGNATURE(43), cpp_int > FIELD_COUNT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(44), J2CPP_FIELD_SIGNATURE(44), cpp_int > AM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(45), J2CPP_FIELD_SIGNATURE(45), cpp_int > PM;
	}; //class Calendar

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CALENDAR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CALENDAR_HPP_IMPL
#define J2CPP_JAVA_UTIL_CALENDAR_HPP_IMPL

namespace j2cpp {



java::util::Calendar::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::util::Calendar::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jtype());
}

java::util::Calendar::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jtype());
}

java::util::Calendar::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jtype());
}



void java::util::Calendar::add(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::util::Calendar::after(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::Calendar::before(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Calendar::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void java::util::Calendar::clear(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::Calendar::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}




cpp_boolean java::util::Calendar::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::Calendar::get(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::Calendar::getActualMaximum(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::Calendar::getActualMinimum(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::util::Locale, 1> > java::util::Calendar::getAvailableLocales()
{
	return local_ref< cpp_object_array<java::util::Locale, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), true>()
		)
	);
}

cpp_int java::util::Calendar::getFirstDayOfWeek()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_int java::util::Calendar::getGreatestMinimum(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Calendar > java::util::Calendar::getInstance()
{
	return local_ref< java::util::Calendar >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), true>()
		)
	);
}

local_ref< java::util::Calendar > java::util::Calendar::getInstance(local_ref< java::util::Locale > const &a0)
{
	return local_ref< java::util::Calendar >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Calendar > java::util::Calendar::getInstance(local_ref< java::util::TimeZone > const &a0)
{
	return local_ref< java::util::Calendar >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Calendar > java::util::Calendar::getInstance(local_ref< java::util::TimeZone > const &a0, local_ref< java::util::Locale > const &a1)
{
	return local_ref< java::util::Calendar >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::util::Calendar::getLeastMaximum(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::Calendar::getMaximum(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::Calendar::getMinimalDaysInFirstWeek()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_int java::util::Calendar::getMinimum(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Date > java::util::Calendar::getTime()
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

cpp_long java::util::Calendar::getTimeInMillis()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

local_ref< java::util::TimeZone > java::util::Calendar::getTimeZone()
{
	return local_ref< java::util::TimeZone >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

cpp_int java::util::Calendar::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}


cpp_boolean java::util::Calendar::isLenient()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}

cpp_boolean java::util::Calendar::isSet(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Calendar::roll(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::Calendar::roll(cpp_int const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::Calendar::set(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::Calendar::set(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::util::Calendar::set(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void java::util::Calendar::set(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4, cpp_int const &a5)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

void java::util::Calendar::setFirstDayOfWeek(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Calendar::setLenient(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Calendar::setMinimalDaysInFirstWeek(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Calendar::setTime(local_ref< java::util::Date > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Calendar::setTimeInMillis(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::Calendar::setTimeZone(local_ref< java::util::TimeZone > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::Calendar::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>()
		)
	);
}

cpp_int java::util::Calendar::compareTo(local_ref< java::util::Calendar > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::Calendar::compareTo(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(5),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> java::util::Calendar::JANUARY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(6),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> java::util::Calendar::FEBRUARY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(7),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> java::util::Calendar::MARCH;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(8),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> java::util::Calendar::APRIL;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(9),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(9),
	cpp_int
> java::util::Calendar::MAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(10),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(10),
	cpp_int
> java::util::Calendar::JUNE;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(11),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(11),
	cpp_int
> java::util::Calendar::JULY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(12),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(12),
	cpp_int
> java::util::Calendar::AUGUST;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(13),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(13),
	cpp_int
> java::util::Calendar::SEPTEMBER;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(14),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(14),
	cpp_int
> java::util::Calendar::OCTOBER;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(15),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(15),
	cpp_int
> java::util::Calendar::NOVEMBER;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(16),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(16),
	cpp_int
> java::util::Calendar::DECEMBER;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(17),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(17),
	cpp_int
> java::util::Calendar::UNDECIMBER;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(18),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(18),
	cpp_int
> java::util::Calendar::SUNDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(19),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(19),
	cpp_int
> java::util::Calendar::MONDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(20),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(20),
	cpp_int
> java::util::Calendar::TUESDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(21),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(21),
	cpp_int
> java::util::Calendar::WEDNESDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(22),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(22),
	cpp_int
> java::util::Calendar::THURSDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(23),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(23),
	cpp_int
> java::util::Calendar::FRIDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(24),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(24),
	cpp_int
> java::util::Calendar::SATURDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(25),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(25),
	cpp_int
> java::util::Calendar::ERA;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(26),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(26),
	cpp_int
> java::util::Calendar::YEAR;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(27),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(27),
	cpp_int
> java::util::Calendar::MONTH;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(28),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(28),
	cpp_int
> java::util::Calendar::WEEK_OF_YEAR;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(29),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(29),
	cpp_int
> java::util::Calendar::WEEK_OF_MONTH;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(30),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(30),
	cpp_int
> java::util::Calendar::DATE;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(31),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(31),
	cpp_int
> java::util::Calendar::DAY_OF_MONTH;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(32),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(32),
	cpp_int
> java::util::Calendar::DAY_OF_YEAR;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(33),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(33),
	cpp_int
> java::util::Calendar::DAY_OF_WEEK;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(34),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(34),
	cpp_int
> java::util::Calendar::DAY_OF_WEEK_IN_MONTH;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(35),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(35),
	cpp_int
> java::util::Calendar::AM_PM;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(36),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(36),
	cpp_int
> java::util::Calendar::HOUR;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(37),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(37),
	cpp_int
> java::util::Calendar::HOUR_OF_DAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(38),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(38),
	cpp_int
> java::util::Calendar::MINUTE;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(39),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(39),
	cpp_int
> java::util::Calendar::SECOND;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(40),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(40),
	cpp_int
> java::util::Calendar::MILLISECOND;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(41),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(41),
	cpp_int
> java::util::Calendar::ZONE_OFFSET;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(42),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(42),
	cpp_int
> java::util::Calendar::DST_OFFSET;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(43),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(43),
	cpp_int
> java::util::Calendar::FIELD_COUNT;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(44),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(44),
	cpp_int
> java::util::Calendar::AM;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(45),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(45),
	cpp_int
> java::util::Calendar::PM;


J2CPP_DEFINE_CLASS(java::util::Calendar,"java/util/Calendar")
J2CPP_DEFINE_METHOD(java::util::Calendar,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::Calendar,1,"<init>","(Ljava/util/TimeZone;Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,2,"add","(II)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,3,"after","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Calendar,4,"before","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Calendar,5,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::Calendar,6,"clear","(I)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,7,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Calendar,8,"complete","()V")
J2CPP_DEFINE_METHOD(java::util::Calendar,9,"computeFields","()V")
J2CPP_DEFINE_METHOD(java::util::Calendar,10,"computeTime","()V")
J2CPP_DEFINE_METHOD(java::util::Calendar,11,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Calendar,12,"get","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,13,"getActualMaximum","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,14,"getActualMinimum","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,15,"getAvailableLocales","()[java.util.Locale")
J2CPP_DEFINE_METHOD(java::util::Calendar,16,"getFirstDayOfWeek","()I")
J2CPP_DEFINE_METHOD(java::util::Calendar,17,"getGreatestMinimum","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,18,"getInstance","()Ljava/util/Calendar;")
J2CPP_DEFINE_METHOD(java::util::Calendar,19,"getInstance","(Ljava/util/Locale;)Ljava/util/Calendar;")
J2CPP_DEFINE_METHOD(java::util::Calendar,20,"getInstance","(Ljava/util/TimeZone;)Ljava/util/Calendar;")
J2CPP_DEFINE_METHOD(java::util::Calendar,21,"getInstance","(Ljava/util/TimeZone;Ljava/util/Locale;)Ljava/util/Calendar;")
J2CPP_DEFINE_METHOD(java::util::Calendar,22,"getLeastMaximum","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,23,"getMaximum","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,24,"getMinimalDaysInFirstWeek","()I")
J2CPP_DEFINE_METHOD(java::util::Calendar,25,"getMinimum","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,26,"getTime","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::util::Calendar,27,"getTimeInMillis","()J")
J2CPP_DEFINE_METHOD(java::util::Calendar,28,"getTimeZone","()Ljava/util/TimeZone;")
J2CPP_DEFINE_METHOD(java::util::Calendar,29,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::Calendar,30,"internalGet","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,31,"isLenient","()Z")
J2CPP_DEFINE_METHOD(java::util::Calendar,32,"isSet","(I)Z")
J2CPP_DEFINE_METHOD(java::util::Calendar,33,"roll","(II)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,34,"roll","(IZ)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,35,"set","(II)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,36,"set","(III)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,37,"set","(IIIII)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,38,"set","(IIIIII)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,39,"setFirstDayOfWeek","(I)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,40,"setLenient","(Z)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,41,"setMinimalDaysInFirstWeek","(I)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,42,"setTime","(Ljava/util/Date;)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,43,"setTimeInMillis","(J)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,44,"setTimeZone","(Ljava/util/TimeZone;)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,45,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Calendar,46,"compareTo","(Ljava/util/Calendar;)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,47,"compareTo","(Ljava/lang/Object;)I")
J2CPP_DEFINE_FIELD(java::util::Calendar,0,"areFieldsSet","Z")
J2CPP_DEFINE_FIELD(java::util::Calendar,1,"fields","[I")
J2CPP_DEFINE_FIELD(java::util::Calendar,2,"isSet","[Z")
J2CPP_DEFINE_FIELD(java::util::Calendar,3,"isTimeSet","Z")
J2CPP_DEFINE_FIELD(java::util::Calendar,4,"time","J")
J2CPP_DEFINE_FIELD(java::util::Calendar,5,"JANUARY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,6,"FEBRUARY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,7,"MARCH","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,8,"APRIL","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,9,"MAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,10,"JUNE","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,11,"JULY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,12,"AUGUST","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,13,"SEPTEMBER","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,14,"OCTOBER","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,15,"NOVEMBER","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,16,"DECEMBER","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,17,"UNDECIMBER","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,18,"SUNDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,19,"MONDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,20,"TUESDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,21,"WEDNESDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,22,"THURSDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,23,"FRIDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,24,"SATURDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,25,"ERA","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,26,"YEAR","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,27,"MONTH","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,28,"WEEK_OF_YEAR","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,29,"WEEK_OF_MONTH","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,30,"DATE","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,31,"DAY_OF_MONTH","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,32,"DAY_OF_YEAR","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,33,"DAY_OF_WEEK","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,34,"DAY_OF_WEEK_IN_MONTH","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,35,"AM_PM","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,36,"HOUR","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,37,"HOUR_OF_DAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,38,"MINUTE","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,39,"SECOND","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,40,"MILLISECOND","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,41,"ZONE_OFFSET","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,42,"DST_OFFSET","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,43,"FIELD_COUNT","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,44,"AM","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,45,"PM","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CALENDAR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
