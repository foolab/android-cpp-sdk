/*================================================================================
  code generated by: java2cpp
  class: android.util.AttributeSet
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_ATTRIBUTESET_HPP_DECL
#define J2CPP_ANDROID_UTIL_ATTRIBUTESET_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace util {

	class AttributeSet;
	class AttributeSet
		: public cpp_object<AttributeSet>
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

		AttributeSet(jobject jobj)
		: cpp_object<AttributeSet>(jobj)
		{
		}

		cpp_int getAttributeCount();
		local_ref< java::lang::String > getAttributeName(cpp_int const&);
		local_ref< java::lang::String > getAttributeValue(cpp_int const&);
		local_ref< java::lang::String > getAttributeValue(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getPositionDescription();
		cpp_int getAttributeNameResource(cpp_int const&);
		cpp_int getAttributeListValue(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&, cpp_int const&);
		cpp_boolean getAttributeBooleanValue(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_boolean const&);
		cpp_int getAttributeResourceValue(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_int const&);
		cpp_int getAttributeIntValue(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_int const&);
		cpp_int getAttributeUnsignedIntValue(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_int const&);
		cpp_float getAttributeFloatValue(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, cpp_float const&);
		cpp_int getAttributeListValue(cpp_int const&, local_ref< cpp_object_array<java::lang::String, 1> > const&, cpp_int const&);
		cpp_boolean getAttributeBooleanValue(cpp_int const&, cpp_boolean const&);
		cpp_int getAttributeResourceValue(cpp_int const&, cpp_int const&);
		cpp_int getAttributeIntValue(cpp_int const&, cpp_int const&);
		cpp_int getAttributeUnsignedIntValue(cpp_int const&, cpp_int const&);
		cpp_float getAttributeFloatValue(cpp_int const&, cpp_float const&);
		local_ref< java::lang::String > getIdAttribute();
		local_ref< java::lang::String > getClassAttribute();
		cpp_int getIdAttributeResourceValue(cpp_int const&);
		cpp_int getStyleAttribute();
	}; //class AttributeSet

} //namespace util
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_ATTRIBUTESET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_ATTRIBUTESET_HPP_IMPL
#define J2CPP_ANDROID_UTIL_ATTRIBUTESET_HPP_IMPL

namespace j2cpp {


cpp_int android::util::AttributeSet::getAttributeCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::String > android::util::AttributeSet::getAttributeName(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::util::AttributeSet::getAttributeValue(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::util::AttributeSet::getAttributeValue(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::util::AttributeSet::getPositionDescription()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_int android::util::AttributeSet::getAttributeNameResource(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::util::AttributeSet::getAttributeListValue(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< cpp_object_array<java::lang::String, 1> > const &a2, cpp_int const &a3)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

cpp_boolean android::util::AttributeSet::getAttributeBooleanValue(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_boolean const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::util::AttributeSet::getAttributeResourceValue(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::util::AttributeSet::getAttributeIntValue(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::util::AttributeSet::getAttributeUnsignedIntValue(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_float android::util::AttributeSet::getAttributeFloatValue(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_float const &a2)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int android::util::AttributeSet::getAttributeListValue(cpp_int const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::util::AttributeSet::getAttributeBooleanValue(cpp_int const &a0, cpp_boolean const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::util::AttributeSet::getAttributeResourceValue(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::util::AttributeSet::getAttributeIntValue(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::util::AttributeSet::getAttributeUnsignedIntValue(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_float android::util::AttributeSet::getAttributeFloatValue(cpp_int const &a0, cpp_float const &a1)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::util::AttributeSet::getIdAttribute()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::lang::String > android::util::AttributeSet::getClassAttribute()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_int android::util::AttributeSet::getIdAttributeResourceValue(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::util::AttributeSet::getStyleAttribute()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::util::AttributeSet,"android/util/AttributeSet")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,0,"getAttributeCount","()I")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,1,"getAttributeName","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,2,"getAttributeValue","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,3,"getAttributeValue","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,4,"getPositionDescription","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,5,"getAttributeNameResource","(I)I")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,6,"getAttributeListValue","(Ljava/lang/String;Ljava/lang/String;[java.lang.StringI)I")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,7,"getAttributeBooleanValue","(Ljava/lang/String;Ljava/lang/String;Z)Z")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,8,"getAttributeResourceValue","(Ljava/lang/String;Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,9,"getAttributeIntValue","(Ljava/lang/String;Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,10,"getAttributeUnsignedIntValue","(Ljava/lang/String;Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,11,"getAttributeFloatValue","(Ljava/lang/String;Ljava/lang/String;F)F")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,12,"getAttributeListValue","(I[java.lang.StringI)I")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,13,"getAttributeBooleanValue","(IZ)Z")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,14,"getAttributeResourceValue","(II)I")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,15,"getAttributeIntValue","(II)I")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,16,"getAttributeUnsignedIntValue","(II)I")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,17,"getAttributeFloatValue","(IF)F")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,18,"getIdAttribute","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,19,"getClassAttribute","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,20,"getIdAttributeResourceValue","(I)I")
J2CPP_DEFINE_METHOD(android::util::AttributeSet,21,"getStyleAttribute","()I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_ATTRIBUTESET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
