/*================================================================================
  code generated by: java2cpp
  class: android.content.SearchRecentSuggestionsProvider
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER_HPP_DECL
#define J2CPP_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }


#include <android/content/ContentValues.hpp>
#include <android/database/Cursor.hpp>
#include <android/net/Uri.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content {

	class SearchRecentSuggestionsProvider;
	class SearchRecentSuggestionsProvider
		: public cpp_object<SearchRecentSuggestionsProvider>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		SearchRecentSuggestionsProvider(jobject jobj)
		: cpp_object<SearchRecentSuggestionsProvider>(jobj)
		{
		}

		cpp_int deleteThe(local_ref< android::net::Uri > const&, local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&);
		local_ref< java::lang::String > getType(local_ref< android::net::Uri > const&);
		local_ref< android::net::Uri > insert(local_ref< android::net::Uri > const&, local_ref< android::content::ContentValues > const&);
		cpp_boolean onCreate();
		local_ref< android::database::Cursor > query(local_ref< android::net::Uri > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&, local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&, local_ref< java::lang::String > const&);
		cpp_int update(local_ref< android::net::Uri > const&, local_ref< android::content::ContentValues > const&, local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DATABASE_MODE_QUERIES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > DATABASE_MODE_2LINES;
	}; //class SearchRecentSuggestionsProvider

} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::content::SearchRecentSuggestionsProvider > create< android::content::SearchRecentSuggestionsProvider>()
{
	return local_ref< android::content::SearchRecentSuggestionsProvider >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::SearchRecentSuggestionsProvider::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::SearchRecentSuggestionsProvider::J2CPP_CLASS_NAME, android::content::SearchRecentSuggestionsProvider::J2CPP_METHOD_NAME(0), android::content::SearchRecentSuggestionsProvider::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


cpp_int android::content::SearchRecentSuggestionsProvider::deleteThe(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1, local_ref< cpp_object_array<java::lang::String, 1> > const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::SearchRecentSuggestionsProvider::getType(local_ref< android::net::Uri > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::net::Uri > android::content::SearchRecentSuggestionsProvider::insert(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1)
{
	return local_ref< android::net::Uri >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::content::SearchRecentSuggestionsProvider::onCreate()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< android::database::Cursor > android::content::SearchRecentSuggestionsProvider::query(local_ref< android::net::Uri > const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1, local_ref< java::lang::String > const &a2, local_ref< cpp_object_array<java::lang::String, 1> > const &a3, local_ref< java::lang::String > const &a4)
{
	return local_ref< android::database::Cursor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

cpp_int android::content::SearchRecentSuggestionsProvider::update(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1, local_ref< java::lang::String > const &a2, local_ref< cpp_object_array<java::lang::String, 1> > const &a3)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


static_field<
	android::content::SearchRecentSuggestionsProvider::J2CPP_CLASS_NAME,
	android::content::SearchRecentSuggestionsProvider::J2CPP_FIELD_NAME(0),
	android::content::SearchRecentSuggestionsProvider::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::content::SearchRecentSuggestionsProvider::DATABASE_MODE_QUERIES;

static_field<
	android::content::SearchRecentSuggestionsProvider::J2CPP_CLASS_NAME,
	android::content::SearchRecentSuggestionsProvider::J2CPP_FIELD_NAME(1),
	android::content::SearchRecentSuggestionsProvider::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::content::SearchRecentSuggestionsProvider::DATABASE_MODE_2LINES;


J2CPP_DEFINE_CLASS(android::content::SearchRecentSuggestionsProvider,"android/content/SearchRecentSuggestionsProvider")
J2CPP_DEFINE_METHOD(android::content::SearchRecentSuggestionsProvider,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::SearchRecentSuggestionsProvider,1,"setupSuggestions","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::content::SearchRecentSuggestionsProvider,2,"delete","(Landroid/net/Uri;Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_METHOD(android::content::SearchRecentSuggestionsProvider,3,"getType","(Landroid/net/Uri;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::SearchRecentSuggestionsProvider,4,"insert","(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;")
J2CPP_DEFINE_METHOD(android::content::SearchRecentSuggestionsProvider,5,"onCreate","()Z")
J2CPP_DEFINE_METHOD(android::content::SearchRecentSuggestionsProvider,6,"query","(Landroid/net/Uri;[java.lang.StringLjava/lang/String;[java.lang.StringLjava/lang/String;)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::content::SearchRecentSuggestionsProvider,7,"update","(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_FIELD(android::content::SearchRecentSuggestionsProvider,0,"DATABASE_MODE_QUERIES","I")
J2CPP_DEFINE_FIELD(android::content::SearchRecentSuggestionsProvider,1,"DATABASE_MODE_2LINES","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_SEARCHRECENTSUGGESTIONSPROVIDER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
