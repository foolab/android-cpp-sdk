/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.parsers.DocumentBuilder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_DOCUMENTBUILDER_HPP_DECL
#define J2CPP_JAVAX_XML_PARSERS_DOCUMENTBUILDER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class DOMImplementation; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Document; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class EntityResolver; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class InputSource; } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class ErrorHandler; } } } }


#include <java/io/File.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/w3c/dom/DOMImplementation.hpp>
#include <org/w3c/dom/Document.hpp>
#include <org/xml/sax/EntityResolver.hpp>
#include <org/xml/sax/ErrorHandler.hpp>
#include <org/xml/sax/InputSource.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace parsers {

	class DocumentBuilder;
	class DocumentBuilder
		: public object<DocumentBuilder>
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

		explicit DocumentBuilder(jobject jobj)
		: object<DocumentBuilder>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< org::w3c::dom::DOMImplementation > getDOMImplementation();
		jboolean isNamespaceAware();
		jboolean isValidating();
		jboolean isXIncludeAware();
		local_ref< org::w3c::dom::Document > newDocument();
		local_ref< org::w3c::dom::Document > parse(local_ref< java::io::File >  const&);
		local_ref< org::w3c::dom::Document > parse(local_ref< java::io::InputStream >  const&);
		local_ref< org::w3c::dom::Document > parse(local_ref< java::io::InputStream >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Document > parse(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Document > parse(local_ref< org::xml::sax::InputSource >  const&);
		void reset();
		void setEntityResolver(local_ref< org::xml::sax::EntityResolver >  const&);
		void setErrorHandler(local_ref< org::xml::sax::ErrorHandler >  const&);
	}; //class DocumentBuilder

} //namespace parsers
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_DOCUMENTBUILDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_DOCUMENTBUILDER_HPP_IMPL
#define J2CPP_JAVAX_XML_PARSERS_DOCUMENTBUILDER_HPP_IMPL

namespace j2cpp {



javax::xml::parsers::DocumentBuilder::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< org::w3c::dom::DOMImplementation > javax::xml::parsers::DocumentBuilder::getDOMImplementation()
{
	return call_method<
		javax::xml::parsers::DocumentBuilder::J2CPP_CLASS_NAME,
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_NAME(1),
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::w3c::dom::DOMImplementation >
	>(get_jobject());
}

jboolean javax::xml::parsers::DocumentBuilder::isNamespaceAware()
{
	return call_method<
		javax::xml::parsers::DocumentBuilder::J2CPP_CLASS_NAME,
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_NAME(2),
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject());
}

jboolean javax::xml::parsers::DocumentBuilder::isValidating()
{
	return call_method<
		javax::xml::parsers::DocumentBuilder::J2CPP_CLASS_NAME,
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_NAME(3),
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject());
}

jboolean javax::xml::parsers::DocumentBuilder::isXIncludeAware()
{
	return call_method<
		javax::xml::parsers::DocumentBuilder::J2CPP_CLASS_NAME,
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_NAME(4),
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}

local_ref< org::w3c::dom::Document > javax::xml::parsers::DocumentBuilder::newDocument()
{
	return call_method<
		javax::xml::parsers::DocumentBuilder::J2CPP_CLASS_NAME,
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_NAME(5),
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::w3c::dom::Document >
	>(get_jobject());
}

local_ref< org::w3c::dom::Document > javax::xml::parsers::DocumentBuilder::parse(local_ref< java::io::File > const &a0)
{
	return call_method<
		javax::xml::parsers::DocumentBuilder::J2CPP_CLASS_NAME,
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_NAME(6),
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::w3c::dom::Document >
	>(get_jobject(), a0);
}

local_ref< org::w3c::dom::Document > javax::xml::parsers::DocumentBuilder::parse(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		javax::xml::parsers::DocumentBuilder::J2CPP_CLASS_NAME,
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_NAME(7),
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< org::w3c::dom::Document >
	>(get_jobject(), a0);
}

local_ref< org::w3c::dom::Document > javax::xml::parsers::DocumentBuilder::parse(local_ref< java::io::InputStream > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		javax::xml::parsers::DocumentBuilder::J2CPP_CLASS_NAME,
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_NAME(8),
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::w3c::dom::Document >
	>(get_jobject(), a0, a1);
}

local_ref< org::w3c::dom::Document > javax::xml::parsers::DocumentBuilder::parse(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::parsers::DocumentBuilder::J2CPP_CLASS_NAME,
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_NAME(9),
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::w3c::dom::Document >
	>(get_jobject(), a0);
}

local_ref< org::w3c::dom::Document > javax::xml::parsers::DocumentBuilder::parse(local_ref< org::xml::sax::InputSource > const &a0)
{
	return call_method<
		javax::xml::parsers::DocumentBuilder::J2CPP_CLASS_NAME,
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_NAME(10),
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< org::w3c::dom::Document >
	>(get_jobject(), a0);
}

void javax::xml::parsers::DocumentBuilder::reset()
{
	return call_method<
		javax::xml::parsers::DocumentBuilder::J2CPP_CLASS_NAME,
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_NAME(11),
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject());
}

void javax::xml::parsers::DocumentBuilder::setEntityResolver(local_ref< org::xml::sax::EntityResolver > const &a0)
{
	return call_method<
		javax::xml::parsers::DocumentBuilder::J2CPP_CLASS_NAME,
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_NAME(12),
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void javax::xml::parsers::DocumentBuilder::setErrorHandler(local_ref< org::xml::sax::ErrorHandler > const &a0)
{
	return call_method<
		javax::xml::parsers::DocumentBuilder::J2CPP_CLASS_NAME,
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_NAME(13),
		javax::xml::parsers::DocumentBuilder::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(javax::xml::parsers::DocumentBuilder,"javax/xml/parsers/DocumentBuilder")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,1,"getDOMImplementation","()Lorg/w3c/dom/DOMImplementation;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,2,"isNamespaceAware","()Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,3,"isValidating","()Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,4,"isXIncludeAware","()Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,5,"newDocument","()Lorg/w3c/dom/Document;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,6,"parse","(Ljava/io/File;)Lorg/w3c/dom/Document;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,7,"parse","(Ljava/io/InputStream;)Lorg/w3c/dom/Document;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,8,"parse","(Ljava/io/InputStream;Ljava/lang/String;)Lorg/w3c/dom/Document;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,9,"parse","(Ljava/lang/String;)Lorg/w3c/dom/Document;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,10,"parse","(Lorg/xml/sax/InputSource;)Lorg/w3c/dom/Document;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,11,"reset","()V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,12,"setEntityResolver","(Lorg/xml/sax/EntityResolver;)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::DocumentBuilder,13,"setErrorHandler","(Lorg/xml/sax/ErrorHandler;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_DOCUMENTBUILDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION