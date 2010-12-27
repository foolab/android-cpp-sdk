/*================================================================================
  code generated by: java2cpp
  class: android.text.style.ImageSpan
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_IMAGESPAN_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_IMAGESPAN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace text { namespace style { class DynamicDrawableSpan; } } } }


#include <android/content/Context.hpp>
#include <android/graphics/Bitmap.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/net/Uri.hpp>
#include <android/text/style/DynamicDrawableSpan.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class ImageSpan;
	class ImageSpan
		: public cpp_object<ImageSpan>
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

		explicit ImageSpan(jobject jobj)
		: cpp_object<ImageSpan>(jobj)
		{
		}

		operator local_ref<android::text::style::DynamicDrawableSpan>() const;


		ImageSpan(local_ref< android::graphics::Bitmap > const&);
		ImageSpan(local_ref< android::graphics::Bitmap > const&, cpp_int const&);
		ImageSpan(local_ref< android::content::Context > const&, local_ref< android::graphics::Bitmap > const&);
		ImageSpan(local_ref< android::content::Context > const&, local_ref< android::graphics::Bitmap > const&, cpp_int const&);
		ImageSpan(local_ref< android::graphics::drawable::Drawable > const&);
		ImageSpan(local_ref< android::graphics::drawable::Drawable > const&, cpp_int const&);
		ImageSpan(local_ref< android::graphics::drawable::Drawable > const&, local_ref< java::lang::String > const&);
		ImageSpan(local_ref< android::graphics::drawable::Drawable > const&, local_ref< java::lang::String > const&, cpp_int const&);
		ImageSpan(local_ref< android::content::Context > const&, local_ref< android::net::Uri > const&);
		ImageSpan(local_ref< android::content::Context > const&, local_ref< android::net::Uri > const&, cpp_int const&);
		ImageSpan(local_ref< android::content::Context > const&, cpp_int const&);
		ImageSpan(local_ref< android::content::Context > const&, cpp_int const&, cpp_int const&);
		local_ref< android::graphics::drawable::Drawable > getDrawable();
		local_ref< java::lang::String > getSource();
	}; //class ImageSpan

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_IMAGESPAN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_IMAGESPAN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_IMAGESPAN_HPP_IMPL

namespace j2cpp {



android::text::style::ImageSpan::operator local_ref<android::text::style::DynamicDrawableSpan>() const
{
	return local_ref<android::text::style::DynamicDrawableSpan>(get_jtype());
}


android::text::style::ImageSpan::ImageSpan(local_ref< android::graphics::Bitmap > const &a0)
: cpp_object<android::text::style::ImageSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::ImageSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::ImageSpan::J2CPP_CLASS_NAME, android::text::style::ImageSpan::J2CPP_METHOD_NAME(0), android::text::style::ImageSpan::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}



android::text::style::ImageSpan::ImageSpan(local_ref< android::graphics::Bitmap > const &a0, cpp_int const &a1)
: cpp_object<android::text::style::ImageSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::ImageSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::ImageSpan::J2CPP_CLASS_NAME, android::text::style::ImageSpan::J2CPP_METHOD_NAME(1), android::text::style::ImageSpan::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::text::style::ImageSpan::ImageSpan(local_ref< android::content::Context > const &a0, local_ref< android::graphics::Bitmap > const &a1)
: cpp_object<android::text::style::ImageSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::ImageSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::ImageSpan::J2CPP_CLASS_NAME, android::text::style::ImageSpan::J2CPP_METHOD_NAME(2), android::text::style::ImageSpan::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::text::style::ImageSpan::ImageSpan(local_ref< android::content::Context > const &a0, local_ref< android::graphics::Bitmap > const &a1, cpp_int const &a2)
: cpp_object<android::text::style::ImageSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::ImageSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::ImageSpan::J2CPP_CLASS_NAME, android::text::style::ImageSpan::J2CPP_METHOD_NAME(3), android::text::style::ImageSpan::J2CPP_METHOD_SIGNATURE(3), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}



android::text::style::ImageSpan::ImageSpan(local_ref< android::graphics::drawable::Drawable > const &a0)
: cpp_object<android::text::style::ImageSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::ImageSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::ImageSpan::J2CPP_CLASS_NAME, android::text::style::ImageSpan::J2CPP_METHOD_NAME(4), android::text::style::ImageSpan::J2CPP_METHOD_SIGNATURE(4), false>(),
		a0.get_jtype()
	)
)
{
}



android::text::style::ImageSpan::ImageSpan(local_ref< android::graphics::drawable::Drawable > const &a0, cpp_int const &a1)
: cpp_object<android::text::style::ImageSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::ImageSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::ImageSpan::J2CPP_CLASS_NAME, android::text::style::ImageSpan::J2CPP_METHOD_NAME(5), android::text::style::ImageSpan::J2CPP_METHOD_SIGNATURE(5), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::text::style::ImageSpan::ImageSpan(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::String > const &a1)
: cpp_object<android::text::style::ImageSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::ImageSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::ImageSpan::J2CPP_CLASS_NAME, android::text::style::ImageSpan::J2CPP_METHOD_NAME(6), android::text::style::ImageSpan::J2CPP_METHOD_SIGNATURE(6), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::text::style::ImageSpan::ImageSpan(local_ref< android::graphics::drawable::Drawable > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2)
: cpp_object<android::text::style::ImageSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::ImageSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::ImageSpan::J2CPP_CLASS_NAME, android::text::style::ImageSpan::J2CPP_METHOD_NAME(7), android::text::style::ImageSpan::J2CPP_METHOD_SIGNATURE(7), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}



android::text::style::ImageSpan::ImageSpan(local_ref< android::content::Context > const &a0, local_ref< android::net::Uri > const &a1)
: cpp_object<android::text::style::ImageSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::ImageSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::ImageSpan::J2CPP_CLASS_NAME, android::text::style::ImageSpan::J2CPP_METHOD_NAME(8), android::text::style::ImageSpan::J2CPP_METHOD_SIGNATURE(8), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::text::style::ImageSpan::ImageSpan(local_ref< android::content::Context > const &a0, local_ref< android::net::Uri > const &a1, cpp_int const &a2)
: cpp_object<android::text::style::ImageSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::ImageSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::ImageSpan::J2CPP_CLASS_NAME, android::text::style::ImageSpan::J2CPP_METHOD_NAME(9), android::text::style::ImageSpan::J2CPP_METHOD_SIGNATURE(9), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}



android::text::style::ImageSpan::ImageSpan(local_ref< android::content::Context > const &a0, cpp_int const &a1)
: cpp_object<android::text::style::ImageSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::ImageSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::ImageSpan::J2CPP_CLASS_NAME, android::text::style::ImageSpan::J2CPP_METHOD_NAME(10), android::text::style::ImageSpan::J2CPP_METHOD_SIGNATURE(10), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



android::text::style::ImageSpan::ImageSpan(local_ref< android::content::Context > const &a0, cpp_int const &a1, cpp_int const &a2)
: cpp_object<android::text::style::ImageSpan>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::style::ImageSpan::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::style::ImageSpan::J2CPP_CLASS_NAME, android::text::style::ImageSpan::J2CPP_METHOD_NAME(11), android::text::style::ImageSpan::J2CPP_METHOD_SIGNATURE(11), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
	)
)
{
}


local_ref< android::graphics::drawable::Drawable > android::text::style::ImageSpan::getDrawable()
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< java::lang::String > android::text::style::ImageSpan::getSource()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::style::ImageSpan,"android/text/style/ImageSpan")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,0,"<init>","(Landroid/graphics/Bitmap;)V")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,1,"<init>","(Landroid/graphics/Bitmap;I)V")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,2,"<init>","(Landroid/content/Context;Landroid/graphics/Bitmap;)V")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,3,"<init>","(Landroid/content/Context;Landroid/graphics/Bitmap;I)V")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,4,"<init>","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,5,"<init>","(Landroid/graphics/drawable/Drawable;I)V")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,6,"<init>","(Landroid/graphics/drawable/Drawable;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,7,"<init>","(Landroid/graphics/drawable/Drawable;Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,8,"<init>","(Landroid/content/Context;Landroid/net/Uri;)V")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,9,"<init>","(Landroid/content/Context;Landroid/net/Uri;I)V")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,10,"<init>","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,11,"<init>","(Landroid/content/Context;II)V")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,12,"getDrawable","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::text::style::ImageSpan,13,"getSource","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_IMAGESPAN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
