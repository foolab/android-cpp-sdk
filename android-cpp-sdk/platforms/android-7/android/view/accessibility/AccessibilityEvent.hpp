/*================================================================================
  code generated by: java2cpp
  class: android.view.accessibility.AccessibilityEvent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENT_HPP_DECL
#define J2CPP_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace view { namespace accessibility {

	class AccessibilityEvent;
	class AccessibilityEvent
		: public cpp_object<AccessibilityEvent>
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

		explicit AccessibilityEvent(jobject jobj)
		: cpp_object<AccessibilityEvent>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		cpp_boolean isChecked();
		void setChecked(cpp_boolean const&);
		cpp_boolean isEnabled();
		void setEnabled(cpp_boolean const&);
		cpp_boolean isPassword();
		void setPassword(cpp_boolean const&);
		void setFullScreen(cpp_boolean const&);
		cpp_boolean isFullScreen();
		cpp_int getEventType();
		void setEventType(cpp_int const&);
		cpp_int getItemCount();
		void setItemCount(cpp_int const&);
		cpp_int getCurrentItemIndex();
		void setCurrentItemIndex(cpp_int const&);
		cpp_int getFromIndex();
		void setFromIndex(cpp_int const&);
		cpp_int getAddedCount();
		void setAddedCount(cpp_int const&);
		cpp_int getRemovedCount();
		void setRemovedCount(cpp_int const&);
		cpp_long getEventTime();
		void setEventTime(cpp_long const&);
		local_ref< java::lang::CharSequence > getClassName();
		void setClassName(local_ref< java::lang::CharSequence > const&);
		local_ref< java::lang::CharSequence > getPackageName();
		void setPackageName(local_ref< java::lang::CharSequence > const&);
		local_ref< java::util::List > getText();
		local_ref< java::lang::CharSequence > getBeforeText();
		void setBeforeText(local_ref< java::lang::CharSequence > const&);
		local_ref< java::lang::CharSequence > getContentDescription();
		void setContentDescription(local_ref< java::lang::CharSequence > const&);
		local_ref< android::os::Parcelable > getParcelableData();
		void setParcelableData(local_ref< android::os::Parcelable > const&);
		static local_ref< android::view::accessibility::AccessibilityEvent > obtain(cpp_int const&);
		static local_ref< android::view::accessibility::AccessibilityEvent > obtain();
		void recycle();
		void initFromParcel(local_ref< android::os::Parcel > const&);
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		cpp_int describeContents();
		local_ref< java::lang::String > toString();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > INVALID_POSITION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > MAX_TEXT_LENGTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > TYPE_VIEW_CLICKED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > TYPE_VIEW_LONG_CLICKED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > TYPE_VIEW_SELECTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > TYPE_VIEW_FOCUSED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > TYPE_VIEW_TEXT_CHANGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > TYPE_WINDOW_STATE_CHANGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > TYPE_NOTIFICATION_STATE_CHANGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_int > TYPES_ALL_MASK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class AccessibilityEvent

} //namespace accessibility
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENT_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENT_HPP_IMPL

namespace j2cpp {



android::view::accessibility::AccessibilityEvent::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

android::view::accessibility::AccessibilityEvent::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jtype());
}


cpp_boolean android::view::accessibility::AccessibilityEvent::isChecked()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setChecked(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::accessibility::AccessibilityEvent::isEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setEnabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::accessibility::AccessibilityEvent::isPassword()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setPassword(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setFullScreen(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::view::accessibility::AccessibilityEvent::isFullScreen()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_int android::view::accessibility::AccessibilityEvent::getEventType()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setEventType(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::view::accessibility::AccessibilityEvent::getItemCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setItemCount(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::view::accessibility::AccessibilityEvent::getCurrentItemIndex()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setCurrentItemIndex(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::view::accessibility::AccessibilityEvent::getFromIndex()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setFromIndex(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::view::accessibility::AccessibilityEvent::getAddedCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setAddedCount(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::view::accessibility::AccessibilityEvent::getRemovedCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setRemovedCount(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long android::view::accessibility::AccessibilityEvent::getEventTime()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setEventTime(cpp_long const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::view::accessibility::AccessibilityEvent::getClassName()
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setClassName(local_ref< java::lang::CharSequence > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::view::accessibility::AccessibilityEvent::getPackageName()
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setPackageName(local_ref< java::lang::CharSequence > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::List > android::view::accessibility::AccessibilityEvent::getText()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

local_ref< java::lang::CharSequence > android::view::accessibility::AccessibilityEvent::getBeforeText()
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setBeforeText(local_ref< java::lang::CharSequence > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::view::accessibility::AccessibilityEvent::getContentDescription()
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setContentDescription(local_ref< java::lang::CharSequence > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::os::Parcelable > android::view::accessibility::AccessibilityEvent::getParcelableData()
{
	return local_ref< android::os::Parcelable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::setParcelableData(local_ref< android::os::Parcelable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::accessibility::AccessibilityEvent > android::view::accessibility::AccessibilityEvent::obtain(cpp_int const &a0)
{
	return local_ref< android::view::accessibility::AccessibilityEvent >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::accessibility::AccessibilityEvent > android::view::accessibility::AccessibilityEvent::obtain()
{
	return local_ref< android::view::accessibility::AccessibilityEvent >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), true>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::recycle()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::initFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::accessibility::AccessibilityEvent::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::view::accessibility::AccessibilityEvent::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>()
		)
	);
}

local_ref< java::lang::String > android::view::accessibility::AccessibilityEvent::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>()
		)
	);
}



static_field<
	android::view::accessibility::AccessibilityEvent::J2CPP_CLASS_NAME,
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_NAME(0),
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::view::accessibility::AccessibilityEvent::INVALID_POSITION;

static_field<
	android::view::accessibility::AccessibilityEvent::J2CPP_CLASS_NAME,
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_NAME(1),
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::view::accessibility::AccessibilityEvent::MAX_TEXT_LENGTH;

static_field<
	android::view::accessibility::AccessibilityEvent::J2CPP_CLASS_NAME,
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_NAME(2),
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::view::accessibility::AccessibilityEvent::TYPE_VIEW_CLICKED;

static_field<
	android::view::accessibility::AccessibilityEvent::J2CPP_CLASS_NAME,
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_NAME(3),
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::view::accessibility::AccessibilityEvent::TYPE_VIEW_LONG_CLICKED;

static_field<
	android::view::accessibility::AccessibilityEvent::J2CPP_CLASS_NAME,
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_NAME(4),
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::view::accessibility::AccessibilityEvent::TYPE_VIEW_SELECTED;

static_field<
	android::view::accessibility::AccessibilityEvent::J2CPP_CLASS_NAME,
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_NAME(5),
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::view::accessibility::AccessibilityEvent::TYPE_VIEW_FOCUSED;

static_field<
	android::view::accessibility::AccessibilityEvent::J2CPP_CLASS_NAME,
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_NAME(6),
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::view::accessibility::AccessibilityEvent::TYPE_VIEW_TEXT_CHANGED;

static_field<
	android::view::accessibility::AccessibilityEvent::J2CPP_CLASS_NAME,
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_NAME(7),
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::view::accessibility::AccessibilityEvent::TYPE_WINDOW_STATE_CHANGED;

static_field<
	android::view::accessibility::AccessibilityEvent::J2CPP_CLASS_NAME,
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_NAME(8),
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::view::accessibility::AccessibilityEvent::TYPE_NOTIFICATION_STATE_CHANGED;

static_field<
	android::view::accessibility::AccessibilityEvent::J2CPP_CLASS_NAME,
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_NAME(9),
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_SIGNATURE(9),
	cpp_int
> android::view::accessibility::AccessibilityEvent::TYPES_ALL_MASK;

static_field<
	android::view::accessibility::AccessibilityEvent::J2CPP_CLASS_NAME,
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_NAME(10),
	android::view::accessibility::AccessibilityEvent::J2CPP_FIELD_SIGNATURE(10),
	local_ref< android::os::Parcelable_::Creator >
> android::view::accessibility::AccessibilityEvent::CREATOR;


J2CPP_DEFINE_CLASS(android::view::accessibility::AccessibilityEvent,"android/view/accessibility/AccessibilityEvent")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,1,"isChecked","()Z")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,2,"setChecked","(Z)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,3,"isEnabled","()Z")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,4,"setEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,5,"isPassword","()Z")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,6,"setPassword","(Z)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,7,"setFullScreen","(Z)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,8,"isFullScreen","()Z")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,9,"getEventType","()I")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,10,"setEventType","(I)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,11,"getItemCount","()I")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,12,"setItemCount","(I)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,13,"getCurrentItemIndex","()I")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,14,"setCurrentItemIndex","(I)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,15,"getFromIndex","()I")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,16,"setFromIndex","(I)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,17,"getAddedCount","()I")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,18,"setAddedCount","(I)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,19,"getRemovedCount","()I")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,20,"setRemovedCount","(I)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,21,"getEventTime","()J")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,22,"setEventTime","(J)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,23,"getClassName","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,24,"setClassName","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,25,"getPackageName","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,26,"setPackageName","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,27,"getText","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,28,"getBeforeText","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,29,"setBeforeText","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,30,"getContentDescription","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,31,"setContentDescription","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,32,"getParcelableData","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,33,"setParcelableData","(Landroid/os/Parcelable;)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,34,"obtain","(I)Landroid/view/accessibility/AccessibilityEvent;")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,35,"obtain","()Landroid/view/accessibility/AccessibilityEvent;")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,36,"recycle","()V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,37,"initFromParcel","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,38,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,39,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,40,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::view::accessibility::AccessibilityEvent,41,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::accessibility::AccessibilityEvent,0,"INVALID_POSITION","I")
J2CPP_DEFINE_FIELD(android::view::accessibility::AccessibilityEvent,1,"MAX_TEXT_LENGTH","I")
J2CPP_DEFINE_FIELD(android::view::accessibility::AccessibilityEvent,2,"TYPE_VIEW_CLICKED","I")
J2CPP_DEFINE_FIELD(android::view::accessibility::AccessibilityEvent,3,"TYPE_VIEW_LONG_CLICKED","I")
J2CPP_DEFINE_FIELD(android::view::accessibility::AccessibilityEvent,4,"TYPE_VIEW_SELECTED","I")
J2CPP_DEFINE_FIELD(android::view::accessibility::AccessibilityEvent,5,"TYPE_VIEW_FOCUSED","I")
J2CPP_DEFINE_FIELD(android::view::accessibility::AccessibilityEvent,6,"TYPE_VIEW_TEXT_CHANGED","I")
J2CPP_DEFINE_FIELD(android::view::accessibility::AccessibilityEvent,7,"TYPE_WINDOW_STATE_CHANGED","I")
J2CPP_DEFINE_FIELD(android::view::accessibility::AccessibilityEvent,8,"TYPE_NOTIFICATION_STATE_CHANGED","I")
J2CPP_DEFINE_FIELD(android::view::accessibility::AccessibilityEvent,9,"TYPES_ALL_MASK","I")
J2CPP_DEFINE_FIELD(android::view::accessibility::AccessibilityEvent,10,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYEVENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
