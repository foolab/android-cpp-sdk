/*================================================================================
  code generated by: java2cpp
  class: javax.net.ssl.HttpsURLConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_HTTPSURLCONNECTION_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_HTTPSURLCONNECTION_HPP_DECL


namespace j2cpp { namespace javax { namespace net { namespace ssl { class HostnameVerifier; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSocketFactory; } } } }
namespace j2cpp { namespace java { namespace net { class HttpURLConnection; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class Certificate; } } } }


#include <java/lang/String.hpp>
#include <java/net/HttpURLConnection.hpp>
#include <java/security/Principal.hpp>
#include <java/security/cert/Certificate.hpp>
#include <javax/net/ssl/HostnameVerifier.hpp>
#include <javax/net/ssl/SSLSocketFactory.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class HttpsURLConnection;
	class HttpsURLConnection
		: public cpp_object<HttpsURLConnection>
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
		J2CPP_DECLARE_FIELD(0)

		explicit HttpsURLConnection(jobject jobj)
		: cpp_object<HttpsURLConnection>(jobj)
		{
		}

		operator local_ref<java::net::HttpURLConnection>() const;


		static void setDefaultHostnameVerifier(local_ref< javax::net::ssl::HostnameVerifier > const&);
		static local_ref< javax::net::ssl::HostnameVerifier > getDefaultHostnameVerifier();
		static void setDefaultSSLSocketFactory(local_ref< javax::net::ssl::SSLSocketFactory > const&);
		static local_ref< javax::net::ssl::SSLSocketFactory > getDefaultSSLSocketFactory();
		local_ref< java::lang::String > getCipherSuite();
		local_ref< cpp_object_array<java::security::cert::Certificate, 1> > getLocalCertificates();
		local_ref< cpp_object_array<java::security::cert::Certificate, 1> > getServerCertificates();
		local_ref< java::security::Principal > getPeerPrincipal();
		local_ref< java::security::Principal > getLocalPrincipal();
		void setHostnameVerifier(local_ref< javax::net::ssl::HostnameVerifier > const&);
		local_ref< javax::net::ssl::HostnameVerifier > getHostnameVerifier();
		void setSSLSocketFactory(local_ref< javax::net::ssl::SSLSocketFactory > const&);
		local_ref< javax::net::ssl::SSLSocketFactory > getSSLSocketFactory();

	}; //class HttpsURLConnection

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_HTTPSURLCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_HTTPSURLCONNECTION_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_HTTPSURLCONNECTION_HPP_IMPL

namespace j2cpp {



javax::net::ssl::HttpsURLConnection::operator local_ref<java::net::HttpURLConnection>() const
{
	return local_ref<java::net::HttpURLConnection>(get_jtype());
}


void javax::net::ssl::HttpsURLConnection::setDefaultHostnameVerifier(local_ref< javax::net::ssl::HostnameVerifier > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< javax::net::ssl::HostnameVerifier > javax::net::ssl::HttpsURLConnection::getDefaultHostnameVerifier()
{
	return local_ref< javax::net::ssl::HostnameVerifier >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

void javax::net::ssl::HttpsURLConnection::setDefaultSSLSocketFactory(local_ref< javax::net::ssl::SSLSocketFactory > const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< javax::net::ssl::SSLSocketFactory > javax::net::ssl::HttpsURLConnection::getDefaultSSLSocketFactory()
{
	return local_ref< javax::net::ssl::SSLSocketFactory >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>()
		)
	);
}

local_ref< java::lang::String > javax::net::ssl::HttpsURLConnection::getCipherSuite()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< cpp_object_array<java::security::cert::Certificate, 1> > javax::net::ssl::HttpsURLConnection::getLocalCertificates()
{
	return local_ref< cpp_object_array<java::security::cert::Certificate, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< cpp_object_array<java::security::cert::Certificate, 1> > javax::net::ssl::HttpsURLConnection::getServerCertificates()
{
	return local_ref< cpp_object_array<java::security::cert::Certificate, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::security::Principal > javax::net::ssl::HttpsURLConnection::getPeerPrincipal()
{
	return local_ref< java::security::Principal >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::security::Principal > javax::net::ssl::HttpsURLConnection::getLocalPrincipal()
{
	return local_ref< java::security::Principal >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void javax::net::ssl::HttpsURLConnection::setHostnameVerifier(local_ref< javax::net::ssl::HostnameVerifier > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< javax::net::ssl::HostnameVerifier > javax::net::ssl::HttpsURLConnection::getHostnameVerifier()
{
	return local_ref< javax::net::ssl::HostnameVerifier >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void javax::net::ssl::HttpsURLConnection::setSSLSocketFactory(local_ref< javax::net::ssl::SSLSocketFactory > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< javax::net::ssl::SSLSocketFactory > javax::net::ssl::HttpsURLConnection::getSSLSocketFactory()
{
	return local_ref< javax::net::ssl::SSLSocketFactory >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(javax::net::ssl::HttpsURLConnection,"javax/net/ssl/HttpsURLConnection")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,0,"<init>","(Ljava/net/URL;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,1,"setDefaultHostnameVerifier","(Ljavax/net/ssl/HostnameVerifier;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,2,"getDefaultHostnameVerifier","()Ljavax/net/ssl/HostnameVerifier;")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,3,"setDefaultSSLSocketFactory","(Ljavax/net/ssl/SSLSocketFactory;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,4,"getDefaultSSLSocketFactory","()Ljavax/net/ssl/SSLSocketFactory;")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,5,"getCipherSuite","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,6,"getLocalCertificates","()[java.security.cert.Certificate")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,7,"getServerCertificates","()[java.security.cert.Certificate")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,8,"getPeerPrincipal","()Ljava/security/Principal;")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,9,"getLocalPrincipal","()Ljava/security/Principal;")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,10,"setHostnameVerifier","(Ljavax/net/ssl/HostnameVerifier;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,11,"getHostnameVerifier","()Ljavax/net/ssl/HostnameVerifier;")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,12,"setSSLSocketFactory","(Ljavax/net/ssl/SSLSocketFactory;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::HttpsURLConnection,13,"getSSLSocketFactory","()Ljavax/net/ssl/SSLSocketFactory;")
J2CPP_DEFINE_FIELD(javax::net::ssl::HttpsURLConnection,0,"hostnameVerifier","Ljavax/net/ssl/HostnameVerifier;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_HTTPSURLCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
