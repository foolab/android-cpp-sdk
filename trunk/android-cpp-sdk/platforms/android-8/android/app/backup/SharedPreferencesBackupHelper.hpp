/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.backup.SharedPreferencesBackupHelper
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_SHAREDPREFERENCESBACKUPHELPER_HPP_DECL
#define J2CPP_ANDROID_APP_BACKUP_SHAREDPREFERENCESBACKUPHELPER_HPP_DECL


namespace j2cpp { namespace android { namespace os { class ParcelFileDescriptor; } } }
namespace j2cpp { namespace android { namespace app { namespace backup { class BackupDataOutput; } } } }
namespace j2cpp { namespace android { namespace app { namespace backup { class FileBackupHelperBase; } } } }
namespace j2cpp { namespace android { namespace app { namespace backup { class BackupDataInputStream; } } } }
namespace j2cpp { namespace android { namespace app { namespace backup { class BackupHelper; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/app/backup/BackupDataInputStream.hpp>
#include <android/app/backup/BackupDataOutput.hpp>
#include <android/app/backup/BackupHelper.hpp>
#include <android/app/backup/FileBackupHelperBase.hpp>
#include <android/content/Context.hpp>
#include <android/os/ParcelFileDescriptor.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app { namespace backup {

	class SharedPreferencesBackupHelper;
	class SharedPreferencesBackupHelper
		: public object<SharedPreferencesBackupHelper>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit SharedPreferencesBackupHelper(jobject jobj)
		: object<SharedPreferencesBackupHelper>(jobj)
		{
		}

		operator local_ref<android::app::backup::FileBackupHelperBase>() const;
		operator local_ref<android::app::backup::BackupHelper>() const;


		SharedPreferencesBackupHelper(local_ref< android::content::Context > const&, local_ref< array< local_ref< java::lang::String >, 1> > const&);
		void performBackup(local_ref< android::os::ParcelFileDescriptor >  const&, local_ref< android::app::backup::BackupDataOutput >  const&, local_ref< android::os::ParcelFileDescriptor >  const&);
		void restoreEntity(local_ref< android::app::backup::BackupDataInputStream >  const&);
	}; //class SharedPreferencesBackupHelper

} //namespace backup
} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_SHAREDPREFERENCESBACKUPHELPER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_SHAREDPREFERENCESBACKUPHELPER_HPP_IMPL
#define J2CPP_ANDROID_APP_BACKUP_SHAREDPREFERENCESBACKUPHELPER_HPP_IMPL

namespace j2cpp {



android::app::backup::SharedPreferencesBackupHelper::operator local_ref<android::app::backup::FileBackupHelperBase>() const
{
	return local_ref<android::app::backup::FileBackupHelperBase>(get_jobject());
}

android::app::backup::SharedPreferencesBackupHelper::operator local_ref<android::app::backup::BackupHelper>() const
{
	return local_ref<android::app::backup::BackupHelper>(get_jobject());
}


android::app::backup::SharedPreferencesBackupHelper::SharedPreferencesBackupHelper(local_ref< android::content::Context > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1)
: object<android::app::backup::SharedPreferencesBackupHelper>(
	call_new_object<
		android::app::backup::SharedPreferencesBackupHelper::J2CPP_CLASS_NAME,
		android::app::backup::SharedPreferencesBackupHelper::J2CPP_METHOD_NAME(0),
		android::app::backup::SharedPreferencesBackupHelper::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


void android::app::backup::SharedPreferencesBackupHelper::performBackup(local_ref< android::os::ParcelFileDescriptor > const &a0, local_ref< android::app::backup::BackupDataOutput > const &a1, local_ref< android::os::ParcelFileDescriptor > const &a2)
{
	return call_method<
		android::app::backup::SharedPreferencesBackupHelper::J2CPP_CLASS_NAME,
		android::app::backup::SharedPreferencesBackupHelper::J2CPP_METHOD_NAME(1),
		android::app::backup::SharedPreferencesBackupHelper::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::app::backup::SharedPreferencesBackupHelper::restoreEntity(local_ref< android::app::backup::BackupDataInputStream > const &a0)
{
	return call_method<
		android::app::backup::SharedPreferencesBackupHelper::J2CPP_CLASS_NAME,
		android::app::backup::SharedPreferencesBackupHelper::J2CPP_METHOD_NAME(2),
		android::app::backup::SharedPreferencesBackupHelper::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::app::backup::SharedPreferencesBackupHelper,"android/app/backup/SharedPreferencesBackupHelper")
J2CPP_DEFINE_METHOD(android::app::backup::SharedPreferencesBackupHelper,0,"<init>","(Landroid/content/Context;[java.lang.String)V")
J2CPP_DEFINE_METHOD(android::app::backup::SharedPreferencesBackupHelper,1,"performBackup","(Landroid/os/ParcelFileDescriptor;Landroid/app/backup/BackupDataOutput;Landroid/os/ParcelFileDescriptor;)V")
J2CPP_DEFINE_METHOD(android::app::backup::SharedPreferencesBackupHelper,2,"restoreEntity","(Landroid/app/backup/BackupDataInputStream;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_SHAREDPREFERENCESBACKUPHELPER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
