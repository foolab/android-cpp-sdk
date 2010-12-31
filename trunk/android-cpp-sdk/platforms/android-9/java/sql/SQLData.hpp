/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.SQLData
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLDATA_HPP_DECL
#define J2CPP_JAVA_SQL_SQLDATA_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace sql { class SQLOutput; } } }
namespace j2cpp { namespace java { namespace sql { class SQLInput; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/sql/SQLInput.hpp>
#include <java/sql/SQLOutput.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class SQLData;
	class SQLData
		: public object<SQLData>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit SQLData(jobject jobj)
		: object<SQLData>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getSQLTypeName();
		void readSQL(local_ref< java::sql::SQLInput >  const&, local_ref< java::lang::String >  const&);
		void writeSQL(local_ref< java::sql::SQLOutput >  const&);
	}; //class SQLData

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLDATA_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLDATA_HPP_IMPL
#define J2CPP_JAVA_SQL_SQLDATA_HPP_IMPL

namespace j2cpp {



java::sql::SQLData::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::String > java::sql::SQLData::getSQLTypeName()
{
	return call_method<
		java::sql::SQLData::J2CPP_CLASS_NAME,
		java::sql::SQLData::J2CPP_METHOD_NAME(0),
		java::sql::SQLData::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void java::sql::SQLData::readSQL(local_ref< java::sql::SQLInput > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::sql::SQLData::J2CPP_CLASS_NAME,
		java::sql::SQLData::J2CPP_METHOD_NAME(1),
		java::sql::SQLData::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

void java::sql::SQLData::writeSQL(local_ref< java::sql::SQLOutput > const &a0)
{
	return call_method<
		java::sql::SQLData::J2CPP_CLASS_NAME,
		java::sql::SQLData::J2CPP_METHOD_NAME(2),
		java::sql::SQLData::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::sql::SQLData,"java/sql/SQLData")
J2CPP_DEFINE_METHOD(java::sql::SQLData,0,"getSQLTypeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::SQLData,1,"readSQL","(Ljava/sql/SQLInput;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLData,2,"writeSQL","(Ljava/sql/SQLOutput;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLDATA_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
