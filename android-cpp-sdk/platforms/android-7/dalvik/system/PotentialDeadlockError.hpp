/*================================================================================
  code generated by: java2cpp
  class: dalvik.system.PotentialDeadlockError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_POTENTIALDEADLOCKERROR_HPP_DECL
#define J2CPP_DALVIK_SYSTEM_POTENTIALDEADLOCKERROR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class VirtualMachineError; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <java/lang/VirtualMachineError.hpp>


namespace j2cpp {

namespace dalvik { namespace system {

	class PotentialDeadlockError;
	class PotentialDeadlockError
		: public cpp_object<PotentialDeadlockError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit PotentialDeadlockError(jobject jobj)
		: cpp_object<PotentialDeadlockError>(jobj)
		{
		}

		operator local_ref<java::lang::VirtualMachineError>() const;


		PotentialDeadlockError();
		PotentialDeadlockError(local_ref< java::lang::String > const&);
	}; //class PotentialDeadlockError

} //namespace system
} //namespace dalvik

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_POTENTIALDEADLOCKERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_SYSTEM_POTENTIALDEADLOCKERROR_HPP_IMPL
#define J2CPP_DALVIK_SYSTEM_POTENTIALDEADLOCKERROR_HPP_IMPL

namespace j2cpp {



dalvik::system::PotentialDeadlockError::operator local_ref<java::lang::VirtualMachineError>() const
{
	return local_ref<java::lang::VirtualMachineError>(get_jtype());
}


dalvik::system::PotentialDeadlockError::PotentialDeadlockError()
: cpp_object<dalvik::system::PotentialDeadlockError>(
	environment::get().get_jenv()->NewObject(
		get_class<dalvik::system::PotentialDeadlockError::J2CPP_CLASS_NAME>(),
		get_method_id<dalvik::system::PotentialDeadlockError::J2CPP_CLASS_NAME, dalvik::system::PotentialDeadlockError::J2CPP_METHOD_NAME(0), dalvik::system::PotentialDeadlockError::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



dalvik::system::PotentialDeadlockError::PotentialDeadlockError(local_ref< java::lang::String > const &a0)
: cpp_object<dalvik::system::PotentialDeadlockError>(
	environment::get().get_jenv()->NewObject(
		get_class<dalvik::system::PotentialDeadlockError::J2CPP_CLASS_NAME>(),
		get_method_id<dalvik::system::PotentialDeadlockError::J2CPP_CLASS_NAME, dalvik::system::PotentialDeadlockError::J2CPP_METHOD_NAME(1), dalvik::system::PotentialDeadlockError::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(dalvik::system::PotentialDeadlockError,"dalvik/system/PotentialDeadlockError")
J2CPP_DEFINE_METHOD(dalvik::system::PotentialDeadlockError,0,"<init>","()V")
J2CPP_DEFINE_METHOD(dalvik::system::PotentialDeadlockError,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_DALVIK_SYSTEM_POTENTIALDEADLOCKERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
