/*================================================================================
  code generated by: java2cpp
  class: org.xml.sax.XMLFilter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_XMLFILTER_HPP_DECL
#define J2CPP_ORG_XML_SAX_XMLFILTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class XMLReader; } } } }


#include <java/lang/Object.hpp>
#include <org/xml/sax/XMLReader.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax {

	class XMLFilter;
	class XMLFilter
		: public cpp_object<XMLFilter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit XMLFilter(jobject jobj)
		: cpp_object<XMLFilter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::xml::sax::XMLReader>() const;


		void setParent(local_ref< org::xml::sax::XMLReader > const&);
		local_ref< org::xml::sax::XMLReader > getParent();
	}; //class XMLFilter

} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_XMLFILTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_XMLFILTER_HPP_IMPL
#define J2CPP_ORG_XML_SAX_XMLFILTER_HPP_IMPL

namespace j2cpp {



org::xml::sax::XMLFilter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

org::xml::sax::XMLFilter::operator local_ref<org::xml::sax::XMLReader>() const
{
	return local_ref<org::xml::sax::XMLReader>(get_jtype());
}

void org::xml::sax::XMLFilter::setParent(local_ref< org::xml::sax::XMLReader > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::xml::sax::XMLReader > org::xml::sax::XMLFilter::getParent()
{
	return local_ref< org::xml::sax::XMLReader >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::xml::sax::XMLFilter,"org/xml/sax/XMLFilter")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLFilter,0,"setParent","(Lorg/xml/sax/XMLReader;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::XMLFilter,1,"getParent","()Lorg/xml/sax/XMLReader;")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_XMLFILTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
