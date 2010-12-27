/*================================================================================
  code generated by: java2cpp
  class: android.content.ContentResolver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTRESOLVER_HPP_DECL
#define J2CPP_ANDROID_CONTENT_CONTENTRESOLVER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace database { class ContentObserver; } } }
namespace j2cpp { namespace android { namespace accounts { class Account; } } }
namespace j2cpp { namespace android { namespace content { class SyncAdapterType; } } }
namespace j2cpp { namespace android { namespace content { class ContentProviderClient; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class AssetFileDescriptor; } } } }
namespace j2cpp { namespace android { namespace content { class ContentProviderResult; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { class SyncStatusObserver; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace os { class ParcelFileDescriptor; } } }


#include <android/accounts/Account.hpp>
#include <android/content/ContentProviderClient.hpp>
#include <android/content/ContentProviderResult.hpp>
#include <android/content/ContentValues.hpp>
#include <android/content/Context.hpp>
#include <android/content/SyncAdapterType.hpp>
#include <android/content/SyncStatusObserver.hpp>
#include <android/content/res/AssetFileDescriptor.hpp>
#include <android/database/ContentObserver.hpp>
#include <android/database/Cursor.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Bundle.hpp>
#include <android/os/ParcelFileDescriptor.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace content {

	class ContentResolver;
	class ContentResolver
		: public cpp_object<ContentResolver>
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
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
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

		explicit ContentResolver(jobject jobj)
		: cpp_object<ContentResolver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		ContentResolver(local_ref< android::content::Context > const&);
		local_ref< java::lang::String > getType(local_ref< android::net::Uri > const&);
		local_ref< android::database::Cursor > query(local_ref< android::net::Uri > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&, local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&, local_ref< java::lang::String > const&);
		local_ref< java::io::InputStream > openInputStream(local_ref< android::net::Uri > const&);
		local_ref< java::io::OutputStream > openOutputStream(local_ref< android::net::Uri > const&);
		local_ref< java::io::OutputStream > openOutputStream(local_ref< android::net::Uri > const&, local_ref< java::lang::String > const&);
		local_ref< android::os::ParcelFileDescriptor > openFileDescriptor(local_ref< android::net::Uri > const&, local_ref< java::lang::String > const&);
		local_ref< android::content::res::AssetFileDescriptor > openAssetFileDescriptor(local_ref< android::net::Uri > const&, local_ref< java::lang::String > const&);
		local_ref< android::net::Uri > insert(local_ref< android::net::Uri > const&, local_ref< android::content::ContentValues > const&);
		local_ref< cpp_object_array<android::content::ContentProviderResult, 1> > applyBatch(local_ref< java::lang::String > const&, local_ref< java::util::ArrayList > const&);
		cpp_int bulkInsert(local_ref< android::net::Uri > const&, local_ref< cpp_object_array<android::content::ContentValues, 1> > const&);
		cpp_int deleteThe(local_ref< android::net::Uri > const&, local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&);
		cpp_int update(local_ref< android::net::Uri > const&, local_ref< android::content::ContentValues > const&, local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&);
		local_ref< android::content::ContentProviderClient > acquireContentProviderClient(local_ref< android::net::Uri > const&);
		local_ref< android::content::ContentProviderClient > acquireContentProviderClient(local_ref< java::lang::String > const&);
		void registerContentObserver(local_ref< android::net::Uri > const&, cpp_boolean const&, local_ref< android::database::ContentObserver > const&);
		void unregisterContentObserver(local_ref< android::database::ContentObserver > const&);
		void notifyChange(local_ref< android::net::Uri > const&, local_ref< android::database::ContentObserver > const&);
		void notifyChange(local_ref< android::net::Uri > const&, local_ref< android::database::ContentObserver > const&, cpp_boolean const&);
		void startSync(local_ref< android::net::Uri > const&, local_ref< android::os::Bundle > const&);
		static void requestSync(local_ref< android::accounts::Account > const&, local_ref< java::lang::String > const&, local_ref< android::os::Bundle > const&);
		static void validateSyncExtrasBundle(local_ref< android::os::Bundle > const&);
		void cancelSync(local_ref< android::net::Uri > const&);
		static void cancelSync(local_ref< android::accounts::Account > const&, local_ref< java::lang::String > const&);
		static local_ref< cpp_object_array<android::content::SyncAdapterType, 1> > getSyncAdapterTypes();
		static cpp_boolean getSyncAutomatically(local_ref< android::accounts::Account > const&, local_ref< java::lang::String > const&);
		static void setSyncAutomatically(local_ref< android::accounts::Account > const&, local_ref< java::lang::String > const&, cpp_boolean const&);
		static cpp_int getIsSyncable(local_ref< android::accounts::Account > const&, local_ref< java::lang::String > const&);
		static void setIsSyncable(local_ref< android::accounts::Account > const&, local_ref< java::lang::String > const&, cpp_int const&);
		static cpp_boolean getMasterSyncAutomatically();
		static void setMasterSyncAutomatically(cpp_boolean const&);
		static cpp_boolean isSyncActive(local_ref< android::accounts::Account > const&, local_ref< java::lang::String > const&);
		static cpp_boolean isSyncPending(local_ref< android::accounts::Account > const&, local_ref< java::lang::String > const&);
		static local_ref< java::lang::Object > addStatusChangeListener(cpp_int const&, local_ref< android::content::SyncStatusObserver > const&);
		static void removeStatusChangeListener(local_ref< java::lang::Object > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > SYNC_EXTRAS_ACCOUNT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > SYNC_EXTRAS_EXPEDITED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > SYNC_EXTRAS_FORCE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > SYNC_EXTRAS_MANUAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > SYNC_EXTRAS_UPLOAD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > SYNC_EXTRAS_INITIALIZE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > SCHEME_CONTENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > SCHEME_ANDROID_RESOURCE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > SCHEME_FILE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > CURSOR_ITEM_BASE_TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::lang::String > > CURSOR_DIR_BASE_TYPE;
	}; //class ContentResolver

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTRESOLVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTRESOLVER_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_CONTENTRESOLVER_HPP_IMPL

namespace j2cpp {



android::content::ContentResolver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::content::ContentResolver::ContentResolver(local_ref< android::content::Context > const &a0)
: cpp_object<android::content::ContentResolver>(
	environment::get().get_jenv()->NewObject(
		get_class<android::content::ContentResolver::J2CPP_CLASS_NAME>(),
		get_method_id<android::content::ContentResolver::J2CPP_CLASS_NAME, android::content::ContentResolver::J2CPP_METHOD_NAME(0), android::content::ContentResolver::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}


local_ref< java::lang::String > android::content::ContentResolver::getType(local_ref< android::net::Uri > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::database::Cursor > android::content::ContentResolver::query(local_ref< android::net::Uri > const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1, local_ref< java::lang::String > const &a2, local_ref< cpp_object_array<java::lang::String, 1> > const &a3, local_ref< java::lang::String > const &a4)
{
	return local_ref< android::database::Cursor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

local_ref< java::io::InputStream > android::content::ContentResolver::openInputStream(local_ref< android::net::Uri > const &a0)
{
	return local_ref< java::io::InputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::OutputStream > android::content::ContentResolver::openOutputStream(local_ref< android::net::Uri > const &a0)
{
	return local_ref< java::io::OutputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::OutputStream > android::content::ContentResolver::openOutputStream(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::io::OutputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::os::ParcelFileDescriptor > android::content::ContentResolver::openFileDescriptor(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< android::os::ParcelFileDescriptor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::content::res::AssetFileDescriptor > android::content::ContentResolver::openAssetFileDescriptor(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< android::content::res::AssetFileDescriptor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::net::Uri > android::content::ContentResolver::insert(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1)
{
	return local_ref< android::net::Uri >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_object_array<android::content::ContentProviderResult, 1> > android::content::ContentResolver::applyBatch(local_ref< java::lang::String > const &a0, local_ref< java::util::ArrayList > const &a1)
{
	return local_ref< cpp_object_array<android::content::ContentProviderResult, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::content::ContentResolver::bulkInsert(local_ref< android::net::Uri > const &a0, local_ref< cpp_object_array<android::content::ContentValues, 1> > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::content::ContentResolver::deleteThe(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1, local_ref< cpp_object_array<java::lang::String, 1> > const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::content::ContentResolver::update(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1, local_ref< java::lang::String > const &a2, local_ref< cpp_object_array<java::lang::String, 1> > const &a3)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< android::content::ContentProviderClient > android::content::ContentResolver::acquireContentProviderClient(local_ref< android::net::Uri > const &a0)
{
	return local_ref< android::content::ContentProviderClient >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::ContentProviderClient > android::content::ContentResolver::acquireContentProviderClient(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::content::ContentProviderClient >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void android::content::ContentResolver::registerContentObserver(local_ref< android::net::Uri > const &a0, cpp_boolean const &a1, local_ref< android::database::ContentObserver > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::content::ContentResolver::unregisterContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void android::content::ContentResolver::notifyChange(local_ref< android::net::Uri > const &a0, local_ref< android::database::ContentObserver > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::content::ContentResolver::notifyChange(local_ref< android::net::Uri > const &a0, local_ref< android::database::ContentObserver > const &a1, cpp_boolean const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::content::ContentResolver::startSync(local_ref< android::net::Uri > const &a0, local_ref< android::os::Bundle > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::content::ContentResolver::requestSync(local_ref< android::accounts::Account > const &a0, local_ref< java::lang::String > const &a1, local_ref< android::os::Bundle > const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::content::ContentResolver::validateSyncExtrasBundle(local_ref< android::os::Bundle > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), true>(),
			a0.get_jtype()
		)
	);
}

void android::content::ContentResolver::cancelSync(local_ref< android::net::Uri > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

void android::content::ContentResolver::cancelSync(local_ref< android::accounts::Account > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_object_array<android::content::SyncAdapterType, 1> > android::content::ContentResolver::getSyncAdapterTypes()
{
	return local_ref< cpp_object_array<android::content::SyncAdapterType, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), true>()
		)
	);
}

cpp_boolean android::content::ContentResolver::getSyncAutomatically(local_ref< android::accounts::Account > const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::content::ContentResolver::setSyncAutomatically(local_ref< android::accounts::Account > const &a0, local_ref< java::lang::String > const &a1, cpp_boolean const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::content::ContentResolver::getIsSyncable(local_ref< android::accounts::Account > const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::content::ContentResolver::setIsSyncable(local_ref< android::accounts::Account > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), true>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::content::ContentResolver::getMasterSyncAutomatically()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), true>()
		)
	);
}

void android::content::ContentResolver::setMasterSyncAutomatically(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::content::ContentResolver::isSyncActive(local_ref< android::accounts::Account > const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::content::ContentResolver::isSyncPending(local_ref< android::accounts::Account > const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > android::content::ContentResolver::addStatusChangeListener(cpp_int const &a0, local_ref< android::content::SyncStatusObserver > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::content::ContentResolver::removeStatusChangeListener(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), true>(),
			a0.get_jtype()
		)
	);
}


static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(0),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_ACCOUNT;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(1),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_EXPEDITED;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(2),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_FORCE;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(3),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_MANUAL;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(4),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_UPLOAD;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(5),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(6),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(7),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::content::ContentResolver::SYNC_EXTRAS_INITIALIZE;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(8),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> android::content::ContentResolver::SCHEME_CONTENT;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(9),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::content::ContentResolver::SCHEME_ANDROID_RESOURCE;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(10),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::content::ContentResolver::SCHEME_FILE;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(11),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::lang::String >
> android::content::ContentResolver::CURSOR_ITEM_BASE_TYPE;

static_field<
	android::content::ContentResolver::J2CPP_CLASS_NAME,
	android::content::ContentResolver::J2CPP_FIELD_NAME(12),
	android::content::ContentResolver::J2CPP_FIELD_SIGNATURE(12),
	local_ref< java::lang::String >
> android::content::ContentResolver::CURSOR_DIR_BASE_TYPE;


J2CPP_DEFINE_CLASS(android::content::ContentResolver,"android/content/ContentResolver")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,1,"getType","(Landroid/net/Uri;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,2,"query","(Landroid/net/Uri;[java.lang.StringLjava/lang/String;[java.lang.StringLjava/lang/String;)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,3,"openInputStream","(Landroid/net/Uri;)Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,4,"openOutputStream","(Landroid/net/Uri;)Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,5,"openOutputStream","(Landroid/net/Uri;Ljava/lang/String;)Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,6,"openFileDescriptor","(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,7,"openAssetFileDescriptor","(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,8,"insert","(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,9,"applyBatch","(Ljava/lang/String;Ljava/util/ArrayList;)[android.content.ContentProviderResult")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,10,"bulkInsert","(Landroid/net/Uri;[android.content.ContentValues)I")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,11,"delete","(Landroid/net/Uri;Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,12,"update","(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,13,"acquireContentProviderClient","(Landroid/net/Uri;)Landroid/content/ContentProviderClient;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,14,"acquireContentProviderClient","(Ljava/lang/String;)Landroid/content/ContentProviderClient;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,15,"registerContentObserver","(Landroid/net/Uri;ZLandroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,16,"unregisterContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,17,"notifyChange","(Landroid/net/Uri;Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,18,"notifyChange","(Landroid/net/Uri;Landroid/database/ContentObserver;Z)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,19,"startSync","(Landroid/net/Uri;Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,20,"requestSync","(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,21,"validateSyncExtrasBundle","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,22,"cancelSync","(Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,23,"cancelSync","(Landroid/accounts/Account;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,24,"getSyncAdapterTypes","()[android.content.SyncAdapterType")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,25,"getSyncAutomatically","(Landroid/accounts/Account;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,26,"setSyncAutomatically","(Landroid/accounts/Account;Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,27,"getIsSyncable","(Landroid/accounts/Account;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,28,"setIsSyncable","(Landroid/accounts/Account;Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,29,"getMasterSyncAutomatically","()Z")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,30,"setMasterSyncAutomatically","(Z)V")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,31,"isSyncActive","(Landroid/accounts/Account;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,32,"isSyncPending","(Landroid/accounts/Account;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,33,"addStatusChangeListener","(ILandroid/content/SyncStatusObserver;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::content::ContentResolver,34,"removeStatusChangeListener","(Ljava/lang/Object;)V")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,0,"SYNC_EXTRAS_ACCOUNT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,1,"SYNC_EXTRAS_EXPEDITED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,2,"SYNC_EXTRAS_FORCE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,3,"SYNC_EXTRAS_MANUAL","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,4,"SYNC_EXTRAS_UPLOAD","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,5,"SYNC_EXTRAS_OVERRIDE_TOO_MANY_DELETIONS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,6,"SYNC_EXTRAS_DISCARD_LOCAL_DELETIONS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,7,"SYNC_EXTRAS_INITIALIZE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,8,"SCHEME_CONTENT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,9,"SCHEME_ANDROID_RESOURCE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,10,"SCHEME_FILE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,11,"CURSOR_ITEM_BASE_TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::content::ContentResolver,12,"CURSOR_DIR_BASE_TYPE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTRESOLVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
