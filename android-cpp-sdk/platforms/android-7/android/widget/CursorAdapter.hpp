/*================================================================================
  code generated by: java2cpp
  class: android.widget.CursorAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CURSORADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_CURSORADAPTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace widget { class Filter; } } }
namespace j2cpp { namespace android { namespace widget { class BaseAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class FilterQueryProvider; } } }
namespace j2cpp { namespace android { namespace widget { class Filterable; } } }


#include <android/content/Context.hpp>
#include <android/database/Cursor.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/BaseAdapter.hpp>
#include <android/widget/Filter.hpp>
#include <android/widget/FilterQueryProvider.hpp>
#include <android/widget/Filterable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class CursorAdapter;
	class CursorAdapter
		: public cpp_object<CursorAdapter>
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

		explicit CursorAdapter(jobject jobj)
		: cpp_object<CursorAdapter>(jobj)
		{
		}

		operator local_ref<android::widget::BaseAdapter>() const;
		operator local_ref<android::widget::Filterable>() const;


		CursorAdapter(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&);
		CursorAdapter(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, cpp_boolean const&);
		local_ref< android::database::Cursor > getCursor();
		cpp_int getCount();
		local_ref< java::lang::Object > getItem(cpp_int const&);
		cpp_long getItemId(cpp_int const&);
		cpp_boolean hasStableIds();
		local_ref< android::view::View > getView(cpp_int const&, local_ref< android::view::View > const&, local_ref< android::view::ViewGroup > const&);
		local_ref< android::view::View > getDropDownView(cpp_int const&, local_ref< android::view::View > const&, local_ref< android::view::ViewGroup > const&);
		local_ref< android::view::View > newView(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, local_ref< android::view::ViewGroup > const&);
		local_ref< android::view::View > newDropDownView(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, local_ref< android::view::ViewGroup > const&);
		void bindView(local_ref< android::view::View > const&, local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&);
		void changeCursor(local_ref< android::database::Cursor > const&);
		local_ref< java::lang::CharSequence > convertToString(local_ref< android::database::Cursor > const&);
		local_ref< android::database::Cursor > runQueryOnBackgroundThread(local_ref< java::lang::CharSequence > const&);
		local_ref< android::widget::Filter > getFilter();
		local_ref< android::widget::FilterQueryProvider > getFilterQueryProvider();
		void setFilterQueryProvider(local_ref< android::widget::FilterQueryProvider > const&);
	}; //class CursorAdapter

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CURSORADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CURSORADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_CURSORADAPTER_HPP_IMPL

namespace j2cpp {



android::widget::CursorAdapter::operator local_ref<android::widget::BaseAdapter>() const
{
	return local_ref<android::widget::BaseAdapter>(get_jtype());
}

android::widget::CursorAdapter::operator local_ref<android::widget::Filterable>() const
{
	return local_ref<android::widget::Filterable>(get_jtype());
}


android::widget::CursorAdapter::CursorAdapter(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1)
: cpp_object<android::widget::CursorAdapter>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::CursorAdapter::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::CursorAdapter::J2CPP_CLASS_NAME, android::widget::CursorAdapter::J2CPP_METHOD_NAME(0), android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::widget::CursorAdapter::CursorAdapter(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, cpp_boolean const &a2)
: cpp_object<android::widget::CursorAdapter>(
	environment::get().get_jenv()->NewObject(
		get_class<android::widget::CursorAdapter::J2CPP_CLASS_NAME>(),
		get_method_id<android::widget::CursorAdapter::J2CPP_CLASS_NAME, android::widget::CursorAdapter::J2CPP_METHOD_NAME(1), android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}



local_ref< android::database::Cursor > android::widget::CursorAdapter::getCursor()
{
	return local_ref< android::database::Cursor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::widget::CursorAdapter::getCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::Object > android::widget::CursorAdapter::getItem(cpp_int const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::widget::CursorAdapter::getItemId(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::CursorAdapter::hasStableIds()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< android::view::View > android::widget::CursorAdapter::getView(cpp_int const &a0, local_ref< android::view::View > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::CursorAdapter::getDropDownView(cpp_int const &a0, local_ref< android::view::View > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::CursorAdapter::newView(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::CursorAdapter::newDropDownView(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::CursorAdapter::bindView(local_ref< android::view::View > const &a0, local_ref< android::content::Context > const &a1, local_ref< android::database::Cursor > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::CursorAdapter::changeCursor(local_ref< android::database::Cursor > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::widget::CursorAdapter::convertToString(local_ref< android::database::Cursor > const &a0)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::database::Cursor > android::widget::CursorAdapter::runQueryOnBackgroundThread(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< android::database::Cursor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::Filter > android::widget::CursorAdapter::getFilter()
{
	return local_ref< android::widget::Filter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< android::widget::FilterQueryProvider > android::widget::CursorAdapter::getFilterQueryProvider()
{
	return local_ref< android::widget::FilterQueryProvider >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

void android::widget::CursorAdapter::setFilterQueryProvider(local_ref< android::widget::FilterQueryProvider > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::widget::CursorAdapter,"android/widget/CursorAdapter")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,0,"<init>","(Landroid/content/Context;Landroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,1,"<init>","(Landroid/content/Context;Landroid/database/Cursor;Z)V")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,2,"init","(Landroid/content/Context;Landroid/database/Cursor;Z)V")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,3,"getCursor","()Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,4,"getCount","()I")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,5,"getItem","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,6,"getItemId","(I)J")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,7,"hasStableIds","()Z")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,8,"getView","(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,9,"getDropDownView","(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,10,"newView","(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,11,"newDropDownView","(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,12,"bindView","(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,13,"changeCursor","(Landroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,14,"convertToString","(Landroid/database/Cursor;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,15,"runQueryOnBackgroundThread","(Ljava/lang/CharSequence;)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,16,"getFilter","()Landroid/widget/Filter;")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,17,"getFilterQueryProvider","()Landroid/widget/FilterQueryProvider;")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,18,"setFilterQueryProvider","(Landroid/widget/FilterQueryProvider;)V")
J2CPP_DEFINE_METHOD(android::widget::CursorAdapter,19,"onContentChanged","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CURSORADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
