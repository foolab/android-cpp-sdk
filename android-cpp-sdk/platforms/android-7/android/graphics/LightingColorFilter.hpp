/*================================================================================
  code generated by: java2cpp
  class: android.graphics.LightingColorFilter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_LIGHTINGCOLORFILTER_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_LIGHTINGCOLORFILTER_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }


#include <android/graphics/ColorFilter.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class LightingColorFilter;
	class LightingColorFilter
		: public cpp_object<LightingColorFilter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit LightingColorFilter(jobject jobj)
		: cpp_object<LightingColorFilter>(jobj)
		{
		}

		operator local_ref<android::graphics::ColorFilter>() const;


		LightingColorFilter(cpp_int const&, cpp_int const&);
	}; //class LightingColorFilter

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_LIGHTINGCOLORFILTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_LIGHTINGCOLORFILTER_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_LIGHTINGCOLORFILTER_HPP_IMPL

namespace j2cpp {



android::graphics::LightingColorFilter::operator local_ref<android::graphics::ColorFilter>() const
{
	return local_ref<android::graphics::ColorFilter>(get_jtype());
}


android::graphics::LightingColorFilter::LightingColorFilter(cpp_int const &a0, cpp_int const &a1)
: cpp_object<android::graphics::LightingColorFilter>(
	environment::get().get_jenv()->NewObject(
		get_class<android::graphics::LightingColorFilter::J2CPP_CLASS_NAME>(),
		get_method_id<android::graphics::LightingColorFilter::J2CPP_CLASS_NAME, android::graphics::LightingColorFilter::J2CPP_METHOD_NAME(0), android::graphics::LightingColorFilter::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(android::graphics::LightingColorFilter,"android/graphics/LightingColorFilter")
J2CPP_DEFINE_METHOD(android::graphics::LightingColorFilter,0,"<init>","(II)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_LIGHTINGCOLORFILTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
