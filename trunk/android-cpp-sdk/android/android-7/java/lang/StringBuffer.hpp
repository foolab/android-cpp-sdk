/*================================================================================
  code generated by: java2cpp
  class: java.lang.StringBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_STRINGBUFFER_HPP_DECL
#define J2CPP_JAVA_LANG_STRINGBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Appendable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class StringBuffer;
	class StringBuffer
		: public cpp_object<StringBuffer>
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
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)

		StringBuffer(jobject jobj)
		: cpp_object<StringBuffer>(jobj)
		{
		}

		local_ref< java::lang::StringBuffer > append(cpp_boolean const&);
		local_ref< java::lang::StringBuffer > append(cpp_char const&);
		local_ref< java::lang::StringBuffer > append(cpp_double const&);
		local_ref< java::lang::StringBuffer > append(cpp_float const&);
		local_ref< java::lang::StringBuffer > append(cpp_int const&);
		local_ref< java::lang::StringBuffer > append(cpp_long const&);
		local_ref< java::lang::StringBuffer > append(local_ref< java::lang::Object > const&);
		local_ref< java::lang::StringBuffer > append(local_ref< java::lang::String > const&);
		local_ref< java::lang::StringBuffer > append(local_ref< java::lang::StringBuffer > const&);
		local_ref< java::lang::StringBuffer > append(local_ref< cpp_char_array<1> > const&);
		local_ref< java::lang::StringBuffer > append(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		local_ref< java::lang::StringBuffer > append(local_ref< java::lang::CharSequence > const&);
		local_ref< java::lang::StringBuffer > append(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		local_ref< java::lang::StringBuffer > appendCodePoint(cpp_int const&);
		cpp_char charAt(cpp_int const&);
		cpp_int codePointAt(cpp_int const&);
		cpp_int codePointBefore(cpp_int const&);
		cpp_int codePointCount(cpp_int const&, cpp_int const&);
		local_ref< java::lang::StringBuffer > deleteThe(cpp_int const&, cpp_int const&);
		local_ref< java::lang::StringBuffer > deleteCharAt(cpp_int const&);
		void ensureCapacity(cpp_int const&);
		void getChars(cpp_int const&, cpp_int const&, local_ref< cpp_char_array<1> > const&, cpp_int const&);
		cpp_int indexOf(local_ref< java::lang::String > const&, cpp_int const&);
		local_ref< java::lang::StringBuffer > insert(cpp_int const&, cpp_char const&);
		local_ref< java::lang::StringBuffer > insert(cpp_int const&, cpp_boolean const&);
		local_ref< java::lang::StringBuffer > insert(cpp_int const&, cpp_int const&);
		local_ref< java::lang::StringBuffer > insert(cpp_int const&, cpp_long const&);
		local_ref< java::lang::StringBuffer > insert(cpp_int const&, cpp_double const&);
		local_ref< java::lang::StringBuffer > insert(cpp_int const&, cpp_float const&);
		local_ref< java::lang::StringBuffer > insert(cpp_int const&, local_ref< java::lang::Object > const&);
		local_ref< java::lang::StringBuffer > insert(cpp_int const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::StringBuffer > insert(cpp_int const&, local_ref< cpp_char_array<1> > const&);
		local_ref< java::lang::StringBuffer > insert(cpp_int const&, local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		local_ref< java::lang::StringBuffer > insert(cpp_int const&, local_ref< java::lang::CharSequence > const&);
		local_ref< java::lang::StringBuffer > insert(cpp_int const&, local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		cpp_int lastIndexOf(local_ref< java::lang::String > const&, cpp_int const&);
		cpp_int offsetByCodePoints(cpp_int const&, cpp_int const&);
		local_ref< java::lang::StringBuffer > replace(cpp_int const&, cpp_int const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::StringBuffer > reverse();
		void setCharAt(cpp_int const&, cpp_char const&);
		void setLength(cpp_int const&);
		local_ref< java::lang::CharSequence > subSequence(cpp_int const&, cpp_int const&);
		local_ref< java::lang::String > substring(cpp_int const&);
		local_ref< java::lang::String > substring(cpp_int const&, cpp_int const&);
		local_ref< java::lang::String > toString();
		void trimToSize();
		local_ref< java::lang::Appendable > append_1(local_ref< java::lang::CharSequence > const&, cpp_int const&, cpp_int const&);
		local_ref< java::lang::Appendable > append_1(local_ref< java::lang::CharSequence > const&);
		local_ref< java::lang::Appendable > append_1(cpp_char const&);
	}; //class StringBuffer

} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_STRINGBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_STRINGBUFFER_HPP_IMPL
#define J2CPP_JAVA_LANG_STRINGBUFFER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::lang::StringBuffer > create< java::lang::StringBuffer>()
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::StringBuffer::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::StringBuffer::J2CPP_CLASS_NAME, java::lang::StringBuffer::J2CPP_METHOD_NAME(0), java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::lang::StringBuffer > create< java::lang::StringBuffer>(cpp_int const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::StringBuffer::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::StringBuffer::J2CPP_CLASS_NAME, java::lang::StringBuffer::J2CPP_METHOD_NAME(1), java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::lang::StringBuffer > create< java::lang::StringBuffer>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::StringBuffer::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::StringBuffer::J2CPP_CLASS_NAME, java::lang::StringBuffer::J2CPP_METHOD_NAME(2), java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::lang::StringBuffer > create< java::lang::StringBuffer>(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::StringBuffer::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::StringBuffer::J2CPP_CLASS_NAME, java::lang::StringBuffer::J2CPP_METHOD_NAME(3), java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(cpp_boolean const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(cpp_char const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(cpp_double const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(cpp_float const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(cpp_int const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(cpp_long const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< java::lang::StringBuffer > const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< cpp_char_array<1> > const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::appendCodePoint(cpp_int const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_char java::lang::StringBuffer::charAt(cpp_int const &a0)
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::lang::StringBuffer::codePointAt(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::lang::StringBuffer::codePointBefore(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::lang::StringBuffer::codePointCount(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::deleteThe(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::deleteCharAt(cpp_int const &a0)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

void java::lang::StringBuffer::ensureCapacity(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

void java::lang::StringBuffer::getChars(cpp_int const &a0, cpp_int const &a1, local_ref< cpp_char_array<1> > const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_int java::lang::StringBuffer::indexOf(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(cpp_int const &a0, cpp_char const &a1)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(cpp_int const &a0, cpp_boolean const &a1)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(cpp_int const &a0, cpp_long const &a1)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(cpp_int const &a0, cpp_double const &a1)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(cpp_int const &a0, cpp_float const &a1)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(cpp_int const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(cpp_int const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(cpp_int const &a0, local_ref< cpp_char_array<1> > const &a1)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(cpp_int const &a0, local_ref< cpp_char_array<1> > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(cpp_int const &a0, local_ref< java::lang::CharSequence > const &a1)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(cpp_int const &a0, local_ref< java::lang::CharSequence > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_int java::lang::StringBuffer::lastIndexOf(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::lang::StringBuffer::offsetByCodePoints(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::replace(cpp_int const &a0, cpp_int const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::reverse()
{
	return local_ref< java::lang::StringBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>()
		)
	);
}

void java::lang::StringBuffer::setCharAt(cpp_int const &a0, cpp_char const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::lang::StringBuffer::setLength(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > java::lang::StringBuffer::subSequence(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::lang::StringBuffer::substring(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::lang::StringBuffer::substring(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::lang::StringBuffer::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(48), J2CPP_METHOD_SIGNATURE(48), false>()
		)
	);
}

void java::lang::StringBuffer::trimToSize()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(49), J2CPP_METHOD_SIGNATURE(49), false>()
		)
	);
}

local_ref< java::lang::Appendable > java::lang::StringBuffer::append_1(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::lang::Appendable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(50), J2CPP_METHOD_SIGNATURE(50), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::Appendable > java::lang::StringBuffer::append_1(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< java::lang::Appendable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(51), J2CPP_METHOD_SIGNATURE(51), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Appendable > java::lang::StringBuffer::append_1(cpp_char const &a0)
{
	return local_ref< java::lang::Appendable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(52), J2CPP_METHOD_SIGNATURE(52), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::StringBuffer,"java/lang/StringBuffer")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,3,"<init>","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,4,"append","(Z)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,5,"append","(C)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,6,"append","(D)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,7,"append","(F)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,8,"append","(I)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,9,"append","(J)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,10,"append","(Ljava/lang/Object;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,11,"append","(Ljava/lang/String;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,12,"append","(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,13,"append","([C)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,14,"append","([CII)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,15,"append","(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,16,"append","(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,17,"appendCodePoint","(I)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,18,"charAt","(I)C")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,19,"codePointAt","(I)I")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,20,"codePointBefore","(I)I")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,21,"codePointCount","(II)I")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,22,"delete","(II)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,23,"deleteCharAt","(I)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,24,"ensureCapacity","(I)V")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,25,"getChars","(II[CI)V")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,26,"indexOf","(Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,27,"insert","(IC)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,28,"insert","(IZ)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,29,"insert","(II)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,30,"insert","(IJ)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,31,"insert","(ID)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,32,"insert","(IF)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,33,"insert","(ILjava/lang/Object;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,34,"insert","(ILjava/lang/String;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,35,"insert","(I[C)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,36,"insert","(I[CII)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,37,"insert","(ILjava/lang/CharSequence;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,38,"insert","(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,39,"lastIndexOf","(Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,40,"offsetByCodePoints","(II)I")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,41,"replace","(IILjava/lang/String;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,42,"reverse","()Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,43,"setCharAt","(IC)V")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,44,"setLength","(I)V")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,45,"subSequence","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,46,"substring","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,47,"substring","(II)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,48,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,49,"trimToSize","()V")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,50,"append","(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,51,"append","(Ljava/lang/CharSequence;)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,52,"append","(C)Ljava/lang/Appendable;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_STRINGBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
