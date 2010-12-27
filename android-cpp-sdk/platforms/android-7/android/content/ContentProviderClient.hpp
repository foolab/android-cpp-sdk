/*================================================================================
  code generated by: java2cpp
  class: android.content.ContentProviderClient
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTPROVIDERCLIENT_HPP_DECL
#define J2CPP_ANDROID_CONTENT_CONTENTPROVIDERCLIENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class AssetFileDescriptor; } } } }
namespace j2cpp { namespace android { namespace content { class ContentProviderResult; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }
namespace j2cpp { namespace android { namespace content { class ContentProvider; } } }
namespace j2cpp { namespace android { namespace os { class ParcelFileDescriptor; } } }


#include <android/content/ContentProvider.hpp>
#include <android/content/ContentProviderResult.hpp>
#include <android/content/ContentValues.hpp>
#include <android/content/res/AssetFileDescriptor.hpp>
#include <android/database/Cursor.hpp>
#include <android/net/Uri.hpp>
#include <android/os/ParcelFileDescriptor.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace content {

	class ContentProviderClient;
	class ContentProviderClient
		: public cpp_object<ContentProviderClient>
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

		explicit ContentProviderClient(jobject jobj)
		: cpp_object<ContentProviderClient>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< android::database::Cursor > query(local_ref< android::net::Uri > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&, local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getType(local_ref< android::net::Uri > const&);
		local_ref< android::net::Uri > insert(local_ref< android::net::Uri > const&, local_ref< android::content::ContentValues > const&);
		cpp_int bulkInsert(local_ref< android::net::Uri > const&, local_ref< cpp_object_array<android::content::ContentValues, 1> > const&);
		cpp_int deleteThe(local_ref< android::net::Uri > const&, local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&);
		cpp_int update(local_ref< android::net::Uri > const&, local_ref< android::content::ContentValues > const&, local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&);
		local_ref< android::os::ParcelFileDescriptor > openFile(local_ref< android::net::Uri > const&, local_ref< java::lang::String > const&);
		local_ref< android::content::res::AssetFileDescriptor > openAssetFile(local_ref< android::net::Uri > const&, local_ref< java::lang::String > const&);
		local_ref< cpp_object_array<android::content::ContentProviderResult, 1> > applyBatch(local_ref< java::util::ArrayList > const&);
		cpp_boolean release();
		local_ref< android::content::ContentProvider > getLocalContentProvider();
	}; //class ContentProviderClient

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTPROVIDERCLIENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_CONTENTPROVIDERCLIENT_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_CONTENTPROVIDERCLIENT_HPP_IMPL

namespace j2cpp {



android::content::ContentProviderClient::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


local_ref< android::database::Cursor > android::content::ContentProviderClient::query(local_ref< android::net::Uri > const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1, local_ref< java::lang::String > const &a2, local_ref< cpp_object_array<java::lang::String, 1> > const &a3, local_ref< java::lang::String > const &a4)
{
	return local_ref< android::database::Cursor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::ContentProviderClient::getType(local_ref< android::net::Uri > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::net::Uri > android::content::ContentProviderClient::insert(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1)
{
	return local_ref< android::net::Uri >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::content::ContentProviderClient::bulkInsert(local_ref< android::net::Uri > const &a0, local_ref< cpp_object_array<android::content::ContentValues, 1> > const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::content::ContentProviderClient::deleteThe(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1, local_ref< cpp_object_array<java::lang::String, 1> > const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::content::ContentProviderClient::update(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1, local_ref< java::lang::String > const &a2, local_ref< cpp_object_array<java::lang::String, 1> > const &a3)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< android::os::ParcelFileDescriptor > android::content::ContentProviderClient::openFile(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< android::os::ParcelFileDescriptor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::content::res::AssetFileDescriptor > android::content::ContentProviderClient::openAssetFile(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< android::content::res::AssetFileDescriptor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_object_array<android::content::ContentProviderResult, 1> > android::content::ContentProviderClient::applyBatch(local_ref< java::util::ArrayList > const &a0)
{
	return local_ref< cpp_object_array<android::content::ContentProviderResult, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::content::ContentProviderClient::release()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< android::content::ContentProvider > android::content::ContentProviderClient::getLocalContentProvider()
{
	return local_ref< android::content::ContentProvider >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::ContentProviderClient,"android/content/ContentProviderClient")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,1,"query","(Landroid/net/Uri;[java.lang.StringLjava/lang/String;[java.lang.StringLjava/lang/String;)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,2,"getType","(Landroid/net/Uri;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,3,"insert","(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,4,"bulkInsert","(Landroid/net/Uri;[android.content.ContentValues)I")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,5,"delete","(Landroid/net/Uri;Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,6,"update","(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,7,"openFile","(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,8,"openAssetFile","(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,9,"applyBatch","(Ljava/util/ArrayList;)[android.content.ContentProviderResult")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,10,"release","()Z")
J2CPP_DEFINE_METHOD(android::content::ContentProviderClient,11,"getLocalContentProvider","()Landroid/content/ContentProvider;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_CONTENTPROVIDERCLIENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
