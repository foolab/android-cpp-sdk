/*================================================================================
  code generated by: java2cpp
  class: android.net.LocalSocketAddress
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_LOCALSOCKETADDRESS_HPP_DECL
#define J2CPP_ANDROID_NET_LOCALSOCKETADDRESS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace net { namespace LocalSocketAddress_ { class Namespace; } } } }


#include <android/net/LocalSocketAddress.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace net {

	class LocalSocketAddress;
	namespace LocalSocketAddress_ {

		class Namespace;
		class Namespace
			: public cpp_object<Namespace>
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

			Namespace(jobject jobj)
			: cpp_object<Namespace>(jobj)
			{
			}

			static local_ref< cpp_object_array<android::net::LocalSocketAddress_::Namespace, 1> > values();
			static local_ref< android::net::LocalSocketAddress_::Namespace > valueOf(local_ref< java::lang::String > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::net::LocalSocketAddress_::Namespace > > ABSTRACT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::net::LocalSocketAddress_::Namespace > > FILESYSTEM;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::net::LocalSocketAddress_::Namespace > > RESERVED;
		}; //class Namespace

	} //namespace LocalSocketAddress_

	class LocalSocketAddress
		: public cpp_object<LocalSocketAddress>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		typedef LocalSocketAddress_::Namespace Namespace;

		LocalSocketAddress(jobject jobj)
		: cpp_object<LocalSocketAddress>(jobj)
		{
		}

		local_ref< java::lang::String > getName();
		local_ref< android::net::LocalSocketAddress_::Namespace > getNamespace();
	}; //class LocalSocketAddress

} //namespace net
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_LOCALSOCKETADDRESS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_LOCALSOCKETADDRESS_HPP_IMPL
#define J2CPP_ANDROID_NET_LOCALSOCKETADDRESS_HPP_IMPL

namespace j2cpp {



local_ref< cpp_object_array<android::net::LocalSocketAddress_::Namespace, 1> > android::net::LocalSocketAddress_::Namespace::values()
{
	return local_ref< cpp_object_array<android::net::LocalSocketAddress_::Namespace, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), true>()
		)
	);
}

local_ref< android::net::LocalSocketAddress_::Namespace > android::net::LocalSocketAddress_::Namespace::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::net::LocalSocketAddress_::Namespace >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::net::LocalSocketAddress_::Namespace > create< android::net::LocalSocketAddress_::Namespace>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< android::net::LocalSocketAddress_::Namespace >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::LocalSocketAddress_::Namespace::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::LocalSocketAddress_::Namespace::J2CPP_CLASS_NAME, android::net::LocalSocketAddress_::Namespace::J2CPP_METHOD_NAME(2), android::net::LocalSocketAddress_::Namespace::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::net::LocalSocketAddress_::Namespace::J2CPP_CLASS_NAME,
	android::net::LocalSocketAddress_::Namespace::J2CPP_FIELD_NAME(0),
	android::net::LocalSocketAddress_::Namespace::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::net::LocalSocketAddress_::Namespace >
> android::net::LocalSocketAddress_::Namespace::ABSTRACT;

static_field<
	android::net::LocalSocketAddress_::Namespace::J2CPP_CLASS_NAME,
	android::net::LocalSocketAddress_::Namespace::J2CPP_FIELD_NAME(1),
	android::net::LocalSocketAddress_::Namespace::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::net::LocalSocketAddress_::Namespace >
> android::net::LocalSocketAddress_::Namespace::FILESYSTEM;

static_field<
	android::net::LocalSocketAddress_::Namespace::J2CPP_CLASS_NAME,
	android::net::LocalSocketAddress_::Namespace::J2CPP_FIELD_NAME(2),
	android::net::LocalSocketAddress_::Namespace::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::net::LocalSocketAddress_::Namespace >
> android::net::LocalSocketAddress_::Namespace::RESERVED;


J2CPP_DEFINE_CLASS(android::net::LocalSocketAddress_::Namespace,"android/net/LocalSocketAddress$Namespace")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress_::Namespace,0,"values","()[android.net.LocalSocketAddress.Namespace")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress_::Namespace,1,"valueOf","(Ljava/lang/String;)Landroid/net/LocalSocketAddress$Namespace;")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress_::Namespace,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress_::Namespace,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::net::LocalSocketAddress_::Namespace,0,"ABSTRACT","Landroid/net/LocalSocketAddress$Namespace;")
J2CPP_DEFINE_FIELD(android::net::LocalSocketAddress_::Namespace,1,"FILESYSTEM","Landroid/net/LocalSocketAddress$Namespace;")
J2CPP_DEFINE_FIELD(android::net::LocalSocketAddress_::Namespace,2,"RESERVED","Landroid/net/LocalSocketAddress$Namespace;")
J2CPP_DEFINE_FIELD(android::net::LocalSocketAddress_::Namespace,3,"$VALUES","[android.net.LocalSocketAddress.Namespace")


template <>
local_ref< android::net::LocalSocketAddress > create< android::net::LocalSocketAddress>(local_ref< java::lang::String > const &a0, local_ref< android::net::LocalSocketAddress_::Namespace > const &a1)
{
	return local_ref< android::net::LocalSocketAddress >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::LocalSocketAddress::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::LocalSocketAddress::J2CPP_CLASS_NAME, android::net::LocalSocketAddress::J2CPP_METHOD_NAME(0), android::net::LocalSocketAddress::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::net::LocalSocketAddress > create< android::net::LocalSocketAddress>(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::net::LocalSocketAddress >(
		environment::get().get_jenv()->NewObject(
			get_class<android::net::LocalSocketAddress::J2CPP_CLASS_NAME>(),
			get_method_id<android::net::LocalSocketAddress::J2CPP_CLASS_NAME, android::net::LocalSocketAddress::J2CPP_METHOD_NAME(1), android::net::LocalSocketAddress::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::net::LocalSocketAddress::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< android::net::LocalSocketAddress_::Namespace > android::net::LocalSocketAddress::getNamespace()
{
	return local_ref< android::net::LocalSocketAddress_::Namespace >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::net::LocalSocketAddress,"android/net/LocalSocketAddress")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress,0,"<init>","(Ljava/lang/String;Landroid/net/LocalSocketAddress$Namespace;)V")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress,2,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::LocalSocketAddress,3,"getNamespace","()Landroid/net/LocalSocketAddress$Namespace;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_LOCALSOCKETADDRESS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
