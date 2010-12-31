/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.provider.CallLog
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PROVIDER_CALLLOG_HPP_DECL
#define J2CPP_ANDROID_PROVIDER_CALLLOG_HPP_DECL


namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace provider { class BaseColumns; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/net/Uri.hpp>
#include <android/provider/BaseColumns.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace provider {

	class CallLog;
	namespace CallLog_ {

		class Calls;
		class Calls
			: public object<Calls>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
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

			explicit Calls(jobject jobj)
			: object<Calls>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<android::provider::BaseColumns>() const;


			Calls();
			static local_ref< java::lang::String > getLastOutgoingCall(local_ref< android::content::Context >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::net::Uri > > CONTENT_URI;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::net::Uri > > CONTENT_FILTER_URI;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > DEFAULT_SORT_ORDER;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > CONTENT_TYPE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > CONTENT_ITEM_TYPE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > TYPE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > INCOMING_TYPE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > OUTGOING_TYPE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > MISSED_TYPE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > NUMBER;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > DATE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > DURATION;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::lang::String > > NEW;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< java::lang::String > > CACHED_NAME;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), local_ref< java::lang::String > > CACHED_NUMBER_TYPE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), local_ref< java::lang::String > > CACHED_NUMBER_LABEL;
		}; //class Calls

	} //namespace CallLog_

	class CallLog
		: public object<CallLog>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		typedef CallLog_::Calls Calls;

		explicit CallLog(jobject jobj)
		: object<CallLog>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CallLog();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > AUTHORITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::net::Uri > > CONTENT_URI;
	}; //class CallLog

} //namespace provider
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_PROVIDER_CALLLOG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_PROVIDER_CALLLOG_HPP_IMPL
#define J2CPP_ANDROID_PROVIDER_CALLLOG_HPP_IMPL

namespace j2cpp {




android::provider::CallLog_::Calls::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::provider::CallLog_::Calls::operator local_ref<android::provider::BaseColumns>() const
{
	return local_ref<android::provider::BaseColumns>(get_jobject());
}


android::provider::CallLog_::Calls::Calls()
: object<android::provider::CallLog_::Calls>(
	call_new_object<
		android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
		android::provider::CallLog_::Calls::J2CPP_METHOD_NAME(0),
		android::provider::CallLog_::Calls::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


local_ref< java::lang::String > android::provider::CallLog_::Calls::getLastOutgoingCall(local_ref< android::content::Context > const &a0)
{
	return call_static_method<
		android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
		android::provider::CallLog_::Calls::J2CPP_METHOD_NAME(1),
		android::provider::CallLog_::Calls::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(a0);
}



static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(0),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::net::Uri >
> android::provider::CallLog_::Calls::CONTENT_URI;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(1),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::net::Uri >
> android::provider::CallLog_::Calls::CONTENT_FILTER_URI;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(2),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::provider::CallLog_::Calls::DEFAULT_SORT_ORDER;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(3),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::provider::CallLog_::Calls::CONTENT_TYPE;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(4),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::provider::CallLog_::Calls::CONTENT_ITEM_TYPE;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(5),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::provider::CallLog_::Calls::TYPE;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(6),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::provider::CallLog_::Calls::INCOMING_TYPE;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(7),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::provider::CallLog_::Calls::OUTGOING_TYPE;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(8),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::provider::CallLog_::Calls::MISSED_TYPE;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(9),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::provider::CallLog_::Calls::NUMBER;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(10),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::provider::CallLog_::Calls::DATE;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(11),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::lang::String >
> android::provider::CallLog_::Calls::DURATION;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(12),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(12),
	local_ref< java::lang::String >
> android::provider::CallLog_::Calls::NEW;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(13),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(13),
	local_ref< java::lang::String >
> android::provider::CallLog_::Calls::CACHED_NAME;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(14),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(14),
	local_ref< java::lang::String >
> android::provider::CallLog_::Calls::CACHED_NUMBER_TYPE;

static_field<
	android::provider::CallLog_::Calls::J2CPP_CLASS_NAME,
	android::provider::CallLog_::Calls::J2CPP_FIELD_NAME(15),
	android::provider::CallLog_::Calls::J2CPP_FIELD_SIGNATURE(15),
	local_ref< java::lang::String >
> android::provider::CallLog_::Calls::CACHED_NUMBER_LABEL;


J2CPP_DEFINE_CLASS(android::provider::CallLog_::Calls,"android/provider/CallLog$Calls")
J2CPP_DEFINE_METHOD(android::provider::CallLog_::Calls,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::provider::CallLog_::Calls,1,"getLastOutgoingCall","(Landroid/content/Context;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::provider::CallLog_::Calls,2,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,0,"CONTENT_URI","Landroid/net/Uri;")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,1,"CONTENT_FILTER_URI","Landroid/net/Uri;")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,2,"DEFAULT_SORT_ORDER","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,3,"CONTENT_TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,4,"CONTENT_ITEM_TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,5,"TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,6,"INCOMING_TYPE","I")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,7,"OUTGOING_TYPE","I")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,8,"MISSED_TYPE","I")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,9,"NUMBER","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,10,"DATE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,11,"DURATION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,12,"NEW","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,13,"CACHED_NAME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,14,"CACHED_NUMBER_TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::CallLog_::Calls,15,"CACHED_NUMBER_LABEL","Ljava/lang/String;")



android::provider::CallLog::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::provider::CallLog::CallLog()
: object<android::provider::CallLog>(
	call_new_object<
		android::provider::CallLog::J2CPP_CLASS_NAME,
		android::provider::CallLog::J2CPP_METHOD_NAME(0),
		android::provider::CallLog::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}




static_field<
	android::provider::CallLog::J2CPP_CLASS_NAME,
	android::provider::CallLog::J2CPP_FIELD_NAME(0),
	android::provider::CallLog::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::provider::CallLog::AUTHORITY;

static_field<
	android::provider::CallLog::J2CPP_CLASS_NAME,
	android::provider::CallLog::J2CPP_FIELD_NAME(1),
	android::provider::CallLog::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::net::Uri >
> android::provider::CallLog::CONTENT_URI;


J2CPP_DEFINE_CLASS(android::provider::CallLog,"android/provider/CallLog")
J2CPP_DEFINE_METHOD(android::provider::CallLog,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::provider::CallLog,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::provider::CallLog,0,"AUTHORITY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::provider::CallLog,1,"CONTENT_URI","Landroid/net/Uri;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_PROVIDER_CALLLOG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
