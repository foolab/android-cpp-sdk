/*================================================================================
  code generated by: java2cpp
  class: android.graphics.drawable.PaintDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_PAINTDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_PAINTDRAWABLE_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { class ShapeDrawable; } } } }


#include <android/graphics/drawable/ShapeDrawable.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class PaintDrawable;
	class PaintDrawable
		: public cpp_object<PaintDrawable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit PaintDrawable(jobject jobj)
		: cpp_object<PaintDrawable>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::ShapeDrawable>() const;


		PaintDrawable();
		PaintDrawable(cpp_int const&);
		void setCornerRadius(cpp_float const&);
		void setCornerRadii(local_ref< cpp_float_array<1> > const&);
	}; //class PaintDrawable

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_PAINTDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_PAINTDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_PAINTDRAWABLE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::PaintDrawable::operator local_ref<android::graphics::drawable::ShapeDrawable>() const
{
	return local_ref<android::graphics::drawable::ShapeDrawable>(get_jtype());
}


android::graphics::drawable::PaintDrawable::PaintDrawable()
: cpp_object<android::graphics::drawable::PaintDrawable>(
	environment::get().get_jenv()->NewObject(
		get_class<android::graphics::drawable::PaintDrawable::J2CPP_CLASS_NAME>(),
		get_method_id<android::graphics::drawable::PaintDrawable::J2CPP_CLASS_NAME, android::graphics::drawable::PaintDrawable::J2CPP_METHOD_NAME(0), android::graphics::drawable::PaintDrawable::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



android::graphics::drawable::PaintDrawable::PaintDrawable(cpp_int const &a0)
: cpp_object<android::graphics::drawable::PaintDrawable>(
	environment::get().get_jenv()->NewObject(
		get_class<android::graphics::drawable::PaintDrawable::J2CPP_CLASS_NAME>(),
		get_method_id<android::graphics::drawable::PaintDrawable::J2CPP_CLASS_NAME, android::graphics::drawable::PaintDrawable::J2CPP_METHOD_NAME(1), android::graphics::drawable::PaintDrawable::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}


void android::graphics::drawable::PaintDrawable::setCornerRadius(cpp_float const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::PaintDrawable::setCornerRadii(local_ref< cpp_float_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::graphics::drawable::PaintDrawable,"android/graphics/drawable/PaintDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PaintDrawable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PaintDrawable,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PaintDrawable,2,"setCornerRadius","(F)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PaintDrawable,3,"setCornerRadii","([F)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::PaintDrawable,4,"inflateTag","(Ljava/lang/String;Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_PAINTDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
