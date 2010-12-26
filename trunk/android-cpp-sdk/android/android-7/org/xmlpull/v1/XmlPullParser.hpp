/*================================================================================
  code generated by: java2cpp
  class: org.xmlpull.v1.XmlPullParser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XMLPULL_V1_XMLPULLPARSER_HPP_DECL
#define J2CPP_ORG_XMLPULL_V1_XMLPULLPARSER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Reader; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/InputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace xmlpull { namespace v1 {

	class XmlPullParser;
	class XmlPullParser
		: public cpp_object<XmlPullParser>
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

		XmlPullParser(jobject jobj)
		: cpp_object<XmlPullParser>(jobj)
		{
		}

		void setFeature(local_ref< java::lang::String > const&, cpp_boolean const&);
		cpp_boolean getFeature(local_ref< java::lang::String > const&);
		void setProperty(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > getProperty(local_ref< java::lang::String > const&);
		void setInput(local_ref< java::io::Reader > const&);
		void setInput(local_ref< java::io::InputStream > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getInputEncoding();
		void defineEntityReplacementText(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		cpp_int getNamespaceCount(cpp_int const&);
		local_ref< java::lang::String > getNamespacePrefix(cpp_int const&);
		local_ref< java::lang::String > getNamespaceUri(cpp_int const&);
		local_ref< java::lang::String > getNamespace(local_ref< java::lang::String > const&);
		cpp_int getDepth();
		local_ref< java::lang::String > getPositionDescription();
		cpp_int getLineNumber();
		cpp_int getColumnNumber();
		cpp_boolean isWhitespace();
		local_ref< java::lang::String > getText();
		local_ref< cpp_char_array<1> > getTextCharacters(local_ref< cpp_int_array<1> > const&);
		local_ref< java::lang::String > getNamespace();
		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getPrefix();
		cpp_boolean isEmptyElementTag();
		cpp_int getAttributeCount();
		local_ref< java::lang::String > getAttributeNamespace(cpp_int const&);
		local_ref< java::lang::String > getAttributeName(cpp_int const&);
		local_ref< java::lang::String > getAttributePrefix(cpp_int const&);
		local_ref< java::lang::String > getAttributeType(cpp_int const&);
		cpp_boolean isAttributeDefault(cpp_int const&);
		local_ref< java::lang::String > getAttributeValue(cpp_int const&);
		local_ref< java::lang::String > getAttributeValue(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		cpp_int getEventType();
		cpp_int next();
		cpp_int nextToken();
		void require(cpp_int const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > nextText();
		cpp_int nextTag();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > NO_NAMESPACE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > START_DOCUMENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > END_DOCUMENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > START_TAG;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > END_TAG;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > TEXT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > CDSECT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > ENTITY_REF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > IGNORABLE_WHITESPACE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_int > PROCESSING_INSTRUCTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), cpp_int > COMMENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), cpp_int > DOCDECL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< cpp_object_array<java::lang::String, 1> > > TYPES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< java::lang::String > > FEATURE_PROCESS_NAMESPACES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), local_ref< java::lang::String > > FEATURE_REPORT_NAMESPACE_ATTRIBUTES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), local_ref< java::lang::String > > FEATURE_PROCESS_DOCDECL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), local_ref< java::lang::String > > FEATURE_VALIDATION;
	}; //class XmlPullParser

} //namespace v1
} //namespace xmlpull
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_XMLPULL_V1_XMLPULLPARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XMLPULL_V1_XMLPULLPARSER_HPP_IMPL
#define J2CPP_ORG_XMLPULL_V1_XMLPULLPARSER_HPP_IMPL

namespace j2cpp {


void org::xmlpull::v1::XmlPullParser::setFeature(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::xmlpull::v1::XmlPullParser::getFeature(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void org::xmlpull::v1::XmlPullParser::setProperty(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > org::xmlpull::v1::XmlPullParser::getProperty(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void org::xmlpull::v1::XmlPullParser::setInput(local_ref< java::io::Reader > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void org::xmlpull::v1::XmlPullParser::setInput(local_ref< java::io::InputStream > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getInputEncoding()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void org::xmlpull::v1::XmlPullParser::defineEntityReplacementText(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int org::xmlpull::v1::XmlPullParser::getNamespaceCount(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getNamespacePrefix(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getNamespaceUri(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getNamespace(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::xmlpull::v1::XmlPullParser::getDepth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getPositionDescription()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_int org::xmlpull::v1::XmlPullParser::getLineNumber()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_int org::xmlpull::v1::XmlPullParser::getColumnNumber()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_boolean org::xmlpull::v1::XmlPullParser::isWhitespace()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getText()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< cpp_char_array<1> > org::xmlpull::v1::XmlPullParser::getTextCharacters(local_ref< cpp_int_array<1> > const &a0)
{
	return local_ref< cpp_char_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getNamespace()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getPrefix()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

cpp_boolean org::xmlpull::v1::XmlPullParser::isEmptyElementTag()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

cpp_int org::xmlpull::v1::XmlPullParser::getAttributeCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getAttributeNamespace(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getAttributeName(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getAttributePrefix(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getAttributeType(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::xmlpull::v1::XmlPullParser::isAttributeDefault(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getAttributeValue(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::getAttributeValue(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int org::xmlpull::v1::XmlPullParser::getEventType()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}

cpp_int org::xmlpull::v1::XmlPullParser::next()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>()
		)
	);
}

cpp_int org::xmlpull::v1::XmlPullParser::nextToken()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>()
		)
	);
}

void org::xmlpull::v1::XmlPullParser::require(cpp_int const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xmlpull::v1::XmlPullParser::nextText()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>()
		)
	);
}

cpp_int org::xmlpull::v1::XmlPullParser::nextTag()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>()
		)
	);
}


static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(0),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::xmlpull::v1::XmlPullParser::NO_NAMESPACE;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(1),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> org::xmlpull::v1::XmlPullParser::START_DOCUMENT;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(2),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> org::xmlpull::v1::XmlPullParser::END_DOCUMENT;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(3),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> org::xmlpull::v1::XmlPullParser::START_TAG;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(4),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> org::xmlpull::v1::XmlPullParser::END_TAG;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(5),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> org::xmlpull::v1::XmlPullParser::TEXT;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(6),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> org::xmlpull::v1::XmlPullParser::CDSECT;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(7),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> org::xmlpull::v1::XmlPullParser::ENTITY_REF;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(8),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> org::xmlpull::v1::XmlPullParser::IGNORABLE_WHITESPACE;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(9),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(9),
	cpp_int
> org::xmlpull::v1::XmlPullParser::PROCESSING_INSTRUCTION;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(10),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(10),
	cpp_int
> org::xmlpull::v1::XmlPullParser::COMMENT;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(11),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(11),
	cpp_int
> org::xmlpull::v1::XmlPullParser::DOCDECL;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(12),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(12),
	local_ref< cpp_object_array<java::lang::String, 1> >
> org::xmlpull::v1::XmlPullParser::TYPES;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(13),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(13),
	local_ref< java::lang::String >
> org::xmlpull::v1::XmlPullParser::FEATURE_PROCESS_NAMESPACES;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(14),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(14),
	local_ref< java::lang::String >
> org::xmlpull::v1::XmlPullParser::FEATURE_REPORT_NAMESPACE_ATTRIBUTES;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(15),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(15),
	local_ref< java::lang::String >
> org::xmlpull::v1::XmlPullParser::FEATURE_PROCESS_DOCDECL;

static_field<
	org::xmlpull::v1::XmlPullParser::J2CPP_CLASS_NAME,
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_NAME(16),
	org::xmlpull::v1::XmlPullParser::J2CPP_FIELD_SIGNATURE(16),
	local_ref< java::lang::String >
> org::xmlpull::v1::XmlPullParser::FEATURE_VALIDATION;


J2CPP_DEFINE_CLASS(org::xmlpull::v1::XmlPullParser,"org/xmlpull/v1/XmlPullParser")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,0,"setFeature","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,1,"getFeature","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,2,"setProperty","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,3,"getProperty","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,4,"setInput","(Ljava/io/Reader;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,5,"setInput","(Ljava/io/InputStream;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,6,"getInputEncoding","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,7,"defineEntityReplacementText","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,8,"getNamespaceCount","(I)I")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,9,"getNamespacePrefix","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,10,"getNamespaceUri","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,11,"getNamespace","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,12,"getDepth","()I")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,13,"getPositionDescription","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,14,"getLineNumber","()I")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,15,"getColumnNumber","()I")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,16,"isWhitespace","()Z")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,17,"getText","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,18,"getTextCharacters","([I)[C")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,19,"getNamespace","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,20,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,21,"getPrefix","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,22,"isEmptyElementTag","()Z")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,23,"getAttributeCount","()I")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,24,"getAttributeNamespace","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,25,"getAttributeName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,26,"getAttributePrefix","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,27,"getAttributeType","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,28,"isAttributeDefault","(I)Z")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,29,"getAttributeValue","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,30,"getAttributeValue","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,31,"getEventType","()I")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,32,"next","()I")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,33,"nextToken","()I")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,34,"require","(ILjava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,35,"nextText","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,36,"nextTag","()I")
J2CPP_DEFINE_METHOD(org::xmlpull::v1::XmlPullParser,37,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,0,"NO_NAMESPACE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,1,"START_DOCUMENT","I")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,2,"END_DOCUMENT","I")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,3,"START_TAG","I")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,4,"END_TAG","I")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,5,"TEXT","I")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,6,"CDSECT","I")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,7,"ENTITY_REF","I")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,8,"IGNORABLE_WHITESPACE","I")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,9,"PROCESSING_INSTRUCTION","I")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,10,"COMMENT","I")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,11,"DOCDECL","I")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,12,"TYPES","[java.lang.String")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,13,"FEATURE_PROCESS_NAMESPACES","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,14,"FEATURE_REPORT_NAMESPACE_ATTRIBUTES","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,15,"FEATURE_PROCESS_DOCDECL","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::xmlpull::v1::XmlPullParser,16,"FEATURE_VALIDATION","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_XMLPULL_V1_XMLPULLPARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
