/*================================================================================
  code generated by: java2cpp
  class: android.text.method.BaseKeyListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_BASEKEYLISTENER_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_BASEKEYLISTENER_HPP_DECL


namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace text { class Editable; } } }


#include <android/text/Editable.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/View.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class BaseKeyListener;
	class BaseKeyListener
		: public cpp_object<BaseKeyListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		BaseKeyListener(jobject jobj)
		: cpp_object<BaseKeyListener>(jobj)
		{
		}

		cpp_boolean backspace(local_ref< android::view::View > const&, local_ref< android::text::Editable > const&, cpp_int const&, local_ref< android::view::KeyEvent > const&);
		cpp_boolean onKeyDown(local_ref< android::view::View > const&, local_ref< android::text::Editable > const&, cpp_int const&, local_ref< android::view::KeyEvent > const&);
		cpp_boolean onKeyOther(local_ref< android::view::View > const&, local_ref< android::text::Editable > const&, local_ref< android::view::KeyEvent > const&);
	}; //class BaseKeyListener

} //namespace method
} //namespace text
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_BASEKEYLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_BASEKEYLISTENER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_BASEKEYLISTENER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::text::method::BaseKeyListener > create< android::text::method::BaseKeyListener>()
{
	return local_ref< android::text::method::BaseKeyListener >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::method::BaseKeyListener::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::method::BaseKeyListener::J2CPP_CLASS_NAME, android::text::method::BaseKeyListener::J2CPP_METHOD_NAME(0), android::text::method::BaseKeyListener::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean android::text::method::BaseKeyListener::backspace(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, cpp_int const &a2, local_ref< android::view::KeyEvent > const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::text::method::BaseKeyListener::onKeyDown(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, cpp_int const &a2, local_ref< android::view::KeyEvent > const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::text::method::BaseKeyListener::onKeyOther(local_ref< android::view::View > const &a0, local_ref< android::text::Editable > const &a1, local_ref< android::view::KeyEvent > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::method::BaseKeyListener,"android/text/method/BaseKeyListener")
J2CPP_DEFINE_METHOD(android::text::method::BaseKeyListener,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::method::BaseKeyListener,1,"backspace","(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::BaseKeyListener,2,"onKeyDown","(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::BaseKeyListener,3,"onKeyOther","(Landroid/view/View;Landroid/text/Editable;Landroid/view/KeyEvent;)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_BASEKEYLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
