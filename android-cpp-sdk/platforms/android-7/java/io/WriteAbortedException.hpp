/*================================================================================
  code generated by: java2cpp
  class: java.io.WriteAbortedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_WRITEABORTEDEXCEPTION_HPP_DECL
#define J2CPP_JAVA_IO_WRITEABORTEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class ObjectStreamException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/io/ObjectStreamException.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace io {

	class WriteAbortedException;
	class WriteAbortedException
		: public cpp_object<WriteAbortedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)

		explicit WriteAbortedException(jobject jobj)
		: cpp_object<WriteAbortedException>(jobj)
, detail(jobj)
		{
		}

		operator local_ref<java::io::ObjectStreamException>() const;


		WriteAbortedException(local_ref< java::lang::String > const&, local_ref< java::lang::Exception > const&);
		local_ref< java::lang::String > getMessage();
		local_ref< java::lang::Throwable > getCause();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::Exception > > detail;
	}; //class WriteAbortedException

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_WRITEABORTEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_WRITEABORTEDEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_IO_WRITEABORTEDEXCEPTION_HPP_IMPL

namespace j2cpp {



java::io::WriteAbortedException::operator local_ref<java::io::ObjectStreamException>() const
{
	return local_ref<java::io::ObjectStreamException>(get_jtype());
}


java::io::WriteAbortedException::WriteAbortedException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Exception > const &a1)
: cpp_object<java::io::WriteAbortedException>(
	environment::get().get_jenv()->NewObject(
		get_class<java::io::WriteAbortedException::J2CPP_CLASS_NAME>(),
		get_method_id<java::io::WriteAbortedException::J2CPP_CLASS_NAME, java::io::WriteAbortedException::J2CPP_METHOD_NAME(0), java::io::WriteAbortedException::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
, detail(get_jtype())
{
}


local_ref< java::lang::String > java::io::WriteAbortedException::getMessage()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::Throwable > java::io::WriteAbortedException::getCause()
{
	return local_ref< java::lang::Throwable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(java::io::WriteAbortedException,"java/io/WriteAbortedException")
J2CPP_DEFINE_METHOD(java::io::WriteAbortedException,0,"<init>","(Ljava/lang/String;Ljava/lang/Exception;)V")
J2CPP_DEFINE_METHOD(java::io::WriteAbortedException,1,"getMessage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::WriteAbortedException,2,"getCause","()Ljava/lang/Throwable;")
J2CPP_DEFINE_FIELD(java::io::WriteAbortedException,0,"detail","Ljava/lang/Exception;")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_WRITEABORTEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
