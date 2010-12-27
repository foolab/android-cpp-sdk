/*================================================================================
  code generated by: java2cpp
  class: android.appwidget.AppWidgetManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APPWIDGET_APPWIDGETMANAGER_HPP_DECL
#define J2CPP_ANDROID_APPWIDGET_APPWIDGETMANAGER_HPP_DECL


namespace j2cpp { namespace android { namespace widget { class RemoteViews; } } }
namespace j2cpp { namespace android { namespace appwidget { class AppWidgetProviderInfo; } } }
namespace j2cpp { namespace android { namespace content { class ComponentName; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <android/appwidget/AppWidgetProviderInfo.hpp>
#include <android/content/ComponentName.hpp>
#include <android/content/Context.hpp>
#include <android/widget/RemoteViews.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace appwidget {

	class AppWidgetManager;
	class AppWidgetManager
		: public cpp_object<AppWidgetManager>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)

		AppWidgetManager(jobject jobj)
		: cpp_object<AppWidgetManager>(jobj)
		{
		}

		static local_ref< android::appwidget::AppWidgetManager > getInstance(local_ref< android::content::Context > const&);
		void updateAppWidget(local_ref< cpp_int_array<1> > const&, local_ref< android::widget::RemoteViews > const&);
		void updateAppWidget(cpp_int const&, local_ref< android::widget::RemoteViews > const&);
		void updateAppWidget(local_ref< android::content::ComponentName > const&, local_ref< android::widget::RemoteViews > const&);
		local_ref< java::util::List > getInstalledProviders();
		local_ref< android::appwidget::AppWidgetProviderInfo > getAppWidgetInfo(cpp_int const&);
		void bindAppWidgetId(cpp_int const&, local_ref< android::content::ComponentName > const&);
		local_ref< cpp_int_array<1> > getAppWidgetIds(local_ref< android::content::ComponentName > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > ACTION_APPWIDGET_PICK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > ACTION_APPWIDGET_CONFIGURE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > EXTRA_APPWIDGET_ID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > EXTRA_APPWIDGET_IDS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > EXTRA_CUSTOM_INFO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > EXTRA_CUSTOM_EXTRAS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > INVALID_APPWIDGET_ID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > ACTION_APPWIDGET_UPDATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > ACTION_APPWIDGET_DELETED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > ACTION_APPWIDGET_DISABLED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > ACTION_APPWIDGET_ENABLED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > META_DATA_APPWIDGET_PROVIDER;
	}; //class AppWidgetManager

} //namespace appwidget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_APPWIDGET_APPWIDGETMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APPWIDGET_APPWIDGETMANAGER_HPP_IMPL
#define J2CPP_ANDROID_APPWIDGET_APPWIDGETMANAGER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::appwidget::AppWidgetManager > create< android::appwidget::AppWidgetManager>()
{
	return local_ref< android::appwidget::AppWidgetManager >(
		environment::get().get_jenv()->NewObject(
			get_class<android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME>(),
			get_method_id<android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME, android::appwidget::AppWidgetManager::J2CPP_METHOD_NAME(0), android::appwidget::AppWidgetManager::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< android::appwidget::AppWidgetManager > android::appwidget::AppWidgetManager::getInstance(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::appwidget::AppWidgetManager >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

void android::appwidget::AppWidgetManager::updateAppWidget(local_ref< cpp_int_array<1> > const &a0, local_ref< android::widget::RemoteViews > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::appwidget::AppWidgetManager::updateAppWidget(cpp_int const &a0, local_ref< android::widget::RemoteViews > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::appwidget::AppWidgetManager::updateAppWidget(local_ref< android::content::ComponentName > const &a0, local_ref< android::widget::RemoteViews > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::List > android::appwidget::AppWidgetManager::getInstalledProviders()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< android::appwidget::AppWidgetProviderInfo > android::appwidget::AppWidgetManager::getAppWidgetInfo(cpp_int const &a0)
{
	return local_ref< android::appwidget::AppWidgetProviderInfo >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void android::appwidget::AppWidgetManager::bindAppWidgetId(cpp_int const &a0, local_ref< android::content::ComponentName > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_int_array<1> > android::appwidget::AppWidgetManager::getAppWidgetIds(local_ref< android::content::ComponentName > const &a0)
{
	return local_ref< cpp_int_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME,
	android::appwidget::AppWidgetManager::J2CPP_FIELD_NAME(0),
	android::appwidget::AppWidgetManager::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::appwidget::AppWidgetManager::ACTION_APPWIDGET_PICK;

static_field<
	android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME,
	android::appwidget::AppWidgetManager::J2CPP_FIELD_NAME(1),
	android::appwidget::AppWidgetManager::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::appwidget::AppWidgetManager::ACTION_APPWIDGET_CONFIGURE;

static_field<
	android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME,
	android::appwidget::AppWidgetManager::J2CPP_FIELD_NAME(2),
	android::appwidget::AppWidgetManager::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::appwidget::AppWidgetManager::EXTRA_APPWIDGET_ID;

static_field<
	android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME,
	android::appwidget::AppWidgetManager::J2CPP_FIELD_NAME(3),
	android::appwidget::AppWidgetManager::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::appwidget::AppWidgetManager::EXTRA_APPWIDGET_IDS;

static_field<
	android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME,
	android::appwidget::AppWidgetManager::J2CPP_FIELD_NAME(4),
	android::appwidget::AppWidgetManager::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::appwidget::AppWidgetManager::EXTRA_CUSTOM_INFO;

static_field<
	android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME,
	android::appwidget::AppWidgetManager::J2CPP_FIELD_NAME(5),
	android::appwidget::AppWidgetManager::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::appwidget::AppWidgetManager::EXTRA_CUSTOM_EXTRAS;

static_field<
	android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME,
	android::appwidget::AppWidgetManager::J2CPP_FIELD_NAME(6),
	android::appwidget::AppWidgetManager::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::appwidget::AppWidgetManager::INVALID_APPWIDGET_ID;

static_field<
	android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME,
	android::appwidget::AppWidgetManager::J2CPP_FIELD_NAME(7),
	android::appwidget::AppWidgetManager::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::appwidget::AppWidgetManager::ACTION_APPWIDGET_UPDATE;

static_field<
	android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME,
	android::appwidget::AppWidgetManager::J2CPP_FIELD_NAME(8),
	android::appwidget::AppWidgetManager::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> android::appwidget::AppWidgetManager::ACTION_APPWIDGET_DELETED;

static_field<
	android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME,
	android::appwidget::AppWidgetManager::J2CPP_FIELD_NAME(9),
	android::appwidget::AppWidgetManager::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::appwidget::AppWidgetManager::ACTION_APPWIDGET_DISABLED;

static_field<
	android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME,
	android::appwidget::AppWidgetManager::J2CPP_FIELD_NAME(10),
	android::appwidget::AppWidgetManager::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::appwidget::AppWidgetManager::ACTION_APPWIDGET_ENABLED;

static_field<
	android::appwidget::AppWidgetManager::J2CPP_CLASS_NAME,
	android::appwidget::AppWidgetManager::J2CPP_FIELD_NAME(11),
	android::appwidget::AppWidgetManager::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::lang::String >
> android::appwidget::AppWidgetManager::META_DATA_APPWIDGET_PROVIDER;


J2CPP_DEFINE_CLASS(android::appwidget::AppWidgetManager,"android/appwidget/AppWidgetManager")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetManager,1,"getInstance","(Landroid/content/Context;)Landroid/appwidget/AppWidgetManager;")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetManager,2,"updateAppWidget","([ILandroid/widget/RemoteViews;)V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetManager,3,"updateAppWidget","(ILandroid/widget/RemoteViews;)V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetManager,4,"updateAppWidget","(Landroid/content/ComponentName;Landroid/widget/RemoteViews;)V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetManager,5,"getInstalledProviders","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetManager,6,"getAppWidgetInfo","(I)Landroid/appwidget/AppWidgetProviderInfo;")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetManager,7,"bindAppWidgetId","(ILandroid/content/ComponentName;)V")
J2CPP_DEFINE_METHOD(android::appwidget::AppWidgetManager,8,"getAppWidgetIds","(Landroid/content/ComponentName;)[I")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetManager,0,"ACTION_APPWIDGET_PICK","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetManager,1,"ACTION_APPWIDGET_CONFIGURE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetManager,2,"EXTRA_APPWIDGET_ID","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetManager,3,"EXTRA_APPWIDGET_IDS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetManager,4,"EXTRA_CUSTOM_INFO","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetManager,5,"EXTRA_CUSTOM_EXTRAS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetManager,6,"INVALID_APPWIDGET_ID","I")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetManager,7,"ACTION_APPWIDGET_UPDATE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetManager,8,"ACTION_APPWIDGET_DELETED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetManager,9,"ACTION_APPWIDGET_DISABLED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetManager,10,"ACTION_APPWIDGET_ENABLED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::appwidget::AppWidgetManager,11,"META_DATA_APPWIDGET_PROVIDER","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APPWIDGET_APPWIDGETMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION