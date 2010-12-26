/*================================================================================
  code generated by: java2cpp
  class: java.net.Inet4Address
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_INET4ADDRESS_HPP_DECL
#define J2CPP_JAVA_NET_INET4ADDRESS_HPP_DECL






namespace j2cpp {

namespace java { namespace net {

	class Inet4Address;
	class Inet4Address
		: public cpp_object<Inet4Address>
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

		Inet4Address(jobject jobj)
		: cpp_object<Inet4Address>(jobj)
		{
		}

		cpp_boolean isMulticastAddress();
		cpp_boolean isAnyLocalAddress();
		cpp_boolean isLoopbackAddress();
		cpp_boolean isLinkLocalAddress();
		cpp_boolean isSiteLocalAddress();
		cpp_boolean isMCGlobal();
		cpp_boolean isMCNodeLocal();
		cpp_boolean isMCLinkLocal();
		cpp_boolean isMCSiteLocal();
		cpp_boolean isMCOrgLocal();
	}; //class Inet4Address

} //namespace net
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NET_INET4ADDRESS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_INET4ADDRESS_HPP_IMPL
#define J2CPP_JAVA_NET_INET4ADDRESS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::net::Inet4Address > create< java::net::Inet4Address>()
{
	return local_ref< java::net::Inet4Address >(
		environment::get().get_jenv()->NewObject(
			get_class<java::net::Inet4Address::J2CPP_CLASS_NAME>(),
			get_method_id<java::net::Inet4Address::J2CPP_CLASS_NAME, java::net::Inet4Address::J2CPP_METHOD_NAME(0), java::net::Inet4Address::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean java::net::Inet4Address::isMulticastAddress()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_boolean java::net::Inet4Address::isAnyLocalAddress()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean java::net::Inet4Address::isLoopbackAddress()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::net::Inet4Address::isLinkLocalAddress()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean java::net::Inet4Address::isSiteLocalAddress()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean java::net::Inet4Address::isMCGlobal()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean java::net::Inet4Address::isMCNodeLocal()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_boolean java::net::Inet4Address::isMCLinkLocal()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

cpp_boolean java::net::Inet4Address::isMCSiteLocal()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_boolean java::net::Inet4Address::isMCOrgLocal()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::net::Inet4Address,"java/net/Inet4Address")
J2CPP_DEFINE_METHOD(java::net::Inet4Address,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::Inet4Address,1,"isMulticastAddress","()Z")
J2CPP_DEFINE_METHOD(java::net::Inet4Address,2,"isAnyLocalAddress","()Z")
J2CPP_DEFINE_METHOD(java::net::Inet4Address,3,"isLoopbackAddress","()Z")
J2CPP_DEFINE_METHOD(java::net::Inet4Address,4,"isLinkLocalAddress","()Z")
J2CPP_DEFINE_METHOD(java::net::Inet4Address,5,"isSiteLocalAddress","()Z")
J2CPP_DEFINE_METHOD(java::net::Inet4Address,6,"isMCGlobal","()Z")
J2CPP_DEFINE_METHOD(java::net::Inet4Address,7,"isMCNodeLocal","()Z")
J2CPP_DEFINE_METHOD(java::net::Inet4Address,8,"isMCLinkLocal","()Z")
J2CPP_DEFINE_METHOD(java::net::Inet4Address,9,"isMCSiteLocal","()Z")
J2CPP_DEFINE_METHOD(java::net::Inet4Address,10,"isMCOrgLocal","()Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_INET4ADDRESS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
