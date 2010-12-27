/*================================================================================
  code generated by: java2cpp
  class: javax.xml.parsers.SAXParser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_SAXPARSER_HPP_DECL
#define J2CPP_JAVAX_XML_PARSERS_SAXPARSER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace javax { namespace xml { namespace validation { class Schema; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Parser; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class XMLReader; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class HandlerBase; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { namespace helpers { class DefaultHandler; } } } } }


#include <java/io/File.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/validation/Schema.hpp>
#include <org/xml/sax/HandlerBase.hpp>
#include <org/xml/sax/InputSource.hpp>
#include <org/xml/sax/Parser.hpp>
#include <org/xml/sax/XMLReader.hpp>
#include <org/xml/sax/helpers/DefaultHandler.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace parsers {

	class SAXParser;
	class SAXParser
		: public cpp_object<SAXParser>
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

		SAXParser(jobject jobj)
		: cpp_object<SAXParser>(jobj)
		{
		}

		void reset();
		void parse(local_ref< java::io::InputStream > const&, local_ref< org::xml::sax::HandlerBase > const&);
		void parse(local_ref< java::io::InputStream > const&, local_ref< org::xml::sax::HandlerBase > const&, local_ref< java::lang::String > const&);
		void parse(local_ref< java::io::InputStream > const&, local_ref< org::xml::sax::helpers::DefaultHandler > const&);
		void parse(local_ref< java::io::InputStream > const&, local_ref< org::xml::sax::helpers::DefaultHandler > const&, local_ref< java::lang::String > const&);
		void parse(local_ref< java::lang::String > const&, local_ref< org::xml::sax::HandlerBase > const&);
		void parse(local_ref< java::lang::String > const&, local_ref< org::xml::sax::helpers::DefaultHandler > const&);
		void parse(local_ref< java::io::File > const&, local_ref< org::xml::sax::HandlerBase > const&);
		void parse(local_ref< java::io::File > const&, local_ref< org::xml::sax::helpers::DefaultHandler > const&);
		void parse(local_ref< org::xml::sax::InputSource > const&, local_ref< org::xml::sax::HandlerBase > const&);
		void parse(local_ref< org::xml::sax::InputSource > const&, local_ref< org::xml::sax::helpers::DefaultHandler > const&);
		local_ref< org::xml::sax::Parser > getParser();
		local_ref< org::xml::sax::XMLReader > getXMLReader();
		cpp_boolean isNamespaceAware();
		cpp_boolean isValidating();
		void setProperty(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > getProperty(local_ref< java::lang::String > const&);
		local_ref< javax::xml::validation::Schema > getSchema();
		cpp_boolean isXIncludeAware();
	}; //class SAXParser

} //namespace parsers
} //namespace xml
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_SAXPARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_SAXPARSER_HPP_IMPL
#define J2CPP_JAVAX_XML_PARSERS_SAXPARSER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::xml::parsers::SAXParser > create< javax::xml::parsers::SAXParser>()
{
	return local_ref< javax::xml::parsers::SAXParser >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::parsers::SAXParser::J2CPP_CLASS_NAME, javax::xml::parsers::SAXParser::J2CPP_METHOD_NAME(0), javax::xml::parsers::SAXParser::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void javax::xml::parsers::SAXParser::reset()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::io::InputStream > const &a0, local_ref< org::xml::sax::HandlerBase > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::io::InputStream > const &a0, local_ref< org::xml::sax::HandlerBase > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::io::InputStream > const &a0, local_ref< org::xml::sax::helpers::DefaultHandler > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::io::InputStream > const &a0, local_ref< org::xml::sax::helpers::DefaultHandler > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::lang::String > const &a0, local_ref< org::xml::sax::HandlerBase > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::lang::String > const &a0, local_ref< org::xml::sax::helpers::DefaultHandler > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::io::File > const &a0, local_ref< org::xml::sax::HandlerBase > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::xml::parsers::SAXParser::parse(local_ref< java::io::File > const &a0, local_ref< org::xml::sax::helpers::DefaultHandler > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::xml::parsers::SAXParser::parse(local_ref< org::xml::sax::InputSource > const &a0, local_ref< org::xml::sax::HandlerBase > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::xml::parsers::SAXParser::parse(local_ref< org::xml::sax::InputSource > const &a0, local_ref< org::xml::sax::helpers::DefaultHandler > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::xml::sax::Parser > javax::xml::parsers::SAXParser::getParser()
{
	return local_ref< org::xml::sax::Parser >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< org::xml::sax::XMLReader > javax::xml::parsers::SAXParser::getXMLReader()
{
	return local_ref< org::xml::sax::XMLReader >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_boolean javax::xml::parsers::SAXParser::isNamespaceAware()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_boolean javax::xml::parsers::SAXParser::isValidating()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

void javax::xml::parsers::SAXParser::setProperty(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > javax::xml::parsers::SAXParser::getProperty(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< javax::xml::validation::Schema > javax::xml::parsers::SAXParser::getSchema()
{
	return local_ref< javax::xml::validation::Schema >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_boolean javax::xml::parsers::SAXParser::isXIncludeAware()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::xml::parsers::SAXParser,"javax/xml/parsers/SAXParser")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,1,"reset","()V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,2,"parse","(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,3,"parse","(Ljava/io/InputStream;Lorg/xml/sax/HandlerBase;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,4,"parse","(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,5,"parse","(Ljava/io/InputStream;Lorg/xml/sax/helpers/DefaultHandler;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,6,"parse","(Ljava/lang/String;Lorg/xml/sax/HandlerBase;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,7,"parse","(Ljava/lang/String;Lorg/xml/sax/helpers/DefaultHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,8,"parse","(Ljava/io/File;Lorg/xml/sax/HandlerBase;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,9,"parse","(Ljava/io/File;Lorg/xml/sax/helpers/DefaultHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,10,"parse","(Lorg/xml/sax/InputSource;Lorg/xml/sax/HandlerBase;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,11,"parse","(Lorg/xml/sax/InputSource;Lorg/xml/sax/helpers/DefaultHandler;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,12,"getParser","()Lorg/xml/sax/Parser;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,13,"getXMLReader","()Lorg/xml/sax/XMLReader;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,14,"isNamespaceAware","()Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,15,"isValidating","()Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,16,"setProperty","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,17,"getProperty","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,18,"getSchema","()Ljavax/xml/validation/Schema;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParser,19,"isXIncludeAware","()Z")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_SAXPARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION