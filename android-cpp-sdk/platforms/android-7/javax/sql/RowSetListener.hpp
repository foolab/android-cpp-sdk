/*================================================================================
  code generated by: java2cpp
  class: javax.sql.RowSetListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_ROWSETLISTENER_HPP_DECL
#define J2CPP_JAVAX_SQL_ROWSETLISTENER_HPP_DECL


namespace j2cpp { namespace javax { namespace sql { class RowSetEvent; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class EventListener; } } }


#include <java/lang/Object.hpp>
#include <java/util/EventListener.hpp>
#include <javax/sql/RowSetEvent.hpp>


namespace j2cpp {

namespace javax { namespace sql {

	class RowSetListener;
	class RowSetListener
		: public cpp_object<RowSetListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit RowSetListener(jobject jobj)
		: cpp_object<RowSetListener>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::EventListener>() const;


		void cursorMoved(local_ref< javax::sql::RowSetEvent > const&);
		void rowChanged(local_ref< javax::sql::RowSetEvent > const&);
		void rowSetChanged(local_ref< javax::sql::RowSetEvent > const&);
	}; //class RowSetListener

} //namespace sql
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_ROWSETLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_ROWSETLISTENER_HPP_IMPL
#define J2CPP_JAVAX_SQL_ROWSETLISTENER_HPP_IMPL

namespace j2cpp {



javax::sql::RowSetListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

javax::sql::RowSetListener::operator local_ref<java::util::EventListener>() const
{
	return local_ref<java::util::EventListener>(get_jtype());
}

void javax::sql::RowSetListener::cursorMoved(local_ref< javax::sql::RowSetEvent > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSetListener::rowChanged(local_ref< javax::sql::RowSetEvent > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void javax::sql::RowSetListener::rowSetChanged(local_ref< javax::sql::RowSetEvent > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::sql::RowSetListener,"javax/sql/RowSetListener")
J2CPP_DEFINE_METHOD(javax::sql::RowSetListener,0,"cursorMoved","(Ljavax/sql/RowSetEvent;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSetListener,1,"rowChanged","(Ljavax/sql/RowSetEvent;)V")
J2CPP_DEFINE_METHOD(javax::sql::RowSetListener,2,"rowSetChanged","(Ljavax/sql/RowSetEvent;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_ROWSETLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
