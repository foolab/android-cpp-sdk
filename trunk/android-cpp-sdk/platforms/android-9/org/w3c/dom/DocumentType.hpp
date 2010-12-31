/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.DocumentType
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOCUMENTTYPE_HPP_DECL
#define J2CPP_ORG_W3C_DOM_DOCUMENTTYPE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class NamedNodeMap; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/w3c/dom/NamedNodeMap.hpp>
#include <org/w3c/dom/Node.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class DocumentType;
	class DocumentType
		: public object<DocumentType>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit DocumentType(jobject jobj)
		: object<DocumentType>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::w3c::dom::Node>() const;


		local_ref< java::lang::String > getName();
		local_ref< org::w3c::dom::NamedNodeMap > getEntities();
		local_ref< org::w3c::dom::NamedNodeMap > getNotations();
		local_ref< java::lang::String > getPublicId();
		local_ref< java::lang::String > getSystemId();
		local_ref< java::lang::String > getInternalSubset();
	}; //class DocumentType

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOCUMENTTYPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_DOCUMENTTYPE_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_DOCUMENTTYPE_HPP_IMPL

namespace j2cpp {



org::w3c::dom::DocumentType::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::w3c::dom::DocumentType::operator local_ref<org::w3c::dom::Node>() const
{
	return local_ref<org::w3c::dom::Node>(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::DocumentType::getName()
{
	return call_method<
		org::w3c::dom::DocumentType::J2CPP_CLASS_NAME,
		org::w3c::dom::DocumentType::J2CPP_METHOD_NAME(0),
		org::w3c::dom::DocumentType::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< org::w3c::dom::NamedNodeMap > org::w3c::dom::DocumentType::getEntities()
{
	return call_method<
		org::w3c::dom::DocumentType::J2CPP_CLASS_NAME,
		org::w3c::dom::DocumentType::J2CPP_METHOD_NAME(1),
		org::w3c::dom::DocumentType::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::w3c::dom::NamedNodeMap > >
	(get_jobject());
}

local_ref< org::w3c::dom::NamedNodeMap > org::w3c::dom::DocumentType::getNotations()
{
	return call_method<
		org::w3c::dom::DocumentType::J2CPP_CLASS_NAME,
		org::w3c::dom::DocumentType::J2CPP_METHOD_NAME(2),
		org::w3c::dom::DocumentType::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< org::w3c::dom::NamedNodeMap > >
	(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::DocumentType::getPublicId()
{
	return call_method<
		org::w3c::dom::DocumentType::J2CPP_CLASS_NAME,
		org::w3c::dom::DocumentType::J2CPP_METHOD_NAME(3),
		org::w3c::dom::DocumentType::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::DocumentType::getSystemId()
{
	return call_method<
		org::w3c::dom::DocumentType::J2CPP_CLASS_NAME,
		org::w3c::dom::DocumentType::J2CPP_METHOD_NAME(4),
		org::w3c::dom::DocumentType::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::DocumentType::getInternalSubset()
{
	return call_method<
		org::w3c::dom::DocumentType::J2CPP_CLASS_NAME,
		org::w3c::dom::DocumentType::J2CPP_METHOD_NAME(5),
		org::w3c::dom::DocumentType::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::w3c::dom::DocumentType,"org/w3c/dom/DocumentType")
J2CPP_DEFINE_METHOD(org::w3c::dom::DocumentType,0,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::DocumentType,1,"getEntities","()Lorg/w3c/dom/NamedNodeMap;")
J2CPP_DEFINE_METHOD(org::w3c::dom::DocumentType,2,"getNotations","()Lorg/w3c/dom/NamedNodeMap;")
J2CPP_DEFINE_METHOD(org::w3c::dom::DocumentType,3,"getPublicId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::DocumentType,4,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::DocumentType,5,"getInternalSubset","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_DOCUMENTTYPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
