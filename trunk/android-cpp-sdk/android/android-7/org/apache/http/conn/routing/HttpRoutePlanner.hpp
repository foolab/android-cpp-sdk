/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.routing.HttpRoutePlanner
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTEPLANNER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTEPLANNER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }


#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace routing {

	class HttpRoutePlanner;
	class HttpRoutePlanner
		: public cpp_object<HttpRoutePlanner>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		HttpRoutePlanner(jobject jobj)
		: cpp_object<HttpRoutePlanner>(jobj)
		{
		}

		local_ref< org::apache::http::conn::routing::HttpRoute > determineRoute(local_ref< org::apache::http::HttpHost > const&, local_ref< org::apache::http::HttpRequest > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
	}; //class HttpRoutePlanner

} //namespace routing
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTEPLANNER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTEPLANNER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTEPLANNER_HPP_IMPL

namespace j2cpp {


local_ref< org::apache::http::conn::routing::HttpRoute > org::apache::http::conn::routing::HttpRoutePlanner::determineRoute(local_ref< org::apache::http::HttpHost > const &a0, local_ref< org::apache::http::HttpRequest > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return local_ref< org::apache::http::conn::routing::HttpRoute >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::routing::HttpRoutePlanner,"org/apache/http/conn/routing/HttpRoutePlanner")
J2CPP_DEFINE_METHOD(org::apache::http::conn::routing::HttpRoutePlanner,0,"determineRoute","(Lorg/apache/http/HttpHost;Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/conn/routing/HttpRoute;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_ROUTING_HTTPROUTEPLANNER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
