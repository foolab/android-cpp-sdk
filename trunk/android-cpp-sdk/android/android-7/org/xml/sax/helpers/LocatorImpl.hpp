/*================================================================================
  code generated by: java2cpp
  class: org.xml.sax.helpers.LocatorImpl
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_LOCATORIMPL_HPP_DECL
#define J2CPP_ORG_XML_SAX_HELPERS_LOCATORIMPL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Locator; } } } }


#include <java/lang/String.hpp>
#include <org/xml/sax/Locator.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace helpers {

	class LocatorImpl;
	class LocatorImpl
		: public cpp_object<LocatorImpl>
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

		LocatorImpl(jobject jobj)
		: cpp_object<LocatorImpl>(jobj)
		{
		}

		local_ref< java::lang::String > getPublicId();
		local_ref< java::lang::String > getSystemId();
		cpp_int getLineNumber();
		cpp_int getColumnNumber();
		void setPublicId(local_ref< java::lang::String > const&);
		void setSystemId(local_ref< java::lang::String > const&);
		void setLineNumber(cpp_int const&);
		void setColumnNumber(cpp_int const&);
	}; //class LocatorImpl

} //namespace helpers
} //namespace sax
} //namespace xml
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_LOCATORIMPL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_HELPERS_LOCATORIMPL_HPP_IMPL
#define J2CPP_ORG_XML_SAX_HELPERS_LOCATORIMPL_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::xml::sax::helpers::LocatorImpl > create< org::xml::sax::helpers::LocatorImpl>()
{
	return local_ref< org::xml::sax::helpers::LocatorImpl >(
		environment::get().get_jenv()->NewObject(
			get_class<org::xml::sax::helpers::LocatorImpl::J2CPP_CLASS_NAME>(),
			get_method_id<org::xml::sax::helpers::LocatorImpl::J2CPP_CLASS_NAME, org::xml::sax::helpers::LocatorImpl::J2CPP_METHOD_NAME(0), org::xml::sax::helpers::LocatorImpl::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< org::xml::sax::helpers::LocatorImpl > create< org::xml::sax::helpers::LocatorImpl>(local_ref< org::xml::sax::Locator > const &a0)
{
	return local_ref< org::xml::sax::helpers::LocatorImpl >(
		environment::get().get_jenv()->NewObject(
			get_class<org::xml::sax::helpers::LocatorImpl::J2CPP_CLASS_NAME>(),
			get_method_id<org::xml::sax::helpers::LocatorImpl::J2CPP_CLASS_NAME, org::xml::sax::helpers::LocatorImpl::J2CPP_METHOD_NAME(1), org::xml::sax::helpers::LocatorImpl::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::xml::sax::helpers::LocatorImpl::getPublicId()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > org::xml::sax::helpers::LocatorImpl::getSystemId()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int org::xml::sax::helpers::LocatorImpl::getLineNumber()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int org::xml::sax::helpers::LocatorImpl::getColumnNumber()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void org::xml::sax::helpers::LocatorImpl::setPublicId(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::helpers::LocatorImpl::setSystemId(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::helpers::LocatorImpl::setLineNumber(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void org::xml::sax::helpers::LocatorImpl::setColumnNumber(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::xml::sax::helpers::LocatorImpl,"org/xml/sax/helpers/LocatorImpl")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::LocatorImpl,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::LocatorImpl,1,"<init>","(Lorg/xml/sax/Locator;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::LocatorImpl,2,"getPublicId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::LocatorImpl,3,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::LocatorImpl,4,"getLineNumber","()I")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::LocatorImpl,5,"getColumnNumber","()I")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::LocatorImpl,6,"setPublicId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::LocatorImpl,7,"setSystemId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::LocatorImpl,8,"setLineNumber","(I)V")
J2CPP_DEFINE_METHOD(org::xml::sax::helpers::LocatorImpl,9,"setColumnNumber","(I)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_HELPERS_LOCATORIMPL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
