/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.xml.sax.ext.Attributes2Impl
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_ATTRIBUTES2IMPL_HPP_DECL
#define J2CPP_ORG_XML_SAX_EXT_ATTRIBUTES2IMPL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { namespace ext { class Attributes2; } } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { namespace helpers { class AttributesImpl; } } } } }
namespace j2cpp { namespace org { namespace xml { namespace sax { class Attributes; } } } }


#include <java/lang/String.hpp>
#include <org/xml/sax/Attributes.hpp>
#include <org/xml/sax/ext/Attributes2.hpp>
#include <org/xml/sax/helpers/AttributesImpl.hpp>


namespace j2cpp {

namespace org { namespace xml { namespace sax { namespace ext {

	class Attributes2Impl;
	class Attributes2Impl
		: public object<Attributes2Impl>
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

		explicit Attributes2Impl(jobject jobj)
		: object<Attributes2Impl>(jobj)
		{
		}

		operator local_ref<org::xml::sax::helpers::AttributesImpl>() const;
		operator local_ref<org::xml::sax::ext::Attributes2>() const;


		Attributes2Impl();
		Attributes2Impl(local_ref< org::xml::sax::Attributes > const&);
		jboolean isDeclared(jint);
		jboolean isDeclared(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		jboolean isDeclared(local_ref< java::lang::String >  const&);
		jboolean isSpecified(jint);
		jboolean isSpecified(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		jboolean isSpecified(local_ref< java::lang::String >  const&);
		void setAttributes(local_ref< org::xml::sax::Attributes >  const&);
		void addAttribute(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void removeAttribute(jint);
		void setDeclared(jint, jboolean);
		void setSpecified(jint, jboolean);
	}; //class Attributes2Impl

} //namespace ext
} //namespace sax
} //namespace xml
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_ATTRIBUTES2IMPL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_XML_SAX_EXT_ATTRIBUTES2IMPL_HPP_IMPL
#define J2CPP_ORG_XML_SAX_EXT_ATTRIBUTES2IMPL_HPP_IMPL

namespace j2cpp {



org::xml::sax::ext::Attributes2Impl::operator local_ref<org::xml::sax::helpers::AttributesImpl>() const
{
	return local_ref<org::xml::sax::helpers::AttributesImpl>(get_jobject());
}

org::xml::sax::ext::Attributes2Impl::operator local_ref<org::xml::sax::ext::Attributes2>() const
{
	return local_ref<org::xml::sax::ext::Attributes2>(get_jobject());
}


org::xml::sax::ext::Attributes2Impl::Attributes2Impl()
: object<org::xml::sax::ext::Attributes2Impl>(
	call_new_object<
		org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(0),
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



org::xml::sax::ext::Attributes2Impl::Attributes2Impl(local_ref< org::xml::sax::Attributes > const &a0)
: object<org::xml::sax::ext::Attributes2Impl>(
	call_new_object<
		org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(1),
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


jboolean org::xml::sax::ext::Attributes2Impl::isDeclared(jint a0)
{
	return call_method<
		org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(2),
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}

jboolean org::xml::sax::ext::Attributes2Impl::isDeclared(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(3),
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean org::xml::sax::ext::Attributes2Impl::isDeclared(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(4),
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject(), a0);
}

jboolean org::xml::sax::ext::Attributes2Impl::isSpecified(jint a0)
{
	return call_method<
		org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(5),
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}

jboolean org::xml::sax::ext::Attributes2Impl::isSpecified(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(6),
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean org::xml::sax::ext::Attributes2Impl::isSpecified(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(7),
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0);
}

void org::xml::sax::ext::Attributes2Impl::setAttributes(local_ref< org::xml::sax::Attributes > const &a0)
{
	return call_method<
		org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(8),
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void org::xml::sax::ext::Attributes2Impl::addAttribute(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3, local_ref< java::lang::String > const &a4)
{
	return call_method<
		org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(9),
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void org::xml::sax::ext::Attributes2Impl::removeAttribute(jint a0)
{
	return call_method<
		org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(10),
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

void org::xml::sax::ext::Attributes2Impl::setDeclared(jint a0, jboolean a1)
{
	return call_method<
		org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(11),
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0, a1);
}

void org::xml::sax::ext::Attributes2Impl::setSpecified(jint a0, jboolean a1)
{
	return call_method<
		org::xml::sax::ext::Attributes2Impl::J2CPP_CLASS_NAME,
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_NAME(12),
		org::xml::sax::ext::Attributes2Impl::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(org::xml::sax::ext::Attributes2Impl,"org/xml/sax/ext/Attributes2Impl")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,1,"<init>","(Lorg/xml/sax/Attributes;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,2,"isDeclared","(I)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,3,"isDeclared","(Ljava/lang/String;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,4,"isDeclared","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,5,"isSpecified","(I)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,6,"isSpecified","(Ljava/lang/String;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,7,"isSpecified","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,8,"setAttributes","(Lorg/xml/sax/Attributes;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,9,"addAttribute","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,10,"removeAttribute","(I)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,11,"setDeclared","(IZ)V")
J2CPP_DEFINE_METHOD(org::xml::sax::ext::Attributes2Impl,12,"setSpecified","(IZ)V")

} //namespace j2cpp

#endif //J2CPP_ORG_XML_SAX_EXT_ATTRIBUTES2IMPL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
