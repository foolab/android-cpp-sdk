/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.inputmethod.InputMethodSession
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSESSION_HPP_DECL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSESSION_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { namespace InputMethodSession_ { class EventCallback; } } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class ExtractedText; } } } }
namespace j2cpp { namespace android { namespace view { namespace inputmethod { class CompletionInfo; } } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/graphics/Rect.hpp>
#include <android/os/Bundle.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/view/inputmethod/CompletionInfo.hpp>
#include <android/view/inputmethod/ExtractedText.hpp>
#include <android/view/inputmethod/InputMethodSession.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace view { namespace inputmethod {

	class InputMethodSession;
	namespace InputMethodSession_ {

		class EventCallback;
		class EventCallback
			: public object<EventCallback>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit EventCallback(jobject jobj)
			: object<EventCallback>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void finishedEvent(jint, jboolean);
		}; //class EventCallback

	} //namespace InputMethodSession_

	class InputMethodSession
		: public object<InputMethodSession>
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

		typedef InputMethodSession_::EventCallback EventCallback;

		explicit InputMethodSession(jobject jobj)
		: object<InputMethodSession>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void finishInput();
		void updateSelection(jint, jint, jint, jint, jint, jint);
		void updateCursor(local_ref< android::graphics::Rect >  const&);
		void displayCompletions(local_ref< array< local_ref< android::view::inputmethod::CompletionInfo >, 1> >  const&);
		void updateExtractedText(jint, local_ref< android::view::inputmethod::ExtractedText >  const&);
		void dispatchKeyEvent(jint, local_ref< android::view::KeyEvent >  const&, local_ref< android::view::inputmethod::InputMethodSession_::EventCallback >  const&);
		void dispatchTrackballEvent(jint, local_ref< android::view::MotionEvent >  const&, local_ref< android::view::inputmethod::InputMethodSession_::EventCallback >  const&);
		void appPrivateCommand(local_ref< java::lang::String >  const&, local_ref< android::os::Bundle >  const&);
		void toggleSoftInput(jint, jint);
	}; //class InputMethodSession

} //namespace inputmethod
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSESSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSESSION_HPP_IMPL
#define J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSESSION_HPP_IMPL

namespace j2cpp {




android::view::inputmethod::InputMethodSession_::EventCallback::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::view::inputmethod::InputMethodSession_::EventCallback::finishedEvent(jint a0, jboolean a1)
{
	return call_method<
		android::view::inputmethod::InputMethodSession_::EventCallback::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodSession_::EventCallback::J2CPP_METHOD_NAME(0),
		android::view::inputmethod::InputMethodSession_::EventCallback::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::view::inputmethod::InputMethodSession_::EventCallback,"android/view/inputmethod/InputMethodSession$EventCallback")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodSession_::EventCallback,0,"finishedEvent","(IZ)V")



android::view::inputmethod::InputMethodSession::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::view::inputmethod::InputMethodSession::finishInput()
{
	return call_method<
		android::view::inputmethod::InputMethodSession::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_NAME(0),
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject());
}

void android::view::inputmethod::InputMethodSession::updateSelection(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5)
{
	return call_method<
		android::view::inputmethod::InputMethodSession::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_NAME(1),
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4, a5);
}

void android::view::inputmethod::InputMethodSession::updateCursor(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::view::inputmethod::InputMethodSession::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_NAME(2),
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

void android::view::inputmethod::InputMethodSession::displayCompletions(local_ref< array< local_ref< android::view::inputmethod::CompletionInfo >, 1> > const &a0)
{
	return call_method<
		android::view::inputmethod::InputMethodSession::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_NAME(3),
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void android::view::inputmethod::InputMethodSession::updateExtractedText(jint a0, local_ref< android::view::inputmethod::ExtractedText > const &a1)
{
	return call_method<
		android::view::inputmethod::InputMethodSession::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_NAME(4),
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::inputmethod::InputMethodSession::dispatchKeyEvent(jint a0, local_ref< android::view::KeyEvent > const &a1, local_ref< android::view::inputmethod::InputMethodSession_::EventCallback > const &a2)
{
	return call_method<
		android::view::inputmethod::InputMethodSession::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_NAME(5),
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::view::inputmethod::InputMethodSession::dispatchTrackballEvent(jint a0, local_ref< android::view::MotionEvent > const &a1, local_ref< android::view::inputmethod::InputMethodSession_::EventCallback > const &a2)
{
	return call_method<
		android::view::inputmethod::InputMethodSession::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_NAME(6),
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::view::inputmethod::InputMethodSession::appPrivateCommand(local_ref< java::lang::String > const &a0, local_ref< android::os::Bundle > const &a1)
{
	return call_method<
		android::view::inputmethod::InputMethodSession::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_NAME(7),
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::inputmethod::InputMethodSession::toggleSoftInput(jint a0, jint a1)
{
	return call_method<
		android::view::inputmethod::InputMethodSession::J2CPP_CLASS_NAME,
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_NAME(8),
		android::view::inputmethod::InputMethodSession::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::view::inputmethod::InputMethodSession,"android/view/inputmethod/InputMethodSession")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodSession,0,"finishInput","()V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodSession,1,"updateSelection","(IIIIII)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodSession,2,"updateCursor","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodSession,3,"displayCompletions","([android.view.inputmethod.CompletionInfo)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodSession,4,"updateExtractedText","(ILandroid/view/inputmethod/ExtractedText;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodSession,5,"dispatchKeyEvent","(ILandroid/view/KeyEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodSession,6,"dispatchTrackballEvent","(ILandroid/view/MotionEvent;Landroid/view/inputmethod/InputMethodSession$EventCallback;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodSession,7,"appPrivateCommand","(Ljava/lang/String;Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::view::inputmethod::InputMethodSession,8,"toggleSoftInput","(II)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_INPUTMETHOD_INPUTMETHODSESSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
