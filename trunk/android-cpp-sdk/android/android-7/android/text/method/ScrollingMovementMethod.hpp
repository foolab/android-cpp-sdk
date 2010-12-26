/*================================================================================
  code generated by: java2cpp
  class: android.text.method.ScrollingMovementMethod
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_SCROLLINGMOVEMENTMETHOD_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_SCROLLINGMOVEMENTMETHOD_HPP_DECL


namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace text { namespace method { class MovementMethod; } } } }
namespace j2cpp { namespace android { namespace widget { class TextView; } } }


#include <android/text/Spannable.hpp>
#include <android/text/method/MovementMethod.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/widget/TextView.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class ScrollingMovementMethod;
	class ScrollingMovementMethod
		: public cpp_object<ScrollingMovementMethod>
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

		ScrollingMovementMethod(jobject jobj)
		: cpp_object<ScrollingMovementMethod>(jobj)
		{
		}

		cpp_boolean onKeyDown(local_ref< android::widget::TextView > const&, local_ref< android::text::Spannable > const&, cpp_int const&, local_ref< android::view::KeyEvent > const&);
		cpp_boolean onKeyUp(local_ref< android::widget::TextView > const&, local_ref< android::text::Spannable > const&, cpp_int const&, local_ref< android::view::KeyEvent > const&);
		cpp_boolean onKeyOther(local_ref< android::widget::TextView > const&, local_ref< android::text::Spannable > const&, local_ref< android::view::KeyEvent > const&);
		cpp_boolean onTrackballEvent(local_ref< android::widget::TextView > const&, local_ref< android::text::Spannable > const&, local_ref< android::view::MotionEvent > const&);
		cpp_boolean onTouchEvent(local_ref< android::widget::TextView > const&, local_ref< android::text::Spannable > const&, local_ref< android::view::MotionEvent > const&);
		void initialize(local_ref< android::widget::TextView > const&, local_ref< android::text::Spannable > const&);
		cpp_boolean canSelectArbitrarily();
		void onTakeFocus(local_ref< android::widget::TextView > const&, local_ref< android::text::Spannable > const&, cpp_int const&);
		static local_ref< android::text::method::MovementMethod > getInstance();
	}; //class ScrollingMovementMethod

} //namespace method
} //namespace text
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_SCROLLINGMOVEMENTMETHOD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_SCROLLINGMOVEMENTMETHOD_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_SCROLLINGMOVEMENTMETHOD_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::text::method::ScrollingMovementMethod > create< android::text::method::ScrollingMovementMethod>()
{
	return local_ref< android::text::method::ScrollingMovementMethod >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::method::ScrollingMovementMethod::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::method::ScrollingMovementMethod::J2CPP_CLASS_NAME, android::text::method::ScrollingMovementMethod::J2CPP_METHOD_NAME(0), android::text::method::ScrollingMovementMethod::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}





cpp_boolean android::text::method::ScrollingMovementMethod::onKeyDown(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, cpp_int const &a2, local_ref< android::view::KeyEvent > const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::text::method::ScrollingMovementMethod::onKeyUp(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, cpp_int const &a2, local_ref< android::view::KeyEvent > const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::text::method::ScrollingMovementMethod::onKeyOther(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, local_ref< android::view::KeyEvent > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::text::method::ScrollingMovementMethod::onTrackballEvent(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, local_ref< android::view::MotionEvent > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::text::method::ScrollingMovementMethod::onTouchEvent(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, local_ref< android::view::MotionEvent > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::text::method::ScrollingMovementMethod::initialize(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::text::method::ScrollingMovementMethod::canSelectArbitrarily()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::text::method::ScrollingMovementMethod::onTakeFocus(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::text::method::MovementMethod > android::text::method::ScrollingMovementMethod::getInstance()
{
	return local_ref< android::text::method::MovementMethod >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), true>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::method::ScrollingMovementMethod,"android/text/method/ScrollingMovementMethod")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,1,"left","(Landroid/widget/TextView;Landroid/text/Spannable;)Z")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,2,"right","(Landroid/widget/TextView;Landroid/text/Spannable;)Z")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,3,"up","(Landroid/widget/TextView;Landroid/text/Spannable;)Z")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,4,"down","(Landroid/widget/TextView;Landroid/text/Spannable;)Z")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,5,"onKeyDown","(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,6,"onKeyUp","(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,7,"onKeyOther","(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,8,"onTrackballEvent","(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,9,"onTouchEvent","(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,10,"initialize","(Landroid/widget/TextView;Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,11,"canSelectArbitrarily","()Z")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,12,"onTakeFocus","(Landroid/widget/TextView;Landroid/text/Spannable;I)V")
J2CPP_DEFINE_METHOD(android::text::method::ScrollingMovementMethod,13,"getInstance","()Landroid/text/method/MovementMethod;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_SCROLLINGMOVEMENTMETHOD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
