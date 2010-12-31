/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.Scanner
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SCANNER_HPP_DECL
#define J2CPP_JAVA_UTIL_SCANNER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Readable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class ReadableByteChannel; } } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace util { namespace regex { class Pattern; } } } }
namespace j2cpp { namespace java { namespace util { namespace regex { class MatchResult; } } } }
namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace math { class BigDecimal; } } }


#include <java/io/File.hpp>
#include <java/io/IOException.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Readable.hpp>
#include <java/lang/String.hpp>
#include <java/math/BigDecimal.hpp>
#include <java/math/BigInteger.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Locale.hpp>
#include <java/util/regex/MatchResult.hpp>
#include <java/util/regex/Pattern.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Scanner;
	class Scanner
		: public object<Scanner>
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
		J2CPP_DECLARE_METHOD(57)
		J2CPP_DECLARE_METHOD(58)
		J2CPP_DECLARE_METHOD(59)
		J2CPP_DECLARE_METHOD(60)
		J2CPP_DECLARE_METHOD(61)
		J2CPP_DECLARE_METHOD(62)
		J2CPP_DECLARE_METHOD(63)

		explicit Scanner(jobject jobj)
		: object<Scanner>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::Iterator>() const;


		Scanner(local_ref< java::io::File > const&);
		Scanner(local_ref< java::io::File > const&, local_ref< java::lang::String > const&);
		Scanner(local_ref< java::lang::String > const&);
		Scanner(local_ref< java::io::InputStream > const&);
		Scanner(local_ref< java::io::InputStream > const&, local_ref< java::lang::String > const&);
		Scanner(local_ref< java::lang::Readable > const&);
		Scanner(local_ref< java::nio::channels::ReadableByteChannel > const&);
		Scanner(local_ref< java::nio::channels::ReadableByteChannel > const&, local_ref< java::lang::String > const&);
		void close();
		local_ref< java::util::regex::Pattern > delimiter();
		local_ref< java::lang::String > findInLine(local_ref< java::util::regex::Pattern >  const&);
		local_ref< java::lang::String > findInLine(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > findWithinHorizon(local_ref< java::util::regex::Pattern >  const&, jint);
		local_ref< java::lang::String > findWithinHorizon(local_ref< java::lang::String >  const&, jint);
		jboolean hasNext();
		jboolean hasNext(local_ref< java::util::regex::Pattern >  const&);
		jboolean hasNext(local_ref< java::lang::String >  const&);
		jboolean hasNextBigDecimal();
		jboolean hasNextBigInteger();
		jboolean hasNextBigInteger(jint);
		jboolean hasNextBoolean();
		jboolean hasNextByte();
		jboolean hasNextByte(jint);
		jboolean hasNextDouble();
		jboolean hasNextFloat();
		jboolean hasNextInt();
		jboolean hasNextInt(jint);
		jboolean hasNextLine();
		jboolean hasNextLong();
		jboolean hasNextLong(jint);
		jboolean hasNextShort();
		jboolean hasNextShort(jint);
		local_ref< java::io::IOException > ioException();
		local_ref< java::util::Locale > locale();
		local_ref< java::util::regex::MatchResult > match();
		local_ref< java::lang::String > next();
		local_ref< java::lang::String > next(local_ref< java::util::regex::Pattern >  const&);
		local_ref< java::lang::String > next(local_ref< java::lang::String >  const&);
		local_ref< java::math::BigDecimal > nextBigDecimal();
		local_ref< java::math::BigInteger > nextBigInteger();
		local_ref< java::math::BigInteger > nextBigInteger(jint);
		jboolean nextBoolean();
		jbyte nextByte();
		jbyte nextByte(jint);
		jdouble nextDouble();
		jfloat nextFloat();
		jint nextInt();
		jint nextInt(jint);
		local_ref< java::lang::String > nextLine();
		jlong nextLong();
		jlong nextLong(jint);
		jshort nextShort();
		jshort nextShort(jint);
		jint radix();
		local_ref< java::util::Scanner > skip(local_ref< java::util::regex::Pattern >  const&);
		local_ref< java::util::Scanner > skip(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > toString();
		local_ref< java::util::Scanner > useDelimiter(local_ref< java::util::regex::Pattern >  const&);
		local_ref< java::util::Scanner > useDelimiter(local_ref< java::lang::String >  const&);
		local_ref< java::util::Scanner > useLocale(local_ref< java::util::Locale >  const&);
		local_ref< java::util::Scanner > useRadix(jint);
		void remove();
		local_ref< java::util::Scanner > reset();
		local_ref< java::lang::Object > next_1();
	}; //class Scanner

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SCANNER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_SCANNER_HPP_IMPL
#define J2CPP_JAVA_UTIL_SCANNER_HPP_IMPL

namespace j2cpp {



java::util::Scanner::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::Scanner::operator local_ref<java::util::Iterator>() const
{
	return local_ref<java::util::Iterator>(get_jobject());
}


java::util::Scanner::Scanner(local_ref< java::io::File > const &a0)
: object<java::util::Scanner>(
	call_new_object<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(0),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::util::Scanner::Scanner(local_ref< java::io::File > const &a0, local_ref< java::lang::String > const &a1)
: object<java::util::Scanner>(
	call_new_object<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(1),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



java::util::Scanner::Scanner(local_ref< java::lang::String > const &a0)
: object<java::util::Scanner>(
	call_new_object<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(2),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}



java::util::Scanner::Scanner(local_ref< java::io::InputStream > const &a0)
: object<java::util::Scanner>(
	call_new_object<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(3),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}



java::util::Scanner::Scanner(local_ref< java::io::InputStream > const &a0, local_ref< java::lang::String > const &a1)
: object<java::util::Scanner>(
	call_new_object<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(4),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(4)>
	(a0, a1)
)
{
}



java::util::Scanner::Scanner(local_ref< java::lang::Readable > const &a0)
: object<java::util::Scanner>(
	call_new_object<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(5),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(5)>
	(a0)
)
{
}



java::util::Scanner::Scanner(local_ref< java::nio::channels::ReadableByteChannel > const &a0)
: object<java::util::Scanner>(
	call_new_object<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(6),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(6)>
	(a0)
)
{
}



java::util::Scanner::Scanner(local_ref< java::nio::channels::ReadableByteChannel > const &a0, local_ref< java::lang::String > const &a1)
: object<java::util::Scanner>(
	call_new_object<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(7),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(7)>
	(a0, a1)
)
{
}


void java::util::Scanner::close()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(8),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject());
}

local_ref< java::util::regex::Pattern > java::util::Scanner::delimiter()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(9),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::regex::Pattern > >
	(get_jobject());
}

local_ref< java::lang::String > java::util::Scanner::findInLine(local_ref< java::util::regex::Pattern > const &a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(10),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::Scanner::findInLine(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(11),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::Scanner::findWithinHorizon(local_ref< java::util::regex::Pattern > const &a0, jint a1)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(12),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > java::util::Scanner::findWithinHorizon(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(13),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String > >
	(get_jobject(), a0, a1);
}

jboolean java::util::Scanner::hasNext()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(14),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(14), 
		jboolean >
	(get_jobject());
}

jboolean java::util::Scanner::hasNext(local_ref< java::util::regex::Pattern > const &a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(15),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(15), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::Scanner::hasNext(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(16),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(16), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::Scanner::hasNextBigDecimal()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(17),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(17), 
		jboolean >
	(get_jobject());
}

jboolean java::util::Scanner::hasNextBigInteger()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(18),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(18), 
		jboolean >
	(get_jobject());
}

jboolean java::util::Scanner::hasNextBigInteger(jint a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(19),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(19), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::Scanner::hasNextBoolean()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(20),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject());
}

jboolean java::util::Scanner::hasNextByte()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(21),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(21), 
		jboolean >
	(get_jobject());
}

jboolean java::util::Scanner::hasNextByte(jint a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(22),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(22), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::Scanner::hasNextDouble()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(23),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(23), 
		jboolean >
	(get_jobject());
}

jboolean java::util::Scanner::hasNextFloat()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(24),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(24), 
		jboolean >
	(get_jobject());
}

jboolean java::util::Scanner::hasNextInt()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(25),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(25), 
		jboolean >
	(get_jobject());
}

jboolean java::util::Scanner::hasNextInt(jint a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(26),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(26), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::Scanner::hasNextLine()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(27),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(27), 
		jboolean >
	(get_jobject());
}

jboolean java::util::Scanner::hasNextLong()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(28),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(28), 
		jboolean >
	(get_jobject());
}

jboolean java::util::Scanner::hasNextLong(jint a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(29),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(29), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::Scanner::hasNextShort()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(30),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(30), 
		jboolean >
	(get_jobject());
}

jboolean java::util::Scanner::hasNextShort(jint a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(31),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(31), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::io::IOException > java::util::Scanner::ioException()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(32),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(32), 
		local_ref< java::io::IOException > >
	(get_jobject());
}

local_ref< java::util::Locale > java::util::Scanner::locale()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(33),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(33), 
		local_ref< java::util::Locale > >
	(get_jobject());
}

local_ref< java::util::regex::MatchResult > java::util::Scanner::match()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(34),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(34), 
		local_ref< java::util::regex::MatchResult > >
	(get_jobject());
}

local_ref< java::lang::String > java::util::Scanner::next()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(35),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(35), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::util::Scanner::next(local_ref< java::util::regex::Pattern > const &a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(36),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(36), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::Scanner::next(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(37),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(37), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< java::math::BigDecimal > java::util::Scanner::nextBigDecimal()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(38),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(38), 
		local_ref< java::math::BigDecimal > >
	(get_jobject());
}

local_ref< java::math::BigInteger > java::util::Scanner::nextBigInteger()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(39),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(39), 
		local_ref< java::math::BigInteger > >
	(get_jobject());
}

local_ref< java::math::BigInteger > java::util::Scanner::nextBigInteger(jint a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(40),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(40), 
		local_ref< java::math::BigInteger > >
	(get_jobject(), a0);
}

jboolean java::util::Scanner::nextBoolean()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(41),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(41), 
		jboolean >
	(get_jobject());
}

jbyte java::util::Scanner::nextByte()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(42),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(42), 
		jbyte >
	(get_jobject());
}

jbyte java::util::Scanner::nextByte(jint a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(43),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(43), 
		jbyte >
	(get_jobject(), a0);
}

jdouble java::util::Scanner::nextDouble()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(44),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(44), 
		jdouble >
	(get_jobject());
}

jfloat java::util::Scanner::nextFloat()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(45),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(45), 
		jfloat >
	(get_jobject());
}

jint java::util::Scanner::nextInt()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(46),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(46), 
		jint >
	(get_jobject());
}

jint java::util::Scanner::nextInt(jint a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(47),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(47), 
		jint >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::Scanner::nextLine()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(48),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(48), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jlong java::util::Scanner::nextLong()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(49),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(49), 
		jlong >
	(get_jobject());
}

jlong java::util::Scanner::nextLong(jint a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(50),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(50), 
		jlong >
	(get_jobject(), a0);
}

jshort java::util::Scanner::nextShort()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(51),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(51), 
		jshort >
	(get_jobject());
}

jshort java::util::Scanner::nextShort(jint a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(52),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(52), 
		jshort >
	(get_jobject(), a0);
}

jint java::util::Scanner::radix()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(53),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(53), 
		jint >
	(get_jobject());
}

local_ref< java::util::Scanner > java::util::Scanner::skip(local_ref< java::util::regex::Pattern > const &a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(54),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(54), 
		local_ref< java::util::Scanner > >
	(get_jobject(), a0);
}

local_ref< java::util::Scanner > java::util::Scanner::skip(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(55),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(55), 
		local_ref< java::util::Scanner > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::Scanner::toString()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(56),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(56), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::util::Scanner > java::util::Scanner::useDelimiter(local_ref< java::util::regex::Pattern > const &a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(57),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(57), 
		local_ref< java::util::Scanner > >
	(get_jobject(), a0);
}

local_ref< java::util::Scanner > java::util::Scanner::useDelimiter(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(58),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(58), 
		local_ref< java::util::Scanner > >
	(get_jobject(), a0);
}

local_ref< java::util::Scanner > java::util::Scanner::useLocale(local_ref< java::util::Locale > const &a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(59),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(59), 
		local_ref< java::util::Scanner > >
	(get_jobject(), a0);
}

local_ref< java::util::Scanner > java::util::Scanner::useRadix(jint a0)
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(60),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(60), 
		local_ref< java::util::Scanner > >
	(get_jobject(), a0);
}

void java::util::Scanner::remove()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(61),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(61), 
		void >
	(get_jobject());
}

local_ref< java::util::Scanner > java::util::Scanner::reset()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(62),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(62), 
		local_ref< java::util::Scanner > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::Scanner::next_1()
{
	return call_method<
		java::util::Scanner::J2CPP_CLASS_NAME,
		java::util::Scanner::J2CPP_METHOD_NAME(63),
		java::util::Scanner::J2CPP_METHOD_SIGNATURE(63), 
		local_ref< java::lang::Object > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::Scanner,"java/util/Scanner")
J2CPP_DEFINE_METHOD(java::util::Scanner,0,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,1,"<init>","(Ljava/io/File;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,3,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,4,"<init>","(Ljava/io/InputStream;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,5,"<init>","(Ljava/lang/Readable;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,6,"<init>","(Ljava/nio/channels/ReadableByteChannel;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,7,"<init>","(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::Scanner,8,"close","()V")
J2CPP_DEFINE_METHOD(java::util::Scanner,9,"delimiter","()Ljava/util/regex/Pattern;")
J2CPP_DEFINE_METHOD(java::util::Scanner,10,"findInLine","(Ljava/util/regex/Pattern;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,11,"findInLine","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,12,"findWithinHorizon","(Ljava/util/regex/Pattern;I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,13,"findWithinHorizon","(Ljava/lang/String;I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,14,"hasNext","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,15,"hasNext","(Ljava/util/regex/Pattern;)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,16,"hasNext","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,17,"hasNextBigDecimal","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,18,"hasNextBigInteger","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,19,"hasNextBigInteger","(I)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,20,"hasNextBoolean","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,21,"hasNextByte","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,22,"hasNextByte","(I)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,23,"hasNextDouble","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,24,"hasNextFloat","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,25,"hasNextInt","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,26,"hasNextInt","(I)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,27,"hasNextLine","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,28,"hasNextLong","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,29,"hasNextLong","(I)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,30,"hasNextShort","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,31,"hasNextShort","(I)Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,32,"ioException","()Ljava/io/IOException;")
J2CPP_DEFINE_METHOD(java::util::Scanner,33,"locale","()Ljava/util/Locale;")
J2CPP_DEFINE_METHOD(java::util::Scanner,34,"match","()Ljava/util/regex/MatchResult;")
J2CPP_DEFINE_METHOD(java::util::Scanner,35,"next","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,36,"next","(Ljava/util/regex/Pattern;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,37,"next","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,38,"nextBigDecimal","()Ljava/math/BigDecimal;")
J2CPP_DEFINE_METHOD(java::util::Scanner,39,"nextBigInteger","()Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::util::Scanner,40,"nextBigInteger","(I)Ljava/math/BigInteger;")
J2CPP_DEFINE_METHOD(java::util::Scanner,41,"nextBoolean","()Z")
J2CPP_DEFINE_METHOD(java::util::Scanner,42,"nextByte","()B")
J2CPP_DEFINE_METHOD(java::util::Scanner,43,"nextByte","(I)B")
J2CPP_DEFINE_METHOD(java::util::Scanner,44,"nextDouble","()D")
J2CPP_DEFINE_METHOD(java::util::Scanner,45,"nextFloat","()F")
J2CPP_DEFINE_METHOD(java::util::Scanner,46,"nextInt","()I")
J2CPP_DEFINE_METHOD(java::util::Scanner,47,"nextInt","(I)I")
J2CPP_DEFINE_METHOD(java::util::Scanner,48,"nextLine","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,49,"nextLong","()J")
J2CPP_DEFINE_METHOD(java::util::Scanner,50,"nextLong","(I)J")
J2CPP_DEFINE_METHOD(java::util::Scanner,51,"nextShort","()S")
J2CPP_DEFINE_METHOD(java::util::Scanner,52,"nextShort","(I)S")
J2CPP_DEFINE_METHOD(java::util::Scanner,53,"radix","()I")
J2CPP_DEFINE_METHOD(java::util::Scanner,54,"skip","(Ljava/util/regex/Pattern;)Ljava/util/Scanner;")
J2CPP_DEFINE_METHOD(java::util::Scanner,55,"skip","(Ljava/lang/String;)Ljava/util/Scanner;")
J2CPP_DEFINE_METHOD(java::util::Scanner,56,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Scanner,57,"useDelimiter","(Ljava/util/regex/Pattern;)Ljava/util/Scanner;")
J2CPP_DEFINE_METHOD(java::util::Scanner,58,"useDelimiter","(Ljava/lang/String;)Ljava/util/Scanner;")
J2CPP_DEFINE_METHOD(java::util::Scanner,59,"useLocale","(Ljava/util/Locale;)Ljava/util/Scanner;")
J2CPP_DEFINE_METHOD(java::util::Scanner,60,"useRadix","(I)Ljava/util/Scanner;")
J2CPP_DEFINE_METHOD(java::util::Scanner,61,"remove","()V")
J2CPP_DEFINE_METHOD(java::util::Scanner,62,"reset","()Ljava/util/Scanner;")
J2CPP_DEFINE_METHOD(java::util::Scanner,63,"next","()Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_SCANNER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
