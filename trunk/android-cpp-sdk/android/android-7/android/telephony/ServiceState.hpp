/*================================================================================
  code generated by: java2cpp
  class: android.telephony.ServiceState
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_SERVICESTATE_HPP_DECL
#define J2CPP_ANDROID_TELEPHONY_SERVICESTATE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace telephony {

	class ServiceState;
	class ServiceState
		: public cpp_object<ServiceState>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		ServiceState(jobject jobj)
		: cpp_object<ServiceState>(jobj)
		{
		}

		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);
		cpp_int describeContents();
		cpp_int getState();
		cpp_boolean getRoaming();
		local_ref< java::lang::String > getOperatorAlphaLong();
		local_ref< java::lang::String > getOperatorAlphaShort();
		local_ref< java::lang::String > getOperatorNumeric();
		cpp_boolean getIsManualSelection();
		cpp_int hashCode();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::lang::String > toString();
		void setStateOutOfService();
		void setStateOff();
		void setState(cpp_int const&);
		void setRoaming(cpp_boolean const&);
		void setOperatorName(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void setIsManualSelection(cpp_boolean const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > STATE_IN_SERVICE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > STATE_OUT_OF_SERVICE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > STATE_EMERGENCY_ONLY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > STATE_POWER_OFF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class ServiceState

} //namespace telephony
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_SERVICESTATE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_SERVICESTATE_HPP_IMPL
#define J2CPP_ANDROID_TELEPHONY_SERVICESTATE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::telephony::ServiceState > create< android::telephony::ServiceState>()
{
	return local_ref< android::telephony::ServiceState >(
		environment::get().get_jenv()->NewObject(
			get_class<android::telephony::ServiceState::J2CPP_CLASS_NAME>(),
			get_method_id<android::telephony::ServiceState::J2CPP_CLASS_NAME, android::telephony::ServiceState::J2CPP_METHOD_NAME(0), android::telephony::ServiceState::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::telephony::ServiceState > create< android::telephony::ServiceState>(local_ref< android::telephony::ServiceState > const &a0)
{
	return local_ref< android::telephony::ServiceState >(
		environment::get().get_jenv()->NewObject(
			get_class<android::telephony::ServiceState::J2CPP_CLASS_NAME>(),
			get_method_id<android::telephony::ServiceState::J2CPP_CLASS_NAME, android::telephony::ServiceState::J2CPP_METHOD_NAME(1), android::telephony::ServiceState::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::telephony::ServiceState > create< android::telephony::ServiceState>(local_ref< android::os::Parcel > const &a0)
{
	return local_ref< android::telephony::ServiceState >(
		environment::get().get_jenv()->NewObject(
			get_class<android::telephony::ServiceState::J2CPP_CLASS_NAME>(),
			get_method_id<android::telephony::ServiceState::J2CPP_CLASS_NAME, android::telephony::ServiceState::J2CPP_METHOD_NAME(2), android::telephony::ServiceState::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}


void android::telephony::ServiceState::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::telephony::ServiceState::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int android::telephony::ServiceState::getState()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean android::telephony::ServiceState::getRoaming()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::lang::String > android::telephony::ServiceState::getOperatorAlphaLong()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::lang::String > android::telephony::ServiceState::getOperatorAlphaShort()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::lang::String > android::telephony::ServiceState::getOperatorNumeric()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_boolean android::telephony::ServiceState::getIsManualSelection()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int android::telephony::ServiceState::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_boolean android::telephony::ServiceState::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::telephony::ServiceState::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void android::telephony::ServiceState::setStateOutOfService()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

void android::telephony::ServiceState::setStateOff()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

void android::telephony::ServiceState::setState(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

void android::telephony::ServiceState::setRoaming(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

void android::telephony::ServiceState::setOperatorName(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::telephony::ServiceState::setIsManualSelection(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::telephony::ServiceState::J2CPP_CLASS_NAME,
	android::telephony::ServiceState::J2CPP_FIELD_NAME(0),
	android::telephony::ServiceState::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::telephony::ServiceState::STATE_IN_SERVICE;

static_field<
	android::telephony::ServiceState::J2CPP_CLASS_NAME,
	android::telephony::ServiceState::J2CPP_FIELD_NAME(1),
	android::telephony::ServiceState::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::telephony::ServiceState::STATE_OUT_OF_SERVICE;

static_field<
	android::telephony::ServiceState::J2CPP_CLASS_NAME,
	android::telephony::ServiceState::J2CPP_FIELD_NAME(2),
	android::telephony::ServiceState::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::telephony::ServiceState::STATE_EMERGENCY_ONLY;

static_field<
	android::telephony::ServiceState::J2CPP_CLASS_NAME,
	android::telephony::ServiceState::J2CPP_FIELD_NAME(3),
	android::telephony::ServiceState::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::telephony::ServiceState::STATE_POWER_OFF;

static_field<
	android::telephony::ServiceState::J2CPP_CLASS_NAME,
	android::telephony::ServiceState::J2CPP_FIELD_NAME(4),
	android::telephony::ServiceState::J2CPP_FIELD_SIGNATURE(4),
	local_ref< android::os::Parcelable_::Creator >
> android::telephony::ServiceState::CREATOR;


J2CPP_DEFINE_CLASS(android::telephony::ServiceState,"android/telephony/ServiceState")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,1,"<init>","(Landroid/telephony/ServiceState;)V")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,2,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,3,"copyFrom","(Landroid/telephony/ServiceState;)V")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,4,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,5,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,6,"getState","()I")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,7,"getRoaming","()Z")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,8,"getOperatorAlphaLong","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,9,"getOperatorAlphaShort","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,10,"getOperatorNumeric","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,11,"getIsManualSelection","()Z")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,12,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,13,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,14,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,15,"setStateOutOfService","()V")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,16,"setStateOff","()V")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,17,"setState","(I)V")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,18,"setRoaming","(Z)V")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,19,"setOperatorName","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,20,"setIsManualSelection","(Z)V")
J2CPP_DEFINE_METHOD(android::telephony::ServiceState,21,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::telephony::ServiceState,0,"STATE_IN_SERVICE","I")
J2CPP_DEFINE_FIELD(android::telephony::ServiceState,1,"STATE_OUT_OF_SERVICE","I")
J2CPP_DEFINE_FIELD(android::telephony::ServiceState,2,"STATE_EMERGENCY_ONLY","I")
J2CPP_DEFINE_FIELD(android::telephony::ServiceState,3,"STATE_POWER_OFF","I")
J2CPP_DEFINE_FIELD(android::telephony::ServiceState,4,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_SERVICESTATE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
