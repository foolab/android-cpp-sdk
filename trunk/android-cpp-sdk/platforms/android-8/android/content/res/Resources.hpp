/*================================================================================
  code generated by: java2cpp
  class: android.content.res.Resources
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_RESOURCES_HPP_DECL
#define J2CPP_ANDROID_CONTENT_RES_RESOURCES_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace content { namespace res { namespace Resources_ { class Theme; } } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class Configuration; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class AssetFileDescriptor; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class AssetManager; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class ColorStateList; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class XmlResourceParser; } } } }
namespace j2cpp { namespace android { namespace content { namespace res { class TypedArray; } } } }
namespace j2cpp { namespace android { namespace util { class TypedValue; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace util { class DisplayMetrics; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace graphics { class Movie; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }


#include <android/content/res/AssetFileDescriptor.hpp>
#include <android/content/res/AssetManager.hpp>
#include <android/content/res/ColorStateList.hpp>
#include <android/content/res/Configuration.hpp>
#include <android/content/res/Resources.hpp>
#include <android/content/res/TypedArray.hpp>
#include <android/content/res/XmlResourceParser.hpp>
#include <android/graphics/Movie.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Bundle.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/util/DisplayMetrics.hpp>
#include <android/util/TypedValue.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content { namespace res {

	class Resources;
	namespace Resources_ {

		class Theme;
		class Theme
			: public cpp_object<Theme>
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
			J2CPP_DECLARE_FIELD(0)

			Theme(jobject jobj)
			: cpp_object<Theme>(jobj)
			{
			}

			void applyStyle(cpp_int const&, cpp_boolean const&);
			void setTo(local_ref< android::content::res::Resources_::Theme > const&);
			local_ref< android::content::res::TypedArray > obtainStyledAttributes(local_ref< cpp_int_array<1> > const&);
			local_ref< android::content::res::TypedArray > obtainStyledAttributes(cpp_int const&, local_ref< cpp_int_array<1> > const&);
			local_ref< android::content::res::TypedArray > obtainStyledAttributes(local_ref< android::util::AttributeSet > const&, local_ref< cpp_int_array<1> > const&, cpp_int const&, cpp_int const&);
			cpp_boolean resolveAttribute(cpp_int const&, local_ref< android::util::TypedValue > const&, cpp_boolean const&);
			void dump(cpp_int const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);

		}; //class Theme

		class NotFoundException;
		class NotFoundException
			: public cpp_object<NotFoundException>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			NotFoundException(jobject jobj)
			: cpp_object<NotFoundException>(jobj)
			{
			}

		}; //class NotFoundException

	} //namespace Resources_

	class Resources
		: public cpp_object<Resources>
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

		typedef Resources_::Theme Theme;
		typedef Resources_::NotFoundException NotFoundException;

		Resources(jobject jobj)
		: cpp_object<Resources>(jobj)
		{
		}

		static local_ref< android::content::res::Resources > getSystem();
		local_ref< java::lang::CharSequence > getText(cpp_int const&);
		local_ref< java::lang::CharSequence > getQuantityText(cpp_int const&, cpp_int const&);
		local_ref< java::lang::String > getString(cpp_int const&);
		local_ref< java::lang::String > getString(cpp_int const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		local_ref< java::lang::String > getQuantityString(cpp_int const&, cpp_int const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		local_ref< java::lang::String > getQuantityString(cpp_int const&, cpp_int const&);
		local_ref< java::lang::CharSequence > getText(cpp_int const&, local_ref< java::lang::CharSequence > const&);
		local_ref< cpp_object_array<java::lang::CharSequence, 1> > getTextArray(cpp_int const&);
		local_ref< cpp_object_array<java::lang::String, 1> > getStringArray(cpp_int const&);
		local_ref< cpp_int_array<1> > getIntArray(cpp_int const&);
		local_ref< android::content::res::TypedArray > obtainTypedArray(cpp_int const&);
		cpp_float getDimension(cpp_int const&);
		cpp_int getDimensionPixelOffset(cpp_int const&);
		cpp_int getDimensionPixelSize(cpp_int const&);
		cpp_float getFraction(cpp_int const&, cpp_int const&, cpp_int const&);
		local_ref< android::graphics::drawable::Drawable > getDrawable(cpp_int const&);
		local_ref< android::graphics::Movie > getMovie(cpp_int const&);
		cpp_int getColor(cpp_int const&);
		local_ref< android::content::res::ColorStateList > getColorStateList(cpp_int const&);
		cpp_boolean getBoolean(cpp_int const&);
		cpp_int getInteger(cpp_int const&);
		local_ref< android::content::res::XmlResourceParser > getLayout(cpp_int const&);
		local_ref< android::content::res::XmlResourceParser > getAnimation(cpp_int const&);
		local_ref< android::content::res::XmlResourceParser > getXml(cpp_int const&);
		local_ref< java::io::InputStream > openRawResource(cpp_int const&);
		local_ref< java::io::InputStream > openRawResource(cpp_int const&, local_ref< android::util::TypedValue > const&);
		local_ref< android::content::res::AssetFileDescriptor > openRawResourceFd(cpp_int const&);
		void getValue(cpp_int const&, local_ref< android::util::TypedValue > const&, cpp_boolean const&);
		void getValue(local_ref< java::lang::String > const&, local_ref< android::util::TypedValue > const&, cpp_boolean const&);
		local_ref< android::content::res::Resources_::Theme > newTheme();
		local_ref< android::content::res::TypedArray > obtainAttributes(local_ref< android::util::AttributeSet > const&, local_ref< cpp_int_array<1> > const&);
		void updateConfiguration(local_ref< android::content::res::Configuration > const&, local_ref< android::util::DisplayMetrics > const&);
		local_ref< android::util::DisplayMetrics > getDisplayMetrics();
		local_ref< android::content::res::Configuration > getConfiguration();
		cpp_int getIdentifier(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getResourceName(cpp_int const&);
		local_ref< java::lang::String > getResourcePackageName(cpp_int const&);
		local_ref< java::lang::String > getResourceTypeName(cpp_int const&);
		local_ref< java::lang::String > getResourceEntryName(cpp_int const&);
		void parseBundleExtras(local_ref< android::content::res::XmlResourceParser > const&, local_ref< android::os::Bundle > const&);
		void parseBundleExtra(local_ref< java::lang::String > const&, local_ref< android::util::AttributeSet > const&, local_ref< android::os::Bundle > const&);
		local_ref< android::content::res::AssetManager > getAssets();
		void flushLayoutCache();
		void finishPreloading();
	}; //class Resources

} //namespace res
} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_RESOURCES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_RESOURCES_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_RES_RESOURCES_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::content::res::Resources_::Theme > create< android::content::res::Resources_::Theme>(local_ref< android::content::res::Resources > const &a0)
{
	return local_ref< android::content::res::Resources_::Theme >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::res::Resources_::Theme::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::res::Resources_::Theme::J2CPP_CLASS_NAME, android::content::res::Resources_::Theme::J2CPP_METHOD_NAME(0), android::content::res::Resources_::Theme::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void android::content::res::Resources_::Theme::applyStyle(cpp_int const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::content::res::Resources_::Theme::setTo(local_ref< android::content::res::Resources_::Theme > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::res::TypedArray > android::content::res::Resources_::Theme::obtainStyledAttributes(local_ref< cpp_int_array<1> > const &a0)
{
	return local_ref< android::content::res::TypedArray >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::res::TypedArray > android::content::res::Resources_::Theme::obtainStyledAttributes(cpp_int const &a0, local_ref< cpp_int_array<1> > const &a1)
{
	return local_ref< android::content::res::TypedArray >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::content::res::TypedArray > android::content::res::Resources_::Theme::obtainStyledAttributes(local_ref< android::util::AttributeSet > const &a0, local_ref< cpp_int_array<1> > const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< android::content::res::TypedArray >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::content::res::Resources_::Theme::resolveAttribute(cpp_int const &a0, local_ref< android::util::TypedValue > const &a1, cpp_boolean const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::content::res::Resources_::Theme::dump(cpp_int const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}




J2CPP_DEFINE_CLASS(android::content::res::Resources_::Theme,"android/content/res/Resources$Theme")
J2CPP_DEFINE_METHOD(android::content::res::Resources_::Theme,0,"<init>","(Landroid/content/res/Resources;)V")
J2CPP_DEFINE_METHOD(android::content::res::Resources_::Theme,1,"applyStyle","(IZ)V")
J2CPP_DEFINE_METHOD(android::content::res::Resources_::Theme,2,"setTo","(Landroid/content/res/Resources$Theme;)V")
J2CPP_DEFINE_METHOD(android::content::res::Resources_::Theme,3,"obtainStyledAttributes","([I)Landroid/content/res/TypedArray;")
J2CPP_DEFINE_METHOD(android::content::res::Resources_::Theme,4,"obtainStyledAttributes","(I[I)Landroid/content/res/TypedArray;")
J2CPP_DEFINE_METHOD(android::content::res::Resources_::Theme,5,"obtainStyledAttributes","(Landroid/util/AttributeSet;[III)Landroid/content/res/TypedArray;")
J2CPP_DEFINE_METHOD(android::content::res::Resources_::Theme,6,"resolveAttribute","(ILandroid/util/TypedValue;Z)Z")
J2CPP_DEFINE_METHOD(android::content::res::Resources_::Theme,7,"dump","(ILjava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::res::Resources_::Theme,8,"finalize","()V")
J2CPP_DEFINE_FIELD(android::content::res::Resources_::Theme,0,"this$0","Landroid/content/res/Resources;")

template <>
local_ref< android::content::res::Resources_::NotFoundException > create< android::content::res::Resources_::NotFoundException>()
{
	return local_ref< android::content::res::Resources_::NotFoundException >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::res::Resources_::NotFoundException::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::res::Resources_::NotFoundException::J2CPP_CLASS_NAME, android::content::res::Resources_::NotFoundException::J2CPP_METHOD_NAME(0), android::content::res::Resources_::NotFoundException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::content::res::Resources_::NotFoundException > create< android::content::res::Resources_::NotFoundException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::content::res::Resources_::NotFoundException >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::res::Resources_::NotFoundException::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::res::Resources_::NotFoundException::J2CPP_CLASS_NAME, android::content::res::Resources_::NotFoundException::J2CPP_METHOD_NAME(1), android::content::res::Resources_::NotFoundException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::res::Resources_::NotFoundException,"android/content/res/Resources$NotFoundException")
J2CPP_DEFINE_METHOD(android::content::res::Resources_::NotFoundException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::res::Resources_::NotFoundException,1,"<init>","(Ljava/lang/String;)V")


template <>
local_ref< android::content::res::Resources > create< android::content::res::Resources>(local_ref< android::content::res::AssetManager > const &a0, local_ref< android::util::DisplayMetrics > const &a1, local_ref< android::content::res::Configuration > const &a2)
{
	return local_ref< android::content::res::Resources >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::res::Resources::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::res::Resources::J2CPP_CLASS_NAME, android::content::res::Resources::J2CPP_METHOD_NAME(0), android::content::res::Resources::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::content::res::Resources > android::content::res::Resources::getSystem()
{
	return local_ref< android::content::res::Resources >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

local_ref< java::lang::CharSequence > android::content::res::Resources::getText(cpp_int const &a0)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::content::res::Resources::getQuantityText(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::res::Resources::getString(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::res::Resources::getString(cpp_int const &a0, local_ref< cpp_object_array<java::lang::Object, 1> > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::res::Resources::getQuantityString(cpp_int const &a0, cpp_int const &a1, local_ref< cpp_object_array<java::lang::Object, 1> > const &a2)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::res::Resources::getQuantityString(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::content::res::Resources::getText(cpp_int const &a0, local_ref< java::lang::CharSequence > const &a1)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::CharSequence, 1> > android::content::res::Resources::getTextArray(cpp_int const &a0)
{
	return local_ref< cpp_object_array<java::lang::CharSequence, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > android::content::res::Resources::getStringArray(cpp_int const &a0)
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< cpp_int_array<1> > android::content::res::Resources::getIntArray(cpp_int const &a0)
{
	return local_ref< cpp_int_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::res::TypedArray > android::content::res::Resources::obtainTypedArray(cpp_int const &a0)
{
	return local_ref< android::content::res::TypedArray >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float android::content::res::Resources::getDimension(cpp_int const &a0)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::content::res::Resources::getDimensionPixelOffset(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::content::res::Resources::getDimensionPixelSize(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_float android::content::res::Resources::getFraction(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::content::res::Resources::getDrawable(cpp_int const &a0)
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::Movie > android::content::res::Resources::getMovie(cpp_int const &a0)
{
	return local_ref< android::graphics::Movie >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::content::res::Resources::getColor(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::res::ColorStateList > android::content::res::Resources::getColorStateList(cpp_int const &a0)
{
	return local_ref< android::content::res::ColorStateList >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::content::res::Resources::getBoolean(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::content::res::Resources::getInteger(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::res::XmlResourceParser > android::content::res::Resources::getLayout(cpp_int const &a0)
{
	return local_ref< android::content::res::XmlResourceParser >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::res::XmlResourceParser > android::content::res::Resources::getAnimation(cpp_int const &a0)
{
	return local_ref< android::content::res::XmlResourceParser >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::res::XmlResourceParser > android::content::res::Resources::getXml(cpp_int const &a0)
{
	return local_ref< android::content::res::XmlResourceParser >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::InputStream > android::content::res::Resources::openRawResource(cpp_int const &a0)
{
	return local_ref< java::io::InputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::io::InputStream > android::content::res::Resources::openRawResource(cpp_int const &a0, local_ref< android::util::TypedValue > const &a1)
{
	return local_ref< java::io::InputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::content::res::AssetFileDescriptor > android::content::res::Resources::openRawResourceFd(cpp_int const &a0)
{
	return local_ref< android::content::res::AssetFileDescriptor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

void android::content::res::Resources::getValue(cpp_int const &a0, local_ref< android::util::TypedValue > const &a1, cpp_boolean const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::content::res::Resources::getValue(local_ref< java::lang::String > const &a0, local_ref< android::util::TypedValue > const &a1, cpp_boolean const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::content::res::Resources_::Theme > android::content::res::Resources::newTheme()
{
	return local_ref< android::content::res::Resources_::Theme >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}

local_ref< android::content::res::TypedArray > android::content::res::Resources::obtainAttributes(local_ref< android::util::AttributeSet > const &a0, local_ref< cpp_int_array<1> > const &a1)
{
	return local_ref< android::content::res::TypedArray >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::content::res::Resources::updateConfiguration(local_ref< android::content::res::Configuration > const &a0, local_ref< android::util::DisplayMetrics > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::util::DisplayMetrics > android::content::res::Resources::getDisplayMetrics()
{
	return local_ref< android::util::DisplayMetrics >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>()
		)
	);
}

local_ref< android::content::res::Configuration > android::content::res::Resources::getConfiguration()
{
	return local_ref< android::content::res::Configuration >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>()
		)
	);
}

cpp_int android::content::res::Resources::getIdentifier(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::res::Resources::getResourceName(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::res::Resources::getResourcePackageName(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::res::Resources::getResourceTypeName(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::res::Resources::getResourceEntryName(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype()
		)
	);
}

void android::content::res::Resources::parseBundleExtras(local_ref< android::content::res::XmlResourceParser > const &a0, local_ref< android::os::Bundle > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::content::res::Resources::parseBundleExtra(local_ref< java::lang::String > const &a0, local_ref< android::util::AttributeSet > const &a1, local_ref< android::os::Bundle > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::content::res::AssetManager > android::content::res::Resources::getAssets()
{
	return local_ref< android::content::res::AssetManager >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>()
		)
	);
}

void android::content::res::Resources::flushLayoutCache()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>()
		)
	);
}

void android::content::res::Resources::finishPreloading()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::res::Resources,"android/content/res/Resources")
J2CPP_DEFINE_METHOD(android::content::res::Resources,0,"<init>","(Landroid/content/res/AssetManager;Landroid/util/DisplayMetrics;Landroid/content/res/Configuration;)V")
J2CPP_DEFINE_METHOD(android::content::res::Resources,1,"getSystem","()Landroid/content/res/Resources;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,2,"getText","(I)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,3,"getQuantityText","(II)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,4,"getString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,5,"getString","(I[java.lang.Object)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,6,"getQuantityString","(II[java.lang.Object)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,7,"getQuantityString","(II)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,8,"getText","(ILjava/lang/CharSequence;)Ljava/lang/CharSequence;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,9,"getTextArray","(I)[java.lang.CharSequence")
J2CPP_DEFINE_METHOD(android::content::res::Resources,10,"getStringArray","(I)[java.lang.String")
J2CPP_DEFINE_METHOD(android::content::res::Resources,11,"getIntArray","(I)[I")
J2CPP_DEFINE_METHOD(android::content::res::Resources,12,"obtainTypedArray","(I)Landroid/content/res/TypedArray;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,13,"getDimension","(I)F")
J2CPP_DEFINE_METHOD(android::content::res::Resources,14,"getDimensionPixelOffset","(I)I")
J2CPP_DEFINE_METHOD(android::content::res::Resources,15,"getDimensionPixelSize","(I)I")
J2CPP_DEFINE_METHOD(android::content::res::Resources,16,"getFraction","(III)F")
J2CPP_DEFINE_METHOD(android::content::res::Resources,17,"getDrawable","(I)Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,18,"getMovie","(I)Landroid/graphics/Movie;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,19,"getColor","(I)I")
J2CPP_DEFINE_METHOD(android::content::res::Resources,20,"getColorStateList","(I)Landroid/content/res/ColorStateList;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,21,"getBoolean","(I)Z")
J2CPP_DEFINE_METHOD(android::content::res::Resources,22,"getInteger","(I)I")
J2CPP_DEFINE_METHOD(android::content::res::Resources,23,"getLayout","(I)Landroid/content/res/XmlResourceParser;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,24,"getAnimation","(I)Landroid/content/res/XmlResourceParser;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,25,"getXml","(I)Landroid/content/res/XmlResourceParser;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,26,"openRawResource","(I)Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,27,"openRawResource","(ILandroid/util/TypedValue;)Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,28,"openRawResourceFd","(I)Landroid/content/res/AssetFileDescriptor;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,29,"getValue","(ILandroid/util/TypedValue;Z)V")
J2CPP_DEFINE_METHOD(android::content::res::Resources,30,"getValue","(Ljava/lang/String;Landroid/util/TypedValue;Z)V")
J2CPP_DEFINE_METHOD(android::content::res::Resources,31,"newTheme","()Landroid/content/res/Resources$Theme;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,32,"obtainAttributes","(Landroid/util/AttributeSet;[I)Landroid/content/res/TypedArray;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,33,"updateConfiguration","(Landroid/content/res/Configuration;Landroid/util/DisplayMetrics;)V")
J2CPP_DEFINE_METHOD(android::content::res::Resources,34,"getDisplayMetrics","()Landroid/util/DisplayMetrics;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,35,"getConfiguration","()Landroid/content/res/Configuration;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,36,"getIdentifier","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(android::content::res::Resources,37,"getResourceName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,38,"getResourcePackageName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,39,"getResourceTypeName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,40,"getResourceEntryName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,41,"parseBundleExtras","(Landroid/content/res/XmlResourceParser;Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::content::res::Resources,42,"parseBundleExtra","(Ljava/lang/String;Landroid/util/AttributeSet;Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::content::res::Resources,43,"getAssets","()Landroid/content/res/AssetManager;")
J2CPP_DEFINE_METHOD(android::content::res::Resources,44,"flushLayoutCache","()V")
J2CPP_DEFINE_METHOD(android::content::res::Resources,45,"finishPreloading","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_RESOURCES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION