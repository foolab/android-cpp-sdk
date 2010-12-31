/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.database.sqlite.SQLiteTransactionListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITETRANSACTIONLISTENER_HPP_DECL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITETRANSACTIONLISTENER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace database { namespace sqlite {

	class SQLiteTransactionListener;
	class SQLiteTransactionListener
		: public object<SQLiteTransactionListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit SQLiteTransactionListener(jobject jobj)
		: object<SQLiteTransactionListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void onBegin();
		void onCommit();
		void onRollback();
	}; //class SQLiteTransactionListener

} //namespace sqlite
} //namespace database
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITETRANSACTIONLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITETRANSACTIONLISTENER_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITETRANSACTIONLISTENER_HPP_IMPL

namespace j2cpp {



android::database::sqlite::SQLiteTransactionListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::database::sqlite::SQLiteTransactionListener::onBegin()
{
	return call_method<
		android::database::sqlite::SQLiteTransactionListener::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteTransactionListener::J2CPP_METHOD_NAME(0),
		android::database::sqlite::SQLiteTransactionListener::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject());
}

void android::database::sqlite::SQLiteTransactionListener::onCommit()
{
	return call_method<
		android::database::sqlite::SQLiteTransactionListener::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteTransactionListener::J2CPP_METHOD_NAME(1),
		android::database::sqlite::SQLiteTransactionListener::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

void android::database::sqlite::SQLiteTransactionListener::onRollback()
{
	return call_method<
		android::database::sqlite::SQLiteTransactionListener::J2CPP_CLASS_NAME,
		android::database::sqlite::SQLiteTransactionListener::J2CPP_METHOD_NAME(2),
		android::database::sqlite::SQLiteTransactionListener::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::database::sqlite::SQLiteTransactionListener,"android/database/sqlite/SQLiteTransactionListener")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteTransactionListener,0,"onBegin","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteTransactionListener,1,"onCommit","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteTransactionListener,2,"onRollback","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITETRANSACTIONLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
