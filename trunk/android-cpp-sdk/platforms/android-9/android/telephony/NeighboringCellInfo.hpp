/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.telephony.NeighboringCellInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_NEIGHBORINGCELLINFO_HPP_DECL
#define J2CPP_ANDROID_TELEPHONY_NEIGHBORINGCELLINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace telephony {

	class NeighboringCellInfo;
	class NeighboringCellInfo
		: public object<NeighboringCellInfo>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit NeighboringCellInfo(jobject jobj)
		: object<NeighboringCellInfo>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		NeighboringCellInfo();
		NeighboringCellInfo(jint, jint);
		NeighboringCellInfo(jint, local_ref< java::lang::String > const&, jint);
		NeighboringCellInfo(local_ref< android::os::Parcel > const&);
		jint getRssi();
		jint getLac();
		jint getCid();
		jint getPsc();
		jint getNetworkType();
		void setCid(jint);
		void setRssi(jint);
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > UNKNOWN_RSSI;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > UNKNOWN_CID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class NeighboringCellInfo

} //namespace telephony
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_NEIGHBORINGCELLINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_NEIGHBORINGCELLINFO_HPP_IMPL
#define J2CPP_ANDROID_TELEPHONY_NEIGHBORINGCELLINFO_HPP_IMPL

namespace j2cpp {



android::telephony::NeighboringCellInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::telephony::NeighboringCellInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::telephony::NeighboringCellInfo::NeighboringCellInfo()
: object<android::telephony::NeighboringCellInfo>(
	call_new_object<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(0),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::telephony::NeighboringCellInfo::NeighboringCellInfo(jint a0, jint a1)
: object<android::telephony::NeighboringCellInfo>(
	call_new_object<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(1),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



android::telephony::NeighboringCellInfo::NeighboringCellInfo(jint a0, local_ref< java::lang::String > const &a1, jint a2)
: object<android::telephony::NeighboringCellInfo>(
	call_new_object<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(2),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}



android::telephony::NeighboringCellInfo::NeighboringCellInfo(local_ref< android::os::Parcel > const &a0)
: object<android::telephony::NeighboringCellInfo>(
	call_new_object<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(3),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}


jint android::telephony::NeighboringCellInfo::getRssi()
{
	return call_method<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(4),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

jint android::telephony::NeighboringCellInfo::getLac()
{
	return call_method<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(5),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

jint android::telephony::NeighboringCellInfo::getCid()
{
	return call_method<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(6),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

jint android::telephony::NeighboringCellInfo::getPsc()
{
	return call_method<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(7),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}

jint android::telephony::NeighboringCellInfo::getNetworkType()
{
	return call_method<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(8),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject());
}

void android::telephony::NeighboringCellInfo::setCid(jint a0)
{
	return call_method<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(9),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

void android::telephony::NeighboringCellInfo::setRssi(jint a0)
{
	return call_method<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(10),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::telephony::NeighboringCellInfo::toString()
{
	return call_method<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(11),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::telephony::NeighboringCellInfo::describeContents()
{
	return call_method<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(12),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject());
}

void android::telephony::NeighboringCellInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_NAME(13),
		android::telephony::NeighboringCellInfo::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0, a1);
}



static_field<
	android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
	android::telephony::NeighboringCellInfo::J2CPP_FIELD_NAME(0),
	android::telephony::NeighboringCellInfo::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::telephony::NeighboringCellInfo::UNKNOWN_RSSI;

static_field<
	android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
	android::telephony::NeighboringCellInfo::J2CPP_FIELD_NAME(1),
	android::telephony::NeighboringCellInfo::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::telephony::NeighboringCellInfo::UNKNOWN_CID;

static_field<
	android::telephony::NeighboringCellInfo::J2CPP_CLASS_NAME,
	android::telephony::NeighboringCellInfo::J2CPP_FIELD_NAME(2),
	android::telephony::NeighboringCellInfo::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::os::Parcelable_::Creator >
> android::telephony::NeighboringCellInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::telephony::NeighboringCellInfo,"android/telephony/NeighboringCellInfo")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,1,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,2,"<init>","(ILjava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,3,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,4,"getRssi","()I")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,5,"getLac","()I")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,6,"getCid","()I")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,7,"getPsc","()I")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,8,"getNetworkType","()I")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,9,"setCid","(I)V")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,10,"setRssi","(I)V")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,11,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,12,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,13,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::telephony::NeighboringCellInfo,14,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::telephony::NeighboringCellInfo,0,"UNKNOWN_RSSI","I")
J2CPP_DEFINE_FIELD(android::telephony::NeighboringCellInfo,1,"UNKNOWN_CID","I")
J2CPP_DEFINE_FIELD(android::telephony::NeighboringCellInfo,2,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_NEIGHBORINGCELLINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
