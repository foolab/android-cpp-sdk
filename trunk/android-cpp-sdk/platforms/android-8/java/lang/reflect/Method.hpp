/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.reflect.Method
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_METHOD_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_METHOD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class TypeVariable; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class AccessibleObject; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Type; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class Member; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class GenericDeclaration; } } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/AccessibleObject.hpp>
#include <java/lang/reflect/GenericDeclaration.hpp>
#include <java/lang/reflect/Member.hpp>
#include <java/lang/reflect/Type.hpp>
#include <java/lang/reflect/TypeVariable.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class Method;
	class Method
		: public object<Method>
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
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)

		explicit Method(jobject jobj)
		: object<Method>(jobj)
		{
		}

		operator local_ref<java::lang::reflect::AccessibleObject>() const;
		operator local_ref<java::lang::reflect::GenericDeclaration>() const;
		operator local_ref<java::lang::reflect::Member>() const;


		local_ref< array< local_ref< java::lang::reflect::TypeVariable >, 1> > getTypeParameters();
		local_ref< java::lang::String > toGenericString();
		local_ref< array< local_ref< java::lang::reflect::Type >, 1> > getGenericParameterTypes();
		local_ref< array< local_ref< java::lang::reflect::Type >, 1> > getGenericExceptionTypes();
		local_ref< java::lang::reflect::Type > getGenericReturnType();
		local_ref< array< local_ref< java::lang::annotation::Annotation >, 1> > getDeclaredAnnotations();
		local_ref< array< local_ref< java::lang::annotation::Annotation >, 2> > getParameterAnnotations();
		jboolean isVarArgs();
		jboolean isBridge();
		jboolean isSynthetic();
		local_ref< java::lang::Object > getDefaultValue();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Class > getDeclaringClass();
		local_ref< array< local_ref< java::lang::Class >, 1> > getExceptionTypes();
		jint getModifiers();
		local_ref< java::lang::String > getName();
		local_ref< array< local_ref< java::lang::Class >, 1> > getParameterTypes();
		local_ref< java::lang::Class > getReturnType();
		jint hashCode();
		local_ref< java::lang::Object > invoke(local_ref< java::lang::Object >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< java::lang::String > toString();
	}; //class Method

} //namespace reflect
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_METHOD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_METHOD_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_METHOD_HPP_IMPL

namespace j2cpp {



java::lang::reflect::Method::operator local_ref<java::lang::reflect::AccessibleObject>() const
{
	return local_ref<java::lang::reflect::AccessibleObject>(get_jobject());
}

java::lang::reflect::Method::operator local_ref<java::lang::reflect::GenericDeclaration>() const
{
	return local_ref<java::lang::reflect::GenericDeclaration>(get_jobject());
}

java::lang::reflect::Method::operator local_ref<java::lang::reflect::Member>() const
{
	return local_ref<java::lang::reflect::Member>(get_jobject());
}


local_ref< array< local_ref< java::lang::reflect::TypeVariable >, 1> > java::lang::reflect::Method::getTypeParameters()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(1),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array< local_ref< java::lang::reflect::TypeVariable >, 1> > >
	(get_jobject());
}

local_ref< java::lang::String > java::lang::reflect::Method::toGenericString()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(2),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::reflect::Type >, 1> > java::lang::reflect::Method::getGenericParameterTypes()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(3),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array< local_ref< java::lang::reflect::Type >, 1> > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::reflect::Type >, 1> > java::lang::reflect::Method::getGenericExceptionTypes()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(4),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array< local_ref< java::lang::reflect::Type >, 1> > >
	(get_jobject());
}

local_ref< java::lang::reflect::Type > java::lang::reflect::Method::getGenericReturnType()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(5),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::reflect::Type > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::annotation::Annotation >, 1> > java::lang::reflect::Method::getDeclaredAnnotations()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(6),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< array< local_ref< java::lang::annotation::Annotation >, 1> > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::annotation::Annotation >, 2> > java::lang::reflect::Method::getParameterAnnotations()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(7),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< array< local_ref< java::lang::annotation::Annotation >, 2> > >
	(get_jobject());
}

jboolean java::lang::reflect::Method::isVarArgs()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(8),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}

jboolean java::lang::reflect::Method::isBridge()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(9),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject());
}

jboolean java::lang::reflect::Method::isSynthetic()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(10),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject());
}

local_ref< java::lang::Object > java::lang::reflect::Method::getDefaultValue()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(11),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

jboolean java::lang::reflect::Method::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(12),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(12), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::Class > java::lang::reflect::Method::getDeclaringClass()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(13),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::Class > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::Class >, 1> > java::lang::reflect::Method::getExceptionTypes()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(14),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< array< local_ref< java::lang::Class >, 1> > >
	(get_jobject());
}

jint java::lang::reflect::Method::getModifiers()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(15),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(15), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > java::lang::reflect::Method::getName()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(16),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::Class >, 1> > java::lang::reflect::Method::getParameterTypes()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(17),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< array< local_ref< java::lang::Class >, 1> > >
	(get_jobject());
}

local_ref< java::lang::Class > java::lang::reflect::Method::getReturnType()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(18),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::Class > >
	(get_jobject());
}

jint java::lang::reflect::Method::hashCode()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(19),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(19), 
		jint >
	(get_jobject());
}

local_ref< java::lang::Object > java::lang::reflect::Method::invoke(local_ref< java::lang::Object > const &a0, local_ref< array< local_ref< java::lang::Object >, 1> > const &a1)
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(20),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > java::lang::reflect::Method::toString()
{
	return call_method<
		java::lang::reflect::Method::J2CPP_CLASS_NAME,
		java::lang::reflect::Method::J2CPP_METHOD_NAME(21),
		java::lang::reflect::Method::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::lang::reflect::Method,"java/lang/reflect/Method")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,1,"getTypeParameters","()[java.lang.reflect.TypeVariable")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,2,"toGenericString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,3,"getGenericParameterTypes","()[java.lang.reflect.Type")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,4,"getGenericExceptionTypes","()[java.lang.reflect.Type")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,5,"getGenericReturnType","()Ljava/lang/reflect/Type;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,6,"getDeclaredAnnotations","()[java.lang.annotation.Annotation")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,7,"getParameterAnnotations","()[[java.lang.annotation.Annotation")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,8,"isVarArgs","()Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,9,"isBridge","()Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,10,"isSynthetic","()Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,11,"getDefaultValue","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,12,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,13,"getDeclaringClass","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,14,"getExceptionTypes","()[java.lang.Class")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,15,"getModifiers","()I")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,16,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,17,"getParameterTypes","()[java.lang.Class")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,18,"getReturnType","()Ljava/lang/Class;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,19,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,20,"invoke","(Ljava/lang/Object;[java.lang.Object)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::reflect::Method,21,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_METHOD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
