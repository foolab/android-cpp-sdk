/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.Path
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATH_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_PATH_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class RectF; } } }
namespace j2cpp { namespace android { namespace graphics { class Matrix; } } }
namespace j2cpp { namespace android { namespace graphics { namespace Path_ { class FillType; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace Path_ { class Direction; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/graphics/Matrix.hpp>
#include <android/graphics/Path.hpp>
#include <android/graphics/RectF.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class Path;
	namespace Path_ {

		class FillType;
		class FillType
			: public object<FillType>
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

			explicit FillType(jobject jobj)
			: object<FillType>(jobj)
			{
			}

			operator local_ref<java::lang::Enum>() const;


			static local_ref< array< local_ref< android::graphics::Path_::FillType >, 1> > values();
			static local_ref< android::graphics::Path_::FillType > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::Path_::FillType > > EVEN_ODD;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::Path_::FillType > > INVERSE_EVEN_ODD;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::graphics::Path_::FillType > > INVERSE_WINDING;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::graphics::Path_::FillType > > WINDING;
		}; //class FillType

		class Direction;
		class Direction
			: public object<Direction>
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

			explicit Direction(jobject jobj)
			: object<Direction>(jobj)
			{
			}

			operator local_ref<java::lang::Enum>() const;


			static local_ref< array< local_ref< android::graphics::Path_::Direction >, 1> > values();
			static local_ref< android::graphics::Path_::Direction > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::Path_::Direction > > CCW;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::Path_::Direction > > CW;
		}; //class Direction

	} //namespace Path_

	class Path
		: public object<Path>
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

		typedef Path_::FillType FillType;
		typedef Path_::Direction Direction;

		explicit Path(jobject jobj)
		: object<Path>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Path();
		Path(local_ref< android::graphics::Path > const&);
		void reset();
		void rewind();
		void set(local_ref< android::graphics::Path >  const&);
		local_ref< android::graphics::Path_::FillType > getFillType();
		void setFillType(local_ref< android::graphics::Path_::FillType >  const&);
		jboolean isInverseFillType();
		void toggleInverseFillType();
		jboolean isEmpty();
		jboolean isRect(local_ref< android::graphics::RectF >  const&);
		void computeBounds(local_ref< android::graphics::RectF >  const&, jboolean);
		void incReserve(jint);
		void moveTo(jfloat, jfloat);
		void rMoveTo(jfloat, jfloat);
		void lineTo(jfloat, jfloat);
		void rLineTo(jfloat, jfloat);
		void quadTo(jfloat, jfloat, jfloat, jfloat);
		void rQuadTo(jfloat, jfloat, jfloat, jfloat);
		void cubicTo(jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);
		void rCubicTo(jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);
		void arcTo(local_ref< android::graphics::RectF >  const&, jfloat, jfloat, jboolean);
		void arcTo(local_ref< android::graphics::RectF >  const&, jfloat, jfloat);
		void close();
		void addRect(local_ref< android::graphics::RectF >  const&, local_ref< android::graphics::Path_::Direction >  const&);
		void addRect(jfloat, jfloat, jfloat, jfloat, local_ref< android::graphics::Path_::Direction >  const&);
		void addOval(local_ref< android::graphics::RectF >  const&, local_ref< android::graphics::Path_::Direction >  const&);
		void addCircle(jfloat, jfloat, jfloat, local_ref< android::graphics::Path_::Direction >  const&);
		void addArc(local_ref< android::graphics::RectF >  const&, jfloat, jfloat);
		void addRoundRect(local_ref< android::graphics::RectF >  const&, jfloat, jfloat, local_ref< android::graphics::Path_::Direction >  const&);
		void addRoundRect(local_ref< android::graphics::RectF >  const&, local_ref< array<jfloat,1> >  const&, local_ref< android::graphics::Path_::Direction >  const&);
		void addPath(local_ref< android::graphics::Path >  const&, jfloat, jfloat);
		void addPath(local_ref< android::graphics::Path >  const&);
		void addPath(local_ref< android::graphics::Path >  const&, local_ref< android::graphics::Matrix >  const&);
		void offset(jfloat, jfloat, local_ref< android::graphics::Path >  const&);
		void offset(jfloat, jfloat);
		void setLastPoint(jfloat, jfloat);
		void transform(local_ref< android::graphics::Matrix >  const&, local_ref< android::graphics::Path >  const&);
		void transform(local_ref< android::graphics::Matrix >  const&);
	}; //class Path

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATH_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATH_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_PATH_HPP_IMPL

namespace j2cpp {




android::graphics::Path_::FillType::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

local_ref< array< local_ref< android::graphics::Path_::FillType >, 1> > android::graphics::Path_::FillType::values()
{
	return call_static_method<
		android::graphics::Path_::FillType::J2CPP_CLASS_NAME,
		android::graphics::Path_::FillType::J2CPP_METHOD_NAME(0),
		android::graphics::Path_::FillType::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::graphics::Path_::FillType >, 1> > >
	();
}

local_ref< android::graphics::Path_::FillType > android::graphics::Path_::FillType::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::Path_::FillType::J2CPP_CLASS_NAME,
		android::graphics::Path_::FillType::J2CPP_METHOD_NAME(1),
		android::graphics::Path_::FillType::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::Path_::FillType > >
	(a0);
}




static_field<
	android::graphics::Path_::FillType::J2CPP_CLASS_NAME,
	android::graphics::Path_::FillType::J2CPP_FIELD_NAME(0),
	android::graphics::Path_::FillType::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::Path_::FillType >
> android::graphics::Path_::FillType::EVEN_ODD;

static_field<
	android::graphics::Path_::FillType::J2CPP_CLASS_NAME,
	android::graphics::Path_::FillType::J2CPP_FIELD_NAME(1),
	android::graphics::Path_::FillType::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::Path_::FillType >
> android::graphics::Path_::FillType::INVERSE_EVEN_ODD;

static_field<
	android::graphics::Path_::FillType::J2CPP_CLASS_NAME,
	android::graphics::Path_::FillType::J2CPP_FIELD_NAME(2),
	android::graphics::Path_::FillType::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::graphics::Path_::FillType >
> android::graphics::Path_::FillType::INVERSE_WINDING;

static_field<
	android::graphics::Path_::FillType::J2CPP_CLASS_NAME,
	android::graphics::Path_::FillType::J2CPP_FIELD_NAME(3),
	android::graphics::Path_::FillType::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::graphics::Path_::FillType >
> android::graphics::Path_::FillType::WINDING;


J2CPP_DEFINE_CLASS(android::graphics::Path_::FillType,"android/graphics/Path$FillType")
J2CPP_DEFINE_METHOD(android::graphics::Path_::FillType,0,"values","()[android.graphics.Path.FillType")
J2CPP_DEFINE_METHOD(android::graphics::Path_::FillType,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/Path$FillType;")
J2CPP_DEFINE_METHOD(android::graphics::Path_::FillType,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Path_::FillType,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Path_::FillType,0,"EVEN_ODD","Landroid/graphics/Path$FillType;")
J2CPP_DEFINE_FIELD(android::graphics::Path_::FillType,1,"INVERSE_EVEN_ODD","Landroid/graphics/Path$FillType;")
J2CPP_DEFINE_FIELD(android::graphics::Path_::FillType,2,"INVERSE_WINDING","Landroid/graphics/Path$FillType;")
J2CPP_DEFINE_FIELD(android::graphics::Path_::FillType,3,"WINDING","Landroid/graphics/Path$FillType;")
J2CPP_DEFINE_FIELD(android::graphics::Path_::FillType,4,"$VALUES","[android.graphics.Path.FillType")


android::graphics::Path_::Direction::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

local_ref< array< local_ref< android::graphics::Path_::Direction >, 1> > android::graphics::Path_::Direction::values()
{
	return call_static_method<
		android::graphics::Path_::Direction::J2CPP_CLASS_NAME,
		android::graphics::Path_::Direction::J2CPP_METHOD_NAME(0),
		android::graphics::Path_::Direction::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< android::graphics::Path_::Direction >, 1> > >
	();
}

local_ref< android::graphics::Path_::Direction > android::graphics::Path_::Direction::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::graphics::Path_::Direction::J2CPP_CLASS_NAME,
		android::graphics::Path_::Direction::J2CPP_METHOD_NAME(1),
		android::graphics::Path_::Direction::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::graphics::Path_::Direction > >
	(a0);
}




static_field<
	android::graphics::Path_::Direction::J2CPP_CLASS_NAME,
	android::graphics::Path_::Direction::J2CPP_FIELD_NAME(0),
	android::graphics::Path_::Direction::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::Path_::Direction >
> android::graphics::Path_::Direction::CCW;

static_field<
	android::graphics::Path_::Direction::J2CPP_CLASS_NAME,
	android::graphics::Path_::Direction::J2CPP_FIELD_NAME(1),
	android::graphics::Path_::Direction::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::Path_::Direction >
> android::graphics::Path_::Direction::CW;


J2CPP_DEFINE_CLASS(android::graphics::Path_::Direction,"android/graphics/Path$Direction")
J2CPP_DEFINE_METHOD(android::graphics::Path_::Direction,0,"values","()[android.graphics.Path.Direction")
J2CPP_DEFINE_METHOD(android::graphics::Path_::Direction,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/Path$Direction;")
J2CPP_DEFINE_METHOD(android::graphics::Path_::Direction,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::Path_::Direction,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::Path_::Direction,0,"CCW","Landroid/graphics/Path$Direction;")
J2CPP_DEFINE_FIELD(android::graphics::Path_::Direction,1,"CW","Landroid/graphics/Path$Direction;")
J2CPP_DEFINE_FIELD(android::graphics::Path_::Direction,2,"$VALUES","[android.graphics.Path.Direction")



android::graphics::Path::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::Path::Path()
: object<android::graphics::Path>(
	call_new_object<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(0),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::graphics::Path::Path(local_ref< android::graphics::Path > const &a0)
: object<android::graphics::Path>(
	call_new_object<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(1),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


void android::graphics::Path::reset()
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(2),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject());
}

void android::graphics::Path::rewind()
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(3),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject());
}

void android::graphics::Path::set(local_ref< android::graphics::Path > const &a0)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(4),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

local_ref< android::graphics::Path_::FillType > android::graphics::Path::getFillType()
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(5),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::graphics::Path_::FillType > >
	(get_jobject());
}

void android::graphics::Path::setFillType(local_ref< android::graphics::Path_::FillType > const &a0)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(6),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

jboolean android::graphics::Path::isInverseFillType()
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(7),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}

void android::graphics::Path::toggleInverseFillType()
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(8),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject());
}

jboolean android::graphics::Path::isEmpty()
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(9),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject());
}

jboolean android::graphics::Path::isRect(local_ref< android::graphics::RectF > const &a0)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(10),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject(), a0);
}

void android::graphics::Path::computeBounds(local_ref< android::graphics::RectF > const &a0, jboolean a1)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(11),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Path::incReserve(jint a0)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(12),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

void android::graphics::Path::moveTo(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(13),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Path::rMoveTo(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(14),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Path::lineTo(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(15),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Path::rLineTo(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(16),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Path::quadTo(jfloat a0, jfloat a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(17),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::Path::rQuadTo(jfloat a0, jfloat a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(18),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::Path::cubicTo(jfloat a0, jfloat a1, jfloat a2, jfloat a3, jfloat a4, jfloat a5)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(19),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4, a5);
}

void android::graphics::Path::rCubicTo(jfloat a0, jfloat a1, jfloat a2, jfloat a3, jfloat a4, jfloat a5)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(20),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4, a5);
}

void android::graphics::Path::arcTo(local_ref< android::graphics::RectF > const &a0, jfloat a1, jfloat a2, jboolean a3)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(21),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::Path::arcTo(local_ref< android::graphics::RectF > const &a0, jfloat a1, jfloat a2)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(22),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::graphics::Path::close()
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(23),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(23), 
		void >
	(get_jobject());
}

void android::graphics::Path::addRect(local_ref< android::graphics::RectF > const &a0, local_ref< android::graphics::Path_::Direction > const &a1)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(24),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(24), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Path::addRect(jfloat a0, jfloat a1, jfloat a2, jfloat a3, local_ref< android::graphics::Path_::Direction > const &a4)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(25),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(25), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void android::graphics::Path::addOval(local_ref< android::graphics::RectF > const &a0, local_ref< android::graphics::Path_::Direction > const &a1)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(26),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(26), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Path::addCircle(jfloat a0, jfloat a1, jfloat a2, local_ref< android::graphics::Path_::Direction > const &a3)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(27),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(27), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::Path::addArc(local_ref< android::graphics::RectF > const &a0, jfloat a1, jfloat a2)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(28),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(28), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::graphics::Path::addRoundRect(local_ref< android::graphics::RectF > const &a0, jfloat a1, jfloat a2, local_ref< android::graphics::Path_::Direction > const &a3)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(29),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(29), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::graphics::Path::addRoundRect(local_ref< android::graphics::RectF > const &a0, local_ref< array<jfloat,1> > const &a1, local_ref< android::graphics::Path_::Direction > const &a2)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(30),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(30), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::graphics::Path::addPath(local_ref< android::graphics::Path > const &a0, jfloat a1, jfloat a2)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(31),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(31), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::graphics::Path::addPath(local_ref< android::graphics::Path > const &a0)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(32),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject(), a0);
}

void android::graphics::Path::addPath(local_ref< android::graphics::Path > const &a0, local_ref< android::graphics::Matrix > const &a1)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(33),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(33), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Path::offset(jfloat a0, jfloat a1, local_ref< android::graphics::Path > const &a2)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(34),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(34), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::graphics::Path::offset(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(35),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(35), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Path::setLastPoint(jfloat a0, jfloat a1)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(36),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(36), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Path::transform(local_ref< android::graphics::Matrix > const &a0, local_ref< android::graphics::Path > const &a1)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(37),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(37), 
		void >
	(get_jobject(), a0, a1);
}

void android::graphics::Path::transform(local_ref< android::graphics::Matrix > const &a0)
{
	return call_method<
		android::graphics::Path::J2CPP_CLASS_NAME,
		android::graphics::Path::J2CPP_METHOD_NAME(38),
		android::graphics::Path::J2CPP_METHOD_SIGNATURE(38), 
		void >
	(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(android::graphics::Path,"android/graphics/Path")
J2CPP_DEFINE_METHOD(android::graphics::Path,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::Path,1,"<init>","(Landroid/graphics/Path;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,2,"reset","()V")
J2CPP_DEFINE_METHOD(android::graphics::Path,3,"rewind","()V")
J2CPP_DEFINE_METHOD(android::graphics::Path,4,"set","(Landroid/graphics/Path;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,5,"getFillType","()Landroid/graphics/Path$FillType;")
J2CPP_DEFINE_METHOD(android::graphics::Path,6,"setFillType","(Landroid/graphics/Path$FillType;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,7,"isInverseFillType","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Path,8,"toggleInverseFillType","()V")
J2CPP_DEFINE_METHOD(android::graphics::Path,9,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(android::graphics::Path,10,"isRect","(Landroid/graphics/RectF;)Z")
J2CPP_DEFINE_METHOD(android::graphics::Path,11,"computeBounds","(Landroid/graphics/RectF;Z)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,12,"incReserve","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,13,"moveTo","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,14,"rMoveTo","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,15,"lineTo","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,16,"rLineTo","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,17,"quadTo","(FFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,18,"rQuadTo","(FFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,19,"cubicTo","(FFFFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,20,"rCubicTo","(FFFFFF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,21,"arcTo","(Landroid/graphics/RectF;FFZ)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,22,"arcTo","(Landroid/graphics/RectF;FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,23,"close","()V")
J2CPP_DEFINE_METHOD(android::graphics::Path,24,"addRect","(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,25,"addRect","(FFFFLandroid/graphics/Path$Direction;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,26,"addOval","(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,27,"addCircle","(FFFLandroid/graphics/Path$Direction;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,28,"addArc","(Landroid/graphics/RectF;FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,29,"addRoundRect","(Landroid/graphics/RectF;FFLandroid/graphics/Path$Direction;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,30,"addRoundRect","(Landroid/graphics/RectF;[FLandroid/graphics/Path$Direction;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,31,"addPath","(Landroid/graphics/Path;FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,32,"addPath","(Landroid/graphics/Path;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,33,"addPath","(Landroid/graphics/Path;Landroid/graphics/Matrix;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,34,"offset","(FFLandroid/graphics/Path;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,35,"offset","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,36,"setLastPoint","(FF)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,37,"transform","(Landroid/graphics/Matrix;Landroid/graphics/Path;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,38,"transform","(Landroid/graphics/Matrix;)V")
J2CPP_DEFINE_METHOD(android::graphics::Path,39,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATH_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
