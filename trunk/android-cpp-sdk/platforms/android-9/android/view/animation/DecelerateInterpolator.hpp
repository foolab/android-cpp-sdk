/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.animation.DecelerateInterpolator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR_HPP_DECL
#define J2CPP_ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class Interpolator; } } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/animation/Interpolator.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view { namespace animation {

	class DecelerateInterpolator;
	class DecelerateInterpolator
		: public object<DecelerateInterpolator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit DecelerateInterpolator(jobject jobj)
		: object<DecelerateInterpolator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::view::animation::Interpolator>() const;


		DecelerateInterpolator();
		DecelerateInterpolator(jfloat);
		DecelerateInterpolator(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		jfloat getInterpolation(jfloat);
	}; //class DecelerateInterpolator

} //namespace animation
} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR_HPP_IMPL

namespace j2cpp {



android::view::animation::DecelerateInterpolator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::view::animation::DecelerateInterpolator::operator local_ref<android::view::animation::Interpolator>() const
{
	return local_ref<android::view::animation::Interpolator>(get_jobject());
}


android::view::animation::DecelerateInterpolator::DecelerateInterpolator()
: object<android::view::animation::DecelerateInterpolator>(
	call_new_object<
		android::view::animation::DecelerateInterpolator::J2CPP_CLASS_NAME,
		android::view::animation::DecelerateInterpolator::J2CPP_METHOD_NAME(0),
		android::view::animation::DecelerateInterpolator::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::view::animation::DecelerateInterpolator::DecelerateInterpolator(jfloat a0)
: object<android::view::animation::DecelerateInterpolator>(
	call_new_object<
		android::view::animation::DecelerateInterpolator::J2CPP_CLASS_NAME,
		android::view::animation::DecelerateInterpolator::J2CPP_METHOD_NAME(1),
		android::view::animation::DecelerateInterpolator::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



android::view::animation::DecelerateInterpolator::DecelerateInterpolator(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::view::animation::DecelerateInterpolator>(
	call_new_object<
		android::view::animation::DecelerateInterpolator::J2CPP_CLASS_NAME,
		android::view::animation::DecelerateInterpolator::J2CPP_METHOD_NAME(2),
		android::view::animation::DecelerateInterpolator::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}


jfloat android::view::animation::DecelerateInterpolator::getInterpolation(jfloat a0)
{
	return call_method<
		android::view::animation::DecelerateInterpolator::J2CPP_CLASS_NAME,
		android::view::animation::DecelerateInterpolator::J2CPP_METHOD_NAME(3),
		android::view::animation::DecelerateInterpolator::J2CPP_METHOD_SIGNATURE(3), 
		jfloat >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::animation::DecelerateInterpolator,"android/view/animation/DecelerateInterpolator")
J2CPP_DEFINE_METHOD(android::view::animation::DecelerateInterpolator,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::animation::DecelerateInterpolator,1,"<init>","(F)V")
J2CPP_DEFINE_METHOD(android::view::animation::DecelerateInterpolator,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::view::animation::DecelerateInterpolator,3,"getInterpolation","(F)F")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_DECELERATEINTERPOLATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
