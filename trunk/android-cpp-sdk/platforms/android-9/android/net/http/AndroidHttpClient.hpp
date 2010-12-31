/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.net.http.AndroidHttpClient
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_HTTP_ANDROIDHTTPCLIENT_HPP_DECL
#define J2CPP_ANDROID_NET_HTTP_ANDROIDHTTPCLIENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace android { namespace content { class ContentResolver; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntity; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace entity { class AbstractHttpEntity; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionManager; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { class ResponseHandler; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { namespace methods { class HttpUriRequest; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace client { class HttpClient; } } } } }


#include <android/content/ContentResolver.hpp>
#include <android/content/Context.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/HttpEntity.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/client/HttpClient.hpp>
#include <org/apache/http/client/ResponseHandler.hpp>
#include <org/apache/http/client/methods/HttpUriRequest.hpp>
#include <org/apache/http/conn/ClientConnectionManager.hpp>
#include <org/apache/http/entity/AbstractHttpEntity.hpp>
#include <org/apache/http/params/HttpParams.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace android { namespace net { namespace http {

	class AndroidHttpClient;
	class AndroidHttpClient
		: public object<AndroidHttpClient>
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
		J2CPP_DECLARE_FIELD(0)

		explicit AndroidHttpClient(jobject jobj)
		: object<AndroidHttpClient>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::client::HttpClient>() const;


		static local_ref< android::net::http::AndroidHttpClient > newInstance(local_ref< java::lang::String >  const&, local_ref< android::content::Context >  const&);
		static local_ref< android::net::http::AndroidHttpClient > newInstance(local_ref< java::lang::String >  const&);
		static void modifyRequestToAcceptGzipResponse(local_ref< org::apache::http::HttpRequest >  const&);
		static local_ref< java::io::InputStream > getUngzippedContent(local_ref< org::apache::http::HttpEntity >  const&);
		void close();
		local_ref< org::apache::http::params::HttpParams > getParams();
		local_ref< org::apache::http::conn::ClientConnectionManager > getConnectionManager();
		local_ref< org::apache::http::HttpResponse > execute(local_ref< org::apache::http::client::methods::HttpUriRequest >  const&);
		local_ref< org::apache::http::HttpResponse > execute(local_ref< org::apache::http::client::methods::HttpUriRequest >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
		local_ref< org::apache::http::HttpResponse > execute(local_ref< org::apache::http::HttpHost >  const&, local_ref< org::apache::http::HttpRequest >  const&);
		local_ref< org::apache::http::HttpResponse > execute(local_ref< org::apache::http::HttpHost >  const&, local_ref< org::apache::http::HttpRequest >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
		local_ref< java::lang::Object > execute(local_ref< org::apache::http::client::methods::HttpUriRequest >  const&, local_ref< org::apache::http::client::ResponseHandler >  const&);
		local_ref< java::lang::Object > execute(local_ref< org::apache::http::client::methods::HttpUriRequest >  const&, local_ref< org::apache::http::client::ResponseHandler >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
		local_ref< java::lang::Object > execute(local_ref< org::apache::http::HttpHost >  const&, local_ref< org::apache::http::HttpRequest >  const&, local_ref< org::apache::http::client::ResponseHandler >  const&);
		local_ref< java::lang::Object > execute(local_ref< org::apache::http::HttpHost >  const&, local_ref< org::apache::http::HttpRequest >  const&, local_ref< org::apache::http::client::ResponseHandler >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&);
		static local_ref< org::apache::http::entity::AbstractHttpEntity > getCompressedEntity(local_ref< array<jbyte,1> >  const&, local_ref< android::content::ContentResolver >  const&);
		static jlong getMinGzipSize(local_ref< android::content::ContentResolver >  const&);
		void enableCurlLogging(local_ref< java::lang::String >  const&, jint);
		void disableCurlLogging();
		static jlong parseDate(local_ref< java::lang::String >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jlong > DEFAULT_SYNC_MIN_GZIP_BYTES;
	}; //class AndroidHttpClient

} //namespace http
} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_HTTP_ANDROIDHTTPCLIENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_HTTP_ANDROIDHTTPCLIENT_HPP_IMPL
#define J2CPP_ANDROID_NET_HTTP_ANDROIDHTTPCLIENT_HPP_IMPL

namespace j2cpp {



android::net::http::AndroidHttpClient::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::net::http::AndroidHttpClient::operator local_ref<org::apache::http::client::HttpClient>() const
{
	return local_ref<org::apache::http::client::HttpClient>(get_jobject());
}


local_ref< android::net::http::AndroidHttpClient > android::net::http::AndroidHttpClient::newInstance(local_ref< java::lang::String > const &a0, local_ref< android::content::Context > const &a1)
{
	return call_static_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(1),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::net::http::AndroidHttpClient > >
	(a0, a1);
}

local_ref< android::net::http::AndroidHttpClient > android::net::http::AndroidHttpClient::newInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(2),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::net::http::AndroidHttpClient > >
	(a0);
}


void android::net::http::AndroidHttpClient::modifyRequestToAcceptGzipResponse(local_ref< org::apache::http::HttpRequest > const &a0)
{
	return call_static_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(4),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(a0);
}

local_ref< java::io::InputStream > android::net::http::AndroidHttpClient::getUngzippedContent(local_ref< org::apache::http::HttpEntity > const &a0)
{
	return call_static_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(5),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::io::InputStream > >
	(a0);
}

void android::net::http::AndroidHttpClient::close()
{
	return call_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(6),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}

local_ref< org::apache::http::params::HttpParams > android::net::http::AndroidHttpClient::getParams()
{
	return call_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(7),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< org::apache::http::params::HttpParams > >
	(get_jobject());
}

local_ref< org::apache::http::conn::ClientConnectionManager > android::net::http::AndroidHttpClient::getConnectionManager()
{
	return call_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(8),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< org::apache::http::conn::ClientConnectionManager > >
	(get_jobject());
}

local_ref< org::apache::http::HttpResponse > android::net::http::AndroidHttpClient::execute(local_ref< org::apache::http::client::methods::HttpUriRequest > const &a0)
{
	return call_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(9),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< org::apache::http::HttpResponse > >
	(get_jobject(), a0);
}

local_ref< org::apache::http::HttpResponse > android::net::http::AndroidHttpClient::execute(local_ref< org::apache::http::client::methods::HttpUriRequest > const &a0, local_ref< org::apache::http::protocol::HttpContext > const &a1)
{
	return call_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(10),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< org::apache::http::HttpResponse > >
	(get_jobject(), a0, a1);
}

local_ref< org::apache::http::HttpResponse > android::net::http::AndroidHttpClient::execute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< org::apache::http::HttpRequest > const &a1)
{
	return call_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(11),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< org::apache::http::HttpResponse > >
	(get_jobject(), a0, a1);
}

local_ref< org::apache::http::HttpResponse > android::net::http::AndroidHttpClient::execute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< org::apache::http::HttpRequest > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return call_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(12),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< org::apache::http::HttpResponse > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > android::net::http::AndroidHttpClient::execute(local_ref< org::apache::http::client::methods::HttpUriRequest > const &a0, local_ref< org::apache::http::client::ResponseHandler > const &a1)
{
	return call_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(13),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > android::net::http::AndroidHttpClient::execute(local_ref< org::apache::http::client::methods::HttpUriRequest > const &a0, local_ref< org::apache::http::client::ResponseHandler > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return call_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(14),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > android::net::http::AndroidHttpClient::execute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< org::apache::http::HttpRequest > const &a1, local_ref< org::apache::http::client::ResponseHandler > const &a2)
{
	return call_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(15),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > android::net::http::AndroidHttpClient::execute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< org::apache::http::HttpRequest > const &a1, local_ref< org::apache::http::client::ResponseHandler > const &a2, local_ref< org::apache::http::protocol::HttpContext > const &a3)
{
	return call_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(16),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1, a2, a3);
}

local_ref< org::apache::http::entity::AbstractHttpEntity > android::net::http::AndroidHttpClient::getCompressedEntity(local_ref< array<jbyte,1> > const &a0, local_ref< android::content::ContentResolver > const &a1)
{
	return call_static_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(17),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< org::apache::http::entity::AbstractHttpEntity > >
	(a0, a1);
}

jlong android::net::http::AndroidHttpClient::getMinGzipSize(local_ref< android::content::ContentResolver > const &a0)
{
	return call_static_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(18),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(18), 
		jlong >
	(a0);
}

void android::net::http::AndroidHttpClient::enableCurlLogging(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(19),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0, a1);
}

void android::net::http::AndroidHttpClient::disableCurlLogging()
{
	return call_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(20),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject());
}

jlong android::net::http::AndroidHttpClient::parseDate(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
		android::net::http::AndroidHttpClient::J2CPP_METHOD_NAME(21),
		android::net::http::AndroidHttpClient::J2CPP_METHOD_SIGNATURE(21), 
		jlong >
	(a0);
}


static_field<
	android::net::http::AndroidHttpClient::J2CPP_CLASS_NAME,
	android::net::http::AndroidHttpClient::J2CPP_FIELD_NAME(0),
	android::net::http::AndroidHttpClient::J2CPP_FIELD_SIGNATURE(0),
	jlong
> android::net::http::AndroidHttpClient::DEFAULT_SYNC_MIN_GZIP_BYTES;


J2CPP_DEFINE_CLASS(android::net::http::AndroidHttpClient,"android/net/http/AndroidHttpClient")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,1,"newInstance","(Ljava/lang/String;Landroid/content/Context;)Landroid/net/http/AndroidHttpClient;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,2,"newInstance","(Ljava/lang/String;)Landroid/net/http/AndroidHttpClient;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,3,"finalize","()V")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,4,"modifyRequestToAcceptGzipResponse","(Lorg/apache/http/HttpRequest;)V")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,5,"getUngzippedContent","(Lorg/apache/http/HttpEntity;)Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,6,"close","()V")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,7,"getParams","()Lorg/apache/http/params/HttpParams;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,8,"getConnectionManager","()Lorg/apache/http/conn/ClientConnectionManager;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,9,"execute","(Lorg/apache/http/client/methods/HttpUriRequest;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,10,"execute","(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,11,"execute","(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,12,"execute","(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,13,"execute","(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/client/ResponseHandler;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,14,"execute","(Lorg/apache/http/client/methods/HttpUriRequest;Lorg/apache/http/client/ResponseHandler;Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,15,"execute","(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/client/ResponseHandler;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,16,"execute","(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/client/ResponseHandler;Lorg/apache/http/protocol/HttpContext;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,17,"getCompressedEntity","([BLandroid/content/ContentResolver;)Lorg/apache/http/entity/AbstractHttpEntity;")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,18,"getMinGzipSize","(Landroid/content/ContentResolver;)J")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,19,"enableCurlLogging","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,20,"disableCurlLogging","()V")
J2CPP_DEFINE_METHOD(android::net::http::AndroidHttpClient,21,"parseDate","(Ljava/lang/String;)J")
J2CPP_DEFINE_FIELD(android::net::http::AndroidHttpClient,0,"DEFAULT_SYNC_MIN_GZIP_BYTES","J")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_HTTP_ANDROIDHTTPCLIENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
