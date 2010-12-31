/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.backup.BackupHelper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_BACKUPHELPER_HPP_DECL
#define J2CPP_ANDROID_APP_BACKUP_BACKUPHELPER_HPP_DECL


namespace j2cpp { namespace android { namespace os { class ParcelFileDescriptor; } } }
namespace j2cpp { namespace android { namespace app { namespace backup { class BackupDataOutput; } } } }
namespace j2cpp { namespace android { namespace app { namespace backup { class BackupDataInputStream; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/app/backup/BackupDataInputStream.hpp>
#include <android/app/backup/BackupDataOutput.hpp>
#include <android/os/ParcelFileDescriptor.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace app { namespace backup {

	class BackupHelper;
	class BackupHelper
		: public object<BackupHelper>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit BackupHelper(jobject jobj)
		: object<BackupHelper>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void performBackup(local_ref< android::os::ParcelFileDescriptor >  const&, local_ref< android::app::backup::BackupDataOutput >  const&, local_ref< android::os::ParcelFileDescriptor >  const&);
		void restoreEntity(local_ref< android::app::backup::BackupDataInputStream >  const&);
		void writeNewStateDescription(local_ref< android::os::ParcelFileDescriptor >  const&);
	}; //class BackupHelper

} //namespace backup
} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_BACKUPHELPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_BACKUPHELPER_HPP_IMPL
#define J2CPP_ANDROID_APP_BACKUP_BACKUPHELPER_HPP_IMPL

namespace j2cpp {



android::app::backup::BackupHelper::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::app::backup::BackupHelper::performBackup(local_ref< android::os::ParcelFileDescriptor > const &a0, local_ref< android::app::backup::BackupDataOutput > const &a1, local_ref< android::os::ParcelFileDescriptor > const &a2)
{
	return call_method<
		android::app::backup::BackupHelper::J2CPP_CLASS_NAME,
		android::app::backup::BackupHelper::J2CPP_METHOD_NAME(0),
		android::app::backup::BackupHelper::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::app::backup::BackupHelper::restoreEntity(local_ref< android::app::backup::BackupDataInputStream > const &a0)
{
	return call_method<
		android::app::backup::BackupHelper::J2CPP_CLASS_NAME,
		android::app::backup::BackupHelper::J2CPP_METHOD_NAME(1),
		android::app::backup::BackupHelper::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

void android::app::backup::BackupHelper::writeNewStateDescription(local_ref< android::os::ParcelFileDescriptor > const &a0)
{
	return call_method<
		android::app::backup::BackupHelper::J2CPP_CLASS_NAME,
		android::app::backup::BackupHelper::J2CPP_METHOD_NAME(2),
		android::app::backup::BackupHelper::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::app::backup::BackupHelper,"android/app/backup/BackupHelper")
J2CPP_DEFINE_METHOD(android::app::backup::BackupHelper,0,"performBackup","(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::app::backup::BackupHelper,1,"restoreEntity","(Landroid/app/backup/BackupDataInputStream;)V")
J2CPP_DEFINE_METHOD(android::app::backup::BackupHelper,2,"writeNewStateDescription","(Landroid/os/ParcelFileDescriptor;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_BACKUPHELPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
