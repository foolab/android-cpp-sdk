/*================================================================================
  code generated by: java2cpp
  class: android.gesture.GestureStore
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTURESTORE_HPP_DECL
#define J2CPP_ANDROID_GESTURE_GESTURESTORE_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }
namespace j2cpp { namespace android { namespace gesture { class Gesture; } } }


#include <android/gesture/Gesture.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace android { namespace gesture {

	class GestureStore;
	class GestureStore
		: public cpp_object<GestureStore>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit GestureStore(jobject jobj)
		: cpp_object<GestureStore>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		GestureStore();
		void setOrientationStyle(cpp_int const&);
		cpp_int getOrientationStyle();
		void setSequenceType(cpp_int const&);
		cpp_int getSequenceType();
		local_ref< java::util::Set > getGestureEntries();
		local_ref< java::util::ArrayList > recognize(local_ref< android::gesture::Gesture > const&);
		void addGesture(local_ref< java::lang::String > const&, local_ref< android::gesture::Gesture > const&);
		void removeGesture(local_ref< java::lang::String > const&, local_ref< android::gesture::Gesture > const&);
		void removeEntry(local_ref< java::lang::String > const&);
		local_ref< java::util::ArrayList > getGestures(local_ref< java::lang::String > const&);
		cpp_boolean hasChanged();
		void save(local_ref< java::io::OutputStream > const&);
		void save(local_ref< java::io::OutputStream > const&, cpp_boolean const&);
		void load(local_ref< java::io::InputStream > const&);
		void load(local_ref< java::io::InputStream > const&, cpp_boolean const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > SEQUENCE_INVARIANT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > SEQUENCE_SENSITIVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > ORIENTATION_INVARIANT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > ORIENTATION_SENSITIVE;
	}; //class GestureStore

} //namespace gesture
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTURESTORE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTURESTORE_HPP_IMPL
#define J2CPP_ANDROID_GESTURE_GESTURESTORE_HPP_IMPL

namespace j2cpp {



android::gesture::GestureStore::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::gesture::GestureStore::GestureStore()
: cpp_object<android::gesture::GestureStore>(
	environment::get().get_jenv()->NewObject(
		get_class<android::gesture::GestureStore::J2CPP_CLASS_NAME>(),
		get_method_id<android::gesture::GestureStore::J2CPP_CLASS_NAME, android::gesture::GestureStore::J2CPP_METHOD_NAME(0), android::gesture::GestureStore::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


void android::gesture::GestureStore::setOrientationStyle(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::gesture::GestureStore::getOrientationStyle()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::gesture::GestureStore::setSequenceType(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::gesture::GestureStore::getSequenceType()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::util::Set > android::gesture::GestureStore::getGestureEntries()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::util::ArrayList > android::gesture::GestureStore::recognize(local_ref< android::gesture::Gesture > const &a0)
{
	return local_ref< java::util::ArrayList >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureStore::addGesture(local_ref< java::lang::String > const &a0, local_ref< android::gesture::Gesture > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::gesture::GestureStore::removeGesture(local_ref< java::lang::String > const &a0, local_ref< android::gesture::Gesture > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::gesture::GestureStore::removeEntry(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::ArrayList > android::gesture::GestureStore::getGestures(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::util::ArrayList >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::gesture::GestureStore::hasChanged()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::gesture::GestureStore::save(local_ref< java::io::OutputStream > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureStore::save(local_ref< java::io::OutputStream > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::gesture::GestureStore::load(local_ref< java::io::InputStream > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void android::gesture::GestureStore::load(local_ref< java::io::InputStream > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::gesture::GestureStore::J2CPP_CLASS_NAME,
	android::gesture::GestureStore::J2CPP_FIELD_NAME(0),
	android::gesture::GestureStore::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::gesture::GestureStore::SEQUENCE_INVARIANT;

static_field<
	android::gesture::GestureStore::J2CPP_CLASS_NAME,
	android::gesture::GestureStore::J2CPP_FIELD_NAME(1),
	android::gesture::GestureStore::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::gesture::GestureStore::SEQUENCE_SENSITIVE;

static_field<
	android::gesture::GestureStore::J2CPP_CLASS_NAME,
	android::gesture::GestureStore::J2CPP_FIELD_NAME(2),
	android::gesture::GestureStore::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::gesture::GestureStore::ORIENTATION_INVARIANT;

static_field<
	android::gesture::GestureStore::J2CPP_CLASS_NAME,
	android::gesture::GestureStore::J2CPP_FIELD_NAME(3),
	android::gesture::GestureStore::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::gesture::GestureStore::ORIENTATION_SENSITIVE;


J2CPP_DEFINE_CLASS(android::gesture::GestureStore,"android/gesture/GestureStore")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,1,"setOrientationStyle","(I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,2,"getOrientationStyle","()I")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,3,"setSequenceType","(I)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,4,"getSequenceType","()I")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,5,"getGestureEntries","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,6,"recognize","(Landroid/gesture/Gesture;)Ljava/util/ArrayList;")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,7,"addGesture","(Ljava/lang/String;Landroid/gesture/Gesture;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,8,"removeGesture","(Ljava/lang/String;Landroid/gesture/Gesture;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,9,"removeEntry","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,10,"getGestures","(Ljava/lang/String;)Ljava/util/ArrayList;")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,11,"hasChanged","()Z")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,12,"save","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,13,"save","(Ljava/io/OutputStream;Z)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,14,"load","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(android::gesture::GestureStore,15,"load","(Ljava/io/InputStream;Z)V")
J2CPP_DEFINE_FIELD(android::gesture::GestureStore,0,"SEQUENCE_INVARIANT","I")
J2CPP_DEFINE_FIELD(android::gesture::GestureStore,1,"SEQUENCE_SENSITIVE","I")
J2CPP_DEFINE_FIELD(android::gesture::GestureStore,2,"ORIENTATION_INVARIANT","I")
J2CPP_DEFINE_FIELD(android::gesture::GestureStore,3,"ORIENTATION_SENSITIVE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTURESTORE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
