/*================================================================================
  code generated by: java2cpp
  class: java.sql.Statement
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_STATEMENT_HPP_DECL
#define J2CPP_JAVA_SQL_STATEMENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace sql { class SQLWarning; } } }
namespace j2cpp { namespace java { namespace sql { class ResultSet; } } }
namespace j2cpp { namespace java { namespace sql { class Connection; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/sql/Connection.hpp>
#include <java/sql/ResultSet.hpp>
#include <java/sql/SQLWarning.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Statement;
	class Statement
		: public cpp_object<Statement>
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
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)

		explicit Statement(jobject jobj)
		: cpp_object<Statement>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void addBatch(local_ref< java::lang::String > const&);
		void cancel();
		void clearBatch();
		void clearWarnings();
		void close();
		cpp_boolean execute(local_ref< java::lang::String > const&);
		cpp_boolean execute(local_ref< java::lang::String > const&, cpp_int const&);
		cpp_boolean execute(local_ref< java::lang::String > const&, local_ref< cpp_int_array<1> > const&);
		cpp_boolean execute(local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&);
		local_ref< cpp_int_array<1> > executeBatch();
		local_ref< java::sql::ResultSet > executeQuery(local_ref< java::lang::String > const&);
		cpp_int executeUpdate(local_ref< java::lang::String > const&);
		cpp_int executeUpdate(local_ref< java::lang::String > const&, cpp_int const&);
		cpp_int executeUpdate(local_ref< java::lang::String > const&, local_ref< cpp_int_array<1> > const&);
		cpp_int executeUpdate(local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&);
		local_ref< java::sql::Connection > getConnection();
		cpp_int getFetchDirection();
		cpp_int getFetchSize();
		local_ref< java::sql::ResultSet > getGeneratedKeys();
		cpp_int getMaxFieldSize();
		cpp_int getMaxRows();
		cpp_boolean getMoreResults();
		cpp_boolean getMoreResults(cpp_int const&);
		cpp_int getQueryTimeout();
		local_ref< java::sql::ResultSet > getResultSet();
		cpp_int getResultSetConcurrency();
		cpp_int getResultSetHoldability();
		cpp_int getResultSetType();
		cpp_int getUpdateCount();
		local_ref< java::sql::SQLWarning > getWarnings();
		void setCursorName(local_ref< java::lang::String > const&);
		void setEscapeProcessing(cpp_boolean const&);
		void setFetchDirection(cpp_int const&);
		void setFetchSize(cpp_int const&);
		void setMaxFieldSize(cpp_int const&);
		void setMaxRows(cpp_int const&);
		void setQueryTimeout(cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > CLOSE_ALL_RESULTS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > CLOSE_CURRENT_RESULT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > EXECUTE_FAILED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > KEEP_CURRENT_RESULT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > NO_GENERATED_KEYS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > RETURN_GENERATED_KEYS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > SUCCESS_NO_INFO;
	}; //class Statement

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_STATEMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_STATEMENT_HPP_IMPL
#define J2CPP_JAVA_SQL_STATEMENT_HPP_IMPL

namespace j2cpp {



java::sql::Statement::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

void java::sql::Statement::addBatch(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Statement::cancel()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void java::sql::Statement::clearBatch()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::sql::Statement::clearWarnings()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void java::sql::Statement::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean java::sql::Statement::execute(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::sql::Statement::execute(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::sql::Statement::execute(local_ref< java::lang::String > const &a0, local_ref< cpp_int_array<1> > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::sql::Statement::execute(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_int_array<1> > java::sql::Statement::executeBatch()
{
	return local_ref< cpp_int_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::sql::ResultSet > java::sql::Statement::executeQuery(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::sql::ResultSet >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::sql::Statement::executeUpdate(local_ref< java::lang::String > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::sql::Statement::executeUpdate(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::sql::Statement::executeUpdate(local_ref< java::lang::String > const &a0, local_ref< cpp_int_array<1> > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::sql::Statement::executeUpdate(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::sql::Connection > java::sql::Statement::getConnection()
{
	return local_ref< java::sql::Connection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_int java::sql::Statement::getFetchDirection()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_int java::sql::Statement::getFetchSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

local_ref< java::sql::ResultSet > java::sql::Statement::getGeneratedKeys()
{
	return local_ref< java::sql::ResultSet >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_int java::sql::Statement::getMaxFieldSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_int java::sql::Statement::getMaxRows()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_boolean java::sql::Statement::getMoreResults()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

cpp_boolean java::sql::Statement::getMoreResults(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::sql::Statement::getQueryTimeout()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

local_ref< java::sql::ResultSet > java::sql::Statement::getResultSet()
{
	return local_ref< java::sql::ResultSet >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_int java::sql::Statement::getResultSetConcurrency()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

cpp_int java::sql::Statement::getResultSetHoldability()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

cpp_int java::sql::Statement::getResultSetType()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

cpp_int java::sql::Statement::getUpdateCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

local_ref< java::sql::SQLWarning > java::sql::Statement::getWarnings()
{
	return local_ref< java::sql::SQLWarning >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}

void java::sql::Statement::setCursorName(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Statement::setEscapeProcessing(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Statement::setFetchDirection(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Statement::setFetchSize(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Statement::setMaxFieldSize(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Statement::setMaxRows(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Statement::setQueryTimeout(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	java::sql::Statement::J2CPP_CLASS_NAME,
	java::sql::Statement::J2CPP_FIELD_NAME(0),
	java::sql::Statement::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> java::sql::Statement::CLOSE_ALL_RESULTS;

static_field<
	java::sql::Statement::J2CPP_CLASS_NAME,
	java::sql::Statement::J2CPP_FIELD_NAME(1),
	java::sql::Statement::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> java::sql::Statement::CLOSE_CURRENT_RESULT;

static_field<
	java::sql::Statement::J2CPP_CLASS_NAME,
	java::sql::Statement::J2CPP_FIELD_NAME(2),
	java::sql::Statement::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> java::sql::Statement::EXECUTE_FAILED;

static_field<
	java::sql::Statement::J2CPP_CLASS_NAME,
	java::sql::Statement::J2CPP_FIELD_NAME(3),
	java::sql::Statement::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> java::sql::Statement::KEEP_CURRENT_RESULT;

static_field<
	java::sql::Statement::J2CPP_CLASS_NAME,
	java::sql::Statement::J2CPP_FIELD_NAME(4),
	java::sql::Statement::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> java::sql::Statement::NO_GENERATED_KEYS;

static_field<
	java::sql::Statement::J2CPP_CLASS_NAME,
	java::sql::Statement::J2CPP_FIELD_NAME(5),
	java::sql::Statement::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> java::sql::Statement::RETURN_GENERATED_KEYS;

static_field<
	java::sql::Statement::J2CPP_CLASS_NAME,
	java::sql::Statement::J2CPP_FIELD_NAME(6),
	java::sql::Statement::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> java::sql::Statement::SUCCESS_NO_INFO;


J2CPP_DEFINE_CLASS(java::sql::Statement,"java/sql/Statement")
J2CPP_DEFINE_METHOD(java::sql::Statement,0,"addBatch","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::Statement,1,"cancel","()V")
J2CPP_DEFINE_METHOD(java::sql::Statement,2,"clearBatch","()V")
J2CPP_DEFINE_METHOD(java::sql::Statement,3,"clearWarnings","()V")
J2CPP_DEFINE_METHOD(java::sql::Statement,4,"close","()V")
J2CPP_DEFINE_METHOD(java::sql::Statement,5,"execute","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::sql::Statement,6,"execute","(Ljava/lang/String;I)Z")
J2CPP_DEFINE_METHOD(java::sql::Statement,7,"execute","(Ljava/lang/String;[I)Z")
J2CPP_DEFINE_METHOD(java::sql::Statement,8,"execute","(Ljava/lang/String;[java.lang.String)Z")
J2CPP_DEFINE_METHOD(java::sql::Statement,9,"executeBatch","()[I")
J2CPP_DEFINE_METHOD(java::sql::Statement,10,"executeQuery","(Ljava/lang/String;)Ljava/sql/ResultSet;")
J2CPP_DEFINE_METHOD(java::sql::Statement,11,"executeUpdate","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(java::sql::Statement,12,"executeUpdate","(Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(java::sql::Statement,13,"executeUpdate","(Ljava/lang/String;[I)I")
J2CPP_DEFINE_METHOD(java::sql::Statement,14,"executeUpdate","(Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_METHOD(java::sql::Statement,15,"getConnection","()Ljava/sql/Connection;")
J2CPP_DEFINE_METHOD(java::sql::Statement,16,"getFetchDirection","()I")
J2CPP_DEFINE_METHOD(java::sql::Statement,17,"getFetchSize","()I")
J2CPP_DEFINE_METHOD(java::sql::Statement,18,"getGeneratedKeys","()Ljava/sql/ResultSet;")
J2CPP_DEFINE_METHOD(java::sql::Statement,19,"getMaxFieldSize","()I")
J2CPP_DEFINE_METHOD(java::sql::Statement,20,"getMaxRows","()I")
J2CPP_DEFINE_METHOD(java::sql::Statement,21,"getMoreResults","()Z")
J2CPP_DEFINE_METHOD(java::sql::Statement,22,"getMoreResults","(I)Z")
J2CPP_DEFINE_METHOD(java::sql::Statement,23,"getQueryTimeout","()I")
J2CPP_DEFINE_METHOD(java::sql::Statement,24,"getResultSet","()Ljava/sql/ResultSet;")
J2CPP_DEFINE_METHOD(java::sql::Statement,25,"getResultSetConcurrency","()I")
J2CPP_DEFINE_METHOD(java::sql::Statement,26,"getResultSetHoldability","()I")
J2CPP_DEFINE_METHOD(java::sql::Statement,27,"getResultSetType","()I")
J2CPP_DEFINE_METHOD(java::sql::Statement,28,"getUpdateCount","()I")
J2CPP_DEFINE_METHOD(java::sql::Statement,29,"getWarnings","()Ljava/sql/SQLWarning;")
J2CPP_DEFINE_METHOD(java::sql::Statement,30,"setCursorName","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::Statement,31,"setEscapeProcessing","(Z)V")
J2CPP_DEFINE_METHOD(java::sql::Statement,32,"setFetchDirection","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Statement,33,"setFetchSize","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Statement,34,"setMaxFieldSize","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Statement,35,"setMaxRows","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Statement,36,"setQueryTimeout","(I)V")
J2CPP_DEFINE_FIELD(java::sql::Statement,0,"CLOSE_ALL_RESULTS","I")
J2CPP_DEFINE_FIELD(java::sql::Statement,1,"CLOSE_CURRENT_RESULT","I")
J2CPP_DEFINE_FIELD(java::sql::Statement,2,"EXECUTE_FAILED","I")
J2CPP_DEFINE_FIELD(java::sql::Statement,3,"KEEP_CURRENT_RESULT","I")
J2CPP_DEFINE_FIELD(java::sql::Statement,4,"NO_GENERATED_KEYS","I")
J2CPP_DEFINE_FIELD(java::sql::Statement,5,"RETURN_GENERATED_KEYS","I")
J2CPP_DEFINE_FIELD(java::sql::Statement,6,"SUCCESS_NO_INFO","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_STATEMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
