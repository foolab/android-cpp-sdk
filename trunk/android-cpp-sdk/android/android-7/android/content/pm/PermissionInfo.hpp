/*================================================================================
  code generated by: java2cpp
  class: android.content.pm.PermissionInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PERMISSIONINFO_HPP_DECL
#define J2CPP_ANDROID_CONTENT_PM_PERMISSIONINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { namespace pm { class PackageManager; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/content/pm/PackageManager.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace pm {

	class PermissionInfo;
	class PermissionInfo
		: public cpp_object<PermissionInfo>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		PermissionInfo(jobject jobj)
		: cpp_object<PermissionInfo>(jobj)
		, group(jobj)
		, descriptionRes(jobj)
		, nonLocalizedDescription(jobj)
		, protectionLevel(jobj)
		{
		}

		local_ref< java::lang::CharSequence > loadDescription(local_ref< android::content::pm::PackageManager > const&);
		local_ref< java::lang::String > toString();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > PROTECTION_NORMAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > PROTECTION_DANGEROUS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > PROTECTION_SIGNATURE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > PROTECTION_SIGNATURE_OR_SYSTEM;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > group;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > descriptionRes;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::CharSequence > > nonLocalizedDescription;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > protectionLevel;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class PermissionInfo

} //namespace pm
} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PERMISSIONINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_PM_PERMISSIONINFO_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_PM_PERMISSIONINFO_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::content::pm::PermissionInfo > create< android::content::pm::PermissionInfo>()
{
	return local_ref< android::content::pm::PermissionInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::PermissionInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::PermissionInfo::J2CPP_CLASS_NAME, android::content::pm::PermissionInfo::J2CPP_METHOD_NAME(0), android::content::pm::PermissionInfo::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::content::pm::PermissionInfo > create< android::content::pm::PermissionInfo>(local_ref< android::content::pm::PermissionInfo > const &a0)
{
	return local_ref< android::content::pm::PermissionInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::pm::PermissionInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::pm::PermissionInfo::J2CPP_CLASS_NAME, android::content::pm::PermissionInfo::J2CPP_METHOD_NAME(1), android::content::pm::PermissionInfo::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::content::pm::PermissionInfo::loadDescription(local_ref< android::content::pm::PackageManager > const &a0)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::pm::PermissionInfo::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::content::pm::PermissionInfo::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::content::pm::PermissionInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::content::pm::PermissionInfo::J2CPP_CLASS_NAME,
	android::content::pm::PermissionInfo::J2CPP_FIELD_NAME(0),
	android::content::pm::PermissionInfo::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::content::pm::PermissionInfo::PROTECTION_NORMAL;

static_field<
	android::content::pm::PermissionInfo::J2CPP_CLASS_NAME,
	android::content::pm::PermissionInfo::J2CPP_FIELD_NAME(1),
	android::content::pm::PermissionInfo::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::content::pm::PermissionInfo::PROTECTION_DANGEROUS;

static_field<
	android::content::pm::PermissionInfo::J2CPP_CLASS_NAME,
	android::content::pm::PermissionInfo::J2CPP_FIELD_NAME(2),
	android::content::pm::PermissionInfo::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::content::pm::PermissionInfo::PROTECTION_SIGNATURE;

static_field<
	android::content::pm::PermissionInfo::J2CPP_CLASS_NAME,
	android::content::pm::PermissionInfo::J2CPP_FIELD_NAME(3),
	android::content::pm::PermissionInfo::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::content::pm::PermissionInfo::PROTECTION_SIGNATURE_OR_SYSTEM;

static_field<
	android::content::pm::PermissionInfo::J2CPP_CLASS_NAME,
	android::content::pm::PermissionInfo::J2CPP_FIELD_NAME(8),
	android::content::pm::PermissionInfo::J2CPP_FIELD_SIGNATURE(8),
	local_ref< android::os::Parcelable_::Creator >
> android::content::pm::PermissionInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::content::pm::PermissionInfo,"android/content/pm/PermissionInfo")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionInfo,1,"<init>","(Landroid/content/pm/PermissionInfo;)V")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionInfo,2,"loadDescription","(Landroid/content/pm/PackageManager;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionInfo,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionInfo,4,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionInfo,5,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::content::pm::PermissionInfo,6,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::content::pm::PermissionInfo,0,"PROTECTION_NORMAL","I")
J2CPP_DEFINE_FIELD(android::content::pm::PermissionInfo,1,"PROTECTION_DANGEROUS","I")
J2CPP_DEFINE_FIELD(android::content::pm::PermissionInfo,2,"PROTECTION_SIGNATURE","I")
J2CPP_DEFINE_FIELD(android::content::pm::PermissionInfo,3,"PROTECTION_SIGNATURE_OR_SYSTEM","I")
J2CPP_DEFINE_FIELD(android::content::pm::PermissionInfo,4,"group","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::pm::PermissionInfo,5,"descriptionRes","I")
J2CPP_DEFINE_FIELD(android::content::pm::PermissionInfo,6,"nonLocalizedDescription","Ljava/lang/CharSequence;")
J2CPP_DEFINE_FIELD(android::content::pm::PermissionInfo,7,"protectionLevel","I")
J2CPP_DEFINE_FIELD(android::content::pm::PermissionInfo,8,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_PM_PERMISSIONINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
