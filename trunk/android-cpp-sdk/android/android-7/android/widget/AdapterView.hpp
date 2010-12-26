/*================================================================================
  code generated by: java2cpp
  class: android.widget.AdapterView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ADAPTERVIEW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_ADAPTERVIEW_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace accessibility { class AccessibilityEvent; } } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnClickListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace widget { namespace AdapterView_ { class OnItemLongClickListener; } } } }
namespace j2cpp { namespace android { namespace widget { namespace AdapterView_ { class OnItemSelectedListener; } } } }
namespace j2cpp { namespace android { namespace widget { namespace AdapterView_ { class OnItemClickListener; } } } }
namespace j2cpp { namespace android { namespace widget { class Adapter; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/accessibility/AccessibilityEvent.hpp>
#include <android/widget/Adapter.hpp>
#include <android/widget/AdapterView.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class AdapterView;
	namespace AdapterView_ {

		class OnItemLongClickListener;
		class OnItemLongClickListener
			: public cpp_object<OnItemLongClickListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnItemLongClickListener(jobject jobj)
			: cpp_object<OnItemLongClickListener>(jobj)
			{
			}

			cpp_boolean onItemLongClick(local_ref< android::widget::AdapterView > const&, local_ref< android::view::View > const&, cpp_int const&, cpp_long const&);
		}; //class OnItemLongClickListener

		class OnItemSelectedListener;
		class OnItemSelectedListener
			: public cpp_object<OnItemSelectedListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			OnItemSelectedListener(jobject jobj)
			: cpp_object<OnItemSelectedListener>(jobj)
			{
			}

			void onItemSelected(local_ref< android::widget::AdapterView > const&, local_ref< android::view::View > const&, cpp_int const&, cpp_long const&);
			void onNothingSelected(local_ref< android::widget::AdapterView > const&);
		}; //class OnItemSelectedListener

		class OnItemClickListener;
		class OnItemClickListener
			: public cpp_object<OnItemClickListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnItemClickListener(jobject jobj)
			: cpp_object<OnItemClickListener>(jobj)
			{
			}

			void onItemClick(local_ref< android::widget::AdapterView > const&, local_ref< android::view::View > const&, cpp_int const&, cpp_long const&);
		}; //class OnItemClickListener

		class AdapterContextMenuInfo;
		class AdapterContextMenuInfo
			: public cpp_object<AdapterContextMenuInfo>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)

			AdapterContextMenuInfo(jobject jobj)
			: cpp_object<AdapterContextMenuInfo>(jobj)
			, targetView(jobj)
			, position(jobj)
			, id(jobj)
			{
			}


			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::view::View > > targetView;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > position;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_long > id;
		}; //class AdapterContextMenuInfo

	} //namespace AdapterView_

	class AdapterView
		: public cpp_object<AdapterView>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		typedef AdapterView_::OnItemLongClickListener OnItemLongClickListener;
		typedef AdapterView_::OnItemSelectedListener OnItemSelectedListener;
		typedef AdapterView_::OnItemClickListener OnItemClickListener;
		typedef AdapterView_::AdapterContextMenuInfo AdapterContextMenuInfo;

		AdapterView(jobject jobj)
		: cpp_object<AdapterView>(jobj)
		{
		}

		void setOnItemClickListener(local_ref< android::widget::AdapterView_::OnItemClickListener > const&);
		local_ref< android::widget::AdapterView_::OnItemClickListener > getOnItemClickListener();
		cpp_boolean performItemClick(local_ref< android::view::View > const&, cpp_int const&, cpp_long const&);
		void setOnItemLongClickListener(local_ref< android::widget::AdapterView_::OnItemLongClickListener > const&);
		local_ref< android::widget::AdapterView_::OnItemLongClickListener > getOnItemLongClickListener();
		void setOnItemSelectedListener(local_ref< android::widget::AdapterView_::OnItemSelectedListener > const&);
		local_ref< android::widget::AdapterView_::OnItemSelectedListener > getOnItemSelectedListener();
		local_ref< android::widget::Adapter > getAdapter();
		void setAdapter(local_ref< android::widget::Adapter > const&);
		void addView(local_ref< android::view::View > const&);
		void addView(local_ref< android::view::View > const&, cpp_int const&);
		void addView(local_ref< android::view::View > const&, local_ref< android::view::ViewGroup_::LayoutParams > const&);
		void addView(local_ref< android::view::View > const&, cpp_int const&, local_ref< android::view::ViewGroup_::LayoutParams > const&);
		void removeView(local_ref< android::view::View > const&);
		void removeViewAt(cpp_int const&);
		void removeAllViews();
		cpp_int getSelectedItemPosition();
		cpp_long getSelectedItemId();
		local_ref< android::view::View > getSelectedView();
		local_ref< java::lang::Object > getSelectedItem();
		cpp_int getCount();
		cpp_int getPositionForView(local_ref< android::view::View > const&);
		cpp_int getFirstVisiblePosition();
		cpp_int getLastVisiblePosition();
		void setSelection(cpp_int const&);
		void setEmptyView(local_ref< android::view::View > const&);
		local_ref< android::view::View > getEmptyView();
		void setFocusable(cpp_boolean const&);
		void setFocusableInTouchMode(cpp_boolean const&);
		local_ref< java::lang::Object > getItemAtPosition(cpp_int const&);
		cpp_long getItemIdAtPosition(cpp_int const&);
		void setOnClickListener(local_ref< android::view::View_::OnClickListener > const&);
		cpp_boolean dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > ITEM_VIEW_TYPE_IGNORE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > ITEM_VIEW_TYPE_HEADER_OR_FOOTER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > INVALID_POSITION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_long > INVALID_ROW_ID;
	}; //class AdapterView

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_ADAPTERVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_ADAPTERVIEW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_ADAPTERVIEW_HPP_IMPL

namespace j2cpp {



cpp_boolean android::widget::AdapterView_::OnItemLongClickListener::onItemLongClick(local_ref< android::widget::AdapterView > const &a0, local_ref< android::view::View > const &a1, cpp_int const &a2, cpp_long const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::AdapterView_::OnItemLongClickListener,"android/widget/AdapterView$OnItemLongClickListener")
J2CPP_DEFINE_METHOD(android::widget::AdapterView_::OnItemLongClickListener,0,"onItemLongClick","(Landroid/widget/AdapterView;Landroid/view/View;IJ)Z")

void android::widget::AdapterView_::OnItemSelectedListener::onItemSelected(local_ref< android::widget::AdapterView > const &a0, local_ref< android::view::View > const &a1, cpp_int const &a2, cpp_long const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::widget::AdapterView_::OnItemSelectedListener::onNothingSelected(local_ref< android::widget::AdapterView > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::AdapterView_::OnItemSelectedListener,"android/widget/AdapterView$OnItemSelectedListener")
J2CPP_DEFINE_METHOD(android::widget::AdapterView_::OnItemSelectedListener,0,"onItemSelected","(Landroid/widget/AdapterView;Landroid/view/View;IJ)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView_::OnItemSelectedListener,1,"onNothingSelected","(Landroid/widget/AdapterView;)V")

void android::widget::AdapterView_::OnItemClickListener::onItemClick(local_ref< android::widget::AdapterView > const &a0, local_ref< android::view::View > const &a1, cpp_int const &a2, cpp_long const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::AdapterView_::OnItemClickListener,"android/widget/AdapterView$OnItemClickListener")
J2CPP_DEFINE_METHOD(android::widget::AdapterView_::OnItemClickListener,0,"onItemClick","(Landroid/widget/AdapterView;Landroid/view/View;IJ)V")

template <>
local_ref< android::widget::AdapterView_::AdapterContextMenuInfo > create< android::widget::AdapterView_::AdapterContextMenuInfo>(local_ref< android::view::View > const &a0, cpp_int const &a1, cpp_long const &a2)
{
	return local_ref< android::widget::AdapterView_::AdapterContextMenuInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::AdapterView_::AdapterContextMenuInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::AdapterView_::AdapterContextMenuInfo::J2CPP_CLASS_NAME, android::widget::AdapterView_::AdapterContextMenuInfo::J2CPP_METHOD_NAME(0), android::widget::AdapterView_::AdapterContextMenuInfo::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::widget::AdapterView_::AdapterContextMenuInfo,"android/widget/AdapterView$AdapterContextMenuInfo")
J2CPP_DEFINE_METHOD(android::widget::AdapterView_::AdapterContextMenuInfo,0,"<init>","(Landroid/view/View;IJ)V")
J2CPP_DEFINE_FIELD(android::widget::AdapterView_::AdapterContextMenuInfo,0,"targetView","Landroid/view/View;")
J2CPP_DEFINE_FIELD(android::widget::AdapterView_::AdapterContextMenuInfo,1,"position","I")
J2CPP_DEFINE_FIELD(android::widget::AdapterView_::AdapterContextMenuInfo,2,"id","J")


template <>
local_ref< android::widget::AdapterView > create< android::widget::AdapterView>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::AdapterView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::AdapterView::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::AdapterView::J2CPP_CLASS_NAME, android::widget::AdapterView::J2CPP_METHOD_NAME(0), android::widget::AdapterView::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::AdapterView > create< android::widget::AdapterView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::AdapterView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::AdapterView::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::AdapterView::J2CPP_CLASS_NAME, android::widget::AdapterView::J2CPP_METHOD_NAME(1), android::widget::AdapterView::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::AdapterView > create< android::widget::AdapterView>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::AdapterView >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::AdapterView::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::AdapterView::J2CPP_CLASS_NAME, android::widget::AdapterView::J2CPP_METHOD_NAME(2), android::widget::AdapterView::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::AdapterView::setOnItemClickListener(local_ref< android::widget::AdapterView_::OnItemClickListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::AdapterView_::OnItemClickListener > android::widget::AdapterView::getOnItemClickListener()
{
	return local_ref< android::widget::AdapterView_::OnItemClickListener >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean android::widget::AdapterView::performItemClick(local_ref< android::view::View > const &a0, cpp_int const &a1, cpp_long const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::AdapterView::setOnItemLongClickListener(local_ref< android::widget::AdapterView_::OnItemLongClickListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::AdapterView_::OnItemLongClickListener > android::widget::AdapterView::getOnItemLongClickListener()
{
	return local_ref< android::widget::AdapterView_::OnItemLongClickListener >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::widget::AdapterView::setOnItemSelectedListener(local_ref< android::widget::AdapterView_::OnItemSelectedListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::widget::AdapterView_::OnItemSelectedListener > android::widget::AdapterView::getOnItemSelectedListener()
{
	return local_ref< android::widget::AdapterView_::OnItemSelectedListener >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< android::widget::Adapter > android::widget::AdapterView::getAdapter()
{
	return local_ref< android::widget::Adapter >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void android::widget::AdapterView::setAdapter(local_ref< android::widget::Adapter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::AdapterView::addView(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::AdapterView::addView(local_ref< android::view::View > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::AdapterView::addView(local_ref< android::view::View > const &a0, local_ref< android::view::ViewGroup_::LayoutParams > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::AdapterView::addView(local_ref< android::view::View > const &a0, cpp_int const &a1, local_ref< android::view::ViewGroup_::LayoutParams > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::AdapterView::removeView(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::AdapterView::removeViewAt(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::AdapterView::removeAllViews()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}


cpp_int android::widget::AdapterView::getSelectedItemPosition()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

cpp_long android::widget::AdapterView::getSelectedItemId()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

local_ref< android::view::View > android::widget::AdapterView::getSelectedView()
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

local_ref< java::lang::Object > android::widget::AdapterView::getSelectedItem()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

cpp_int android::widget::AdapterView::getCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_int android::widget::AdapterView::getPositionForView(local_ref< android::view::View > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::AdapterView::getFirstVisiblePosition()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

cpp_int android::widget::AdapterView::getLastVisiblePosition()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

void android::widget::AdapterView::setSelection(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::AdapterView::setEmptyView(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::AdapterView::getEmptyView()
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

void android::widget::AdapterView::setFocusable(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::AdapterView::setFocusableInTouchMode(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > android::widget::AdapterView::getItemAtPosition(cpp_int const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::widget::AdapterView::getItemIdAtPosition(cpp_int const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::AdapterView::setOnClickListener(local_ref< android::view::View_::OnClickListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}



cpp_boolean android::widget::AdapterView::dispatchPopulateAccessibilityEvent(local_ref< android::view::accessibility::AccessibilityEvent > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype()
		)
	);
}



static_field<
	android::widget::AdapterView::J2CPP_CLASS_NAME,
	android::widget::AdapterView::J2CPP_FIELD_NAME(0),
	android::widget::AdapterView::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::widget::AdapterView::ITEM_VIEW_TYPE_IGNORE;

static_field<
	android::widget::AdapterView::J2CPP_CLASS_NAME,
	android::widget::AdapterView::J2CPP_FIELD_NAME(1),
	android::widget::AdapterView::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::widget::AdapterView::ITEM_VIEW_TYPE_HEADER_OR_FOOTER;

static_field<
	android::widget::AdapterView::J2CPP_CLASS_NAME,
	android::widget::AdapterView::J2CPP_FIELD_NAME(2),
	android::widget::AdapterView::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::widget::AdapterView::INVALID_POSITION;

static_field<
	android::widget::AdapterView::J2CPP_CLASS_NAME,
	android::widget::AdapterView::J2CPP_FIELD_NAME(3),
	android::widget::AdapterView::J2CPP_FIELD_SIGNATURE(3),
	cpp_long
> android::widget::AdapterView::INVALID_ROW_ID;


J2CPP_DEFINE_CLASS(android::widget::AdapterView,"android/widget/AdapterView")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,3,"setOnItemClickListener","(Landroid/widget/AdapterView$OnItemClickListener;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,4,"getOnItemClickListener","()Landroid/widget/AdapterView$OnItemClickListener;")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,5,"performItemClick","(Landroid/view/View;IJ)Z")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,6,"setOnItemLongClickListener","(Landroid/widget/AdapterView$OnItemLongClickListener;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,7,"getOnItemLongClickListener","()Landroid/widget/AdapterView$OnItemLongClickListener;")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,8,"setOnItemSelectedListener","(Landroid/widget/AdapterView$OnItemSelectedListener;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,9,"getOnItemSelectedListener","()Landroid/widget/AdapterView$OnItemSelectedListener;")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,10,"getAdapter","()Landroid/widget/Adapter;")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,11,"setAdapter","(Landroid/widget/Adapter;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,12,"addView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,13,"addView","(Landroid/view/View;I)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,14,"addView","(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,15,"addView","(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,16,"removeView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,17,"removeViewAt","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,18,"removeAllViews","()V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,19,"onLayout","(ZIIII)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,20,"getSelectedItemPosition","()I")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,21,"getSelectedItemId","()J")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,22,"getSelectedView","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,23,"getSelectedItem","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,24,"getCount","()I")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,25,"getPositionForView","(Landroid/view/View;)I")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,26,"getFirstVisiblePosition","()I")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,27,"getLastVisiblePosition","()I")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,28,"setSelection","(I)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,29,"setEmptyView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,30,"getEmptyView","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,31,"setFocusable","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,32,"setFocusableInTouchMode","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,33,"getItemAtPosition","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,34,"getItemIdAtPosition","(I)J")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,35,"setOnClickListener","(Landroid/view/View$OnClickListener;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,36,"dispatchSaveInstanceState","(Landroid/util/SparseArray;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,37,"dispatchRestoreInstanceState","(Landroid/util/SparseArray;)V")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,38,"dispatchPopulateAccessibilityEvent","(Landroid/view/accessibility/AccessibilityEvent;)Z")
J2CPP_DEFINE_METHOD(android::widget::AdapterView,39,"canAnimate","()Z")
J2CPP_DEFINE_FIELD(android::widget::AdapterView,0,"ITEM_VIEW_TYPE_IGNORE","I")
J2CPP_DEFINE_FIELD(android::widget::AdapterView,1,"ITEM_VIEW_TYPE_HEADER_OR_FOOTER","I")
J2CPP_DEFINE_FIELD(android::widget::AdapterView,2,"INVALID_POSITION","I")
J2CPP_DEFINE_FIELD(android::widget::AdapterView,3,"INVALID_ROW_ID","J")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_ADAPTERVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
