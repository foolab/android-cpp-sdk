/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.telephony.TelephonyManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_TELEPHONYMANAGER_HPP_DECL
#define J2CPP_ANDROID_TELEPHONY_TELEPHONYMANAGER_HPP_DECL


namespace j2cpp { namespace android { namespace telephony { class CellLocation; } } }
namespace j2cpp { namespace android { namespace telephony { class PhoneStateListener; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <android/telephony/CellLocation.hpp>
#include <android/telephony/PhoneStateListener.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace telephony {

	class TelephonyManager;
	class TelephonyManager
		: public object<TelephonyManager>
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
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)
		J2CPP_DECLARE_FIELD(24)
		J2CPP_DECLARE_FIELD(25)
		J2CPP_DECLARE_FIELD(26)
		J2CPP_DECLARE_FIELD(27)
		J2CPP_DECLARE_FIELD(28)
		J2CPP_DECLARE_FIELD(29)
		J2CPP_DECLARE_FIELD(30)
		J2CPP_DECLARE_FIELD(31)
		J2CPP_DECLARE_FIELD(32)
		J2CPP_DECLARE_FIELD(33)
		J2CPP_DECLARE_FIELD(34)
		J2CPP_DECLARE_FIELD(35)
		J2CPP_DECLARE_FIELD(36)
		J2CPP_DECLARE_FIELD(37)
		J2CPP_DECLARE_FIELD(38)

		explicit TelephonyManager(jobject jobj)
		: object<TelephonyManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getDeviceSoftwareVersion();
		local_ref< java::lang::String > getDeviceId();
		local_ref< android::telephony::CellLocation > getCellLocation();
		local_ref< java::util::List > getNeighboringCellInfo();
		jint getPhoneType();
		local_ref< java::lang::String > getNetworkOperatorName();
		local_ref< java::lang::String > getNetworkOperator();
		jboolean isNetworkRoaming();
		local_ref< java::lang::String > getNetworkCountryIso();
		jint getNetworkType();
		jboolean hasIccCard();
		jint getSimState();
		local_ref< java::lang::String > getSimOperator();
		local_ref< java::lang::String > getSimOperatorName();
		local_ref< java::lang::String > getSimCountryIso();
		local_ref< java::lang::String > getSimSerialNumber();
		local_ref< java::lang::String > getSubscriberId();
		local_ref< java::lang::String > getLine1Number();
		local_ref< java::lang::String > getVoiceMailNumber();
		local_ref< java::lang::String > getVoiceMailAlphaTag();
		jint getCallState();
		jint getDataActivity();
		jint getDataState();
		void listen(local_ref< android::telephony::PhoneStateListener >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > ACTION_PHONE_STATE_CHANGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > EXTRA_STATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > EXTRA_STATE_IDLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > EXTRA_STATE_RINGING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > EXTRA_STATE_OFFHOOK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > EXTRA_INCOMING_NUMBER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > PHONE_TYPE_NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > PHONE_TYPE_GSM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > PHONE_TYPE_CDMA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > NETWORK_TYPE_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > NETWORK_TYPE_GPRS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > NETWORK_TYPE_EDGE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > NETWORK_TYPE_UMTS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > NETWORK_TYPE_CDMA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > NETWORK_TYPE_EVDO_0;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > NETWORK_TYPE_EVDO_A;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > NETWORK_TYPE_1xRTT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > NETWORK_TYPE_HSDPA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > NETWORK_TYPE_HSUPA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > NETWORK_TYPE_HSPA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), jint > NETWORK_TYPE_IDEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), jint > SIM_STATE_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), jint > SIM_STATE_ABSENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), jint > SIM_STATE_PIN_REQUIRED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), jint > SIM_STATE_PUK_REQUIRED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), jint > SIM_STATE_NETWORK_LOCKED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), jint > SIM_STATE_READY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), jint > CALL_STATE_IDLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), jint > CALL_STATE_RINGING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(29), J2CPP_FIELD_SIGNATURE(29), jint > CALL_STATE_OFFHOOK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(30), J2CPP_FIELD_SIGNATURE(30), jint > DATA_ACTIVITY_NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(31), J2CPP_FIELD_SIGNATURE(31), jint > DATA_ACTIVITY_IN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(32), J2CPP_FIELD_SIGNATURE(32), jint > DATA_ACTIVITY_OUT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(33), J2CPP_FIELD_SIGNATURE(33), jint > DATA_ACTIVITY_INOUT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(34), J2CPP_FIELD_SIGNATURE(34), jint > DATA_ACTIVITY_DORMANT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(35), J2CPP_FIELD_SIGNATURE(35), jint > DATA_DISCONNECTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(36), J2CPP_FIELD_SIGNATURE(36), jint > DATA_CONNECTING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(37), J2CPP_FIELD_SIGNATURE(37), jint > DATA_CONNECTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(38), J2CPP_FIELD_SIGNATURE(38), jint > DATA_SUSPENDED;
	}; //class TelephonyManager

} //namespace telephony
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_TELEPHONYMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_TELEPHONYMANAGER_HPP_IMPL
#define J2CPP_ANDROID_TELEPHONY_TELEPHONYMANAGER_HPP_IMPL

namespace j2cpp {



android::telephony::TelephonyManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > android::telephony::TelephonyManager::getDeviceSoftwareVersion()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(1),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::telephony::TelephonyManager::getDeviceId()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(2),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< android::telephony::CellLocation > android::telephony::TelephonyManager::getCellLocation()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(3),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::telephony::CellLocation > >
	(get_jobject());
}

local_ref< java::util::List > android::telephony::TelephonyManager::getNeighboringCellInfo()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(4),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::util::List > >
	(get_jobject());
}

jint android::telephony::TelephonyManager::getPhoneType()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(5),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > android::telephony::TelephonyManager::getNetworkOperatorName()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(6),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::telephony::TelephonyManager::getNetworkOperator()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(7),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jboolean android::telephony::TelephonyManager::isNetworkRoaming()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(8),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}

local_ref< java::lang::String > android::telephony::TelephonyManager::getNetworkCountryIso()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(9),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::telephony::TelephonyManager::getNetworkType()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(10),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

jboolean android::telephony::TelephonyManager::hasIccCard()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(11),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(get_jobject());
}

jint android::telephony::TelephonyManager::getSimState()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(12),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > android::telephony::TelephonyManager::getSimOperator()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(13),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::telephony::TelephonyManager::getSimOperatorName()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(14),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::telephony::TelephonyManager::getSimCountryIso()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(15),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::telephony::TelephonyManager::getSimSerialNumber()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(16),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::telephony::TelephonyManager::getSubscriberId()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(17),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::telephony::TelephonyManager::getLine1Number()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(18),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::telephony::TelephonyManager::getVoiceMailNumber()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(19),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::telephony::TelephonyManager::getVoiceMailAlphaTag()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(20),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::telephony::TelephonyManager::getCallState()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(21),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(21), 
		jint >
	(get_jobject());
}

jint android::telephony::TelephonyManager::getDataActivity()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(22),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(22), 
		jint >
	(get_jobject());
}

jint android::telephony::TelephonyManager::getDataState()
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(23),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(23), 
		jint >
	(get_jobject());
}

void android::telephony::TelephonyManager::listen(local_ref< android::telephony::PhoneStateListener > const &a0, jint a1)
{
	return call_method<
		android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
		android::telephony::TelephonyManager::J2CPP_METHOD_NAME(24),
		android::telephony::TelephonyManager::J2CPP_METHOD_SIGNATURE(24), 
		void >
	(get_jobject(), a0, a1);
}



static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(0),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::telephony::TelephonyManager::ACTION_PHONE_STATE_CHANGED;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(1),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::telephony::TelephonyManager::EXTRA_STATE;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(2),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::telephony::TelephonyManager::EXTRA_STATE_IDLE;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(3),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::telephony::TelephonyManager::EXTRA_STATE_RINGING;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(4),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::telephony::TelephonyManager::EXTRA_STATE_OFFHOOK;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(5),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::telephony::TelephonyManager::EXTRA_INCOMING_NUMBER;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(6),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::telephony::TelephonyManager::PHONE_TYPE_NONE;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(7),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::telephony::TelephonyManager::PHONE_TYPE_GSM;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(8),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::telephony::TelephonyManager::PHONE_TYPE_CDMA;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(9),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::telephony::TelephonyManager::NETWORK_TYPE_UNKNOWN;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(10),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::telephony::TelephonyManager::NETWORK_TYPE_GPRS;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(11),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::telephony::TelephonyManager::NETWORK_TYPE_EDGE;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(12),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::telephony::TelephonyManager::NETWORK_TYPE_UMTS;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(13),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(13),
	jint
> android::telephony::TelephonyManager::NETWORK_TYPE_CDMA;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(14),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::telephony::TelephonyManager::NETWORK_TYPE_EVDO_0;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(15),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::telephony::TelephonyManager::NETWORK_TYPE_EVDO_A;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(16),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::telephony::TelephonyManager::NETWORK_TYPE_1xRTT;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(17),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(17),
	jint
> android::telephony::TelephonyManager::NETWORK_TYPE_HSDPA;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(18),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(18),
	jint
> android::telephony::TelephonyManager::NETWORK_TYPE_HSUPA;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(19),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(19),
	jint
> android::telephony::TelephonyManager::NETWORK_TYPE_HSPA;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(20),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(20),
	jint
> android::telephony::TelephonyManager::NETWORK_TYPE_IDEN;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(21),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(21),
	jint
> android::telephony::TelephonyManager::SIM_STATE_UNKNOWN;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(22),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(22),
	jint
> android::telephony::TelephonyManager::SIM_STATE_ABSENT;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(23),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(23),
	jint
> android::telephony::TelephonyManager::SIM_STATE_PIN_REQUIRED;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(24),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(24),
	jint
> android::telephony::TelephonyManager::SIM_STATE_PUK_REQUIRED;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(25),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(25),
	jint
> android::telephony::TelephonyManager::SIM_STATE_NETWORK_LOCKED;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(26),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(26),
	jint
> android::telephony::TelephonyManager::SIM_STATE_READY;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(27),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(27),
	jint
> android::telephony::TelephonyManager::CALL_STATE_IDLE;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(28),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(28),
	jint
> android::telephony::TelephonyManager::CALL_STATE_RINGING;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(29),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(29),
	jint
> android::telephony::TelephonyManager::CALL_STATE_OFFHOOK;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(30),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(30),
	jint
> android::telephony::TelephonyManager::DATA_ACTIVITY_NONE;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(31),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(31),
	jint
> android::telephony::TelephonyManager::DATA_ACTIVITY_IN;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(32),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(32),
	jint
> android::telephony::TelephonyManager::DATA_ACTIVITY_OUT;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(33),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(33),
	jint
> android::telephony::TelephonyManager::DATA_ACTIVITY_INOUT;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(34),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(34),
	jint
> android::telephony::TelephonyManager::DATA_ACTIVITY_DORMANT;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(35),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(35),
	jint
> android::telephony::TelephonyManager::DATA_DISCONNECTED;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(36),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(36),
	jint
> android::telephony::TelephonyManager::DATA_CONNECTING;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(37),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(37),
	jint
> android::telephony::TelephonyManager::DATA_CONNECTED;

static_field<
	android::telephony::TelephonyManager::J2CPP_CLASS_NAME,
	android::telephony::TelephonyManager::J2CPP_FIELD_NAME(38),
	android::telephony::TelephonyManager::J2CPP_FIELD_SIGNATURE(38),
	jint
> android::telephony::TelephonyManager::DATA_SUSPENDED;


J2CPP_DEFINE_CLASS(android::telephony::TelephonyManager,"android/telephony/TelephonyManager")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,1,"getDeviceSoftwareVersion","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,2,"getDeviceId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,3,"getCellLocation","()Landroid/telephony/CellLocation;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,4,"getNeighboringCellInfo","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,5,"getPhoneType","()I")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,6,"getNetworkOperatorName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,7,"getNetworkOperator","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,8,"isNetworkRoaming","()Z")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,9,"getNetworkCountryIso","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,10,"getNetworkType","()I")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,11,"hasIccCard","()Z")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,12,"getSimState","()I")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,13,"getSimOperator","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,14,"getSimOperatorName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,15,"getSimCountryIso","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,16,"getSimSerialNumber","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,17,"getSubscriberId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,18,"getLine1Number","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,19,"getVoiceMailNumber","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,20,"getVoiceMailAlphaTag","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,21,"getCallState","()I")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,22,"getDataActivity","()I")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,23,"getDataState","()I")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,24,"listen","(Landroid/telephony/PhoneStateListener;I)V")
J2CPP_DEFINE_METHOD(android::telephony::TelephonyManager,25,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,0,"ACTION_PHONE_STATE_CHANGED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,1,"EXTRA_STATE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,2,"EXTRA_STATE_IDLE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,3,"EXTRA_STATE_RINGING","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,4,"EXTRA_STATE_OFFHOOK","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,5,"EXTRA_INCOMING_NUMBER","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,6,"PHONE_TYPE_NONE","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,7,"PHONE_TYPE_GSM","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,8,"PHONE_TYPE_CDMA","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,9,"NETWORK_TYPE_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,10,"NETWORK_TYPE_GPRS","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,11,"NETWORK_TYPE_EDGE","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,12,"NETWORK_TYPE_UMTS","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,13,"NETWORK_TYPE_CDMA","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,14,"NETWORK_TYPE_EVDO_0","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,15,"NETWORK_TYPE_EVDO_A","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,16,"NETWORK_TYPE_1xRTT","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,17,"NETWORK_TYPE_HSDPA","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,18,"NETWORK_TYPE_HSUPA","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,19,"NETWORK_TYPE_HSPA","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,20,"NETWORK_TYPE_IDEN","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,21,"SIM_STATE_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,22,"SIM_STATE_ABSENT","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,23,"SIM_STATE_PIN_REQUIRED","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,24,"SIM_STATE_PUK_REQUIRED","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,25,"SIM_STATE_NETWORK_LOCKED","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,26,"SIM_STATE_READY","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,27,"CALL_STATE_IDLE","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,28,"CALL_STATE_RINGING","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,29,"CALL_STATE_OFFHOOK","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,30,"DATA_ACTIVITY_NONE","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,31,"DATA_ACTIVITY_IN","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,32,"DATA_ACTIVITY_OUT","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,33,"DATA_ACTIVITY_INOUT","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,34,"DATA_ACTIVITY_DORMANT","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,35,"DATA_DISCONNECTED","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,36,"DATA_CONNECTING","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,37,"DATA_CONNECTED","I")
J2CPP_DEFINE_FIELD(android::telephony::TelephonyManager,38,"DATA_SUSPENDED","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_TELEPHONYMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
