/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.drawable.shapes.ArcShape
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace shapes { class RectShape; } } } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/drawable/shapes/RectShape.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable { namespace shapes {

	class ArcShape;
	class ArcShape
		: public object<ArcShape>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ArcShape(jobject jobj)
		: object<ArcShape>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::shapes::RectShape>() const;


		ArcShape(jfloat, jfloat);
		void draw(local_ref< android::graphics::Canvas >  const&, local_ref< android::graphics::Paint >  const&);
	}; //class ArcShape

} //namespace shapes
} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE_HPP_IMPL

namespace j2cpp {



android::graphics::drawable::shapes::ArcShape::operator local_ref<android::graphics::drawable::shapes::RectShape>() const
{
	return local_ref<android::graphics::drawable::shapes::RectShape>(get_jobject());
}


android::graphics::drawable::shapes::ArcShape::ArcShape(jfloat a0, jfloat a1)
: object<android::graphics::drawable::shapes::ArcShape>(
	call_new_object<
		android::graphics::drawable::shapes::ArcShape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::ArcShape::J2CPP_METHOD_NAME(0),
		android::graphics::drawable::shapes::ArcShape::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}


void android::graphics::drawable::shapes::ArcShape::draw(local_ref< android::graphics::Canvas > const &a0, local_ref< android::graphics::Paint > const &a1)
{
	return call_method<
		android::graphics::drawable::shapes::ArcShape::J2CPP_CLASS_NAME,
		android::graphics::drawable::shapes::ArcShape::J2CPP_METHOD_NAME(1),
		android::graphics::drawable::shapes::ArcShape::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::shapes::ArcShape,"android/graphics/drawable/shapes/ArcShape")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::ArcShape,0,"<init>","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::shapes::ArcShape,1,"draw","(Landroid/graphics/Canvas;Landroid/graphics/Paint;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPES_ARCSHAPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION