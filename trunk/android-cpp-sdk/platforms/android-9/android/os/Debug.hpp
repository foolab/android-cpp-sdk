/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.Debug
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_DEBUG_HPP_DECL
#define J2CPP_ANDROID_OS_DEBUG_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class FileDescriptor; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Debug_ { class MemoryInfo; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Debug.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/io/FileDescriptor.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class Debug;
	namespace Debug_ {

		class InstructionCount;
		class InstructionCount
			: public object<InstructionCount>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)

			explicit InstructionCount(jobject jobj)
			: object<InstructionCount>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			InstructionCount();
			jboolean resetAndStart();
			jboolean collect();
			jint globalTotal();
			jint globalMethodInvocations();
		}; //class InstructionCount

		class MemoryInfo;
		class MemoryInfo
			: public object<MemoryInfo>
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
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)
			J2CPP_DECLARE_FIELD(6)
			J2CPP_DECLARE_FIELD(7)
			J2CPP_DECLARE_FIELD(8)
			J2CPP_DECLARE_FIELD(9)

			explicit MemoryInfo(jobject jobj)
			: object<MemoryInfo>(jobj)
			, dalvikPss(jobj)
			, dalvikPrivateDirty(jobj)
			, dalvikSharedDirty(jobj)
			, nativePss(jobj)
			, nativePrivateDirty(jobj)
			, nativeSharedDirty(jobj)
			, otherPss(jobj)
			, otherPrivateDirty(jobj)
			, otherSharedDirty(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<android::os::Parcelable>() const;


			MemoryInfo();
			jint getTotalPss();
			jint getTotalPrivateDirty();
			jint getTotalSharedDirty();
			jint describeContents();
			void writeToParcel(local_ref< android::os::Parcel >  const&, jint);
			void readFromParcel(local_ref< android::os::Parcel >  const&);

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > dalvikPss;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > dalvikPrivateDirty;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > dalvikSharedDirty;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > nativePss;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > nativePrivateDirty;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > nativeSharedDirty;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > otherPss;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > otherPrivateDirty;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > otherSharedDirty;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< android::os::Parcelable_::Creator > > CREATOR;
		}; //class MemoryInfo

	} //namespace Debug_

	class Debug
		: public object<Debug>
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
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_METHOD(50)
		J2CPP_DECLARE_METHOD(51)
		J2CPP_DECLARE_METHOD(52)
		J2CPP_DECLARE_METHOD(53)
		J2CPP_DECLARE_METHOD(54)
		J2CPP_DECLARE_METHOD(55)
		J2CPP_DECLARE_METHOD(56)
		J2CPP_DECLARE_METHOD(57)
		J2CPP_DECLARE_METHOD(58)
		J2CPP_DECLARE_METHOD(59)
		J2CPP_DECLARE_METHOD(60)
		J2CPP_DECLARE_METHOD(61)
		J2CPP_DECLARE_METHOD(62)
		J2CPP_DECLARE_METHOD(63)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		typedef Debug_::InstructionCount InstructionCount;
		typedef Debug_::MemoryInfo MemoryInfo;

		explicit Debug(jobject jobj)
		: object<Debug>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static void waitForDebugger();
		static jboolean waitingForDebugger();
		static jboolean isDebuggerConnected();
		static void changeDebugPort(jint);
		static void startNativeTracing();
		static void stopNativeTracing();
		static void enableEmulatorTraceOutput();
		static void startMethodTracing();
		static void startMethodTracing(local_ref< java::lang::String >  const&);
		static void startMethodTracing(local_ref< java::lang::String >  const&, jint);
		static void startMethodTracing(local_ref< java::lang::String >  const&, jint, jint);
		static void stopMethodTracing();
		static jlong threadCpuTimeNanos();
		static void startAllocCounting();
		static void stopAllocCounting();
		static jint getGlobalAllocCount();
		static jint getGlobalAllocSize();
		static jint getGlobalFreedCount();
		static jint getGlobalFreedSize();
		static jint getGlobalClassInitCount();
		static jint getGlobalClassInitTime();
		static jint getGlobalExternalAllocCount();
		static jint getGlobalExternalAllocSize();
		static jint getGlobalExternalFreedCount();
		static jint getGlobalExternalFreedSize();
		static jint getGlobalGcInvocationCount();
		static jint getThreadAllocCount();
		static jint getThreadAllocSize();
		static jint getThreadExternalAllocCount();
		static jint getThreadExternalAllocSize();
		static jint getThreadGcInvocationCount();
		static void resetGlobalAllocCount();
		static void resetGlobalAllocSize();
		static void resetGlobalFreedCount();
		static void resetGlobalFreedSize();
		static void resetGlobalClassInitCount();
		static void resetGlobalClassInitTime();
		static void resetGlobalExternalAllocCount();
		static void resetGlobalExternalAllocSize();
		static void resetGlobalExternalFreedCount();
		static void resetGlobalExternalFreedSize();
		static void resetGlobalGcInvocationCount();
		static void resetThreadAllocCount();
		static void resetThreadAllocSize();
		static void resetThreadExternalAllocCount();
		static void resetThreadExternalAllocSize();
		static void resetThreadGcInvocationCount();
		static void resetAllCounts();
		static jlong getNativeHeapSize();
		static jlong getNativeHeapAllocatedSize();
		static jlong getNativeHeapFreeSize();
		static void getMemoryInfo(local_ref< android::os::Debug_::MemoryInfo >  const&);
		static jint setAllocationLimit(jint);
		static jint setGlobalAllocationLimit(jint);
		static void printLoadedClasses(jint);
		static jint getLoadedClassCount();
		static void dumpHprofData(local_ref< java::lang::String >  const&);
		static jint getBinderSentTransactions();
		static jint getBinderReceivedTransactions();
		static jint getBinderLocalObjectCount();
		static jint getBinderProxyObjectCount();
		static jint getBinderDeathObjectCount();
		static jboolean dumpService(local_ref< java::lang::String >  const&, local_ref< java::io::FileDescriptor >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > TRACE_COUNT_ALLOCS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > SHOW_FULL_DETAIL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > SHOW_CLASSLOADER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > SHOW_INITIALIZED;
	}; //class Debug

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_DEBUG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_DEBUG_HPP_IMPL
#define J2CPP_ANDROID_OS_DEBUG_HPP_IMPL

namespace j2cpp {




android::os::Debug_::InstructionCount::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::os::Debug_::InstructionCount::InstructionCount()
: object<android::os::Debug_::InstructionCount>(
	call_new_object<
		android::os::Debug_::InstructionCount::J2CPP_CLASS_NAME,
		android::os::Debug_::InstructionCount::J2CPP_METHOD_NAME(0),
		android::os::Debug_::InstructionCount::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jboolean android::os::Debug_::InstructionCount::resetAndStart()
{
	return call_method<
		android::os::Debug_::InstructionCount::J2CPP_CLASS_NAME,
		android::os::Debug_::InstructionCount::J2CPP_METHOD_NAME(1),
		android::os::Debug_::InstructionCount::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject());
}

jboolean android::os::Debug_::InstructionCount::collect()
{
	return call_method<
		android::os::Debug_::InstructionCount::J2CPP_CLASS_NAME,
		android::os::Debug_::InstructionCount::J2CPP_METHOD_NAME(2),
		android::os::Debug_::InstructionCount::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject());
}

jint android::os::Debug_::InstructionCount::globalTotal()
{
	return call_method<
		android::os::Debug_::InstructionCount::J2CPP_CLASS_NAME,
		android::os::Debug_::InstructionCount::J2CPP_METHOD_NAME(3),
		android::os::Debug_::InstructionCount::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

jint android::os::Debug_::InstructionCount::globalMethodInvocations()
{
	return call_method<
		android::os::Debug_::InstructionCount::J2CPP_CLASS_NAME,
		android::os::Debug_::InstructionCount::J2CPP_METHOD_NAME(4),
		android::os::Debug_::InstructionCount::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::os::Debug_::InstructionCount,"android/os/Debug$InstructionCount")
J2CPP_DEFINE_METHOD(android::os::Debug_::InstructionCount,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::Debug_::InstructionCount,1,"resetAndStart","()Z")
J2CPP_DEFINE_METHOD(android::os::Debug_::InstructionCount,2,"collect","()Z")
J2CPP_DEFINE_METHOD(android::os::Debug_::InstructionCount,3,"globalTotal","()I")
J2CPP_DEFINE_METHOD(android::os::Debug_::InstructionCount,4,"globalMethodInvocations","()I")


android::os::Debug_::MemoryInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::os::Debug_::MemoryInfo::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::os::Debug_::MemoryInfo::MemoryInfo()
: object<android::os::Debug_::MemoryInfo>(
	call_new_object<
		android::os::Debug_::MemoryInfo::J2CPP_CLASS_NAME,
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_NAME(0),
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, dalvikPss(get_jobject())
, dalvikPrivateDirty(get_jobject())
, dalvikSharedDirty(get_jobject())
, nativePss(get_jobject())
, nativePrivateDirty(get_jobject())
, nativeSharedDirty(get_jobject())
, otherPss(get_jobject())
, otherPrivateDirty(get_jobject())
, otherSharedDirty(get_jobject())
{
}


jint android::os::Debug_::MemoryInfo::getTotalPss()
{
	return call_method<
		android::os::Debug_::MemoryInfo::J2CPP_CLASS_NAME,
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_NAME(1),
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jint android::os::Debug_::MemoryInfo::getTotalPrivateDirty()
{
	return call_method<
		android::os::Debug_::MemoryInfo::J2CPP_CLASS_NAME,
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_NAME(2),
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

jint android::os::Debug_::MemoryInfo::getTotalSharedDirty()
{
	return call_method<
		android::os::Debug_::MemoryInfo::J2CPP_CLASS_NAME,
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_NAME(3),
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

jint android::os::Debug_::MemoryInfo::describeContents()
{
	return call_method<
		android::os::Debug_::MemoryInfo::J2CPP_CLASS_NAME,
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_NAME(4),
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

void android::os::Debug_::MemoryInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::os::Debug_::MemoryInfo::J2CPP_CLASS_NAME,
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_NAME(5),
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

void android::os::Debug_::MemoryInfo::readFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return call_method<
		android::os::Debug_::MemoryInfo::J2CPP_CLASS_NAME,
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_NAME(6),
		android::os::Debug_::MemoryInfo::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}



static_field<
	android::os::Debug_::MemoryInfo::J2CPP_CLASS_NAME,
	android::os::Debug_::MemoryInfo::J2CPP_FIELD_NAME(9),
	android::os::Debug_::MemoryInfo::J2CPP_FIELD_SIGNATURE(9),
	local_ref< android::os::Parcelable_::Creator >
> android::os::Debug_::MemoryInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::os::Debug_::MemoryInfo,"android/os/Debug$MemoryInfo")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,1,"getTotalPss","()I")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,2,"getTotalPrivateDirty","()I")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,3,"getTotalSharedDirty","()I")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,4,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,5,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,6,"readFromParcel","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::os::Debug_::MemoryInfo,7,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,0,"dalvikPss","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,1,"dalvikPrivateDirty","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,2,"dalvikSharedDirty","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,3,"nativePss","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,4,"nativePrivateDirty","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,5,"nativeSharedDirty","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,6,"otherPss","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,7,"otherPrivateDirty","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,8,"otherSharedDirty","I")
J2CPP_DEFINE_FIELD(android::os::Debug_::MemoryInfo,9,"CREATOR","Landroid/os/Parcelable$Creator;")



android::os::Debug::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void android::os::Debug::waitForDebugger()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(1),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(1), 
		void >
	();
}

jboolean android::os::Debug::waitingForDebugger()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(2),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	();
}

jboolean android::os::Debug::isDebuggerConnected()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(3),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	();
}

void android::os::Debug::changeDebugPort(jint a0)
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(4),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(a0);
}

void android::os::Debug::startNativeTracing()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(5),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(5), 
		void >
	();
}

void android::os::Debug::stopNativeTracing()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(6),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(6), 
		void >
	();
}

void android::os::Debug::enableEmulatorTraceOutput()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(7),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(7), 
		void >
	();
}

void android::os::Debug::startMethodTracing()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(8),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(8), 
		void >
	();
}

void android::os::Debug::startMethodTracing(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(9),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(a0);
}

void android::os::Debug::startMethodTracing(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(10),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(a0, a1);
}

void android::os::Debug::startMethodTracing(local_ref< java::lang::String > const &a0, jint a1, jint a2)
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(11),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(a0, a1, a2);
}

void android::os::Debug::stopMethodTracing()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(12),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(12), 
		void >
	();
}

jlong android::os::Debug::threadCpuTimeNanos()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(13),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(13), 
		jlong >
	();
}

void android::os::Debug::startAllocCounting()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(14),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(14), 
		void >
	();
}

void android::os::Debug::stopAllocCounting()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(15),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(15), 
		void >
	();
}

jint android::os::Debug::getGlobalAllocCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(16),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(16), 
		jint >
	();
}

jint android::os::Debug::getGlobalAllocSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(17),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(17), 
		jint >
	();
}

jint android::os::Debug::getGlobalFreedCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(18),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(18), 
		jint >
	();
}

jint android::os::Debug::getGlobalFreedSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(19),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(19), 
		jint >
	();
}

jint android::os::Debug::getGlobalClassInitCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(20),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(20), 
		jint >
	();
}

jint android::os::Debug::getGlobalClassInitTime()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(21),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(21), 
		jint >
	();
}

jint android::os::Debug::getGlobalExternalAllocCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(22),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(22), 
		jint >
	();
}

jint android::os::Debug::getGlobalExternalAllocSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(23),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(23), 
		jint >
	();
}

jint android::os::Debug::getGlobalExternalFreedCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(24),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(24), 
		jint >
	();
}

jint android::os::Debug::getGlobalExternalFreedSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(25),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(25), 
		jint >
	();
}

jint android::os::Debug::getGlobalGcInvocationCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(26),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(26), 
		jint >
	();
}

jint android::os::Debug::getThreadAllocCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(27),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(27), 
		jint >
	();
}

jint android::os::Debug::getThreadAllocSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(28),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(28), 
		jint >
	();
}

jint android::os::Debug::getThreadExternalAllocCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(29),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(29), 
		jint >
	();
}

jint android::os::Debug::getThreadExternalAllocSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(30),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(30), 
		jint >
	();
}

jint android::os::Debug::getThreadGcInvocationCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(31),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(31), 
		jint >
	();
}

void android::os::Debug::resetGlobalAllocCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(32),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(32), 
		void >
	();
}

void android::os::Debug::resetGlobalAllocSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(33),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(33), 
		void >
	();
}

void android::os::Debug::resetGlobalFreedCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(34),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(34), 
		void >
	();
}

void android::os::Debug::resetGlobalFreedSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(35),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(35), 
		void >
	();
}

void android::os::Debug::resetGlobalClassInitCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(36),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(36), 
		void >
	();
}

void android::os::Debug::resetGlobalClassInitTime()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(37),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(37), 
		void >
	();
}

void android::os::Debug::resetGlobalExternalAllocCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(38),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(38), 
		void >
	();
}

void android::os::Debug::resetGlobalExternalAllocSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(39),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(39), 
		void >
	();
}

void android::os::Debug::resetGlobalExternalFreedCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(40),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(40), 
		void >
	();
}

void android::os::Debug::resetGlobalExternalFreedSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(41),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(41), 
		void >
	();
}

void android::os::Debug::resetGlobalGcInvocationCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(42),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(42), 
		void >
	();
}

void android::os::Debug::resetThreadAllocCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(43),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(43), 
		void >
	();
}

void android::os::Debug::resetThreadAllocSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(44),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(44), 
		void >
	();
}

void android::os::Debug::resetThreadExternalAllocCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(45),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(45), 
		void >
	();
}

void android::os::Debug::resetThreadExternalAllocSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(46),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(46), 
		void >
	();
}

void android::os::Debug::resetThreadGcInvocationCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(47),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(47), 
		void >
	();
}

void android::os::Debug::resetAllCounts()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(48),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(48), 
		void >
	();
}

jlong android::os::Debug::getNativeHeapSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(49),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(49), 
		jlong >
	();
}

jlong android::os::Debug::getNativeHeapAllocatedSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(50),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(50), 
		jlong >
	();
}

jlong android::os::Debug::getNativeHeapFreeSize()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(51),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(51), 
		jlong >
	();
}

void android::os::Debug::getMemoryInfo(local_ref< android::os::Debug_::MemoryInfo > const &a0)
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(52),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(52), 
		void >
	(a0);
}

jint android::os::Debug::setAllocationLimit(jint a0)
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(53),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(53), 
		jint >
	(a0);
}

jint android::os::Debug::setGlobalAllocationLimit(jint a0)
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(54),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(54), 
		jint >
	(a0);
}

void android::os::Debug::printLoadedClasses(jint a0)
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(55),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(55), 
		void >
	(a0);
}

jint android::os::Debug::getLoadedClassCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(56),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(56), 
		jint >
	();
}

void android::os::Debug::dumpHprofData(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(57),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(57), 
		void >
	(a0);
}

jint android::os::Debug::getBinderSentTransactions()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(58),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(58), 
		jint >
	();
}

jint android::os::Debug::getBinderReceivedTransactions()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(59),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(59), 
		jint >
	();
}

jint android::os::Debug::getBinderLocalObjectCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(60),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(60), 
		jint >
	();
}

jint android::os::Debug::getBinderProxyObjectCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(61),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(61), 
		jint >
	();
}

jint android::os::Debug::getBinderDeathObjectCount()
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(62),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(62), 
		jint >
	();
}

jboolean android::os::Debug::dumpService(local_ref< java::lang::String > const &a0, local_ref< java::io::FileDescriptor > const &a1, local_ref< array< local_ref< java::lang::String >, 1> > const &a2)
{
	return call_static_method<
		android::os::Debug::J2CPP_CLASS_NAME,
		android::os::Debug::J2CPP_METHOD_NAME(63),
		android::os::Debug::J2CPP_METHOD_SIGNATURE(63), 
		jboolean >
	(a0, a1, a2);
}


static_field<
	android::os::Debug::J2CPP_CLASS_NAME,
	android::os::Debug::J2CPP_FIELD_NAME(0),
	android::os::Debug::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::os::Debug::TRACE_COUNT_ALLOCS;

static_field<
	android::os::Debug::J2CPP_CLASS_NAME,
	android::os::Debug::J2CPP_FIELD_NAME(1),
	android::os::Debug::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::os::Debug::SHOW_FULL_DETAIL;

static_field<
	android::os::Debug::J2CPP_CLASS_NAME,
	android::os::Debug::J2CPP_FIELD_NAME(2),
	android::os::Debug::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::os::Debug::SHOW_CLASSLOADER;

static_field<
	android::os::Debug::J2CPP_CLASS_NAME,
	android::os::Debug::J2CPP_FIELD_NAME(3),
	android::os::Debug::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::os::Debug::SHOW_INITIALIZED;


J2CPP_DEFINE_CLASS(android::os::Debug,"android/os/Debug")
J2CPP_DEFINE_METHOD(android::os::Debug,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,1,"waitForDebugger","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,2,"waitingForDebugger","()Z")
J2CPP_DEFINE_METHOD(android::os::Debug,3,"isDebuggerConnected","()Z")
J2CPP_DEFINE_METHOD(android::os::Debug,4,"changeDebugPort","(I)V")
J2CPP_DEFINE_METHOD(android::os::Debug,5,"startNativeTracing","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,6,"stopNativeTracing","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,7,"enableEmulatorTraceOutput","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,8,"startMethodTracing","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,9,"startMethodTracing","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::Debug,10,"startMethodTracing","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::os::Debug,11,"startMethodTracing","(Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(android::os::Debug,12,"stopMethodTracing","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,13,"threadCpuTimeNanos","()J")
J2CPP_DEFINE_METHOD(android::os::Debug,14,"startAllocCounting","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,15,"stopAllocCounting","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,16,"getGlobalAllocCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,17,"getGlobalAllocSize","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,18,"getGlobalFreedCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,19,"getGlobalFreedSize","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,20,"getGlobalClassInitCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,21,"getGlobalClassInitTime","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,22,"getGlobalExternalAllocCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,23,"getGlobalExternalAllocSize","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,24,"getGlobalExternalFreedCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,25,"getGlobalExternalFreedSize","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,26,"getGlobalGcInvocationCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,27,"getThreadAllocCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,28,"getThreadAllocSize","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,29,"getThreadExternalAllocCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,30,"getThreadExternalAllocSize","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,31,"getThreadGcInvocationCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,32,"resetGlobalAllocCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,33,"resetGlobalAllocSize","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,34,"resetGlobalFreedCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,35,"resetGlobalFreedSize","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,36,"resetGlobalClassInitCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,37,"resetGlobalClassInitTime","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,38,"resetGlobalExternalAllocCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,39,"resetGlobalExternalAllocSize","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,40,"resetGlobalExternalFreedCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,41,"resetGlobalExternalFreedSize","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,42,"resetGlobalGcInvocationCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,43,"resetThreadAllocCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,44,"resetThreadAllocSize","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,45,"resetThreadExternalAllocCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,46,"resetThreadExternalAllocSize","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,47,"resetThreadGcInvocationCount","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,48,"resetAllCounts","()V")
J2CPP_DEFINE_METHOD(android::os::Debug,49,"getNativeHeapSize","()J")
J2CPP_DEFINE_METHOD(android::os::Debug,50,"getNativeHeapAllocatedSize","()J")
J2CPP_DEFINE_METHOD(android::os::Debug,51,"getNativeHeapFreeSize","()J")
J2CPP_DEFINE_METHOD(android::os::Debug,52,"getMemoryInfo","(Landroid/os/Debug$MemoryInfo;)V")
J2CPP_DEFINE_METHOD(android::os::Debug,53,"setAllocationLimit","(I)I")
J2CPP_DEFINE_METHOD(android::os::Debug,54,"setGlobalAllocationLimit","(I)I")
J2CPP_DEFINE_METHOD(android::os::Debug,55,"printLoadedClasses","(I)V")
J2CPP_DEFINE_METHOD(android::os::Debug,56,"getLoadedClassCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,57,"dumpHprofData","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::Debug,58,"getBinderSentTransactions","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,59,"getBinderReceivedTransactions","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,60,"getBinderLocalObjectCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,61,"getBinderProxyObjectCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,62,"getBinderDeathObjectCount","()I")
J2CPP_DEFINE_METHOD(android::os::Debug,63,"dumpService","(Ljava/lang/String;Ljava/io/FileDescriptor;[java.lang.String)Z")
J2CPP_DEFINE_FIELD(android::os::Debug,0,"TRACE_COUNT_ALLOCS","I")
J2CPP_DEFINE_FIELD(android::os::Debug,1,"SHOW_FULL_DETAIL","I")
J2CPP_DEFINE_FIELD(android::os::Debug,2,"SHOW_CLASSLOADER","I")
J2CPP_DEFINE_FIELD(android::os::Debug,3,"SHOW_INITIALIZED","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_DEBUG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
