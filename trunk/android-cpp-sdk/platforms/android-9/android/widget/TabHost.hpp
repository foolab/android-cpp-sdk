/*================================================================================
  code generated by: java2cpp
  class: android.widget.TabHost
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TABHOST_HPP_DECL
#define J2CPP_ANDROID_WIDGET_TABHOST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace app { class LocalActivityManager; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace widget { namespace TabHost_ { class OnTabChangeListener; } } } }
namespace j2cpp { namespace android { namespace widget { class FrameLayout; } } }
namespace j2cpp { namespace android { namespace widget { namespace TabHost_ { class TabContentFactory; } } } }
namespace j2cpp { namespace android { namespace widget { namespace TabHost_ { class TabSpec; } } } }
namespace j2cpp { namespace android { namespace widget { class TabWidget; } } }


#include <android/app/LocalActivityManager.hpp>
#include <android/content/Context.hpp>
#include <android/content/Intent.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/View.hpp>
#include <android/widget/FrameLayout.hpp>
#include <android/widget/TabHost.hpp>
#include <android/widget/TabWidget.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class TabHost;
	namespace TabHost_ {

		class OnTabChangeListener;
		class OnTabChangeListener
			: public cpp_object<OnTabChangeListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnTabChangeListener(jobject jobj)
			: cpp_object<OnTabChangeListener>(jobj)
			{
			}

			void onTabChanged(local_ref< java::lang::String > const&);
		}; //class OnTabChangeListener

		class TabContentFactory;
		class TabContentFactory
			: public cpp_object<TabContentFactory>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			TabContentFactory(jobject jobj)
			: cpp_object<TabContentFactory>(jobj)
			{
			}

			local_ref< android::view::View > createTabContent(local_ref< java::lang::String > const&);
		}; //class TabContentFactory

		class TabSpec;
		class TabSpec
			: public cpp_object<TabSpec>
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
			J2CPP_DECLARE_FIELD(0)

			TabSpec(jobject jobj)
			: cpp_object<TabSpec>(jobj)
			{
			}

			local_ref< android::widget::TabHost_::TabSpec > setIndicator(local_ref< java::lang::CharSequence > const&);
			local_ref< android::widget::TabHost_::TabSpec > setIndicator(local_ref< java::lang::CharSequence > const&, local_ref< android::graphics::drawable::Drawable > const&);
			local_ref< android::widget::TabHost_::TabSpec > setIndicator(local_ref< android::view::View > const&);
			local_ref< android::widget::TabHost_::TabSpec > setContent(cpp_int const&);
			local_ref< android::widget::TabHost_::TabSpec > setContent(local_ref< android::widget::TabHost_::TabContentFactory > const&);
			local_ref< android::widget::TabHost_::TabSpec > setContent(local_ref< android::content::Intent > const&);
			local_ref< java::lang::String > getTag();

		}; //class TabSpec

	} //namespace TabHost_

	class TabHost
		: public cpp_object<TabHost>
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

		typedef TabHost_::OnTabChangeListener OnTabChangeListener;
		typedef TabHost_::TabContentFactory TabContentFactory;
		typedef TabHost_::TabSpec TabSpec;

		TabHost(jobject jobj)
		: cpp_object<TabHost>(jobj)
		{
		}

		local_ref< android::widget::TabHost_::TabSpec > newTabSpec(local_ref< java::lang::String > const&);
		void setup();
		void setup(local_ref< android::app::LocalActivityManager > const&);
		void onTouchModeChanged(cpp_boolean const&);
		void addTab(local_ref< android::widget::TabHost_::TabSpec > const&);
		void clearAllTabs();
		local_ref< android::widget::TabWidget > getTabWidget();
		cpp_int getCurrentTab();
		local_ref< java::lang::String > getCurrentTabTag();
		local_ref< android::view::View > getCurrentTabView();
		local_ref< android::view::View > getCurrentView();
		void setCurrentTabByTag(local_ref< java::lang::String > const&);
		local_ref< android::widget::FrameLayout > getTabContentView();
		cpp_boolean dispatchKeyEvent(local_ref< android::view::KeyEvent > const&);
		void dispatchWindowFocusChanged(cpp_boolean const&);
		void setCurrentTab(cpp_int const&);
		void setOnTabChangedListener(local_ref< android::widget::TabHost_::OnTabChangeListener > const&);
	}; //class TabHost

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TABHOST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TABHOST_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_TABHOST_HPP_IMPL

namespace j2cpp {



void android::widget::TabHost_::OnTabChangeListener::onTabChanged(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::TabHost_::OnTabChangeListener,"android/widget/TabHost$OnTabChangeListener")
J2CPP_DEFINE_METHOD(android::widget::TabHost_::OnTabChangeListener,0,"onTabChanged","(Ljava/lang/String;)V")

local_ref< android::view::View > android::widget::TabHost_::TabContentFactory::createTabContent(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::TabHost_::TabContentFactory,"android/widget/TabHost$TabContentFactory")
J2CPP_DEFINE_METHOD(android::widget::TabHost_::TabContentFactory,0,"createTabContent","(Ljava/lang/String;)Landroid/view/View;")

template <>
local_ref< android::widget::TabHost_::TabSpec > create< android::widget::TabHost_::TabSpec>(local_ref< android::widget::TabHost > const &a0)
{
	return local_ref< android::widget::TabHost_::TabSpec >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TabHost_::TabSpec::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TabHost_::TabSpec::J2CPP_CLASS_NAME, android::widget::TabHost_::TabSpec::J2CPP_METHOD_NAME(0), android::widget::TabHost_::TabSpec::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::TabHost_::TabSpec > android::widget::TabHost_::TabSpec::setIndicator(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< android::widget::TabHost_::TabSpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::TabHost_::TabSpec > android::widget::TabHost_::TabSpec::setIndicator(local_ref< java::lang::CharSequence > const &a0, local_ref< android::graphics::drawable::Drawable > const &a1)
{
	return local_ref< android::widget::TabHost_::TabSpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::widget::TabHost_::TabSpec > android::widget::TabHost_::TabSpec::setIndicator(local_ref< android::view::View > const &a0)
{
	return local_ref< android::widget::TabHost_::TabSpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::TabHost_::TabSpec > android::widget::TabHost_::TabSpec::setContent(cpp_int const &a0)
{
	return local_ref< android::widget::TabHost_::TabSpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::TabHost_::TabSpec > android::widget::TabHost_::TabSpec::setContent(local_ref< android::widget::TabHost_::TabContentFactory > const &a0)
{
	return local_ref< android::widget::TabHost_::TabSpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::TabHost_::TabSpec > android::widget::TabHost_::TabSpec::setContent(local_ref< android::content::Intent > const &a0)
{
	return local_ref< android::widget::TabHost_::TabSpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::widget::TabHost_::TabSpec::getTag()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(android::widget::TabHost_::TabSpec,"android/widget/TabHost$TabSpec")
J2CPP_DEFINE_METHOD(android::widget::TabHost_::TabSpec,0,"<init>","(Landroid/widget/TabHost;)V")
J2CPP_DEFINE_METHOD(android::widget::TabHost_::TabSpec,1,"setIndicator","(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;")
J2CPP_DEFINE_METHOD(android::widget::TabHost_::TabSpec,2,"setIndicator","(Ljava/lang/CharSequence;Landroid/graphics/drawable/Drawable;)Landroid/widget/TabHost$TabSpec;")
J2CPP_DEFINE_METHOD(android::widget::TabHost_::TabSpec,3,"setIndicator","(Landroid/view/View;)Landroid/widget/TabHost$TabSpec;")
J2CPP_DEFINE_METHOD(android::widget::TabHost_::TabSpec,4,"setContent","(I)Landroid/widget/TabHost$TabSpec;")
J2CPP_DEFINE_METHOD(android::widget::TabHost_::TabSpec,5,"setContent","(Landroid/widget/TabHost$TabContentFactory;)Landroid/widget/TabHost$TabSpec;")
J2CPP_DEFINE_METHOD(android::widget::TabHost_::TabSpec,6,"setContent","(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;")
J2CPP_DEFINE_METHOD(android::widget::TabHost_::TabSpec,7,"getTag","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::widget::TabHost_::TabSpec,0,"this$0","Landroid/widget/TabHost;")


template <>
local_ref< android::widget::TabHost > create< android::widget::TabHost>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::TabHost >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TabHost::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TabHost::J2CPP_CLASS_NAME, android::widget::TabHost::J2CPP_METHOD_NAME(0), android::widget::TabHost::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::TabHost > create< android::widget::TabHost>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::TabHost >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TabHost::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TabHost::J2CPP_CLASS_NAME, android::widget::TabHost::J2CPP_METHOD_NAME(1), android::widget::TabHost::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::widget::TabHost_::TabSpec > android::widget::TabHost::newTabSpec(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::widget::TabHost_::TabSpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::TabHost::setup()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::widget::TabHost::setup(local_ref< android::app::LocalActivityManager > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}



void android::widget::TabHost::onTouchModeChanged(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::TabHost::addTab(local_ref< android::widget::TabHost_::TabSpec > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::TabHost::clearAllTabs()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< android::widget::TabWidget > android::widget::TabHost::getTabWidget()
{
	return local_ref< android::widget::TabWidget >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_int android::widget::TabHost::getCurrentTab()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::lang::String > android::widget::TabHost::getCurrentTabTag()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< android::view::View > android::widget::TabHost::getCurrentTabView()
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< android::view::View > android::widget::TabHost::getCurrentView()
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void android::widget::TabHost::setCurrentTabByTag(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::FrameLayout > android::widget::TabHost::getTabContentView()
{
	return local_ref< android::widget::FrameLayout >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_boolean android::widget::TabHost::dispatchKeyEvent(local_ref< android::view::KeyEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::TabHost::dispatchWindowFocusChanged(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::TabHost::setCurrentTab(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::TabHost::setOnTabChangedListener(local_ref< android::widget::TabHost_::OnTabChangeListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::TabHost,"android/widget/TabHost")
J2CPP_DEFINE_METHOD(android::widget::TabHost,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::TabHost,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::TabHost,2,"newTabSpec","(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;")
J2CPP_DEFINE_METHOD(android::widget::TabHost,3,"setup","()V")
J2CPP_DEFINE_METHOD(android::widget::TabHost,4,"setup","(Landroid/app/LocalActivityManager;)V")
J2CPP_DEFINE_METHOD(android::widget::TabHost,5,"onAttachedToWindow","()V")
J2CPP_DEFINE_METHOD(android::widget::TabHost,6,"onDetachedFromWindow","()V")
J2CPP_DEFINE_METHOD(android::widget::TabHost,7,"onTouchModeChanged","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::TabHost,8,"addTab","(Landroid/widget/TabHost$TabSpec;)V")
J2CPP_DEFINE_METHOD(android::widget::TabHost,9,"clearAllTabs","()V")
J2CPP_DEFINE_METHOD(android::widget::TabHost,10,"getTabWidget","()Landroid/widget/TabWidget;")
J2CPP_DEFINE_METHOD(android::widget::TabHost,11,"getCurrentTab","()I")
J2CPP_DEFINE_METHOD(android::widget::TabHost,12,"getCurrentTabTag","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::widget::TabHost,13,"getCurrentTabView","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::TabHost,14,"getCurrentView","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::TabHost,15,"setCurrentTabByTag","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::widget::TabHost,16,"getTabContentView","()Landroid/widget/FrameLayout;")
J2CPP_DEFINE_METHOD(android::widget::TabHost,17,"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::TabHost,18,"dispatchWindowFocusChanged","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::TabHost,19,"setCurrentTab","(I)V")
J2CPP_DEFINE_METHOD(android::widget::TabHost,20,"setOnTabChangedListener","(Landroid/widget/TabHost$OnTabChangeListener;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TABHOST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION