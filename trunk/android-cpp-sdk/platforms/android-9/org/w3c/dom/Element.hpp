/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.Element
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_ELEMENT_HPP_DECL
#define J2CPP_ORG_W3C_DOM_ELEMENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class TypeInfo; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class NodeList; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Attr; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/w3c/dom/Attr.hpp>
#include <org/w3c/dom/Node.hpp>
#include <org/w3c/dom/NodeList.hpp>
#include <org/w3c/dom/TypeInfo.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class Element;
	class Element
		: public object<Element>
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

		explicit Element(jobject jobj)
		: object<Element>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::w3c::dom::Node>() const;


		local_ref< java::lang::String > getTagName();
		local_ref< java::lang::String > getAttribute(local_ref< java::lang::String >  const&);
		void setAttribute(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void removeAttribute(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Attr > getAttributeNode(local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Attr > setAttributeNode(local_ref< org::w3c::dom::Attr >  const&);
		local_ref< org::w3c::dom::Attr > removeAttributeNode(local_ref< org::w3c::dom::Attr >  const&);
		local_ref< org::w3c::dom::NodeList > getElementsByTagName(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getAttributeNS(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void setAttributeNS(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void removeAttributeNS(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Attr > getAttributeNodeNS(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::Attr > setAttributeNodeNS(local_ref< org::w3c::dom::Attr >  const&);
		local_ref< org::w3c::dom::NodeList > getElementsByTagNameNS(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		jboolean hasAttribute(local_ref< java::lang::String >  const&);
		jboolean hasAttributeNS(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< org::w3c::dom::TypeInfo > getSchemaTypeInfo();
		void setIdAttribute(local_ref< java::lang::String >  const&, jboolean);
		void setIdAttributeNS(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, jboolean);
		void setIdAttributeNode(local_ref< org::w3c::dom::Attr >  const&, jboolean);
	}; //class Element

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_ELEMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_ELEMENT_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_ELEMENT_HPP_IMPL

namespace j2cpp {



org::w3c::dom::Element::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::w3c::dom::Element::operator local_ref<org::w3c::dom::Node>() const
{
	return local_ref<org::w3c::dom::Node>(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Element::getTagName()
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(0),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Element::getAttribute(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(1),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

void org::w3c::dom::Element::setAttribute(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(2),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

void org::w3c::dom::Element::removeAttribute(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(3),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::Attr > org::w3c::dom::Element::getAttributeNode(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(4),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< org::w3c::dom::Attr > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::Attr > org::w3c::dom::Element::setAttributeNode(local_ref< org::w3c::dom::Attr > const &a0)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(5),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< org::w3c::dom::Attr > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::Attr > org::w3c::dom::Element::removeAttributeNode(local_ref< org::w3c::dom::Attr > const &a0)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(6),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< org::w3c::dom::Attr > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::NodeList > org::w3c::dom::Element::getElementsByTagName(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(7),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< org::w3c::dom::NodeList > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > org::w3c::dom::Element::getAttributeNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(8),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String > >
	(get_jobject(), a0, a1);
}

void org::w3c::dom::Element::setAttributeNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(9),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1, a2);
}

void org::w3c::dom::Element::removeAttributeNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(10),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< org::w3c::dom::Attr > org::w3c::dom::Element::getAttributeNodeNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(11),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< org::w3c::dom::Attr > >
	(get_jobject(), a0, a1);
}

local_ref< org::w3c::dom::Attr > org::w3c::dom::Element::setAttributeNodeNS(local_ref< org::w3c::dom::Attr > const &a0)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(12),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< org::w3c::dom::Attr > >
	(get_jobject(), a0);
}

local_ref< org::w3c::dom::NodeList > org::w3c::dom::Element::getElementsByTagNameNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(13),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< org::w3c::dom::NodeList > >
	(get_jobject(), a0, a1);
}

jboolean org::w3c::dom::Element::hasAttribute(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(14),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(14), 
		jboolean >
	(get_jobject(), a0);
}

jboolean org::w3c::dom::Element::hasAttributeNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(15),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(15), 
		jboolean >
	(get_jobject(), a0, a1);
}

local_ref< org::w3c::dom::TypeInfo > org::w3c::dom::Element::getSchemaTypeInfo()
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(16),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< org::w3c::dom::TypeInfo > >
	(get_jobject());
}

void org::w3c::dom::Element::setIdAttribute(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(17),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0, a1);
}

void org::w3c::dom::Element::setIdAttributeNS(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jboolean a2)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(18),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0, a1, a2);
}

void org::w3c::dom::Element::setIdAttributeNode(local_ref< org::w3c::dom::Attr > const &a0, jboolean a1)
{
	return call_method<
		org::w3c::dom::Element::J2CPP_CLASS_NAME,
		org::w3c::dom::Element::J2CPP_METHOD_NAME(19),
		org::w3c::dom::Element::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::Element,"org/w3c/dom/Element")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,0,"getTagName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,1,"getAttribute","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,2,"setAttribute","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,3,"removeAttribute","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,4,"getAttributeNode","(Ljava/lang/String;)Lorg/w3c/dom/Attr;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,5,"setAttributeNode","(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,6,"removeAttributeNode","(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,7,"getElementsByTagName","(Ljava/lang/String;)Lorg/w3c/dom/NodeList;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,8,"getAttributeNS","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,9,"setAttributeNS","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,10,"removeAttributeNS","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,11,"getAttributeNodeNS","(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,12,"setAttributeNodeNS","(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,13,"getElementsByTagNameNS","(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,14,"hasAttribute","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,15,"hasAttributeNS","(Ljava/lang/String;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,16,"getSchemaTypeInfo","()Lorg/w3c/dom/TypeInfo;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,17,"setIdAttribute","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,18,"setIdAttributeNS","(Ljava/lang/String;Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(org::w3c::dom::Element,19,"setIdAttributeNode","(Lorg/w3c/dom/Attr;Z)V")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_ELEMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
