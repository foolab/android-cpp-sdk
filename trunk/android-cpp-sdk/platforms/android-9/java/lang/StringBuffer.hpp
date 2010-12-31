/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.StringBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_STRINGBUFFER_HPP_DECL
#define J2CPP_JAVA_LANG_STRINGBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }
namespace j2cpp { namespace java { namespace lang { class AbstractStringBuilder; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/AbstractStringBuilder.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class StringBuffer;
	class StringBuffer
		: public object<StringBuffer>
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
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_METHOD(54)
		J2CPP_DECLARE_METHOD(55)
		J2CPP_DECLARE_METHOD(56)

		explicit StringBuffer(jobject jobj)
		: object<StringBuffer>(jobj)
		{
		}

		operator local_ref<java::lang::AbstractStringBuilder>() const;
		operator local_ref<java::lang::Appendable>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::CharSequence>() const;


		StringBuffer();
		StringBuffer(jint);
		StringBuffer(local_ref< java::lang::String > const&);
		StringBuffer(local_ref< java::lang::CharSequence > const&);
		local_ref< java::lang::StringBuffer > append(jboolean);
		local_ref< java::lang::StringBuffer > append(jchar);
		local_ref< java::lang::StringBuffer > append(jdouble);
		local_ref< java::lang::StringBuffer > append(jfloat);
		local_ref< java::lang::StringBuffer > append(jint);
		local_ref< java::lang::StringBuffer > append(jlong);
		local_ref< java::lang::StringBuffer > append(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::StringBuffer > append(local_ref< java::lang::String >  const&);
		local_ref< java::lang::StringBuffer > append(local_ref< java::lang::StringBuffer >  const&);
		local_ref< java::lang::StringBuffer > append(local_ref< array<jchar,1> >  const&);
		local_ref< java::lang::StringBuffer > append(local_ref< array<jchar,1> >  const&, jint, jint);
		local_ref< java::lang::StringBuffer > append(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::lang::StringBuffer > append(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::lang::StringBuffer > appendCodePoint(jint);
		jchar charAt(jint);
		jint codePointAt(jint);
		jint codePointBefore(jint);
		jint codePointCount(jint, jint);
		local_ref< java::lang::StringBuffer > delete_(jint, jint);
		local_ref< java::lang::StringBuffer > deleteCharAt(jint);
		void ensureCapacity(jint);
		void getChars(jint, jint, local_ref< array<jchar,1> >  const&, jint);
		jint indexOf(local_ref< java::lang::String >  const&, jint);
		local_ref< java::lang::StringBuffer > insert(jint, jchar);
		local_ref< java::lang::StringBuffer > insert(jint, jboolean);
		local_ref< java::lang::StringBuffer > insert(jint, jint);
		local_ref< java::lang::StringBuffer > insert(jint, jlong);
		local_ref< java::lang::StringBuffer > insert(jint, jdouble);
		local_ref< java::lang::StringBuffer > insert(jint, jfloat);
		local_ref< java::lang::StringBuffer > insert(jint, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::StringBuffer > insert(jint, local_ref< java::lang::String >  const&);
		local_ref< java::lang::StringBuffer > insert(jint, local_ref< array<jchar,1> >  const&);
		local_ref< java::lang::StringBuffer > insert(jint, local_ref< array<jchar,1> >  const&, jint, jint);
		local_ref< java::lang::StringBuffer > insert(jint, local_ref< java::lang::CharSequence >  const&);
		local_ref< java::lang::StringBuffer > insert(jint, local_ref< java::lang::CharSequence >  const&, jint, jint);
		jint lastIndexOf(local_ref< java::lang::String >  const&, jint);
		jint offsetByCodePoints(jint, jint);
		local_ref< java::lang::StringBuffer > replace(jint, jint, local_ref< java::lang::String >  const&);
		local_ref< java::lang::StringBuffer > reverse();
		void setCharAt(jint, jchar);
		void setLength(jint);
		local_ref< java::lang::CharSequence > subSequence(jint, jint);
		local_ref< java::lang::String > substring(jint);
		local_ref< java::lang::String > substring(jint, jint);
		local_ref< java::lang::String > toString();
		void trimToSize();
		jint lastIndexOf(local_ref< java::lang::String >  const&);
		jint indexOf(local_ref< java::lang::String >  const&);
		jint length();
		jint capacity();
		local_ref< java::lang::Appendable > append_1(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::lang::Appendable > append_1(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::lang::Appendable > append_1(jchar);
	}; //class StringBuffer

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_STRINGBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_STRINGBUFFER_HPP_IMPL
#define J2CPP_JAVA_LANG_STRINGBUFFER_HPP_IMPL

namespace j2cpp {



java::lang::StringBuffer::operator local_ref<java::lang::AbstractStringBuilder>() const
{
	return local_ref<java::lang::AbstractStringBuilder>(get_jobject());
}

java::lang::StringBuffer::operator local_ref<java::lang::Appendable>() const
{
	return local_ref<java::lang::Appendable>(get_jobject());
}

java::lang::StringBuffer::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::lang::StringBuffer::operator local_ref<java::lang::CharSequence>() const
{
	return local_ref<java::lang::CharSequence>(get_jobject());
}


java::lang::StringBuffer::StringBuffer()
: object<java::lang::StringBuffer>(
	call_new_object<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(0),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::lang::StringBuffer::StringBuffer(jint a0)
: object<java::lang::StringBuffer>(
	call_new_object<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(1),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



java::lang::StringBuffer::StringBuffer(local_ref< java::lang::String > const &a0)
: object<java::lang::StringBuffer>(
	call_new_object<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(2),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}



java::lang::StringBuffer::StringBuffer(local_ref< java::lang::CharSequence > const &a0)
: object<java::lang::StringBuffer>(
	call_new_object<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(3),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}


local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(jboolean a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(4),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(jchar a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(5),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(jdouble a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(6),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(jfloat a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(7),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(jint a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(8),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(jlong a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(9),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(10),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(11),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< java::lang::StringBuffer > const &a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(12),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< array<jchar,1> > const &a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(13),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(14),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(15),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::append(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(16),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::appendCodePoint(jint a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(17),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0);
}

jchar java::lang::StringBuffer::charAt(jint a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(18),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(18), 
		jchar >
	(get_jobject(), a0);
}

jint java::lang::StringBuffer::codePointAt(jint a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(19),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(19), 
		jint >
	(get_jobject(), a0);
}

jint java::lang::StringBuffer::codePointBefore(jint a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(20),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(20), 
		jint >
	(get_jobject(), a0);
}

jint java::lang::StringBuffer::codePointCount(jint a0, jint a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(21),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(21), 
		jint >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::delete_(jint a0, jint a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(22),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::deleteCharAt(jint a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(23),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0);
}

void java::lang::StringBuffer::ensureCapacity(jint a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(24),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(24), 
		void >
	(get_jobject(), a0);
}

void java::lang::StringBuffer::getChars(jint a0, jint a1, local_ref< array<jchar,1> > const &a2, jint a3)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(25),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(25), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

jint java::lang::StringBuffer::indexOf(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(26),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(26), 
		jint >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(jint a0, jchar a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(27),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(jint a0, jboolean a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(28),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(jint a0, jint a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(29),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(jint a0, jlong a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(30),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(jint a0, jdouble a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(31),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(jint a0, jfloat a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(32),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(33),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(34),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(34), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(jint a0, local_ref< array<jchar,1> > const &a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(35),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(35), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(jint a0, local_ref< array<jchar,1> > const &a1, jint a2, jint a3)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(36),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(36), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1, a2, a3);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(jint a0, local_ref< java::lang::CharSequence > const &a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(37),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(37), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::insert(jint a0, local_ref< java::lang::CharSequence > const &a1, jint a2, jint a3)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(38),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(38), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1, a2, a3);
}

jint java::lang::StringBuffer::lastIndexOf(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(39),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(39), 
		jint >
	(get_jobject(), a0, a1);
}

jint java::lang::StringBuffer::offsetByCodePoints(jint a0, jint a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(40),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(40), 
		jint >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::replace(jint a0, jint a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(41),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(41), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::StringBuffer > java::lang::StringBuffer::reverse()
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(42),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(42), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject());
}

void java::lang::StringBuffer::setCharAt(jint a0, jchar a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(43),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(43), 
		void >
	(get_jobject(), a0, a1);
}

void java::lang::StringBuffer::setLength(jint a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(44),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(44), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > java::lang::StringBuffer::subSequence(jint a0, jint a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(45),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(45), 
		local_ref< java::lang::CharSequence > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > java::lang::StringBuffer::substring(jint a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(46),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(46), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::lang::StringBuffer::substring(jint a0, jint a1)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(47),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(47), 
		local_ref< java::lang::String > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > java::lang::StringBuffer::toString()
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(48),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(48), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void java::lang::StringBuffer::trimToSize()
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(49),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(49), 
		void >
	(get_jobject());
}

jint java::lang::StringBuffer::lastIndexOf(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(50),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(50), 
		jint >
	(get_jobject(), a0);
}

jint java::lang::StringBuffer::indexOf(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(51),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(51), 
		jint >
	(get_jobject(), a0);
}

jint java::lang::StringBuffer::length()
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(52),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(52), 
		jint >
	(get_jobject());
}

jint java::lang::StringBuffer::capacity()
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(53),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(53), 
		jint >
	(get_jobject());
}

local_ref< java::lang::Appendable > java::lang::StringBuffer::append_1(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(54),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(54), 
		local_ref< java::lang::Appendable > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Appendable > java::lang::StringBuffer::append_1(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(55),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(55), 
		local_ref< java::lang::Appendable > >
	(get_jobject(), a0);
}

local_ref< java::lang::Appendable > java::lang::StringBuffer::append_1(jchar a0)
{
	return call_method<
		java::lang::StringBuffer::J2CPP_CLASS_NAME,
		java::lang::StringBuffer::J2CPP_METHOD_NAME(56),
		java::lang::StringBuffer::J2CPP_METHOD_SIGNATURE(56), 
		local_ref< java::lang::Appendable > >
	(get_jobject(), a0);
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
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,50,"lastIndexOf","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,51,"indexOf","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,52,"length","()I")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,53,"capacity","()I")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,54,"append","(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,55,"append","(Ljava/lang/CharSequence;)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::lang::StringBuffer,56,"append","(C)Ljava/lang/Appendable;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_STRINGBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
