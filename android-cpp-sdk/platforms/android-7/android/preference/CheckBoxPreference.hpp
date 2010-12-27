/*================================================================================
  code generated by: java2cpp
  class: android.preference.CheckBoxPreference
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_HPP_DECL
#define J2CPP_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace preference { class Preference; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/preference/Preference.hpp>
#include <android/util/AttributeSet.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace preference {

	class CheckBoxPreference;
	class CheckBoxPreference
		: public cpp_object<CheckBoxPreference>
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

		explicit CheckBoxPreference(jobject jobj)
		: cpp_object<CheckBoxPreference>(jobj)
		{
		}

		operator local_ref<android::preference::Preference>() const;


		CheckBoxPreference(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, cpp_int const&);
		CheckBoxPreference(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		CheckBoxPreference(local_ref< android::content::Context > const&);
		void setChecked(cpp_boolean const&);
		cpp_boolean isChecked();
		cpp_boolean shouldDisableDependents();
		void setSummaryOn(local_ref< java::lang::CharSequence > const&);
		void setSummaryOn(cpp_int const&);
		local_ref< java::lang::CharSequence > getSummaryOn();
		void setSummaryOff(local_ref< java::lang::CharSequence > const&);
		void setSummaryOff(cpp_int const&);
		local_ref< java::lang::CharSequence > getSummaryOff();
		cpp_boolean getDisableDependentsState();
		void setDisableDependentsState(cpp_boolean const&);
	}; //class CheckBoxPreference

} //namespace preference
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_HPP_IMPL
#define J2CPP_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_HPP_IMPL

namespace j2cpp {



android::preference::CheckBoxPreference::operator local_ref<android::preference::Preference>() const
{
	return local_ref<android::preference::Preference>(get_jtype());
}


android::preference::CheckBoxPreference::CheckBoxPreference(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
: cpp_object<android::preference::CheckBoxPreference>(
	environment::get().get_jenv()->NewObject(
		get_class<android::preference::CheckBoxPreference::J2CPP_CLASS_NAME>(),
		get_method_id<android::preference::CheckBoxPreference::J2CPP_CLASS_NAME, android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(0), android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}



android::preference::CheckBoxPreference::CheckBoxPreference(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: cpp_object<android::preference::CheckBoxPreference>(
	environment::get().get_jenv()->NewObject(
		get_class<android::preference::CheckBoxPreference::J2CPP_CLASS_NAME>(),
		get_method_id<android::preference::CheckBoxPreference::J2CPP_CLASS_NAME, android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(1), android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::preference::CheckBoxPreference::CheckBoxPreference(local_ref< android::content::Context > const &a0)
: cpp_object<android::preference::CheckBoxPreference>(
	environment::get().get_jenv()->NewObject(
		get_class<android::preference::CheckBoxPreference::J2CPP_CLASS_NAME>(),
		get_method_id<android::preference::CheckBoxPreference::J2CPP_CLASS_NAME, android::preference::CheckBoxPreference::J2CPP_METHOD_NAME(2), android::preference::CheckBoxPreference::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype()
	)
)
{
}




void android::preference::CheckBoxPreference::setChecked(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::preference::CheckBoxPreference::isChecked()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean android::preference::CheckBoxPreference::shouldDisableDependents()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::preference::CheckBoxPreference::setSummaryOn(local_ref< java::lang::CharSequence > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void android::preference::CheckBoxPreference::setSummaryOn(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::preference::CheckBoxPreference::getSummaryOn()
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void android::preference::CheckBoxPreference::setSummaryOff(local_ref< java::lang::CharSequence > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void android::preference::CheckBoxPreference::setSummaryOff(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::preference::CheckBoxPreference::getSummaryOff()
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_boolean android::preference::CheckBoxPreference::getDisableDependentsState()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void android::preference::CheckBoxPreference::setDisableDependentsState(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}






J2CPP_DEFINE_CLASS(android::preference::CheckBoxPreference,"android/preference/CheckBoxPreference")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,2,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,3,"onBindView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,4,"onClick","()V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,5,"setChecked","(Z)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,6,"isChecked","()Z")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,7,"shouldDisableDependents","()Z")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,8,"setSummaryOn","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,9,"setSummaryOn","(I)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,10,"getSummaryOn","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,11,"setSummaryOff","(Ljava/lang/CharSequence;)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,12,"setSummaryOff","(I)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,13,"getSummaryOff","()Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,14,"getDisableDependentsState","()Z")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,15,"setDisableDependentsState","(Z)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,16,"onGetDefaultValue","(Landroid/content/res/TypedArray;I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,17,"onSetInitialValue","(ZLjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,18,"onSaveInstanceState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::preference::CheckBoxPreference,19,"onRestoreInstanceState","(Landroid/os/Parcelable;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PREFERENCE_CHECKBOXPREFERENCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
