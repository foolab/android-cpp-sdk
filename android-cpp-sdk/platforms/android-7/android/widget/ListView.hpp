/*================================================================================
  code generated by: java2cpp
  class: android.widget.ListView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_LISTVIEW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_LISTVIEW_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } } }
namespace j2cpp { namespace android { namespace widget { class ListAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class Adapter; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace util { class SparseBooleanArray; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }


#include <android/content/Context.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/util/SparseBooleanArray.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/View.hpp>
#include <android/view/accessibility/AccessibilityEvent.hpp>
#include <android/widget/Adapter.hpp>
#include <android/widget/ListAdapter.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ListView;
	namespace ListView_ {

		class FixedViewInfo;
		class FixedViewInfo
			: public cpp_object<FixedViewInfo>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)

			FixedViewInfo(jobject jobj)
			: cpp_object<FixedViewInfo>(jobj)
			, view(jobj)
			, data(jobj)
			, isSelectable(jobj)
			{
			}


			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::view::View > > view;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::Object > > data;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_boolean > isSelectable;
		}; //class FixedViewInfo

	} //namespace ListView_

	class ListView
		: public cpp_object<ListView>
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
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		typedef ListView_::FixedViewInfo FixedViewInfo;

		ListView(jobject jobj)
		: cpp_object<ListView>(jobj)
		{
		}

		cpp_int getMaxScrollAmount();
		void addHeaderView(local_ref< android::view::View > const&, local_ref< java::lang::Object > const&, cpp_boolean const&);
		void addHeaderView(local_ref< android::view::View > const&);
		cpp_int getHeaderViewsCount();
		cpp_boolean removeHeaderView(local_ref< android::view::View > const&);
		void addFooterView(local_ref< android::view::View > const&, local_ref< java::lang::Object > const&, cpp_boolean const&);
		void addFooterView(local_ref< android::view::View > const&);
		cpp_int getFooterViewsCount();
		cpp_boolean removeFooterView(local_ref< android::view::View > const&);
		local_ref< android::widget::ListAdapter > getAdapter();
		void setAdapter(local_ref< android::widget::ListAdapter > const&);
		cpp_boolean requestChildRectangleOnScreen(local_ref< android::view::View > const&, local_ref< android::graphics::Rect > const&, cpp_boolean const&);
		void setSelection(cpp_int const&);
		void setSelectionFromTop(cpp_int const&, cpp_int const&);
		cpp_boolean dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const&);
		void setSelectionAfterHeaderView();
		cpp_boolean dispatchKeyEvent(local_ref< android::view::KeyEvent > const&);
		cpp_boolean onKeyDown(cpp_int const&, local_ref< android::view::KeyEvent > const&);
		cpp_boolean onKeyMultiple(cpp_int const&, cpp_int const&, local_ref< android::view::KeyEvent > const&);
		cpp_boolean onKeyUp(cpp_int const&, local_ref< android::view::KeyEvent > const&);
		void setItemsCanFocus(cpp_boolean const&);
		cpp_boolean getItemsCanFocus();
		void setCacheColorHint(cpp_int const&);
		local_ref< android::graphics::drawable::Drawable > getDivider();
		void setDivider(local_ref< android::graphics::drawable::Drawable > const&);
		cpp_int getDividerHeight();
		void setDividerHeight(cpp_int const&);
		void setHeaderDividersEnabled(cpp_boolean const&);
		void setFooterDividersEnabled(cpp_boolean const&);
		cpp_boolean onTouchEvent(local_ref< android::view::MotionEvent > const&);
		cpp_int getChoiceMode();
		void setChoiceMode(cpp_int const&);
		cpp_boolean performItemClick(local_ref< android::view::View > const&, cpp_int const&, cpp_long const&);
		void setItemChecked(cpp_int const&, cpp_boolean const&);
		cpp_boolean isItemChecked(cpp_int const&);
		cpp_int getCheckedItemPosition();
		local_ref< android::util::SparseBooleanArray > getCheckedItemPositions();
		local_ref< cpp_long_array<1> > getCheckItemIds();
		void clearChoices();
		local_ref< android::os::Parcelable > onSaveInstanceState();
		void onRestoreInstanceState(local_ref< android::os::Parcelable > const&);
		void setAdapter(local_ref< android::widget::Adapter > const&);
		local_ref< android::widget::Adapter > getAdapter_1();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > CHOICE_MODE_NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > CHOICE_MODE_SINGLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > CHOICE_MODE_MULTIPLE;
	}; //class ListView

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_LISTVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_LISTVIEW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_LISTVIEW_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::widget::ListView_::FixedViewInfo > create< android::widget::ListView_::FixedViewInfo>(local_ref< android::widget::ListView > const &a0)
{
	return local_ref< android::widget::ListView_::FixedViewInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ListView_::FixedViewInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ListView_::FixedViewInfo::J2CPP_CLASS_NAME, android::widget::ListView_::FixedViewInfo::J2CPP_METHOD_NAME(0), android::widget::ListView_::FixedViewInfo::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::widget::ListView_::FixedViewInfo,"android/widget/ListView$FixedViewInfo")
J2CPP_DEFINE_METHOD(android::widget::ListView_::FixedViewInfo,0,"<init>","(Landroid/widget/ListView;)V")
J2CPP_DEFINE_FIELD(android::widget::ListView_::FixedViewInfo,0,"view","Landroid/view/View;")
J2CPP_DEFINE_FIELD(android::widget::ListView_::FixedViewInfo,1,"data","Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(android::widget::ListView_::FixedViewInfo,2,"isSelectable","Z")
J2CPP_DEFINE_FIELD(android::widget::ListView_::FixedViewInfo,3,"this$0","Landroid/widget/ListView;")


template <>
local_ref< android::widget::ListView > create< android::widget::ListView>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::ListView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ListView::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ListView::J2CPP_CLASS_NAME, android::widget::ListView::J2CPP_METHOD_NAME(0), android::widget::ListView::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::ListView > create< android::widget::ListView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::ListView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ListView::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ListView::J2CPP_CLASS_NAME, android::widget::ListView::J2CPP_METHOD_NAME(1), android::widget::ListView::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::ListView > create< android::widget::ListView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::ListView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ListView::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ListView::J2CPP_CLASS_NAME, android::widget::ListView::J2CPP_METHOD_NAME(2), android::widget::ListView::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::widget::ListView::getMaxScrollAmount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::widget::ListView::addHeaderView(local_ref< android::view::View > const &a0, local_ref< java::lang::Object > const &a1, cpp_boolean const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::ListView::addHeaderView(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::ListView::getHeaderViewsCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean android::widget::ListView::removeHeaderView(local_ref< android::view::View > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ListView::addFooterView(local_ref< android::view::View > const &a0, local_ref< java::lang::Object > const &a1, cpp_boolean const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::ListView::addFooterView(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::ListView::getFooterViewsCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_boolean android::widget::ListView::removeFooterView(local_ref< android::view::View > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::ListAdapter > android::widget::ListView::getAdapter()
{
	return local_ref< android::widget::ListAdapter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

void android::widget::ListView::setAdapter(local_ref< android::widget::ListAdapter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::ListView::requestChildRectangleOnScreen(local_ref< android::view::View > const &a0, local_ref< android::graphics::Rect > const &a1, cpp_boolean const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}




void android::widget::ListView::setSelection(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ListView::setSelectionFromTop(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::widget::ListView::dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ListView::setSelectionAfterHeaderView()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

cpp_boolean android::widget::ListView::dispatchKeyEvent(local_ref< android::view::KeyEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::ListView::onKeyDown(cpp_int const &a0, local_ref< android::view::KeyEvent > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::widget::ListView::onKeyMultiple(cpp_int const &a0, cpp_int const &a1, local_ref< android::view::KeyEvent > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::widget::ListView::onKeyUp(cpp_int const &a0, local_ref< android::view::KeyEvent > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::ListView::setItemsCanFocus(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::ListView::getItemsCanFocus()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

void android::widget::ListView::setCacheColorHint(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}


local_ref< android::graphics::drawable::Drawable > android::widget::ListView::getDivider()
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

void android::widget::ListView::setDivider(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::ListView::getDividerHeight()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>()
		)
	);
}

void android::widget::ListView::setDividerHeight(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ListView::setHeaderDividersEnabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ListView::setFooterDividersEnabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}





cpp_boolean android::widget::ListView::onTouchEvent(local_ref< android::view::MotionEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::ListView::getChoiceMode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>()
		)
	);
}

void android::widget::ListView::setChoiceMode(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::ListView::performItemClick(local_ref< android::view::View > const &a0, cpp_int const &a1, cpp_long const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::ListView::setItemChecked(cpp_int const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::widget::ListView::isItemChecked(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::ListView::getCheckedItemPosition()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>()
		)
	);
}

local_ref< android::util::SparseBooleanArray > android::widget::ListView::getCheckedItemPositions()
{
	return local_ref< android::util::SparseBooleanArray >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), false>()
		)
	);
}

local_ref< cpp_long_array<1> > android::widget::ListView::getCheckItemIds()
{
	return local_ref< cpp_long_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(48), J2CPP_METHOD_SIGNATURE(48), false>()
		)
	);
}

void android::widget::ListView::clearChoices()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(49), J2CPP_METHOD_SIGNATURE(49), false>()
		)
	);
}

local_ref< android::os::Parcelable > android::widget::ListView::onSaveInstanceState()
{
	return local_ref< android::os::Parcelable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(50), J2CPP_METHOD_SIGNATURE(50), false>()
		)
	);
}

void android::widget::ListView::onRestoreInstanceState(local_ref< android::os::Parcelable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(51), J2CPP_METHOD_SIGNATURE(51), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ListView::setAdapter(local_ref< android::widget::Adapter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(52), J2CPP_METHOD_SIGNATURE(52), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::Adapter > android::widget::ListView::getAdapter_1()
{
	return local_ref< android::widget::Adapter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(53), J2CPP_METHOD_SIGNATURE(53), false>()
		)
	);
}


static_field<
	android::widget::ListView::J2CPP_CLASS_NAME,
	android::widget::ListView::J2CPP_FIELD_NAME(0),
	android::widget::ListView::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::widget::ListView::CHOICE_MODE_NONE;

static_field<
	android::widget::ListView::J2CPP_CLASS_NAME,
	android::widget::ListView::J2CPP_FIELD_NAME(1),
	android::widget::ListView::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::widget::ListView::CHOICE_MODE_SINGLE;

static_field<
	android::widget::ListView::J2CPP_CLASS_NAME,
	android::widget::ListView::J2CPP_FIELD_NAME(2),
	android::widget::ListView::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::widget::ListView::CHOICE_MODE_MULTIPLE;


J2CPP_DEFINE_CLASS(android::widget::ListView,"android/widget/ListView")
J2CPP_DEFINE_METHOD(android::widget::ListView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,3,"getMaxScrollAmount","()I")
J2CPP_DEFINE_METHOD(android::widget::ListView,4,"addHeaderView","(Landroid/view/View;Ljava/lang/Object;Z)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,5,"addHeaderView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,6,"getHeaderViewsCount","()I")
J2CPP_DEFINE_METHOD(android::widget::ListView,7,"removeHeaderView","(Landroid/view/View;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,8,"addFooterView","(Landroid/view/View;Ljava/lang/Object;Z)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,9,"addFooterView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,10,"getFooterViewsCount","()I")
J2CPP_DEFINE_METHOD(android::widget::ListView,11,"removeFooterView","(Landroid/view/View;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,12,"getAdapter","()Landroid/widget/ListAdapter;")
J2CPP_DEFINE_METHOD(android::widget::ListView,13,"setAdapter","(Landroid/widget/ListAdapter;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,14,"requestChildRectangleOnScreen","(Landroid/view/View;Landroid/graphics/Rect;Z)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,15,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,16,"layoutChildren","()V")
J2CPP_DEFINE_METHOD(android::widget::ListView,17,"canAnimate","()Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,18,"setSelection","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,19,"setSelectionFromTop","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,20,"dispatchPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,21,"setSelectionAfterHeaderView","()V")
J2CPP_DEFINE_METHOD(android::widget::ListView,22,"dispatchKeyEvent","(Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,23,"onKeyDown","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,24,"onKeyMultiple","(IILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,25,"onKeyUp","(ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,26,"setItemsCanFocus","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,27,"getItemsCanFocus","()Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,28,"setCacheColorHint","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,29,"dispatchDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,30,"getDivider","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::widget::ListView,31,"setDivider","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,32,"getDividerHeight","()I")
J2CPP_DEFINE_METHOD(android::widget::ListView,33,"setDividerHeight","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,34,"setHeaderDividersEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,35,"setFooterDividersEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,36,"onFocusChanged","(ZILandroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,37,"onFinishInflate","()V")
J2CPP_DEFINE_METHOD(android::widget::ListView,38,"findViewTraversal","(I)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::ListView,39,"findViewWithTagTraversal","(Ljava/lang/Object;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::ListView,40,"onTouchEvent","(Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,41,"getChoiceMode","()I")
J2CPP_DEFINE_METHOD(android::widget::ListView,42,"setChoiceMode","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,43,"performItemClick","(Landroid/view/View;IJ)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,44,"setItemChecked","(IZ)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,45,"isItemChecked","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::ListView,46,"getCheckedItemPosition","()I")
J2CPP_DEFINE_METHOD(android::widget::ListView,47,"getCheckedItemPositions","()Landroid/util/SparseBooleanArray;")
J2CPP_DEFINE_METHOD(android::widget::ListView,48,"getCheckItemIds","()[J")
J2CPP_DEFINE_METHOD(android::widget::ListView,49,"clearChoices","()V")
J2CPP_DEFINE_METHOD(android::widget::ListView,50,"onSaveInstanceState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::widget::ListView,51,"onRestoreInstanceState","(Landroid/os/Parcelable;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,52,"setAdapter","(Landroid/widget/Adapter;)V")
J2CPP_DEFINE_METHOD(android::widget::ListView,53,"getAdapter","()Landroid/widget/Adapter;")
J2CPP_DEFINE_FIELD(android::widget::ListView,0,"CHOICE_MODE_NONE","I")
J2CPP_DEFINE_FIELD(android::widget::ListView,1,"CHOICE_MODE_SINGLE","I")
J2CPP_DEFINE_FIELD(android::widget::ListView,2,"CHOICE_MODE_MULTIPLE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_LISTVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION