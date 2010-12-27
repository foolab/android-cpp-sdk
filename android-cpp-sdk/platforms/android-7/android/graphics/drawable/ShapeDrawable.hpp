/*================================================================================
  code generated by: java2cpp
  class: android.graphics.drawable.ShapeDrawable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPEDRAWABLE_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPEDRAWABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }
namespace j2cpp { namespace android { namespace graphics { class Paint; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Shader; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace shapes { class Shape; } } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace Drawable_ { class ConstantState; } } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { namespace ShapeDrawable_ { class ShaderFactory; } } } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace graphics { class ColorFilter; } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Resources; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/res/Resources.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/ColorFilter.hpp>
#include <android/graphics/Paint.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/Shader.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/graphics/drawable/ShapeDrawable.hpp>
#include <android/graphics/drawable/shapes/Shape.hpp>
#include <android/util/AttributeSet.hpp>
#include <java/lang/Object.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace graphics { namespace drawable {

	class ShapeDrawable;
	namespace ShapeDrawable_ {

		class ShaderFactory;
		class ShaderFactory
			: public cpp_object<ShaderFactory>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit ShaderFactory(jobject jobj)
			: cpp_object<ShaderFactory>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			ShaderFactory();
			local_ref< android::graphics::Shader > resize(cpp_int const&, cpp_int const&);
		}; //class ShaderFactory

	} //namespace ShapeDrawable_

	class ShapeDrawable
		: public cpp_object<ShapeDrawable>
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

		typedef ShapeDrawable_::ShaderFactory ShaderFactory;

		explicit ShapeDrawable(jobject jobj)
		: cpp_object<ShapeDrawable>(jobj)
		{
		}

		operator local_ref<android::graphics::drawable::Drawable>() const;


		ShapeDrawable();
		ShapeDrawable(local_ref< android::graphics::drawable::shapes::Shape > const&);
		local_ref< android::graphics::drawable::shapes::Shape > getShape();
		void setShape(local_ref< android::graphics::drawable::shapes::Shape > const&);
		void setShaderFactory(local_ref< android::graphics::drawable::ShapeDrawable_::ShaderFactory > const&);
		local_ref< android::graphics::drawable::ShapeDrawable_::ShaderFactory > getShaderFactory();
		local_ref< android::graphics::Paint > getPaint();
		void setPadding(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void setPadding(local_ref< android::graphics::Rect > const&);
		void setIntrinsicWidth(cpp_int const&);
		void setIntrinsicHeight(cpp_int const&);
		cpp_int getIntrinsicWidth();
		cpp_int getIntrinsicHeight();
		cpp_boolean getPadding(local_ref< android::graphics::Rect > const&);
		void draw(local_ref< android::graphics::Canvas > const&);
		cpp_int getChangingConfigurations();
		void setAlpha(cpp_int const&);
		void setColorFilter(local_ref< android::graphics::ColorFilter > const&);
		cpp_int getOpacity();
		void setDither(cpp_boolean const&);
		void inflate(local_ref< android::content::res::Resources > const&, local_ref< org::xmlpull::v1::XmlPullParser > const&, local_ref< android::util::AttributeSet > const&);
		local_ref< android::graphics::drawable::Drawable_::ConstantState > getConstantState();
		local_ref< android::graphics::drawable::Drawable > mutate();
	}; //class ShapeDrawable

} //namespace drawable
} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPEDRAWABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPEDRAWABLE_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPEDRAWABLE_HPP_IMPL

namespace j2cpp {




android::graphics::drawable::ShapeDrawable_::ShaderFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}


android::graphics::drawable::ShapeDrawable_::ShaderFactory::ShaderFactory()
: cpp_object<android::graphics::drawable::ShapeDrawable_::ShaderFactory>(
	environment::get().get_jenv()->NewObject(
		get_class<android::graphics::drawable::ShapeDrawable_::ShaderFactory::J2CPP_CLASS_NAME>(),
		get_method_id<android::graphics::drawable::ShapeDrawable_::ShaderFactory::J2CPP_CLASS_NAME, android::graphics::drawable::ShapeDrawable_::ShaderFactory::J2CPP_METHOD_NAME(0), android::graphics::drawable::ShapeDrawable_::ShaderFactory::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}


local_ref< android::graphics::Shader > android::graphics::drawable::ShapeDrawable_::ShaderFactory::resize(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< android::graphics::Shader >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::ShapeDrawable_::ShaderFactory,"android/graphics/drawable/ShapeDrawable$ShaderFactory")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable_::ShaderFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable_::ShaderFactory,1,"resize","(II)Landroid/graphics/Shader;")



android::graphics::drawable::ShapeDrawable::operator local_ref<android::graphics::drawable::Drawable>() const
{
	return local_ref<android::graphics::drawable::Drawable>(get_jtype());
}


android::graphics::drawable::ShapeDrawable::ShapeDrawable()
: cpp_object<android::graphics::drawable::ShapeDrawable>(
	environment::get().get_jenv()->NewObject(
		get_class<android::graphics::drawable::ShapeDrawable::J2CPP_CLASS_NAME>(),
		get_method_id<android::graphics::drawable::ShapeDrawable::J2CPP_CLASS_NAME, android::graphics::drawable::ShapeDrawable::J2CPP_METHOD_NAME(0), android::graphics::drawable::ShapeDrawable::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



android::graphics::drawable::ShapeDrawable::ShapeDrawable(local_ref< android::graphics::drawable::shapes::Shape > const &a0)
: cpp_object<android::graphics::drawable::ShapeDrawable>(
	environment::get().get_jenv()->NewObject(
		get_class<android::graphics::drawable::ShapeDrawable::J2CPP_CLASS_NAME>(),
		get_method_id<android::graphics::drawable::ShapeDrawable::J2CPP_CLASS_NAME, android::graphics::drawable::ShapeDrawable::J2CPP_METHOD_NAME(1), android::graphics::drawable::ShapeDrawable::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}


local_ref< android::graphics::drawable::shapes::Shape > android::graphics::drawable::ShapeDrawable::getShape()
{
	return local_ref< android::graphics::drawable::shapes::Shape >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::graphics::drawable::ShapeDrawable::setShape(local_ref< android::graphics::drawable::shapes::Shape > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::ShapeDrawable::setShaderFactory(local_ref< android::graphics::drawable::ShapeDrawable_::ShaderFactory > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::ShapeDrawable_::ShaderFactory > android::graphics::drawable::ShapeDrawable::getShaderFactory()
{
	return local_ref< android::graphics::drawable::ShapeDrawable_::ShaderFactory >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< android::graphics::Paint > android::graphics::drawable::ShapeDrawable::getPaint()
{
	return local_ref< android::graphics::Paint >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::graphics::drawable::ShapeDrawable::setPadding(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::graphics::drawable::ShapeDrawable::setPadding(local_ref< android::graphics::Rect > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::ShapeDrawable::setIntrinsicWidth(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::ShapeDrawable::setIntrinsicHeight(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::graphics::drawable::ShapeDrawable::getIntrinsicWidth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int android::graphics::drawable::ShapeDrawable::getIntrinsicHeight()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_boolean android::graphics::drawable::ShapeDrawable::getPadding(local_ref< android::graphics::Rect > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}


void android::graphics::drawable::ShapeDrawable::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::graphics::drawable::ShapeDrawable::getChangingConfigurations()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

void android::graphics::drawable::ShapeDrawable::setAlpha(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

void android::graphics::drawable::ShapeDrawable::setColorFilter(local_ref< android::graphics::ColorFilter > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::graphics::drawable::ShapeDrawable::getOpacity()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

void android::graphics::drawable::ShapeDrawable::setDither(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}



void android::graphics::drawable::ShapeDrawable::inflate(local_ref< android::content::res::Resources > const &a0, local_ref< org::xmlpull::v1::XmlPullParser > const &a1, local_ref< android::util::AttributeSet > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable_::ConstantState > android::graphics::drawable::ShapeDrawable::getConstantState()
{
	return local_ref< android::graphics::drawable::Drawable_::ConstantState >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::graphics::drawable::ShapeDrawable::mutate()
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::drawable::ShapeDrawable,"android/graphics/drawable/ShapeDrawable")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,1,"<init>","(Landroid/graphics/drawable/shapes/Shape;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,2,"getShape","()Landroid/graphics/drawable/shapes/Shape;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,3,"setShape","(Landroid/graphics/drawable/shapes/Shape;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,4,"setShaderFactory","(Landroid/graphics/drawable/ShapeDrawable$ShaderFactory;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,5,"getShaderFactory","()Landroid/graphics/drawable/ShapeDrawable$ShaderFactory;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,6,"getPaint","()Landroid/graphics/Paint;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,7,"setPadding","(IIII)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,8,"setPadding","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,9,"setIntrinsicWidth","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,10,"setIntrinsicHeight","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,11,"getIntrinsicWidth","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,12,"getIntrinsicHeight","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,13,"getPadding","(Landroid/graphics/Rect;)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,14,"onDraw","(Landroid/graphics/drawable/shapes/Shape;Landroid/graphics/Canvas;Landroid/graphics/Paint;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,15,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,16,"getChangingConfigurations","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,17,"setAlpha","(I)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,18,"setColorFilter","(Landroid/graphics/ColorFilter;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,19,"getOpacity","()I")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,20,"setDither","(Z)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,21,"onBoundsChange","(Landroid/graphics/Rect;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,22,"inflateTag","(Ljava/lang/String;Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)Z")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,23,"inflate","(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,24,"getConstantState","()Landroid/graphics/drawable/Drawable$ConstantState;")
J2CPP_DEFINE_METHOD(android::graphics::drawable::ShapeDrawable,25,"mutate","()Landroid/graphics/drawable/Drawable;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_DRAWABLE_SHAPEDRAWABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION