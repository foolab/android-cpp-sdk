/*================================================================================
  code generated by: java2cpp
  class: android.graphics.PathMeasure
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATHMEASURE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_PATHMEASURE_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Matrix; } } }
namespace j2cpp { namespace android { namespace graphics { class Path; } } }


#include <android/graphics/Matrix.hpp>
#include <android/graphics/Path.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class PathMeasure;
	class PathMeasure
		: public cpp_object<PathMeasure>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		PathMeasure(jobject jobj)
		: cpp_object<PathMeasure>(jobj)
		{
		}

		void setPath(local_ref< android::graphics::Path > const&, cpp_boolean const&);
		cpp_float getLength();
		cpp_boolean getPosTan(cpp_float const&, local_ref< cpp_float_array<1> > const&, local_ref< cpp_float_array<1> > const&);
		cpp_boolean getMatrix(cpp_float const&, local_ref< android::graphics::Matrix > const&, cpp_int const&);
		cpp_boolean getSegment(cpp_float const&, cpp_float const&, local_ref< android::graphics::Path > const&, cpp_boolean const&);
		cpp_boolean isClosed();
		cpp_boolean nextContour();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > POSITION_MATRIX_FLAG;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > TANGENT_MATRIX_FLAG;
	}; //class PathMeasure

} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATHMEASURE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATHMEASURE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_PATHMEASURE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::graphics::PathMeasure > create< android::graphics::PathMeasure>()
{
	return local_ref< android::graphics::PathMeasure >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::PathMeasure::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::PathMeasure::J2CPP_CLASS_NAME, android::graphics::PathMeasure::J2CPP_METHOD_NAME(0), android::graphics::PathMeasure::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::graphics::PathMeasure > create< android::graphics::PathMeasure>(local_ref< android::graphics::Path > const &a0, cpp_boolean const &a1)
{
	return local_ref< android::graphics::PathMeasure >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::PathMeasure::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::PathMeasure::J2CPP_CLASS_NAME, android::graphics::PathMeasure::J2CPP_METHOD_NAME(1), android::graphics::PathMeasure::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::graphics::PathMeasure::setPath(local_ref< android::graphics::Path > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_float android::graphics::PathMeasure::getLength()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean android::graphics::PathMeasure::getPosTan(cpp_float const &a0, local_ref< cpp_float_array<1> > const &a1, local_ref< cpp_float_array<1> > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::graphics::PathMeasure::getMatrix(cpp_float const &a0, local_ref< android::graphics::Matrix > const &a1, cpp_int const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::graphics::PathMeasure::getSegment(cpp_float const &a0, cpp_float const &a1, local_ref< android::graphics::Path > const &a2, cpp_boolean const &a3)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::graphics::PathMeasure::isClosed()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_boolean android::graphics::PathMeasure::nextContour()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}



static_field<
	android::graphics::PathMeasure::J2CPP_CLASS_NAME,
	android::graphics::PathMeasure::J2CPP_FIELD_NAME(0),
	android::graphics::PathMeasure::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::graphics::PathMeasure::POSITION_MATRIX_FLAG;

static_field<
	android::graphics::PathMeasure::J2CPP_CLASS_NAME,
	android::graphics::PathMeasure::J2CPP_FIELD_NAME(1),
	android::graphics::PathMeasure::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::graphics::PathMeasure::TANGENT_MATRIX_FLAG;


J2CPP_DEFINE_CLASS(android::graphics::PathMeasure,"android/graphics/PathMeasure")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,1,"<init>","(Landroid/graphics/Path;Z)V")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,2,"setPath","(Landroid/graphics/Path;Z)V")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,3,"getLength","()F")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,4,"getPosTan","(F[F[F)Z")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,5,"getMatrix","(FLandroid/graphics/Matrix;I)Z")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,6,"getSegment","(FFLandroid/graphics/Path;Z)Z")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,7,"isClosed","()Z")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,8,"nextContour","()Z")
J2CPP_DEFINE_METHOD(android::graphics::PathMeasure,9,"finalize","()V")
J2CPP_DEFINE_FIELD(android::graphics::PathMeasure,0,"POSITION_MATRIX_FLAG","I")
J2CPP_DEFINE_FIELD(android::graphics::PathMeasure,1,"TANGENT_MATRIX_FLAG","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATHMEASURE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
