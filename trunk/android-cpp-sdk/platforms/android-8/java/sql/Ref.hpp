/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.Ref
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_REF_HPP_DECL
#define J2CPP_JAVA_SQL_REF_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Ref;
	class Ref
		: public object<Ref>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit Ref(jobject jobj)
		: object<Ref>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getBaseTypeName();
		local_ref< java::lang::Object > getObject();
		local_ref< java::lang::Object > getObject(local_ref< java::util::Map >  const&);
		void setObject(local_ref< java::lang::Object >  const&);
	}; //class Ref

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_REF_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_REF_HPP_IMPL
#define J2CPP_JAVA_SQL_REF_HPP_IMPL

namespace j2cpp {



java::sql::Ref::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::String > java::sql::Ref::getBaseTypeName()
{
	return call_method<
		java::sql::Ref::J2CPP_CLASS_NAME,
		java::sql::Ref::J2CPP_METHOD_NAME(0),
		java::sql::Ref::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::Object > java::sql::Ref::getObject()
{
	return call_method<
		java::sql::Ref::J2CPP_CLASS_NAME,
		java::sql::Ref::J2CPP_METHOD_NAME(1),
		java::sql::Ref::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::Object > java::sql::Ref::getObject(local_ref< java::util::Map > const &a0)
{
	return call_method<
		java::sql::Ref::J2CPP_CLASS_NAME,
		java::sql::Ref::J2CPP_METHOD_NAME(2),
		java::sql::Ref::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

void java::sql::Ref::setObject(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::sql::Ref::J2CPP_CLASS_NAME,
		java::sql::Ref::J2CPP_METHOD_NAME(3),
		java::sql::Ref::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::sql::Ref,"java/sql/Ref")
J2CPP_DEFINE_METHOD(java::sql::Ref,0,"getBaseTypeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::Ref,1,"getObject","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::sql::Ref,2,"getObject","(Ljava/util/Map;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::sql::Ref,3,"setObject","(Ljava/lang/Object;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_REF_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
