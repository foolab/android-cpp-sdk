/*================================================================================
  code generated by: java2cpp
  class: javax.net.ssl.SSLSocketFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLSOCKETFACTORY_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLSOCKETFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace javax { namespace net { class SocketFactory; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <java/net/Socket.hpp>
#include <javax/net/SocketFactory.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLSocketFactory;
	class SSLSocketFactory
		: public cpp_object<SSLSocketFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		SSLSocketFactory(jobject jobj)
		: cpp_object<SSLSocketFactory>(jobj)
		{
		}

		static local_ref< javax::net::SocketFactory > getDefault();
		local_ref< cpp_object_array<java::lang::String, 1> > getDefaultCipherSuites();
		local_ref< cpp_object_array<java::lang::String, 1> > getSupportedCipherSuites();
		local_ref< java::net::Socket > createSocket(local_ref< java::net::Socket > const&, local_ref< java::lang::String > const&, cpp_int const&, cpp_boolean const&);
	}; //class SSLSocketFactory

} //namespace ssl
} //namespace net
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLSOCKETFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLSOCKETFACTORY_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLSOCKETFACTORY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::net::ssl::SSLSocketFactory > create< javax::net::ssl::SSLSocketFactory>()
{
	return local_ref< javax::net::ssl::SSLSocketFactory >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::net::ssl::SSLSocketFactory::J2CPP_CLASS_NAME>(),
			get_method_id<javax::net::ssl::SSLSocketFactory::J2CPP_CLASS_NAME, javax::net::ssl::SSLSocketFactory::J2CPP_METHOD_NAME(0), javax::net::ssl::SSLSocketFactory::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< javax::net::SocketFactory > javax::net::ssl::SSLSocketFactory::getDefault()
{
	return local_ref< javax::net::SocketFactory >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > javax::net::ssl::SSLSocketFactory::getDefaultCipherSuites()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::String, 1> > javax::net::ssl::SSLSocketFactory::getSupportedCipherSuites()
{
	return local_ref< cpp_object_array<java::lang::String, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::net::Socket > javax::net::ssl::SSLSocketFactory::createSocket(local_ref< java::net::Socket > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2, cpp_boolean const &a3)
{
	return local_ref< java::net::Socket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::net::ssl::SSLSocketFactory,"javax/net/ssl/SSLSocketFactory")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocketFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocketFactory,1,"getDefault","()Ljavax/net/SocketFactory;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocketFactory,2,"getDefaultCipherSuites","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocketFactory,3,"getSupportedCipherSuites","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocketFactory,4,"createSocket","(Ljava/net/Socket;Ljava/lang/String;IZ)Ljava/net/Socket;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLSOCKETFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
