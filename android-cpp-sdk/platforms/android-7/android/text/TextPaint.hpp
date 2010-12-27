/*================================================================================
  code generated by: java2cpp
  class: android.text.TextPaint
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_TEXTPAINT_HPP_DECL
#define J2CPP_ANDROID_TEXT_TEXTPAINT_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class Paint; } } }


#include <android/graphics/Paint.hpp>


namespace j2cpp {

namespace android { namespace text {

	class TextPaint;
	class TextPaint
		: public cpp_object<TextPaint>
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

		explicit TextPaint(jobject jobj)
		: cpp_object<TextPaint>(jobj)
, bgColor(jobj)
, baselineShift(jobj)
, linkColor(jobj)
, drawableState(jobj)
, density(jobj)
		{
		}

		operator local_ref<android::graphics::Paint>() const;


		TextPaint();
		TextPaint(cpp_int const&);
		TextPaint(local_ref< android::graphics::Paint > const&);
		void set(local_ref< android::text::TextPaint > const&);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > bgColor;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > baselineShift;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > linkColor;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< cpp_int_array<1> > > drawableState;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_float > density;
	}; //class TextPaint

} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_TEXTPAINT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_TEXTPAINT_HPP_IMPL
#define J2CPP_ANDROID_TEXT_TEXTPAINT_HPP_IMPL

namespace j2cpp {



android::text::TextPaint::operator local_ref<android::graphics::Paint>() const
{
	return local_ref<android::graphics::Paint>(get_jtype());
}


android::text::TextPaint::TextPaint()
: cpp_object<android::text::TextPaint>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::TextPaint::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::TextPaint::J2CPP_CLASS_NAME, android::text::TextPaint::J2CPP_METHOD_NAME(0), android::text::TextPaint::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
, bgColor(get_jtype())
, baselineShift(get_jtype())
, linkColor(get_jtype())
, drawableState(get_jtype())
, density(get_jtype())
{
}



android::text::TextPaint::TextPaint(cpp_int const &a0)
: cpp_object<android::text::TextPaint>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::TextPaint::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::TextPaint::J2CPP_CLASS_NAME, android::text::TextPaint::J2CPP_METHOD_NAME(1), android::text::TextPaint::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
, bgColor(get_jtype())
, baselineShift(get_jtype())
, linkColor(get_jtype())
, drawableState(get_jtype())
, density(get_jtype())
{
}



android::text::TextPaint::TextPaint(local_ref< android::graphics::Paint > const &a0)
: cpp_object<android::text::TextPaint>(
	environment::get().get_jenv()->NewObject(
		get_class<android::text::TextPaint::J2CPP_CLASS_NAME>(),
		get_method_id<android::text::TextPaint::J2CPP_CLASS_NAME, android::text::TextPaint::J2CPP_METHOD_NAME(2), android::text::TextPaint::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype()
	)
)
, bgColor(get_jtype())
, baselineShift(get_jtype())
, linkColor(get_jtype())
, drawableState(get_jtype())
, density(get_jtype())
{
}


void android::text::TextPaint::set(local_ref< android::text::TextPaint > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::text::TextPaint,"android/text/TextPaint")
J2CPP_DEFINE_METHOD(android::text::TextPaint,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::TextPaint,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(android::text::TextPaint,2,"<init>","(Landroid/graphics/Paint;)V")
J2CPP_DEFINE_METHOD(android::text::TextPaint,3,"set","(Landroid/text/TextPaint;)V")
J2CPP_DEFINE_FIELD(android::text::TextPaint,0,"bgColor","I")
J2CPP_DEFINE_FIELD(android::text::TextPaint,1,"baselineShift","I")
J2CPP_DEFINE_FIELD(android::text::TextPaint,2,"linkColor","I")
J2CPP_DEFINE_FIELD(android::text::TextPaint,3,"drawableState","[I")
J2CPP_DEFINE_FIELD(android::text::TextPaint,4,"density","F")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_TEXTPAINT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
