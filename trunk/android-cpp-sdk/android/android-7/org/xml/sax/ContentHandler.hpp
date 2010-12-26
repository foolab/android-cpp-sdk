/*================================================================================
  code generated by: java2cpp
  class: org.xml.sax.ContentHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_CONTENTHANDLER_HPP_DECL
#define J2CPP_ORG_XML_SAX_CONTENTHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Attributes; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Locator; } } } }


#include <java/lang/String.hpp>
#include <org/xml/sax/Attributes.hpp>
#include <org/xml/sax/Locator.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax {

	class ContentHandler;
	class ContentHandler
		: public cpp_object<ContentHandler>
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

		ContentHandler(jobject jobj)
		: cpp_object<ContentHandler>(jobj)
		{
		}

		void setDocumentLocator(local_ref< org::xml::sax::Locator > const&);
		void startDocument();
		void endDocument();
		void startPrefixMapping(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void endPrefixMapping(local_ref< java::lang::String > const&);
		void startElement(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< org::xml::sax::Attributes > const&);
		void endElement(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void characters(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		void ignorableWhitespace(local_ref< cpp_char_array<1> > const&, cpp_int const&, cpp_int const&);
		void processingInstruction(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void skippedEntity(local_ref< java::lang::String > const&);
	}; //class ContentHandler

} //namespace sax
} //namespace xml
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_CONTENTHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_CONTENTHANDLER_HPP_IMPL
#define J2CPP_ORG_XML_SAX_CONTENTHANDLER_HPP_IMPL

namespace j2cpp {


void org::xml::sax::ContentHandler::setDocumentLocator(local_ref< org::xml::sax::Locator > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::ContentHandler::startDocument()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void org::xml::sax::ContentHandler::endDocument()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void org::xml::sax::ContentHandler::startPrefixMapping(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::xml::sax::ContentHandler::endPrefixMapping(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::ContentHandler::startElement(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< org::xml::sax::Attributes > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void org::xml::sax::ContentHandler::endElement(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::xml::sax::ContentHandler::characters(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::xml::sax::ContentHandler::ignorableWhitespace(local_ref< cpp_char_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::xml::sax::ContentHandler::processingInstruction(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::xml::sax::ContentHandler::skippedEntity(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::xml::sax::ContentHandler,"org/xml/sax/ContentHandler")
J2CPP_DEFINE_METHOD(org::xml::sax::ContentHandler,0,"setDocumentLocator","(Lorg/xml/sax/Locator;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ContentHandler,1,"startDocument","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ContentHandler,2,"endDocument","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ContentHandler,3,"startPrefixMapping","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ContentHandler,4,"endPrefixMapping","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ContentHandler,5,"startElement","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ContentHandler,6,"endElement","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ContentHandler,7,"characters","([CII)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ContentHandler,8,"ignorableWhitespace","([CII)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ContentHandler,9,"processingInstruction","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ContentHandler,10,"skippedEntity","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_CONTENTHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
