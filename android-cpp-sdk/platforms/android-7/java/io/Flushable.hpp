/*================================================================================
  code generated by: java2cpp
  class: java.io.Flushable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FLUSHABLE_HPP_DECL
#define J2CPP_JAVA_IO_FLUSHABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace io {

	class Flushable;
	class Flushable
		: public cpp_object<Flushable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit Flushable(jobject jobj)
		: cpp_object<Flushable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void flush();
	}; //class Flushable

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FLUSHABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_FLUSHABLE_HPP_IMPL
#define J2CPP_JAVA_IO_FLUSHABLE_HPP_IMPL

namespace j2cpp {



java::io::Flushable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

void java::io::Flushable::flush()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::io::Flushable,"java/io/Flushable")
J2CPP_DEFINE_METHOD(java::io::Flushable,0,"flush","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_FLUSHABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
