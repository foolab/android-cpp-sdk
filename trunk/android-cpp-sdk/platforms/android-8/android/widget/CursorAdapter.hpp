/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.CursorAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CURSORADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_CURSORADAPTER_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class BaseAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class Filter; } } }
namespace j2cpp { namespace android { namespace widget { class Filterable; } } }
namespace j2cpp { namespace android { namespace widget { class FilterQueryProvider; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


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
		: public object<CursorAdapter>
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
		: object<CursorAdapter>(jobj)
		{
		}

		operator local_ref<android::widget::BaseAdapter>() const;
		operator local_ref<android::widget::Filterable>() const;


		CursorAdapter(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&);
		CursorAdapter(local_ref< android::content::Context > const&, local_ref< android::database::Cursor > const&, jboolean);
		local_ref< android::database::Cursor > getCursor();
		jint getCount();
		local_ref< java::lang::Object > getItem(jint);
		jlong getItemId(jint);
		jboolean hasStableIds();
		local_ref< android::view::View > getView(jint, local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup >  const&);
		local_ref< android::view::View > getDropDownView(jint, local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup >  const&);
		local_ref< android::view::View > newView(local_ref< android::content::Context >  const&, local_ref< android::database::Cursor >  const&, local_ref< android::view::ViewGroup >  const&);
		local_ref< android::view::View > newDropDownView(local_ref< android::content::Context >  const&, local_ref< android::database::Cursor >  const&, local_ref< android::view::ViewGroup >  const&);
		void bindView(local_ref< android::view::View >  const&, local_ref< android::content::Context >  const&, local_ref< android::database::Cursor >  const&);
		void changeCursor(local_ref< android::database::Cursor >  const&);
		local_ref< java::lang::CharSequence > convertToString(local_ref< android::database::Cursor >  const&);
		local_ref< android::database::Cursor > runQueryOnBackgroundThread(local_ref< java::lang::CharSequence >  const&);
		local_ref< android::widget::Filter > getFilter();
		local_ref< android::widget::FilterQueryProvider > getFilterQueryProvider();
		void setFilterQueryProvider(local_ref< android::widget::FilterQueryProvider >  const&);
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
	return local_ref<android::widget::BaseAdapter>(get_jobject());
}

android::widget::CursorAdapter::operator local_ref<android::widget::Filterable>() const
{
	return local_ref<android::widget::Filterable>(get_jobject());
}


android::widget::CursorAdapter::CursorAdapter(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1)
: object<android::widget::CursorAdapter>(
	call_new_object<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(0),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



android::widget::CursorAdapter::CursorAdapter(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, jboolean a2)
: object<android::widget::CursorAdapter>(
	call_new_object<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(1),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2)
)
{
}



local_ref< android::database::Cursor > android::widget::CursorAdapter::getCursor()
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(3),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::database::Cursor > >
	(get_jobject());
}

jint android::widget::CursorAdapter::getCount()
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(4),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

local_ref< java::lang::Object > android::widget::CursorAdapter::getItem(jint a0)
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(5),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

jlong android::widget::CursorAdapter::getItemId(jint a0)
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(6),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(6), 
		jlong >
	(get_jobject(), a0);
}

jboolean android::widget::CursorAdapter::hasStableIds()
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(7),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

local_ref< android::view::View > android::widget::CursorAdapter::getView(jint a0, local_ref< android::view::View > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(8),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::view::View > android::widget::CursorAdapter::getDropDownView(jint a0, local_ref< android::view::View > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(9),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::view::View > android::widget::CursorAdapter::newView(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(10),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2);
}

local_ref< android::view::View > android::widget::CursorAdapter::newDropDownView(local_ref< android::content::Context > const &a0, local_ref< android::database::Cursor > const &a1, local_ref< android::view::ViewGroup > const &a2)
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(11),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2);
}

void android::widget::CursorAdapter::bindView(local_ref< android::view::View > const &a0, local_ref< android::content::Context > const &a1, local_ref< android::database::Cursor > const &a2)
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(12),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::widget::CursorAdapter::changeCursor(local_ref< android::database::Cursor > const &a0)
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(13),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::CharSequence > android::widget::CursorAdapter::convertToString(local_ref< android::database::Cursor > const &a0)
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(14),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::CharSequence > >
	(get_jobject(), a0);
}

local_ref< android::database::Cursor > android::widget::CursorAdapter::runQueryOnBackgroundThread(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(15),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< android::database::Cursor > >
	(get_jobject(), a0);
}

local_ref< android::widget::Filter > android::widget::CursorAdapter::getFilter()
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(16),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< android::widget::Filter > >
	(get_jobject());
}

local_ref< android::widget::FilterQueryProvider > android::widget::CursorAdapter::getFilterQueryProvider()
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(17),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< android::widget::FilterQueryProvider > >
	(get_jobject());
}

void android::widget::CursorAdapter::setFilterQueryProvider(local_ref< android::widget::FilterQueryProvider > const &a0)
{
	return call_method<
		android::widget::CursorAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorAdapter::J2CPP_METHOD_NAME(18),
		android::widget::CursorAdapter::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0);
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
