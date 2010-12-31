/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.mock.MockCursor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_MOCK_MOCKCURSOR_HPP_DECL
#define J2CPP_ANDROID_TEST_MOCK_MOCKCURSOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace android { namespace content { class ContentResolver; } } }
namespace j2cpp { namespace android { namespace database { class CharArrayBuffer; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace database { class DataSetObserver; } } }
namespace j2cpp { namespace android { namespace database { class ContentObserver; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/content/ContentResolver.hpp>
#include <android/database/CharArrayBuffer.hpp>
#include <android/database/ContentObserver.hpp>
#include <android/database/Cursor.hpp>
#include <android/database/DataSetObserver.hpp>
#include <android/net/Uri.hpp>
#include <android/os/Bundle.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace android { namespace test { namespace mock {

	class MockCursor;
	class MockCursor
		: public object<MockCursor>
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

		explicit MockCursor(jobject jobj)
		: object<MockCursor>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::database::Cursor>() const;


		MockCursor();
		jint getColumnCount();
		jint getColumnIndex(local_ref< java::lang::String >  const&);
		jint getColumnIndexOrThrow(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getColumnName(jint);
		local_ref< array< local_ref< java::lang::String >, 1> > getColumnNames();
		jint getCount();
		jboolean isNull(jint);
		jint getInt(jint);
		jlong getLong(jint);
		jshort getShort(jint);
		jfloat getFloat(jint);
		jdouble getDouble(jint);
		local_ref< array<jbyte,1> > getBlob(jint);
		local_ref< java::lang::String > getString(jint);
		local_ref< android::os::Bundle > getExtras();
		jint getPosition();
		jboolean isAfterLast();
		jboolean isBeforeFirst();
		jboolean isFirst();
		jboolean isLast();
		jboolean move(jint);
		jboolean moveToFirst();
		jboolean moveToLast();
		jboolean moveToNext();
		jboolean moveToPrevious();
		jboolean moveToPosition(jint);
		void copyStringToBuffer(jint, local_ref< android::database::CharArrayBuffer >  const&);
		void deactivate();
		void close();
		jboolean isClosed();
		jboolean requery();
		void registerContentObserver(local_ref< android::database::ContentObserver >  const&);
		void registerDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		local_ref< android::os::Bundle > respond(local_ref< android::os::Bundle >  const&);
		jboolean getWantsAllOnMoveCalls();
		jboolean commitUpdates();
		jboolean commitUpdates(local_ref< java::util::Map >  const&);
		jboolean hasUpdates();
		void setNotificationUri(local_ref< android::content::ContentResolver >  const&, local_ref< android::net::Uri >  const&);
		jboolean supportsUpdates();
		jboolean deleteRow();
		void unregisterContentObserver(local_ref< android::database::ContentObserver >  const&);
		void unregisterDataSetObserver(local_ref< android::database::DataSetObserver >  const&);
		jboolean updateBlob(jint, local_ref< array<jbyte,1> >  const&);
		jboolean updateDouble(jint, jdouble);
		jboolean updateFloat(jint, jfloat);
		jboolean updateInt(jint, jint);
		jboolean updateLong(jint, jlong);
		jboolean updateShort(jint, jshort);
		jboolean updateString(jint, local_ref< java::lang::String >  const&);
		jboolean updateToNull(jint);
		void abortUpdates();
	}; //class MockCursor

} //namespace mock
} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_MOCK_MOCKCURSOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_MOCK_MOCKCURSOR_HPP_IMPL
#define J2CPP_ANDROID_TEST_MOCK_MOCKCURSOR_HPP_IMPL

namespace j2cpp {



android::test::mock::MockCursor::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::test::mock::MockCursor::operator local_ref<android::database::Cursor>() const
{
	return local_ref<android::database::Cursor>(get_jobject());
}


android::test::mock::MockCursor::MockCursor()
: object<android::test::mock::MockCursor>(
	call_new_object<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(0),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jint android::test::mock::MockCursor::getColumnCount()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(1),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jint android::test::mock::MockCursor::getColumnIndex(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(2),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject(), a0);
}

jint android::test::mock::MockCursor::getColumnIndexOrThrow(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(3),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::test::mock::MockCursor::getColumnName(jint a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(4),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::String >, 1> > android::test::mock::MockCursor::getColumnNames()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(5),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array< local_ref< java::lang::String >, 1> > >
	(get_jobject());
}

jint android::test::mock::MockCursor::getCount()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(6),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::isNull(jint a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(7),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0);
}

jint android::test::mock::MockCursor::getInt(jint a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(8),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject(), a0);
}

jlong android::test::mock::MockCursor::getLong(jint a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(9),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(9), 
		jlong >
	(get_jobject(), a0);
}

jshort android::test::mock::MockCursor::getShort(jint a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(10),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(10), 
		jshort >
	(get_jobject(), a0);
}

jfloat android::test::mock::MockCursor::getFloat(jint a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(11),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(11), 
		jfloat >
	(get_jobject(), a0);
}

jdouble android::test::mock::MockCursor::getDouble(jint a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(12),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(12), 
		jdouble >
	(get_jobject(), a0);
}

local_ref< array<jbyte,1> > android::test::mock::MockCursor::getBlob(jint a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(13),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< array<jbyte,1> > >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::test::mock::MockCursor::getString(jint a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(14),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< android::os::Bundle > android::test::mock::MockCursor::getExtras()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(15),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< android::os::Bundle > >
	(get_jobject());
}

jint android::test::mock::MockCursor::getPosition()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(16),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(16), 
		jint >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::isAfterLast()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(17),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(17), 
		jboolean >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::isBeforeFirst()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(18),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(18), 
		jboolean >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::isFirst()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(19),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(19), 
		jboolean >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::isLast()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(20),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::move(jint a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(21),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(21), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::test::mock::MockCursor::moveToFirst()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(22),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(22), 
		jboolean >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::moveToLast()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(23),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(23), 
		jboolean >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::moveToNext()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(24),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(24), 
		jboolean >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::moveToPrevious()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(25),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(25), 
		jboolean >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::moveToPosition(jint a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(26),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(26), 
		jboolean >
	(get_jobject(), a0);
}

void android::test::mock::MockCursor::copyStringToBuffer(jint a0, local_ref< android::database::CharArrayBuffer > const &a1)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(27),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(27), 
		void >
	(get_jobject(), a0, a1);
}

void android::test::mock::MockCursor::deactivate()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(28),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(28), 
		void >
	(get_jobject());
}

void android::test::mock::MockCursor::close()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(29),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(29), 
		void >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::isClosed()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(30),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(30), 
		jboolean >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::requery()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(31),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(31), 
		jboolean >
	(get_jobject());
}

void android::test::mock::MockCursor::registerContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(32),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject(), a0);
}

void android::test::mock::MockCursor::registerDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(33),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(33), 
		void >
	(get_jobject(), a0);
}

local_ref< android::os::Bundle > android::test::mock::MockCursor::respond(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(34),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(34), 
		local_ref< android::os::Bundle > >
	(get_jobject(), a0);
}

jboolean android::test::mock::MockCursor::getWantsAllOnMoveCalls()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(35),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(35), 
		jboolean >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::commitUpdates()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(36),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(36), 
		jboolean >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::commitUpdates(local_ref< java::util::Map > const &a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(37),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(37), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::test::mock::MockCursor::hasUpdates()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(38),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(38), 
		jboolean >
	(get_jobject());
}

void android::test::mock::MockCursor::setNotificationUri(local_ref< android::content::ContentResolver > const &a0, local_ref< android::net::Uri > const &a1)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(39),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(39), 
		void >
	(get_jobject(), a0, a1);
}

jboolean android::test::mock::MockCursor::supportsUpdates()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(40),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(40), 
		jboolean >
	(get_jobject());
}

jboolean android::test::mock::MockCursor::deleteRow()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(41),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(41), 
		jboolean >
	(get_jobject());
}

void android::test::mock::MockCursor::unregisterContentObserver(local_ref< android::database::ContentObserver > const &a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(42),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(42), 
		void >
	(get_jobject(), a0);
}

void android::test::mock::MockCursor::unregisterDataSetObserver(local_ref< android::database::DataSetObserver > const &a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(43),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(43), 
		void >
	(get_jobject(), a0);
}

jboolean android::test::mock::MockCursor::updateBlob(jint a0, local_ref< array<jbyte,1> > const &a1)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(44),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(44), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::test::mock::MockCursor::updateDouble(jint a0, jdouble a1)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(45),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(45), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::test::mock::MockCursor::updateFloat(jint a0, jfloat a1)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(46),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(46), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::test::mock::MockCursor::updateInt(jint a0, jint a1)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(47),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(47), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::test::mock::MockCursor::updateLong(jint a0, jlong a1)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(48),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(48), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::test::mock::MockCursor::updateShort(jint a0, jshort a1)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(49),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(49), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::test::mock::MockCursor::updateString(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(50),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(50), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::test::mock::MockCursor::updateToNull(jint a0)
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(51),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(51), 
		jboolean >
	(get_jobject(), a0);
}

void android::test::mock::MockCursor::abortUpdates()
{
	return call_method<
		android::test::mock::MockCursor::J2CPP_CLASS_NAME,
		android::test::mock::MockCursor::J2CPP_METHOD_NAME(52),
		android::test::mock::MockCursor::J2CPP_METHOD_SIGNATURE(52), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::test::mock::MockCursor,"android/test/mock/MockCursor")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,1,"getColumnCount","()I")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,2,"getColumnIndex","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,3,"getColumnIndexOrThrow","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,4,"getColumnName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,5,"getColumnNames","()[java.lang.String")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,6,"getCount","()I")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,7,"isNull","(I)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,8,"getInt","(I)I")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,9,"getLong","(I)J")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,10,"getShort","(I)S")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,11,"getFloat","(I)F")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,12,"getDouble","(I)D")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,13,"getBlob","(I)[B")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,14,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,15,"getExtras","()Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,16,"getPosition","()I")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,17,"isAfterLast","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,18,"isBeforeFirst","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,19,"isFirst","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,20,"isLast","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,21,"move","(I)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,22,"moveToFirst","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,23,"moveToLast","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,24,"moveToNext","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,25,"moveToPrevious","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,26,"moveToPosition","(I)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,27,"copyStringToBuffer","(ILandroid/database/CharArrayBuffer;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,28,"deactivate","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,29,"close","()V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,30,"isClosed","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,31,"requery","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,32,"registerContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,33,"registerDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,34,"respond","(Landroid/os/Bundle;)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,35,"getWantsAllOnMoveCalls","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,36,"commitUpdates","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,37,"commitUpdates","(Ljava/util/Map;)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,38,"hasUpdates","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,39,"setNotificationUri","(Landroid/content/ContentResolver;Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,40,"supportsUpdates","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,41,"deleteRow","()Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,42,"unregisterContentObserver","(Landroid/database/ContentObserver;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,43,"unregisterDataSetObserver","(Landroid/database/DataSetObserver;)V")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,44,"updateBlob","(I[B)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,45,"updateDouble","(ID)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,46,"updateFloat","(IF)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,47,"updateInt","(II)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,48,"updateLong","(IJ)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,49,"updateShort","(IS)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,50,"updateString","(ILjava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,51,"updateToNull","(I)Z")
J2CPP_DEFINE_METHOD(android::test::mock::MockCursor,52,"abortUpdates","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_MOCK_MOCKCURSOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
