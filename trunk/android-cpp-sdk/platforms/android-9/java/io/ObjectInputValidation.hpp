/*================================================================================
  code generated by: java2cpp
  class: java.io.ObjectInputValidation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OBJECTINPUTVALIDATION_HPP_DECL
#define J2CPP_JAVA_IO_OBJECTINPUTVALIDATION_HPP_DECL






namespace j2cpp {

namespace java { namespace io {

	class ObjectInputValidation;
	class ObjectInputValidation
		: public cpp_object<ObjectInputValidation>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		ObjectInputValidation(jobject jobj)
		: cpp_object<ObjectInputValidation>(jobj)
		{
		}

		void validateObject();
	}; //class ObjectInputValidation

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_OBJECTINPUTVALIDATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OBJECTINPUTVALIDATION_HPP_IMPL
#define J2CPP_JAVA_IO_OBJECTINPUTVALIDATION_HPP_IMPL

namespace j2cpp {


void java::io::ObjectInputValidation::validateObject()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::io::ObjectInputValidation,"java/io/ObjectInputValidation")
J2CPP_DEFINE_METHOD(java::io::ObjectInputValidation,0,"validateObject","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_OBJECTINPUTVALIDATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION