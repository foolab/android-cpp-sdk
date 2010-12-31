/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.Matrix
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_MATRIX_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_MATRIX_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Matrix_ { class ScaleToFit; } } } }
namespace j2cpp { namespace android { namespace graphics { class RectF; } } }


#include <android/graphics/Matrix.hpp>
#include <android/graphics/RectF.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Matrix;
	namespace Matrix_ {

		class ScaleToFit;
		class ScaleToFit
			: public object<ScaleToFit>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)

			explicit ScaleToFit(jobject jobj)
			: object<ScaleToFit>(jobj)
			{
			}

			operator local_ref<java::lang::Enum>() const;


			static local_ref< array< local_ref< android::graphics::Matrix_::ScaleToFit >, 1> > values();
			static local_ref< android::graphics::Matrix_::ScaleToFit > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::Matrix_::ScaleToFit > > CENTER;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::Matrix_::ScaleToFit > > END;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::graphics::Matrix_::ScaleToFit > > FILL;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::graphics::Matrix_::ScaleToFit > > START;
		}; //class ScaleToFit

	} //namespace Matrix_

	class Matrix
		: public object<Matrix>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		typedef Matrix_::ScaleToFit ScaleToFit;

		explicit Matrix(jobject jobj)
		: object<Matrix>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Matrix();
		Matrix(local_ref< android::graphics::Matrix > const&);
		jboolean isIdentity();
		jboolean rectStaysRect();
		void set(local_ref< android::graphics::Matrix >  const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		void reset();
		void setTranslate(jfloat, jfloat);
		void setScale(jfloat, jfloat, jfloat, jfloat);
		void setScale(jfloat, jfloat);
		void setRotate(jfloat, jfloat, jfloat);
		void setRotate(jfloat);
		void setSinCos(jfloat, jfloat, jfloat, jfloat);
		void setSinCos(jfloat, jfloat);
		void setSkew(jfloat, jfloat, jfloat, jfloat);
		void setSkew(jfloat, jfloat);
		jboolean setConcat(local_ref< android::graphics::Matrix >  const&, local_ref< android::graphics::Matrix >  const&);
		jboolean preTranslate(jfloat, jfloat);
		jboolean preScale(jfloat, jfloat, jfloat, jfloat);
		jboolean preScale(jfloat, jfloat);
		jboolean preRotate(jfloat, jfloat, jfloat);
		jboolean preRotate(jfloat);
		jboolean preSkew(jfloat, jfloat, jfloat, jfloat);
		jboolean preSkew(jfloat, jfloat);
		jboolean preConcat(local_ref< android::graphics::Matrix >  const&);
		jboolean postTranslate(jfloat, jfloat);
		jboolean postScale(jfloat, jfloat, jfloat, jfloat);
		jboolean postScale(jfloat, jfloat);
		jboolean postRotate(jfloat, jfloat, jfloat);
		jboolean postRotate(jfloat);
		jboolean postSkew(jfloat, jfloat, jfloat, jfloat);
		jboolean postSkew(jfloat, jfloat);
		jboolean postConcat(local_ref< android::graphics::Matrix >  const&);
		jboolean setRectToRect(local_ref< android::graphics::RectF >  const&, local_ref< android::graphics::RectF >  const&, local_ref< android::graphics::Matrix_::ScaleToFit >  const&);
		jboolean setPolyToPoly(local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint, jint);
		jboolean invert(local_ref< android::graphics::Matrix >  const&);
		void mapPoints(local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint, jint);
		void mapVectors(local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint, jint);
		void mapPoints(local_ref< array<jfloat,1> >  const&, local_ref< array<jfloat,1> >  const&);
		void mapVectors(local_ref< array<jfloat,1> >  const&, local_ref< array<jfloat,1> >  const&);
		void mapPoints(local_ref< array<jfloat,1> >  const&);
		void mapVectors(local_ref< array<jfloat,1> >  const&);
		jboolean mapRect(local_ref< android::graphics::RectF >  const&, local_ref< android::graphics::RectF >  const&);
		jboolean mapRect(local_ref< android::graphics::RectF >  const&);
		jfloat mapRadius(jfloat);
		void getValues(local_ref< array<jfloat,1> >  const&);
		void setValues(local_ref< array<jfloat,1> >  const&);
		local_ref< java::lang::String > toString();
		local_ref< java::lang::String > toShortString();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > MSCALE_X;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > MSKEW_X;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > MTRANS_X;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > MSKEW_Y;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > MSCALE_Y;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > MTRANS_Y;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > MPERSP_0;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > MPERSP_1;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > MPERSP_2;
	}; //class Matrix

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_MATRIX_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_MATRIX_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_MATRIX_HPP_IMPL

namespace j2cpp {




android::graphics::Matrix_::ScaleToFit::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

local_ref< array< local_ref< android::graphics::Matrix_::ScaleToFit >, 1> > android::graphics::Matrix_::ScaleToFit::values()
{
	return call_static_method<
		android::graphics::Matrix_::ScaleToFit::J2CPP_CLASS_NAME,
		android::graphics::Matrix_::ScaleToFit::J2CPP_METHOD_NAME(0),
		android::graphics::Matrix_::ScaleToFit::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::graphics::Matrix_::ScaleToFit >, 1> > >
	();
}

local_ref< android::graphics::Matrix_::ScaleToFit > android::graphics::Matrix_::ScaleToFit::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::Matrix_::ScaleToFit::J2CPP_CLASS_NAME,
		android::graphics::Matrix_::ScaleToFit::J2CPP_METHOD_NAME(1),
		android::graphics::Matrix_::ScaleToFit::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::Matrix_::ScaleToFit > >
	(a0);
}




static_field<
	android::graphics::Matrix_::ScaleToFit::J2CPP_CLASS_NAME,
	android::graphics::Matrix_::ScaleToFit::J2CPP_FIELD_NAME(0),
	android::graphics::Matrix_::ScaleToFit::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::Matrix_::ScaleToFit >
> android::graphics::Matrix_::ScaleToFit::CENTER;

static_field<
	android::graphics::Matrix_::ScaleToFit::J2CPP_CLASS_NAME,
	android::graphics::Matrix_::ScaleToFit::J2CPP_FIELD_NAME(1),
	android::graphics::Matrix_::ScaleToFit::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::Matrix_::ScaleToFit >
> android::graphics::Matrix_::ScaleToFit::END;

static_field<
	android::graphics::Matrix_::ScaleToFit::J2CPP_CLASS_NAME,
	android::graphics::Matrix_::ScaleToFit::J2CPP_FIELD_NAME(2),
	android::graphics::Matrix_::ScaleToFit::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::graphics::Matrix_::ScaleToFit >
> android::graphics::Matrix_::ScaleToFit::FILL;

static_field<
	android::graphics::Matrix_::ScaleToFit::J2CPP_CLASS_NAME,
	android::graphics::Matrix_::ScaleToFit::J2CPP_FIELD_NAME(3),
	android::graphics::Matrix_::ScaleToFit::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::graphics::Matrix_::ScaleToFit >
> android::graphics::Matrix_::ScaleToFit::START;


J2CPP_DEFINE_CLASS(android::graphics::Matrix_::ScaleToFit,"android/graphics/Matrix$ScaleToFit")
J2CPP_DEFINE_METHOD(android::graphics::Matrix_::ScaleToFit,0,"values","()[android.graphics.Matrix.ScaleToFit")
J2CPP_DEFINE_METHOD(android::graphics::Matrix_::ScaleToFit,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/Matrix$ScaleToFit;")
J2CPP_DEFINE_METHOD(android::graphics::Matrix_::ScaleToFit,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix_::ScaleToFit,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Matrix_::ScaleToFit,0,"CENTER","Landroid/graphics/Matrix$ScaleToFit;")
J2CPP_DEFINE_FIELD(android::graphics::Matrix_::ScaleToFit,1,"END","Landroid/graphics/Matrix$ScaleToFit;")
J2CPP_DEFINE_FIELD(android::graphics::Matrix_::ScaleToFit,2,"FILL","Landroid/graphics/Matrix$ScaleToFit;")
J2CPP_DEFINE_FIELD(android::graphics::Matrix_::ScaleToFit,3,"START","Landroid/graphics/Matrix$ScaleToFit;")
J2CPP_DEFINE_FIELD(android::graphics::Matrix_::ScaleToFit,4,"$VALUES","[android.graphics.Matrix.ScaleToFit")



android::graphics::Matrix::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::Matrix::Matrix()
: object<android::graphics::Matrix>(
	call_new_object<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(0),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::graphics::Matrix::Matrix(local_ref< android::graphics::Matrix > const &a0)
: object<android::graphics::Matrix>(
	call_new_object<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(1),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


jboolean android::graphics::Matrix::isIdentity()
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(2),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject());
}

jboolean android::graphics::Matrix::rectStaysRect()
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(3),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject());
}

void android::graphics::Matrix::set(local_ref< android::graphics::Matrix > const &a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(4),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

jboolean android::graphics::Matrix::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(5),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}

void android::graphics::Matrix::reset()
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(6),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}

void android::graphics::Matrix::setTranslate(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(7),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Matrix::setScale(jfloat a0, jfloat a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(8),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::Matrix::setScale(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(9),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Matrix::setRotate(jfloat a0, jfloat a1, jfloat a2)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(10),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::graphics::Matrix::setRotate(jfloat a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(11),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

void android::graphics::Matrix::setSinCos(jfloat a0, jfloat a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(12),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::Matrix::setSinCos(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(13),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Matrix::setSkew(jfloat a0, jfloat a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(14),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::Matrix::setSkew(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(15),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::Matrix::setConcat(local_ref< android::graphics::Matrix > const &a0, local_ref< android::graphics::Matrix > const &a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(16),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(16), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::Matrix::preTranslate(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(17),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(17), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::Matrix::preScale(jfloat a0, jfloat a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(18),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(18), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::graphics::Matrix::preScale(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(19),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(19), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::Matrix::preRotate(jfloat a0, jfloat a1, jfloat a2)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(20),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jboolean android::graphics::Matrix::preRotate(jfloat a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(21),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(21), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::graphics::Matrix::preSkew(jfloat a0, jfloat a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(22),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(22), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::graphics::Matrix::preSkew(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(23),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(23), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::Matrix::preConcat(local_ref< android::graphics::Matrix > const &a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(24),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(24), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::graphics::Matrix::postTranslate(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(25),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(25), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::Matrix::postScale(jfloat a0, jfloat a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(26),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(26), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::graphics::Matrix::postScale(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(27),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(27), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::Matrix::postRotate(jfloat a0, jfloat a1, jfloat a2)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(28),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(28), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jboolean android::graphics::Matrix::postRotate(jfloat a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(29),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(29), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::graphics::Matrix::postSkew(jfloat a0, jfloat a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(30),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(30), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::graphics::Matrix::postSkew(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(31),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(31), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::Matrix::postConcat(local_ref< android::graphics::Matrix > const &a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(32),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(32), 
		jboolean >
	(get_jobject(), a0);
}

jboolean android::graphics::Matrix::setRectToRect(local_ref< android::graphics::RectF > const &a0, local_ref< android::graphics::RectF > const &a1, local_ref< android::graphics::Matrix_::ScaleToFit > const &a2)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(33),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(33), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jboolean android::graphics::Matrix::setPolyToPoly(local_ref< array<jfloat,1> > const &a0, jint a1, local_ref< array<jfloat,1> > const &a2, jint a3, jint a4)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(34),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(34), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3, a4);
}

jboolean android::graphics::Matrix::invert(local_ref< android::graphics::Matrix > const &a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(35),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(35), 
		jboolean >
	(get_jobject(), a0);
}

void android::graphics::Matrix::mapPoints(local_ref< array<jfloat,1> > const &a0, jint a1, local_ref< array<jfloat,1> > const &a2, jint a3, jint a4)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(36),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(36), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void android::graphics::Matrix::mapVectors(local_ref< array<jfloat,1> > const &a0, jint a1, local_ref< array<jfloat,1> > const &a2, jint a3, jint a4)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(37),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(37), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void android::graphics::Matrix::mapPoints(local_ref< array<jfloat,1> > const &a0, local_ref< array<jfloat,1> > const &a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(38),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(38), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Matrix::mapVectors(local_ref< array<jfloat,1> > const &a0, local_ref< array<jfloat,1> > const &a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(39),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(39), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Matrix::mapPoints(local_ref< array<jfloat,1> > const &a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(40),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(40), 
		void >
	(get_jobject(), a0);
}

void android::graphics::Matrix::mapVectors(local_ref< array<jfloat,1> > const &a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(41),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(41), 
		void >
	(get_jobject(), a0);
}

jboolean android::graphics::Matrix::mapRect(local_ref< android::graphics::RectF > const &a0, local_ref< android::graphics::RectF > const &a1)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(42),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(42), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::graphics::Matrix::mapRect(local_ref< android::graphics::RectF > const &a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(43),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(43), 
		jboolean >
	(get_jobject(), a0);
}

jfloat android::graphics::Matrix::mapRadius(jfloat a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(44),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(44), 
		jfloat >
	(get_jobject(), a0);
}

void android::graphics::Matrix::getValues(local_ref< array<jfloat,1> > const &a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(45),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(45), 
		void >
	(get_jobject(), a0);
}

void android::graphics::Matrix::setValues(local_ref< array<jfloat,1> > const &a0)
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(46),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(46), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::graphics::Matrix::toString()
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(47),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(47), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > android::graphics::Matrix::toShortString()
{
	return call_method<
		android::graphics::Matrix::J2CPP_CLASS_NAME,
		android::graphics::Matrix::J2CPP_METHOD_NAME(48),
		android::graphics::Matrix::J2CPP_METHOD_SIGNATURE(48), 
		local_ref< java::lang::String > >
	(get_jobject());
}



static_field<
	android::graphics::Matrix::J2CPP_CLASS_NAME,
	android::graphics::Matrix::J2CPP_FIELD_NAME(0),
	android::graphics::Matrix::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::graphics::Matrix::MSCALE_X;

static_field<
	android::graphics::Matrix::J2CPP_CLASS_NAME,
	android::graphics::Matrix::J2CPP_FIELD_NAME(1),
	android::graphics::Matrix::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::graphics::Matrix::MSKEW_X;

static_field<
	android::graphics::Matrix::J2CPP_CLASS_NAME,
	android::graphics::Matrix::J2CPP_FIELD_NAME(2),
	android::graphics::Matrix::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::graphics::Matrix::MTRANS_X;

static_field<
	android::graphics::Matrix::J2CPP_CLASS_NAME,
	android::graphics::Matrix::J2CPP_FIELD_NAME(3),
	android::graphics::Matrix::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::graphics::Matrix::MSKEW_Y;

static_field<
	android::graphics::Matrix::J2CPP_CLASS_NAME,
	android::graphics::Matrix::J2CPP_FIELD_NAME(4),
	android::graphics::Matrix::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::graphics::Matrix::MSCALE_Y;

static_field<
	android::graphics::Matrix::J2CPP_CLASS_NAME,
	android::graphics::Matrix::J2CPP_FIELD_NAME(5),
	android::graphics::Matrix::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::graphics::Matrix::MTRANS_Y;

static_field<
	android::graphics::Matrix::J2CPP_CLASS_NAME,
	android::graphics::Matrix::J2CPP_FIELD_NAME(6),
	android::graphics::Matrix::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::graphics::Matrix::MPERSP_0;

static_field<
	android::graphics::Matrix::J2CPP_CLASS_NAME,
	android::graphics::Matrix::J2CPP_FIELD_NAME(7),
	android::graphics::Matrix::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::graphics::Matrix::MPERSP_1;

static_field<
	android::graphics::Matrix::J2CPP_CLASS_NAME,
	android::graphics::Matrix::J2CPP_FIELD_NAME(8),
	android::graphics::Matrix::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::graphics::Matrix::MPERSP_2;


J2CPP_DEFINE_CLASS(android::graphics::Matrix,"android/graphics/Matrix")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,1,"<init>","(Landroid/graphics/Matrix;)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,2,"isIdentity","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,3,"rectStaysRect","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,4,"set","(Landroid/graphics/Matrix;)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,5,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,6,"reset","()V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,7,"setTranslate","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,8,"setScale","(FFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,9,"setScale","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,10,"setRotate","(FFF)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,11,"setRotate","(F)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,12,"setSinCos","(FFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,13,"setSinCos","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,14,"setSkew","(FFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,15,"setSkew","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,16,"setConcat","(Landroid/graphics/Matrix;Landroid/graphics/Matrix;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,17,"preTranslate","(FF)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,18,"preScale","(FFFF)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,19,"preScale","(FF)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,20,"preRotate","(FFF)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,21,"preRotate","(F)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,22,"preSkew","(FFFF)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,23,"preSkew","(FF)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,24,"preConcat","(Landroid/graphics/Matrix;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,25,"postTranslate","(FF)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,26,"postScale","(FFFF)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,27,"postScale","(FF)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,28,"postRotate","(FFF)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,29,"postRotate","(F)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,30,"postSkew","(FFFF)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,31,"postSkew","(FF)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,32,"postConcat","(Landroid/graphics/Matrix;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,33,"setRectToRect","(Landroid/graphics/RectF;Landroid/graphics/RectF;Landroid/graphics/Matrix$ScaleToFit;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,34,"setPolyToPoly","([FI[FII)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,35,"invert","(Landroid/graphics/Matrix;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,36,"mapPoints","([FI[FII)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,37,"mapVectors","([FI[FII)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,38,"mapPoints","([F[F)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,39,"mapVectors","([F[F)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,40,"mapPoints","([F)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,41,"mapVectors","([F)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,42,"mapRect","(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,43,"mapRect","(Landroid/graphics/RectF;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,44,"mapRadius","(F)F")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,45,"getValues","([F)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,46,"setValues","([F)V")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,47,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,48,"toShortString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::graphics::Matrix,49,"finalize","()V")
J2CPP_DEFINE_FIELD(android::graphics::Matrix,0,"MSCALE_X","I")
J2CPP_DEFINE_FIELD(android::graphics::Matrix,1,"MSKEW_X","I")
J2CPP_DEFINE_FIELD(android::graphics::Matrix,2,"MTRANS_X","I")
J2CPP_DEFINE_FIELD(android::graphics::Matrix,3,"MSKEW_Y","I")
J2CPP_DEFINE_FIELD(android::graphics::Matrix,4,"MSCALE_Y","I")
J2CPP_DEFINE_FIELD(android::graphics::Matrix,5,"MTRANS_Y","I")
J2CPP_DEFINE_FIELD(android::graphics::Matrix,6,"MPERSP_0","I")
J2CPP_DEFINE_FIELD(android::graphics::Matrix,7,"MPERSP_1","I")
J2CPP_DEFINE_FIELD(android::graphics::Matrix,8,"MPERSP_2","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_MATRIX_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
