/*================================================================================
  code generated by: java2cpp
  class: android.view.inputmethod.InputMethod
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHOD_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHOD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class InputMethodSession; } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class InputConnection; } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class InputBinding; } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { namespace InputMethod_ { class SessionCallback; } } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class EditorInfo; } } } }
namespace j2cpp { namespace android { namespace os { class IBinder; } } }
namespace j2cpp { namespace android { namespace os { class ResultReceiver; } } }


#include <android/os/IBinder.hpp>
#include <android/os/ResultReceiver.hpp>
#include <android/view/inputmethod/EditorInfo.hpp>
#include <android/view/inputmethod/InputBinding.hpp>
#include <android/view/inputmethod/InputConnection.hpp>
#include <android/view/inputmethod/InputMethod.hpp>
#include <android/view/inputmethod/InputMethodSession.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace view { namespace inputmethod {

	class InputMethod;
	namespace InputMethod_ {

		class SessionCallback;
		class SessionCallback
			: public cpp_object<SessionCallback>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			SessionCallback(jobject jobj)
			: cpp_object<SessionCallback>(jobj)
			{
			}

			void sessionCreated(local_ref< android::view::inputmethod::InputMethodSession > const&);
		}; //class SessionCallback

	} //namespace InputMethod_

	class InputMethod
		: public cpp_object<InputMethod>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		typedef InputMethod_::SessionCallback SessionCallback;

		InputMethod(jobject jobj)
		: cpp_object<InputMethod>(jobj)
		{
		}

		void attachToken(local_ref< android::os::IBinder > const&);
		void bindInput(local_ref< android::view::inputmethod::InputBinding > const&);
		void unbindInput();
		void startInput(local_ref< android::view::inputmethod::InputConnection > const&, local_ref< android::view::inputmethod::EditorInfo > const&);
		void restartInput(local_ref< android::view::inputmethod::InputConnection > const&, local_ref< android::view::inputmethod::EditorInfo > const&);
		void createSession(local_ref< android::view::inputmethod::InputMethod_::SessionCallback > const&);
		void setSessionEnabled(local_ref< android::view::inputmethod::InputMethodSession > const&, cpp_boolean const&);
		void revokeSession(local_ref< android::view::inputmethod::InputMethodSession > const&);
		void showSoftInput(cpp_int const&, local_ref< android::os::ResultReceiver > const&);
		void hideSoftInput(cpp_int const&, local_ref< android::os::ResultReceiver > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > SERVICE_INTERFACE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > SERVICE_META_DATA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > SHOW_EXPLICIT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > SHOW_FORCED;
	}; //class InputMethod

} //namespace inputmethod
} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHOD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHOD_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHOD_HPP_IMPL

namespace j2cpp {



void android::view::inputmethod::InputMethod_::SessionCallback::sessionCreated(local_ref< android::view::inputmethod::InputMethodSession > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::inputmethod::InputMethod_::SessionCallback,"android/view/inputmethod/InputMethod$SessionCallback")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethod_::SessionCallback,0,"sessionCreated","(Landroid/view/inputmethod/InputMethodSession;)V")


void android::view::inputmethod::InputMethod::attachToken(local_ref< android::os::IBinder > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::inputmethod::InputMethod::bindInput(local_ref< android::view::inputmethod::InputBinding > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::inputmethod::InputMethod::unbindInput()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::view::inputmethod::InputMethod::startInput(local_ref< android::view::inputmethod::InputConnection > const &a0, local_ref< android::view::inputmethod::EditorInfo > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::view::inputmethod::InputMethod::restartInput(local_ref< android::view::inputmethod::InputConnection > const &a0, local_ref< android::view::inputmethod::EditorInfo > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::view::inputmethod::InputMethod::createSession(local_ref< android::view::inputmethod::InputMethod_::SessionCallback > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::inputmethod::InputMethod::setSessionEnabled(local_ref< android::view::inputmethod::InputMethodSession > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::view::inputmethod::InputMethod::revokeSession(local_ref< android::view::inputmethod::InputMethodSession > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::inputmethod::InputMethod::showSoftInput(cpp_int const &a0, local_ref< android::os::ResultReceiver > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::view::inputmethod::InputMethod::hideSoftInput(cpp_int const &a0, local_ref< android::os::ResultReceiver > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::view::inputmethod::InputMethod::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputMethod::J2CPP_FIELD_NAME(0),
	android::view::inputmethod::InputMethod::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::view::inputmethod::InputMethod::SERVICE_INTERFACE;

static_field<
	android::view::inputmethod::InputMethod::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputMethod::J2CPP_FIELD_NAME(1),
	android::view::inputmethod::InputMethod::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::view::inputmethod::InputMethod::SERVICE_META_DATA;

static_field<
	android::view::inputmethod::InputMethod::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputMethod::J2CPP_FIELD_NAME(2),
	android::view::inputmethod::InputMethod::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::view::inputmethod::InputMethod::SHOW_EXPLICIT;

static_field<
	android::view::inputmethod::InputMethod::J2CPP_CLASS_NAME,
	android::view::inputmethod::InputMethod::J2CPP_FIELD_NAME(3),
	android::view::inputmethod::InputMethod::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::view::inputmethod::InputMethod::SHOW_FORCED;


J2CPP_DEFINE_CLASS(android::view::inputmethod::InputMethod,"android/view/inputmethod/InputMethod")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethod,0,"attachToken","(Landroid/os/IBinder;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethod,1,"bindInput","(Landroid/view/inputmethod/InputBinding;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethod,2,"unbindInput","()V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethod,3,"startInput","(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/EditorInfo;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethod,4,"restartInput","(Landroid/view/inputmethod/InputConnection;Landroid/view/inputmethod/EditorInfo;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethod,5,"createSession","(Landroid/view/inputmethod/InputMethod$SessionCallback;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethod,6,"setSessionEnabled","(Landroid/view/inputmethod/InputMethodSession;Z)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethod,7,"revokeSession","(Landroid/view/inputmethod/InputMethodSession;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethod,8,"showSoftInput","(ILandroid/os/ResultReceiver;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethod,9,"hideSoftInput","(ILandroid/os/ResultReceiver;)V")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputMethod,0,"SERVICE_INTERFACE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputMethod,1,"SERVICE_META_DATA","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputMethod,2,"SHOW_EXPLICIT","I")
J2CPP_DEFINE_FIELD(android::view::inputmethod::InputMethod,3,"SHOW_FORCED","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHOD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
