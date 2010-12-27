/*================================================================================
  code generated by: java2cpp
  class: android.speech.tts.TextToSpeech
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SPEECH_TTS_TEXTTOSPEECH_HPP_DECL
#define J2CPP_ANDROID_SPEECH_TTS_TEXTTOSPEECH_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class HashMap; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace speech { namespace tts { namespace TextToSpeech_ { class OnInitListener; } } } } }
namespace j2cpp { namespace android { namespace speech { namespace tts { namespace TextToSpeech_ { class OnUtteranceCompletedListener; } } } } }


#include <android/content/Context.hpp>
#include <android/speech/tts/TextToSpeech.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/HashMap.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace android { namespace speech { namespace tts {

	class TextToSpeech;
	namespace TextToSpeech_ {

		class Engine;
		class Engine
			: public cpp_object<Engine>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
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
			J2CPP_DECLARE_FIELD(12)
			J2CPP_DECLARE_FIELD(13)
			J2CPP_DECLARE_FIELD(14)
			J2CPP_DECLARE_FIELD(15)

			explicit Engine(jobject jobj)
			: cpp_object<Engine>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			Engine(local_ref< android::speech::tts::TextToSpeech > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DEFAULT_STREAM;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > CHECK_VOICE_DATA_PASS;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > CHECK_VOICE_DATA_FAIL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > CHECK_VOICE_DATA_BAD_DATA;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > CHECK_VOICE_DATA_MISSING_DATA;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > CHECK_VOICE_DATA_MISSING_VOLUME;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > ACTION_INSTALL_TTS_DATA;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > ACTION_TTS_DATA_INSTALLED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > ACTION_CHECK_TTS_DATA;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > EXTRA_VOICE_DATA_ROOT_DIRECTORY;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > EXTRA_VOICE_DATA_FILES;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > EXTRA_VOICE_DATA_FILES_INFO;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::lang::String > > EXTRA_TTS_DATA_INSTALLED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< java::lang::String > > KEY_PARAM_STREAM;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), local_ref< java::lang::String > > KEY_PARAM_UTTERANCE_ID;
		}; //class Engine

		class OnInitListener;
		class OnInitListener
			: public cpp_object<OnInitListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnInitListener(jobject jobj)
			: cpp_object<OnInitListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onInit(cpp_int const&);
		}; //class OnInitListener

		class OnUtteranceCompletedListener;
		class OnUtteranceCompletedListener
			: public cpp_object<OnUtteranceCompletedListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnUtteranceCompletedListener(jobject jobj)
			: cpp_object<OnUtteranceCompletedListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onUtteranceCompleted(local_ref< java::lang::String > const&);
		}; //class OnUtteranceCompletedListener

	} //namespace TextToSpeech_

	class TextToSpeech
		: public cpp_object<TextToSpeech>
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

		typedef TextToSpeech_::Engine Engine;
		typedef TextToSpeech_::OnInitListener OnInitListener;
		typedef TextToSpeech_::OnUtteranceCompletedListener OnUtteranceCompletedListener;

		explicit TextToSpeech(jobject jobj)
		: cpp_object<TextToSpeech>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		TextToSpeech(local_ref< android::content::Context > const&, local_ref< android::speech::tts::TextToSpeech_::OnInitListener > const&);
		void shutdown();
		cpp_int addSpeech(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_int const&);
		cpp_int addSpeech(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		cpp_int addEarcon(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_int const&);
		cpp_int addEarcon(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		cpp_int speak(local_ref< java::lang::String > const&, cpp_int const&, local_ref< java::util::HashMap > const&);
		cpp_int playEarcon(local_ref< java::lang::String > const&, cpp_int const&, local_ref< java::util::HashMap > const&);
		cpp_int playSilence(cpp_long const&, cpp_int const&, local_ref< java::util::HashMap > const&);
		cpp_boolean isSpeaking();
		cpp_int stop();
		cpp_int setSpeechRate(cpp_float const&);
		cpp_int setPitch(cpp_float const&);
		cpp_int setLanguage(local_ref< java::util::Locale > const&);
		local_ref< java::util::Locale > getLanguage();
		cpp_int isLanguageAvailable(local_ref< java::util::Locale > const&);
		cpp_int synthesizeToFile(local_ref< java::lang::String > const&, local_ref< java::util::HashMap > const&, local_ref< java::lang::String > const&);
		cpp_int setOnUtteranceCompletedListener(local_ref< android::speech::tts::TextToSpeech_::OnUtteranceCompletedListener > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > SUCCESS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > QUEUE_FLUSH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > QUEUE_ADD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > LANG_COUNTRY_VAR_AVAILABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > LANG_COUNTRY_AVAILABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > LANG_AVAILABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > LANG_MISSING_DATA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > LANG_NOT_SUPPORTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > ACTION_TTS_QUEUE_PROCESSING_COMPLETED;
	}; //class TextToSpeech

} //namespace tts
} //namespace speech
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_SPEECH_TTS_TEXTTOSPEECH_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SPEECH_TTS_TEXTTOSPEECH_HPP_IMPL
#define J2CPP_ANDROID_SPEECH_TTS_TEXTTOSPEECH_HPP_IMPL

namespace j2cpp {




android::speech::tts::TextToSpeech_::Engine::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::speech::tts::TextToSpeech_::Engine::Engine(local_ref< android::speech::tts::TextToSpeech > const &a0)
: cpp_object<android::speech::tts::TextToSpeech_::Engine>(
	environment::get().get_jenv()->NewObject(
		get_class<android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME>(),
		get_method_id<android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME, android::speech::tts::TextToSpeech_::Engine::J2CPP_METHOD_NAME(0), android::speech::tts::TextToSpeech_::Engine::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(0),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::speech::tts::TextToSpeech_::Engine::DEFAULT_STREAM;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(1),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::speech::tts::TextToSpeech_::Engine::CHECK_VOICE_DATA_PASS;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(2),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::speech::tts::TextToSpeech_::Engine::CHECK_VOICE_DATA_FAIL;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(3),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::speech::tts::TextToSpeech_::Engine::CHECK_VOICE_DATA_BAD_DATA;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(4),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::speech::tts::TextToSpeech_::Engine::CHECK_VOICE_DATA_MISSING_DATA;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(5),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::speech::tts::TextToSpeech_::Engine::CHECK_VOICE_DATA_MISSING_VOLUME;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(6),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::speech::tts::TextToSpeech_::Engine::ACTION_INSTALL_TTS_DATA;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(7),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::speech::tts::TextToSpeech_::Engine::ACTION_TTS_DATA_INSTALLED;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(8),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> android::speech::tts::TextToSpeech_::Engine::ACTION_CHECK_TTS_DATA;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(9),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::speech::tts::TextToSpeech_::Engine::EXTRA_VOICE_DATA_ROOT_DIRECTORY;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(10),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::speech::tts::TextToSpeech_::Engine::EXTRA_VOICE_DATA_FILES;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(11),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::lang::String >
> android::speech::tts::TextToSpeech_::Engine::EXTRA_VOICE_DATA_FILES_INFO;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(12),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(12),
	local_ref< java::lang::String >
> android::speech::tts::TextToSpeech_::Engine::EXTRA_TTS_DATA_INSTALLED;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(13),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(13),
	local_ref< java::lang::String >
> android::speech::tts::TextToSpeech_::Engine::KEY_PARAM_STREAM;

static_field<
	android::speech::tts::TextToSpeech_::Engine::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_NAME(14),
	android::speech::tts::TextToSpeech_::Engine::J2CPP_FIELD_SIGNATURE(14),
	local_ref< java::lang::String >
> android::speech::tts::TextToSpeech_::Engine::KEY_PARAM_UTTERANCE_ID;


J2CPP_DEFINE_CLASS(android::speech::tts::TextToSpeech_::Engine,"android/speech/tts/TextToSpeech$Engine")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech_::Engine,0,"<init>","(Landroid/speech/tts/TextToSpeech;)V")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,0,"DEFAULT_STREAM","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,1,"CHECK_VOICE_DATA_PASS","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,2,"CHECK_VOICE_DATA_FAIL","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,3,"CHECK_VOICE_DATA_BAD_DATA","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,4,"CHECK_VOICE_DATA_MISSING_DATA","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,5,"CHECK_VOICE_DATA_MISSING_VOLUME","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,6,"ACTION_INSTALL_TTS_DATA","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,7,"ACTION_TTS_DATA_INSTALLED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,8,"ACTION_CHECK_TTS_DATA","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,9,"EXTRA_VOICE_DATA_ROOT_DIRECTORY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,10,"EXTRA_VOICE_DATA_FILES","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,11,"EXTRA_VOICE_DATA_FILES_INFO","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,12,"EXTRA_TTS_DATA_INSTALLED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,13,"KEY_PARAM_STREAM","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,14,"KEY_PARAM_UTTERANCE_ID","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech_::Engine,15,"this$0","Landroid/speech/tts/TextToSpeech;")


android::speech::tts::TextToSpeech_::OnInitListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

void android::speech::tts::TextToSpeech_::OnInitListener::onInit(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::speech::tts::TextToSpeech_::OnInitListener,"android/speech/tts/TextToSpeech$OnInitListener")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech_::OnInitListener,0,"onInit","(I)V")


android::speech::tts::TextToSpeech_::OnUtteranceCompletedListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

void android::speech::tts::TextToSpeech_::OnUtteranceCompletedListener::onUtteranceCompleted(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::speech::tts::TextToSpeech_::OnUtteranceCompletedListener,"android/speech/tts/TextToSpeech$OnUtteranceCompletedListener")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech_::OnUtteranceCompletedListener,0,"onUtteranceCompleted","(Ljava/lang/String;)V")



android::speech::tts::TextToSpeech::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::speech::tts::TextToSpeech::TextToSpeech(local_ref< android::content::Context > const &a0, local_ref< android::speech::tts::TextToSpeech_::OnInitListener > const &a1)
: cpp_object<android::speech::tts::TextToSpeech>(
	environment::get().get_jenv()->NewObject(
		get_class<android::speech::tts::TextToSpeech::J2CPP_CLASS_NAME>(),
		get_method_id<android::speech::tts::TextToSpeech::J2CPP_CLASS_NAME, android::speech::tts::TextToSpeech::J2CPP_METHOD_NAME(0), android::speech::tts::TextToSpeech::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}


void android::speech::tts::TextToSpeech::shutdown()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::addSpeech(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::addSpeech(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::addEarcon(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::addEarcon(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::speak(local_ref< java::lang::String > const &a0, cpp_int const &a1, local_ref< java::util::HashMap > const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::playEarcon(local_ref< java::lang::String > const &a0, cpp_int const &a1, local_ref< java::util::HashMap > const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::playSilence(cpp_long const &a0, cpp_int const &a1, local_ref< java::util::HashMap > const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::speech::tts::TextToSpeech::isSpeaking()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::stop()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::setSpeechRate(cpp_float const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::setPitch(cpp_float const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::setLanguage(local_ref< java::util::Locale > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Locale > android::speech::tts::TextToSpeech::getLanguage()
{
	return local_ref< java::util::Locale >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::isLanguageAvailable(local_ref< java::util::Locale > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::synthesizeToFile(local_ref< java::lang::String > const &a0, local_ref< java::util::HashMap > const &a1, local_ref< java::lang::String > const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::speech::tts::TextToSpeech::setOnUtteranceCompletedListener(local_ref< android::speech::tts::TextToSpeech_::OnUtteranceCompletedListener > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::speech::tts::TextToSpeech::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech::J2CPP_FIELD_NAME(0),
	android::speech::tts::TextToSpeech::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::speech::tts::TextToSpeech::SUCCESS;

static_field<
	android::speech::tts::TextToSpeech::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech::J2CPP_FIELD_NAME(1),
	android::speech::tts::TextToSpeech::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::speech::tts::TextToSpeech::ERROR;

static_field<
	android::speech::tts::TextToSpeech::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech::J2CPP_FIELD_NAME(2),
	android::speech::tts::TextToSpeech::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::speech::tts::TextToSpeech::QUEUE_FLUSH;

static_field<
	android::speech::tts::TextToSpeech::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech::J2CPP_FIELD_NAME(3),
	android::speech::tts::TextToSpeech::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::speech::tts::TextToSpeech::QUEUE_ADD;

static_field<
	android::speech::tts::TextToSpeech::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech::J2CPP_FIELD_NAME(4),
	android::speech::tts::TextToSpeech::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::speech::tts::TextToSpeech::LANG_COUNTRY_VAR_AVAILABLE;

static_field<
	android::speech::tts::TextToSpeech::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech::J2CPP_FIELD_NAME(5),
	android::speech::tts::TextToSpeech::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::speech::tts::TextToSpeech::LANG_COUNTRY_AVAILABLE;

static_field<
	android::speech::tts::TextToSpeech::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech::J2CPP_FIELD_NAME(6),
	android::speech::tts::TextToSpeech::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> android::speech::tts::TextToSpeech::LANG_AVAILABLE;

static_field<
	android::speech::tts::TextToSpeech::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech::J2CPP_FIELD_NAME(7),
	android::speech::tts::TextToSpeech::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> android::speech::tts::TextToSpeech::LANG_MISSING_DATA;

static_field<
	android::speech::tts::TextToSpeech::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech::J2CPP_FIELD_NAME(8),
	android::speech::tts::TextToSpeech::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> android::speech::tts::TextToSpeech::LANG_NOT_SUPPORTED;

static_field<
	android::speech::tts::TextToSpeech::J2CPP_CLASS_NAME,
	android::speech::tts::TextToSpeech::J2CPP_FIELD_NAME(9),
	android::speech::tts::TextToSpeech::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::speech::tts::TextToSpeech::ACTION_TTS_QUEUE_PROCESSING_COMPLETED;


J2CPP_DEFINE_CLASS(android::speech::tts::TextToSpeech,"android/speech/tts/TextToSpeech")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,0,"<init>","(Landroid/content/Context;Landroid/speech/tts/TextToSpeech$OnInitListener;)V")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,1,"shutdown","()V")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,2,"addSpeech","(Ljava/lang/String;Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,3,"addSpeech","(Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,4,"addEarcon","(Ljava/lang/String;Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,5,"addEarcon","(Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,6,"speak","(Ljava/lang/String;ILjava/util/HashMap;)I")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,7,"playEarcon","(Ljava/lang/String;ILjava/util/HashMap;)I")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,8,"playSilence","(JILjava/util/HashMap;)I")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,9,"isSpeaking","()Z")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,10,"stop","()I")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,11,"setSpeechRate","(F)I")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,12,"setPitch","(F)I")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,13,"setLanguage","(Ljava/util/Locale;)I")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,14,"getLanguage","()Ljava/util/Locale;")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,15,"isLanguageAvailable","(Ljava/util/Locale;)I")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,16,"synthesizeToFile","(Ljava/lang/String;Ljava/util/HashMap;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::speech::tts::TextToSpeech,17,"setOnUtteranceCompletedListener","(Landroid/speech/tts/TextToSpeech$OnUtteranceCompletedListener;)I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech,0,"SUCCESS","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech,1,"ERROR","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech,2,"QUEUE_FLUSH","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech,3,"QUEUE_ADD","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech,4,"LANG_COUNTRY_VAR_AVAILABLE","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech,5,"LANG_COUNTRY_AVAILABLE","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech,6,"LANG_AVAILABLE","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech,7,"LANG_MISSING_DATA","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech,8,"LANG_NOT_SUPPORTED","I")
J2CPP_DEFINE_FIELD(android::speech::tts::TextToSpeech,9,"ACTION_TTS_QUEUE_PROCESSING_COMPLETED","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_SPEECH_TTS_TEXTTOSPEECH_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
