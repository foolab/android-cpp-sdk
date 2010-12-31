/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.gesture.GesturePoint
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTUREPOINT_HPP_DECL
#define J2CPP_ANDROID_GESTURE_GESTUREPOINT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace gesture {

	class GesturePoint;
	class GesturePoint
		: public object<GesturePoint>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit GesturePoint(jobject jobj)
		: object<GesturePoint>(jobj)
		, x(jobj)
		, y(jobj)
		, timestamp(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		GesturePoint(jfloat, jfloat, jlong);
		local_ref< java::lang::Object > clone();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jfloat > x;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jfloat > y;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jlong > timestamp;
	}; //class GesturePoint

} //namespace gesture
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTUREPOINT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GESTURE_GESTUREPOINT_HPP_IMPL
#define J2CPP_ANDROID_GESTURE_GESTUREPOINT_HPP_IMPL

namespace j2cpp {



android::gesture::GesturePoint::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::gesture::GesturePoint::GesturePoint(jfloat a0, jfloat a1, jlong a2)
: object<android::gesture::GesturePoint>(
	call_new_object<
		android::gesture::GesturePoint::J2CPP_CLASS_NAME,
		android::gesture::GesturePoint::J2CPP_METHOD_NAME(0),
		android::gesture::GesturePoint::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
, x(get_jobject())
, y(get_jobject())
, timestamp(get_jobject())
{
}


local_ref< java::lang::Object > android::gesture::GesturePoint::clone()
{
	return call_method<
		android::gesture::GesturePoint::J2CPP_CLASS_NAME,
		android::gesture::GesturePoint::J2CPP_METHOD_NAME(1),
		android::gesture::GesturePoint::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Object > >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(android::gesture::GesturePoint,"android/gesture/GesturePoint")
J2CPP_DEFINE_METHOD(android::gesture::GesturePoint,0,"<init>","(FFJ)V")
J2CPP_DEFINE_METHOD(android::gesture::GesturePoint,1,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(android::gesture::GesturePoint,0,"x","F")
J2CPP_DEFINE_FIELD(android::gesture::GesturePoint,1,"y","F")
J2CPP_DEFINE_FIELD(android::gesture::GesturePoint,2,"timestamp","J")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GESTURE_GESTUREPOINT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
