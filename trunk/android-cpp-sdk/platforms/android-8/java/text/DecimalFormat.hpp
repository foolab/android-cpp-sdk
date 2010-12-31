/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.text.DecimalFormat
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_DECIMALFORMAT_HPP_DECL
#define J2CPP_JAVA_TEXT_DECIMALFORMAT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Number; } } }
namespace j2cpp { namespace java { namespace lang { class StringBuffer; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace text { class DecimalFormatSymbols; } } }
namespace j2cpp { namespace java { namespace text { class AttributedCharacterIterator; } } }
namespace j2cpp { namespace java { namespace text { class FieldPosition; } } }
namespace j2cpp { namespace java { namespace text { class NumberFormat; } } }
namespace j2cpp { namespace java { namespace text { class ParsePosition; } } }
namespace j2cpp { namespace java { namespace util { class Currency; } } }


#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/StringBuffer.hpp>
#include <java/text/AttributedCharacterIterator.hpp>
#include <java/text/DecimalFormatSymbols.hpp>
#include <java/text/FieldPosition.hpp>
#include <java/text/NumberFormat.hpp>
#include <java/text/ParsePosition.hpp>
#include <java/util/Currency.hpp>


namespace j2cpp {

namespace java { namespace text {

	class DecimalFormat;
	class DecimalFormat
		: public object<DecimalFormat>
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

		explicit DecimalFormat(jobject jobj)
		: object<DecimalFormat>(jobj)
		{
		}

		operator local_ref<java::text::NumberFormat>() const;


		DecimalFormat();
		DecimalFormat(local_ref< java::lang::String > const&);
		DecimalFormat(local_ref< java::lang::String > const&, local_ref< java::text::DecimalFormatSymbols > const&);
		void applyLocalizedPattern(local_ref< java::lang::String >  const&);
		void applyPattern(local_ref< java::lang::String >  const&);
		local_ref< java::lang::Object > clone();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::text::AttributedCharacterIterator > formatToCharacterIterator(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::StringBuffer > format(jdouble, local_ref< java::lang::StringBuffer >  const&, local_ref< java::text::FieldPosition >  const&);
		local_ref< java::lang::StringBuffer > format(jlong, local_ref< java::lang::StringBuffer >  const&, local_ref< java::text::FieldPosition >  const&);
		local_ref< java::lang::StringBuffer > format(local_ref< java::lang::Object >  const&, local_ref< java::lang::StringBuffer >  const&, local_ref< java::text::FieldPosition >  const&);
		local_ref< java::text::DecimalFormatSymbols > getDecimalFormatSymbols();
		local_ref< java::util::Currency > getCurrency();
		jint getGroupingSize();
		jint getMultiplier();
		local_ref< java::lang::String > getNegativePrefix();
		local_ref< java::lang::String > getNegativeSuffix();
		local_ref< java::lang::String > getPositivePrefix();
		local_ref< java::lang::String > getPositiveSuffix();
		jint hashCode();
		jboolean isDecimalSeparatorAlwaysShown();
		jboolean isParseBigDecimal();
		void setParseIntegerOnly(jboolean);
		jboolean isParseIntegerOnly();
		local_ref< java::lang::Number > parse(local_ref< java::lang::String >  const&, local_ref< java::text::ParsePosition >  const&);
		void setDecimalFormatSymbols(local_ref< java::text::DecimalFormatSymbols >  const&);
		void setCurrency(local_ref< java::util::Currency >  const&);
		void setDecimalSeparatorAlwaysShown(jboolean);
		void setGroupingSize(jint);
		void setGroupingUsed(jboolean);
		jboolean isGroupingUsed();
		void setMaximumFractionDigits(jint);
		void setMaximumIntegerDigits(jint);
		void setMinimumFractionDigits(jint);
		void setMinimumIntegerDigits(jint);
		void setMultiplier(jint);
		void setNegativePrefix(local_ref< java::lang::String >  const&);
		void setNegativeSuffix(local_ref< java::lang::String >  const&);
		void setPositivePrefix(local_ref< java::lang::String >  const&);
		void setPositiveSuffix(local_ref< java::lang::String >  const&);
		void setParseBigDecimal(jboolean);
		local_ref< java::lang::String > toLocalizedPattern();
		local_ref< java::lang::String > toPattern();
	}; //class DecimalFormat

} //namespace text
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_DECIMALFORMAT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_DECIMALFORMAT_HPP_IMPL
#define J2CPP_JAVA_TEXT_DECIMALFORMAT_HPP_IMPL

namespace j2cpp {



java::text::DecimalFormat::operator local_ref<java::text::NumberFormat>() const
{
	return local_ref<java::text::NumberFormat>(get_jobject());
}


java::text::DecimalFormat::DecimalFormat()
: object<java::text::DecimalFormat>(
	call_new_object<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(0),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::text::DecimalFormat::DecimalFormat(local_ref< java::lang::String > const &a0)
: object<java::text::DecimalFormat>(
	call_new_object<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(1),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



java::text::DecimalFormat::DecimalFormat(local_ref< java::lang::String > const &a0, local_ref< java::text::DecimalFormatSymbols > const &a1)
: object<java::text::DecimalFormat>(
	call_new_object<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(2),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}


void java::text::DecimalFormat::applyLocalizedPattern(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(3),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::applyPattern(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(4),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::text::DecimalFormat::clone()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(5),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

jboolean java::text::DecimalFormat::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(6),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::text::AttributedCharacterIterator > java::text::DecimalFormat::formatToCharacterIterator(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(7),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::text::AttributedCharacterIterator > >
	(get_jobject(), a0);
}

local_ref< java::lang::StringBuffer > java::text::DecimalFormat::format(jdouble a0, local_ref< java::lang::StringBuffer > const &a1, local_ref< java::text::FieldPosition > const &a2)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(8),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::StringBuffer > java::text::DecimalFormat::format(jlong a0, local_ref< java::lang::StringBuffer > const &a1, local_ref< java::text::FieldPosition > const &a2)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(9),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::StringBuffer > java::text::DecimalFormat::format(local_ref< java::lang::Object > const &a0, local_ref< java::lang::StringBuffer > const &a1, local_ref< java::text::FieldPosition > const &a2)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(10),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::StringBuffer > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::text::DecimalFormatSymbols > java::text::DecimalFormat::getDecimalFormatSymbols()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(11),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::text::DecimalFormatSymbols > >
	(get_jobject());
}

local_ref< java::util::Currency > java::text::DecimalFormat::getCurrency()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(12),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::util::Currency > >
	(get_jobject());
}

jint java::text::DecimalFormat::getGroupingSize()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(13),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(get_jobject());
}

jint java::text::DecimalFormat::getMultiplier()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(14),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > java::text::DecimalFormat::getNegativePrefix()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(15),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::text::DecimalFormat::getNegativeSuffix()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(16),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::text::DecimalFormat::getPositivePrefix()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(17),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::text::DecimalFormat::getPositiveSuffix()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(18),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint java::text::DecimalFormat::hashCode()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(19),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(19), 
		jint >
	(get_jobject());
}

jboolean java::text::DecimalFormat::isDecimalSeparatorAlwaysShown()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(20),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject());
}

jboolean java::text::DecimalFormat::isParseBigDecimal()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(21),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(21), 
		jboolean >
	(get_jobject());
}

void java::text::DecimalFormat::setParseIntegerOnly(jboolean a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(22),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0);
}

jboolean java::text::DecimalFormat::isParseIntegerOnly()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(23),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(23), 
		jboolean >
	(get_jobject());
}

local_ref< java::lang::Number > java::text::DecimalFormat::parse(local_ref< java::lang::String > const &a0, local_ref< java::text::ParsePosition > const &a1)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(24),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::lang::Number > >
	(get_jobject(), a0, a1);
}

void java::text::DecimalFormat::setDecimalFormatSymbols(local_ref< java::text::DecimalFormatSymbols > const &a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(25),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(25), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::setCurrency(local_ref< java::util::Currency > const &a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(26),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(26), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::setDecimalSeparatorAlwaysShown(jboolean a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(27),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(27), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::setGroupingSize(jint a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(28),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(28), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::setGroupingUsed(jboolean a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(29),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(29), 
		void >
	(get_jobject(), a0);
}

jboolean java::text::DecimalFormat::isGroupingUsed()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(30),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(30), 
		jboolean >
	(get_jobject());
}

void java::text::DecimalFormat::setMaximumFractionDigits(jint a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(31),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(31), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::setMaximumIntegerDigits(jint a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(32),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::setMinimumFractionDigits(jint a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(33),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(33), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::setMinimumIntegerDigits(jint a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(34),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(34), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::setMultiplier(jint a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(35),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(35), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::setNegativePrefix(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(36),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(36), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::setNegativeSuffix(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(37),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(37), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::setPositivePrefix(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(38),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(38), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::setPositiveSuffix(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(39),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(39), 
		void >
	(get_jobject(), a0);
}

void java::text::DecimalFormat::setParseBigDecimal(jboolean a0)
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(40),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(40), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::text::DecimalFormat::toLocalizedPattern()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(41),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(41), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::text::DecimalFormat::toPattern()
{
	return call_method<
		java::text::DecimalFormat::J2CPP_CLASS_NAME,
		java::text::DecimalFormat::J2CPP_METHOD_NAME(42),
		java::text::DecimalFormat::J2CPP_METHOD_SIGNATURE(42), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::text::DecimalFormat,"java/text/DecimalFormat")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,2,"<init>","(Ljava/lang/String;Ljava/text/DecimalFormatSymbols;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,3,"applyLocalizedPattern","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,4,"applyPattern","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,5,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,7,"formatToCharacterIterator","(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,8,"format","(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,9,"format","(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,10,"format","(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,11,"getDecimalFormatSymbols","()Ljava/text/DecimalFormatSymbols;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,12,"getCurrency","()Ljava/util/Currency;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,13,"getGroupingSize","()I")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,14,"getMultiplier","()I")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,15,"getNegativePrefix","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,16,"getNegativeSuffix","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,17,"getPositivePrefix","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,18,"getPositiveSuffix","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,19,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,20,"isDecimalSeparatorAlwaysShown","()Z")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,21,"isParseBigDecimal","()Z")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,22,"setParseIntegerOnly","(Z)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,23,"isParseIntegerOnly","()Z")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,24,"parse","(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,25,"setDecimalFormatSymbols","(Ljava/text/DecimalFormatSymbols;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,26,"setCurrency","(Ljava/util/Currency;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,27,"setDecimalSeparatorAlwaysShown","(Z)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,28,"setGroupingSize","(I)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,29,"setGroupingUsed","(Z)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,30,"isGroupingUsed","()Z")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,31,"setMaximumFractionDigits","(I)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,32,"setMaximumIntegerDigits","(I)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,33,"setMinimumFractionDigits","(I)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,34,"setMinimumIntegerDigits","(I)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,35,"setMultiplier","(I)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,36,"setNegativePrefix","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,37,"setNegativeSuffix","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,38,"setPositivePrefix","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,39,"setPositiveSuffix","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,40,"setParseBigDecimal","(Z)V")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,41,"toLocalizedPattern","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::text::DecimalFormat,42,"toPattern","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_DECIMALFORMAT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
