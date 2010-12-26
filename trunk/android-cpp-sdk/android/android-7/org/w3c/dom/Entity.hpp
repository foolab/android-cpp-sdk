/*================================================================================
  code generated by: java2cpp
  class: org.w3c.dom.Entity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_ENTITY_HPP_DECL
#define J2CPP_ORG_W3C_DOM_ENTITY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class Entity;
	class Entity
		: public cpp_object<Entity>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		Entity(jobject jobj)
		: cpp_object<Entity>(jobj)
		{
		}

		local_ref< java::lang::String > getPublicId();
		local_ref< java::lang::String > getSystemId();
		local_ref< java::lang::String > getNotationName();
	}; //class Entity

} //namespace dom
} //namespace w3c
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_ENTITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_ENTITY_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_ENTITY_HPP_IMPL

namespace j2cpp {


local_ref< java::lang::String > org::w3c::dom::Entity::getPublicId()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::String > org::w3c::dom::Entity::getSystemId()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > org::w3c::dom::Entity::getNotationName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::w3c::dom::Entity,"org/w3c/dom/Entity")
J2CPP_DEFINE_METHOD(org::w3c::dom::Entity,0,"getPublicId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Entity,1,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Entity,2,"getNotationName","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_ENTITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
