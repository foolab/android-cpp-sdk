/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.AbstractHttpServerConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPSERVERCONNECTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPSERVERCONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpConnectionMetrics; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntityEnclosingRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpServerConnection; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpConnectionMetrics.hpp>
#include <org/apache/http/HttpEntityEnclosingRequest.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/HttpServerConnection.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl {

	class AbstractHttpServerConnection;
	class AbstractHttpServerConnection
		: public cpp_object<AbstractHttpServerConnection>
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

		explicit AbstractHttpServerConnection(jobject jobj)
		: cpp_object<AbstractHttpServerConnection>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpServerConnection>() const;


		AbstractHttpServerConnection();
		local_ref< org::apache::http::HttpRequest > receiveRequestHeader();
		void receiveRequestEntity(local_ref< org::apache::http::HttpEntityEnclosingRequest > const&);
		void flush();
		void sendResponseHeader(local_ref< org::apache::http::HttpResponse > const&);
		void sendResponseEntity(local_ref< org::apache::http::HttpResponse > const&);
		cpp_boolean isStale();
		local_ref< org::apache::http::HttpConnectionMetrics > getMetrics();
	}; //class AbstractHttpServerConnection

} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPSERVERCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPSERVERCONNECTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPSERVERCONNECTION_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::AbstractHttpServerConnection::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

org::apache::http::impl::AbstractHttpServerConnection::operator local_ref<org::apache::http::HttpServerConnection>() const
{
	return local_ref<org::apache::http::HttpServerConnection>(get_jtype());
}


org::apache::http::impl::AbstractHttpServerConnection::AbstractHttpServerConnection()
: cpp_object<org::apache::http::impl::AbstractHttpServerConnection>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::impl::AbstractHttpServerConnection::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::impl::AbstractHttpServerConnection::J2CPP_CLASS_NAME, org::apache::http::impl::AbstractHttpServerConnection::J2CPP_METHOD_NAME(0), org::apache::http::impl::AbstractHttpServerConnection::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}









local_ref< org::apache::http::HttpRequest > org::apache::http::impl::AbstractHttpServerConnection::receiveRequestHeader()
{
	return local_ref< org::apache::http::HttpRequest >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void org::apache::http::impl::AbstractHttpServerConnection::receiveRequestEntity(local_ref< org::apache::http::HttpEntityEnclosingRequest > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}


void org::apache::http::impl::AbstractHttpServerConnection::flush()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void org::apache::http::impl::AbstractHttpServerConnection::sendResponseHeader(local_ref< org::apache::http::HttpResponse > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::impl::AbstractHttpServerConnection::sendResponseEntity(local_ref< org::apache::http::HttpResponse > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::impl::AbstractHttpServerConnection::isStale()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< org::apache::http::HttpConnectionMetrics > org::apache::http::impl::AbstractHttpServerConnection::getMetrics()
{
	return local_ref< org::apache::http::HttpConnectionMetrics >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::AbstractHttpServerConnection,"org/apache/http/impl/AbstractHttpServerConnection")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,1,"assertOpen","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,2,"createEntityDeserializer","()Lorg/apache/http/impl/entity/EntityDeserializer;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,3,"createEntitySerializer","()Lorg/apache/http/impl/entity/EntitySerializer;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,4,"createHttpRequestFactory","()Lorg/apache/http/HttpRequestFactory;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,5,"createRequestParser","(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/HttpRequestFactory;Lorg/apache/http/params/HttpParams;)Lorg/apache/http/io/HttpMessageParser;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,6,"createResponseWriter","(Lorg/apache/http/io/SessionOutputBuffer;Lorg/apache/http/params/HttpParams;)Lorg/apache/http/io/HttpMessageWriter;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,7,"init","(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/io/SessionOutputBuffer;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,8,"receiveRequestHeader","()Lorg/apache/http/HttpRequest;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,9,"receiveRequestEntity","(Lorg/apache/http/HttpEntityEnclosingRequest;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,10,"doFlush","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,11,"flush","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,12,"sendResponseHeader","(Lorg/apache/http/HttpResponse;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,13,"sendResponseEntity","(Lorg/apache/http/HttpResponse;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,14,"isStale","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::AbstractHttpServerConnection,15,"getMetrics","()Lorg/apache/http/HttpConnectionMetrics;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_ABSTRACTHTTPSERVERCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
