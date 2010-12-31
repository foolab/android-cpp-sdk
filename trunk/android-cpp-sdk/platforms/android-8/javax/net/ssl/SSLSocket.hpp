/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.net.ssl.SSLSocket
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLSOCKET_HPP_DECL
#define J2CPP_JAVAX_NET_SSL_SSLSOCKET_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class HandshakeCompletedListener; } } } }
namespace j2cpp { namespace javax { namespace net { namespace ssl { class SSLSession; } } } }


#include <java/lang/String.hpp>
#include <java/net/Socket.hpp>
#include <javax/net/ssl/HandshakeCompletedListener.hpp>
#include <javax/net/ssl/SSLSession.hpp>


namespace j2cpp {

namespace javax { namespace net { namespace ssl {

	class SSLSocket;
	class SSLSocket
		: public object<SSLSocket>
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
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)

		explicit SSLSocket(jobject jobj)
		: object<SSLSocket>(jobj)
		{
		}

		operator local_ref<java::net::Socket>() const;


		local_ref< array< local_ref< java::lang::String >, 1> > getSupportedCipherSuites();
		local_ref< array< local_ref< java::lang::String >, 1> > getEnabledCipherSuites();
		void setEnabledCipherSuites(local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		local_ref< array< local_ref< java::lang::String >, 1> > getSupportedProtocols();
		local_ref< array< local_ref< java::lang::String >, 1> > getEnabledProtocols();
		void setEnabledProtocols(local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		local_ref< javax::net::ssl::SSLSession > getSession();
		void addHandshakeCompletedListener(local_ref< javax::net::ssl::HandshakeCompletedListener >  const&);
		void removeHandshakeCompletedListener(local_ref< javax::net::ssl::HandshakeCompletedListener >  const&);
		void startHandshake();
		void setUseClientMode(jboolean);
		jboolean getUseClientMode();
		void setNeedClientAuth(jboolean);
		jboolean getNeedClientAuth();
		void setWantClientAuth(jboolean);
		jboolean getWantClientAuth();
		void setEnableSessionCreation(jboolean);
		jboolean getEnableSessionCreation();
	}; //class SSLSocket

} //namespace ssl
} //namespace net
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLSOCKET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_NET_SSL_SSLSOCKET_HPP_IMPL
#define J2CPP_JAVAX_NET_SSL_SSLSOCKET_HPP_IMPL

namespace j2cpp {



javax::net::ssl::SSLSocket::operator local_ref<java::net::Socket>() const
{
	return local_ref<java::net::Socket>(get_jobject());
}






local_ref< array< local_ref< java::lang::String >, 1> > javax::net::ssl::SSLSocket::getSupportedCipherSuites()
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(5),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< array< local_ref< java::lang::String >, 1> > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > javax::net::ssl::SSLSocket::getEnabledCipherSuites()
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(6),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< array< local_ref< java::lang::String >, 1> > >
	(get_jobject());
}

void javax::net::ssl::SSLSocket::setEnabledCipherSuites(local_ref< array< local_ref< java::lang::String >, 1> > const &a0)
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(7),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::String >, 1> > javax::net::ssl::SSLSocket::getSupportedProtocols()
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(8),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< array< local_ref< java::lang::String >, 1> > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > javax::net::ssl::SSLSocket::getEnabledProtocols()
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(9),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< array< local_ref< java::lang::String >, 1> > >
	(get_jobject());
}

void javax::net::ssl::SSLSocket::setEnabledProtocols(local_ref< array< local_ref< java::lang::String >, 1> > const &a0)
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(10),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

local_ref< javax::net::ssl::SSLSession > javax::net::ssl::SSLSocket::getSession()
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(11),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< javax::net::ssl::SSLSession > >
	(get_jobject());
}

void javax::net::ssl::SSLSocket::addHandshakeCompletedListener(local_ref< javax::net::ssl::HandshakeCompletedListener > const &a0)
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(12),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

void javax::net::ssl::SSLSocket::removeHandshakeCompletedListener(local_ref< javax::net::ssl::HandshakeCompletedListener > const &a0)
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(13),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}

void javax::net::ssl::SSLSocket::startHandshake()
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(14),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject());
}

void javax::net::ssl::SSLSocket::setUseClientMode(jboolean a0)
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(15),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

jboolean javax::net::ssl::SSLSocket::getUseClientMode()
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(16),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(16), 
		jboolean >
	(get_jobject());
}

void javax::net::ssl::SSLSocket::setNeedClientAuth(jboolean a0)
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(17),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

jboolean javax::net::ssl::SSLSocket::getNeedClientAuth()
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(18),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(18), 
		jboolean >
	(get_jobject());
}

void javax::net::ssl::SSLSocket::setWantClientAuth(jboolean a0)
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(19),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0);
}

jboolean javax::net::ssl::SSLSocket::getWantClientAuth()
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(20),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject());
}

void javax::net::ssl::SSLSocket::setEnableSessionCreation(jboolean a0)
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(21),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0);
}

jboolean javax::net::ssl::SSLSocket::getEnableSessionCreation()
{
	return call_method<
		javax::net::ssl::SSLSocket::J2CPP_CLASS_NAME,
		javax::net::ssl::SSLSocket::J2CPP_METHOD_NAME(22),
		javax::net::ssl::SSLSocket::J2CPP_METHOD_SIGNATURE(22), 
		jboolean >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::net::ssl::SSLSocket,"javax/net/ssl/SSLSocket")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,1,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,2,"<init>","(Ljava/net/InetAddress;I)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,3,"<init>","(Ljava/lang/String;ILjava/net/InetAddress;I)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,4,"<init>","(Ljava/net/InetAddress;ILjava/net/InetAddress;I)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,5,"getSupportedCipherSuites","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,6,"getEnabledCipherSuites","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,7,"setEnabledCipherSuites","([java.lang.String)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,8,"getSupportedProtocols","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,9,"getEnabledProtocols","()[java.lang.String")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,10,"setEnabledProtocols","([java.lang.String)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,11,"getSession","()Ljavax/net/ssl/SSLSession;")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,12,"addHandshakeCompletedListener","(Ljavax/net/ssl/HandshakeCompletedListener;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,13,"removeHandshakeCompletedListener","(Ljavax/net/ssl/HandshakeCompletedListener;)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,14,"startHandshake","()V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,15,"setUseClientMode","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,16,"getUseClientMode","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,17,"setNeedClientAuth","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,18,"getNeedClientAuth","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,19,"setWantClientAuth","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,20,"getWantClientAuth","()Z")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,21,"setEnableSessionCreation","(Z)V")
J2CPP_DEFINE_METHOD(javax::net::ssl::SSLSocket,22,"getEnableSessionCreation","()Z")

} //namespace j2cpp

#endif //J2CPP_JAVAX_NET_SSL_SSLSOCKET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
