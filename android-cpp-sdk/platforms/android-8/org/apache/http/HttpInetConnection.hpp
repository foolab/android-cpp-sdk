/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.HttpInetConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPINETCONNECTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HTTPINETCONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace net { class InetAddress; } } }


#include <java/net/InetAddress.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HttpInetConnection;
	class HttpInetConnection
		: public cpp_object<HttpInetConnection>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		HttpInetConnection(jobject jobj)
		: cpp_object<HttpInetConnection>(jobj)
		{
		}

		local_ref< java::net::InetAddress > getLocalAddress();
		cpp_int getLocalPort();
		local_ref< java::net::InetAddress > getRemoteAddress();
		cpp_int getRemotePort();
	}; //class HttpInetConnection

} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPINETCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPINETCONNECTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HTTPINETCONNECTION_HPP_IMPL

namespace j2cpp {


local_ref< java::net::InetAddress > org::apache::http::HttpInetConnection::getLocalAddress()
{
	return local_ref< java::net::InetAddress >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_int org::apache::http::HttpInetConnection::getLocalPort()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::net::InetAddress > org::apache::http::HttpInetConnection::getRemoteAddress()
{
	return local_ref< java::net::InetAddress >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int org::apache::http::HttpInetConnection::getRemotePort()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::HttpInetConnection,"org/apache/http/HttpInetConnection")
J2CPP_DEFINE_METHOD(org::apache::http::HttpInetConnection,0,"getLocalAddress","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpInetConnection,1,"getLocalPort","()I")
J2CPP_DEFINE_METHOD(org::apache::http::HttpInetConnection,2,"getRemoteAddress","()Ljava/net/InetAddress;")
J2CPP_DEFINE_METHOD(org::apache::http::HttpInetConnection,3,"getRemotePort","()I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPINETCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION