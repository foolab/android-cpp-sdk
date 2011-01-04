/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.namespace.QName
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_NAMESPACE_QNAME_HPP_DECL
#define J2CPP_JAVAX_XML_NAMESPACE_QNAME_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace namespace {

	class QName;
	class QName
		: public object<QName>
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

		explicit QName(jobject jobj)
		: object<QName>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		QName(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		QName(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		QName(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getNamespaceURI();
		local_ref< java::lang::String > getLocalPart();
		local_ref< java::lang::String > getPrefix();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< java::lang::String > toString();
		static local_ref< javax::xml::namespace::QName > valueOf(local_ref< java::lang::String >  const&);
	}; //class QName

} //namespace namespace
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_NAMESPACE_QNAME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_NAMESPACE_QNAME_HPP_IMPL
#define J2CPP_JAVAX_XML_NAMESPACE_QNAME_HPP_IMPL

namespace j2cpp {



javax::xml::namespace::QName::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::xml::namespace::QName::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


javax::xml::namespace::QName::QName(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<javax::xml::namespace::QName>(
	call_new_object<
		javax::xml::namespace::QName::J2CPP_CLASS_NAME,
		javax::xml::namespace::QName::J2CPP_METHOD_NAME(0),
		javax::xml::namespace::QName::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



javax::xml::namespace::QName::QName(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
: object<javax::xml::namespace::QName>(
	call_new_object<
		javax::xml::namespace::QName::J2CPP_CLASS_NAME,
		javax::xml::namespace::QName::J2CPP_METHOD_NAME(1),
		javax::xml::namespace::QName::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2)
)
{
}



javax::xml::namespace::QName::QName(local_ref< java::lang::String > const &a0)
: object<javax::xml::namespace::QName>(
	call_new_object<
		javax::xml::namespace::QName::J2CPP_CLASS_NAME,
		javax::xml::namespace::QName::J2CPP_METHOD_NAME(2),
		javax::xml::namespace::QName::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}


local_ref< java::lang::String > javax::xml::namespace::QName::getNamespaceURI()
{
	return call_method<
		javax::xml::namespace::QName::J2CPP_CLASS_NAME,
		javax::xml::namespace::QName::J2CPP_METHOD_NAME(3),
		javax::xml::namespace::QName::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > javax::xml::namespace::QName::getLocalPart()
{
	return call_method<
		javax::xml::namespace::QName::J2CPP_CLASS_NAME,
		javax::xml::namespace::QName::J2CPP_METHOD_NAME(4),
		javax::xml::namespace::QName::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > javax::xml::namespace::QName::getPrefix()
{
	return call_method<
		javax::xml::namespace::QName::J2CPP_CLASS_NAME,
		javax::xml::namespace::QName::J2CPP_METHOD_NAME(5),
		javax::xml::namespace::QName::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean javax::xml::namespace::QName::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		javax::xml::namespace::QName::J2CPP_CLASS_NAME,
		javax::xml::namespace::QName::J2CPP_METHOD_NAME(6),
		javax::xml::namespace::QName::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0);
}

jint javax::xml::namespace::QName::hashCode()
{
	return call_method<
		javax::xml::namespace::QName::J2CPP_CLASS_NAME,
		javax::xml::namespace::QName::J2CPP_METHOD_NAME(7),
		javax::xml::namespace::QName::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > javax::xml::namespace::QName::toString()
{
	return call_method<
		javax::xml::namespace::QName::J2CPP_CLASS_NAME,
		javax::xml::namespace::QName::J2CPP_METHOD_NAME(8),
		javax::xml::namespace::QName::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< javax::xml::namespace::QName > javax::xml::namespace::QName::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		javax::xml::namespace::QName::J2CPP_CLASS_NAME,
		javax::xml::namespace::QName::J2CPP_METHOD_NAME(9),
		javax::xml::namespace::QName::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< javax::xml::namespace::QName > >
	(a0);
}


J2CPP_DEFINE_CLASS(javax::xml::namespace::QName,"javax/xml/namespace/QName")
J2CPP_DEFINE_METHOD(javax::xml::namespace::QName,0,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::namespace::QName,1,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::namespace::QName,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::namespace::QName,3,"getNamespaceURI","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::namespace::QName,4,"getLocalPart","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::namespace::QName,5,"getPrefix","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::namespace::QName,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(javax::xml::namespace::QName,7,"hashCode","()I")
J2CPP_DEFINE_METHOD(javax::xml::namespace::QName,8,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::namespace::QName,9,"valueOf","(Ljava/lang/String;)Ljavax/xml/namespace/QName;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_NAMESPACE_QNAME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION