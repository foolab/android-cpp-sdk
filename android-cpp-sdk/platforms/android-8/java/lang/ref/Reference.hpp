/*================================================================================
  code generated by: java2cpp
  class: java.lang.ref.Reference
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REF_REFERENCE_HPP_DECL
#define J2CPP_JAVA_LANG_REF_REFERENCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace ref {

	class Reference;
	class Reference
		: public cpp_object<Reference>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		Reference(jobject jobj)
		: cpp_object<Reference>(jobj)
		{
		}

		void clear();
		cpp_boolean enqueue();
		local_ref< java::lang::Object > get();
		cpp_boolean isEnqueued();
	}; //class Reference

} //namespace ref
} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REF_REFERENCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REF_REFERENCE_HPP_IMPL
#define J2CPP_JAVA_LANG_REF_REFERENCE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::lang::ref::Reference > create< java::lang::ref::Reference>()
{
	return local_ref< java::lang::ref::Reference >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::ref::Reference::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::ref::Reference::J2CPP_CLASS_NAME, java::lang::ref::Reference::J2CPP_METHOD_NAME(0), java::lang::ref::Reference::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void java::lang::ref::Reference::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean java::lang::ref::Reference::enqueue()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::Object > java::lang::ref::Reference::get()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::lang::ref::Reference::isEnqueued()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::ref::Reference,"java/lang/ref/Reference")
J2CPP_DEFINE_METHOD(java::lang::ref::Reference,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::ref::Reference,1,"clear","()V")
J2CPP_DEFINE_METHOD(java::lang::ref::Reference,2,"enqueue","()Z")
J2CPP_DEFINE_METHOD(java::lang::ref::Reference,3,"get","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::lang::ref::Reference,4,"isEnqueued","()Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REF_REFERENCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION