/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.WebChromeClient
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBCHROMECLIENT_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_WEBCHROMECLIENT_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Message; } } }
namespace j2cpp { namespace android { namespace webkit { namespace GeolocationPermissions_ { class Callback; } } } }
namespace j2cpp { namespace android { namespace webkit { class WebView; } } }
namespace j2cpp { namespace android { namespace webkit { class ValueCallback; } } }
namespace j2cpp { namespace android { namespace webkit { namespace WebStorage_ { class QuotaUpdater; } } } }
namespace j2cpp { namespace android { namespace webkit { class JsPromptResult; } } }
namespace j2cpp { namespace android { namespace webkit { class ConsoleMessage; } } }
namespace j2cpp { namespace android { namespace webkit { class JsResult; } } }
namespace j2cpp { namespace android { namespace webkit { namespace WebChromeClient_ { class CustomViewCallback; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/graphics/Bitmap.hpp>
#include <android/os/Message.hpp>
#include <android/view/View.hpp>
#include <android/webkit/ConsoleMessage.hpp>
#include <android/webkit/GeolocationPermissions.hpp>
#include <android/webkit/JsPromptResult.hpp>
#include <android/webkit/JsResult.hpp>
#include <android/webkit/ValueCallback.hpp>
#include <android/webkit/WebChromeClient.hpp>
#include <android/webkit/WebStorage.hpp>
#include <android/webkit/WebView.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class WebChromeClient;
	namespace WebChromeClient_ {

		class CustomViewCallback;
		class CustomViewCallback
			: public object<CustomViewCallback>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit CustomViewCallback(jobject jobj)
			: object<CustomViewCallback>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onCustomViewHidden();
		}; //class CustomViewCallback

	} //namespace WebChromeClient_

	class WebChromeClient
		: public object<WebChromeClient>
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

		typedef WebChromeClient_::CustomViewCallback CustomViewCallback;

		explicit WebChromeClient(jobject jobj)
		: object<WebChromeClient>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		WebChromeClient();
		void onProgressChanged(local_ref< android::webkit::WebView >  const&, jint);
		void onReceivedTitle(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&);
		void onReceivedIcon(local_ref< android::webkit::WebView >  const&, local_ref< android::graphics::Bitmap >  const&);
		void onReceivedTouchIconUrl(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&, jboolean);
		void onShowCustomView(local_ref< android::view::View >  const&, local_ref< android::webkit::WebChromeClient_::CustomViewCallback >  const&);
		void onHideCustomView();
		jboolean onCreateWindow(local_ref< android::webkit::WebView >  const&, jboolean, jboolean, local_ref< android::os::Message >  const&);
		void onRequestFocus(local_ref< android::webkit::WebView >  const&);
		void onCloseWindow(local_ref< android::webkit::WebView >  const&);
		jboolean onJsAlert(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< android::webkit::JsResult >  const&);
		jboolean onJsConfirm(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< android::webkit::JsResult >  const&);
		jboolean onJsPrompt(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< android::webkit::JsPromptResult >  const&);
		jboolean onJsBeforeUnload(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< android::webkit::JsResult >  const&);
		void onExceededDatabaseQuota(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, jlong, jlong, jlong, local_ref< android::webkit::WebStorage_::QuotaUpdater >  const&);
		void onReachedMaxAppCacheSize(jlong, jlong, local_ref< android::webkit::WebStorage_::QuotaUpdater >  const&);
		void onGeolocationPermissionsShowPrompt(local_ref< java::lang::String >  const&, local_ref< android::webkit::GeolocationPermissions_::Callback >  const&);
		void onGeolocationPermissionsHidePrompt();
		jboolean onJsTimeout();
		void onConsoleMessage(local_ref< java::lang::String >  const&, jint, local_ref< java::lang::String >  const&);
		jboolean onConsoleMessage(local_ref< android::webkit::ConsoleMessage >  const&);
		local_ref< android::graphics::Bitmap > getDefaultVideoPoster();
		local_ref< android::view::View > getVideoLoadingProgressView();
		void getVisitedHistory(local_ref< android::webkit::ValueCallback >  const&);
	}; //class WebChromeClient

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBCHROMECLIENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBCHROMECLIENT_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_WEBCHROMECLIENT_HPP_IMPL

namespace j2cpp {




android::webkit::WebChromeClient_::CustomViewCallback::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::webkit::WebChromeClient_::CustomViewCallback::onCustomViewHidden()
{
	return call_method<
		android::webkit::WebChromeClient_::CustomViewCallback::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient_::CustomViewCallback::J2CPP_METHOD_NAME(0),
		android::webkit::WebChromeClient_::CustomViewCallback::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::webkit::WebChromeClient_::CustomViewCallback,"android/webkit/WebChromeClient$CustomViewCallback")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient_::CustomViewCallback,0,"onCustomViewHidden","()V")



android::webkit::WebChromeClient::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::webkit::WebChromeClient::WebChromeClient()
: object<android::webkit::WebChromeClient>(
	call_new_object<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(0),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void android::webkit::WebChromeClient::onProgressChanged(local_ref< android::webkit::WebView > const &a0, jint a1)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(1),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

void android::webkit::WebChromeClient::onReceivedTitle(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(2),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

void android::webkit::WebChromeClient::onReceivedIcon(local_ref< android::webkit::WebView > const &a0, local_ref< android::graphics::Bitmap > const &a1)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(3),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}

void android::webkit::WebChromeClient::onReceivedTouchIconUrl(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1, jboolean a2)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(4),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::webkit::WebChromeClient::onShowCustomView(local_ref< android::view::View > const &a0, local_ref< android::webkit::WebChromeClient_::CustomViewCallback > const &a1)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(5),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

void android::webkit::WebChromeClient::onHideCustomView()
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(6),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}

jboolean android::webkit::WebChromeClient::onCreateWindow(local_ref< android::webkit::WebView > const &a0, jboolean a1, jboolean a2, local_ref< android::os::Message > const &a3)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(7),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

void android::webkit::WebChromeClient::onRequestFocus(local_ref< android::webkit::WebView > const &a0)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(8),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void android::webkit::WebChromeClient::onCloseWindow(local_ref< android::webkit::WebView > const &a0)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(9),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

jboolean android::webkit::WebChromeClient::onJsAlert(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< android::webkit::JsResult > const &a3)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(10),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::webkit::WebChromeClient::onJsConfirm(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< android::webkit::JsResult > const &a3)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(11),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::webkit::WebChromeClient::onJsPrompt(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3, local_ref< android::webkit::JsPromptResult > const &a4)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(12),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(12), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3, a4);
}

jboolean android::webkit::WebChromeClient::onJsBeforeUnload(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< android::webkit::JsResult > const &a3)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(13),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(13), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

void android::webkit::WebChromeClient::onExceededDatabaseQuota(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jlong a2, jlong a3, jlong a4, local_ref< android::webkit::WebStorage_::QuotaUpdater > const &a5)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(14),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4, a5);
}

void android::webkit::WebChromeClient::onReachedMaxAppCacheSize(jlong a0, jlong a1, local_ref< android::webkit::WebStorage_::QuotaUpdater > const &a2)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(15),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::webkit::WebChromeClient::onGeolocationPermissionsShowPrompt(local_ref< java::lang::String > const &a0, local_ref< android::webkit::GeolocationPermissions_::Callback > const &a1)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(16),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0, a1);
}

void android::webkit::WebChromeClient::onGeolocationPermissionsHidePrompt()
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(17),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject());
}

jboolean android::webkit::WebChromeClient::onJsTimeout()
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(18),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(18), 
		jboolean >
	(get_jobject());
}

void android::webkit::WebChromeClient::onConsoleMessage(local_ref< java::lang::String > const &a0, jint a1, local_ref< java::lang::String > const &a2)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(19),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0, a1, a2);
}

jboolean android::webkit::WebChromeClient::onConsoleMessage(local_ref< android::webkit::ConsoleMessage > const &a0)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(20),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< android::graphics::Bitmap > android::webkit::WebChromeClient::getDefaultVideoPoster()
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(21),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< android::graphics::Bitmap > >
	(get_jobject());
}

local_ref< android::view::View > android::webkit::WebChromeClient::getVideoLoadingProgressView()
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(22),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< android::view::View > >
	(get_jobject());
}

void android::webkit::WebChromeClient::getVisitedHistory(local_ref< android::webkit::ValueCallback > const &a0)
{
	return call_method<
		android::webkit::WebChromeClient::J2CPP_CLASS_NAME,
		android::webkit::WebChromeClient::J2CPP_METHOD_NAME(23),
		android::webkit::WebChromeClient::J2CPP_METHOD_SIGNATURE(23), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::webkit::WebChromeClient,"android/webkit/WebChromeClient")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,1,"onProgressChanged","(Landroid/webkit/WebView;I)V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,2,"onReceivedTitle","(Landroid/webkit/WebView;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,3,"onReceivedIcon","(Landroid/webkit/WebView;Landroid/graphics/Bitmap;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,4,"onReceivedTouchIconUrl","(Landroid/webkit/WebView;Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,5,"onShowCustomView","(Landroid/view/View;Landroid/webkit/WebChromeClient$CustomViewCallback;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,6,"onHideCustomView","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,7,"onCreateWindow","(Landroid/webkit/WebView;ZZLandroid/os/Message;)Z")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,8,"onRequestFocus","(Landroid/webkit/WebView;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,9,"onCloseWindow","(Landroid/webkit/WebView;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,10,"onJsAlert","(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,11,"onJsConfirm","(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,12,"onJsPrompt","(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsPromptResult;)Z")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,13,"onJsBeforeUnload","(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;Landroid/webkit/JsResult;)Z")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,14,"onExceededDatabaseQuota","(Ljava/lang/String;Ljava/lang/String;JJJLandroid/webkit/WebStorage$QuotaUpdater;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,15,"onReachedMaxAppCacheSize","(JJLandroid/webkit/WebStorage$QuotaUpdater;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,16,"onGeolocationPermissionsShowPrompt","(Ljava/lang/String;Landroid/webkit/GeolocationPermissions$Callback;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,17,"onGeolocationPermissionsHidePrompt","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,18,"onJsTimeout","()Z")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,19,"onConsoleMessage","(Ljava/lang/String;ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,20,"onConsoleMessage","(Landroid/webkit/ConsoleMessage;)Z")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,21,"getDefaultVideoPoster","()Landroid/graphics/Bitmap;")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,22,"getVideoLoadingProgressView","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::webkit::WebChromeClient,23,"getVisitedHistory","(Landroid/webkit/ValueCallback;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBCHROMECLIENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
