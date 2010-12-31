/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.client.protocol.ClientContext
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_CLIENTCONTEXT_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_CLIENTCONTEXT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace client { namespace protocol {

	class ClientContext;
	class ClientContext
		: public object<ClientContext>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)

		explicit ClientContext(jobject jobj)
		: object<ClientContext>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > COOKIESPEC_REGISTRY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > AUTHSCHEME_REGISTRY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > COOKIE_STORE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > COOKIE_SPEC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > COOKIE_ORIGIN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > CREDS_PROVIDER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > TARGET_AUTH_STATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > PROXY_AUTH_STATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > AUTH_SCHEME_PREF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > USER_TOKEN;
	}; //class ClientContext

} //namespace protocol
} //namespace client
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_CLIENTCONTEXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_CLIENTCONTEXT_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_CLIENTCONTEXT_HPP_IMPL

namespace j2cpp {



org::apache::http::client::protocol::ClientContext::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

static_field<
	org::apache::http::client::protocol::ClientContext::J2CPP_CLASS_NAME,
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_NAME(0),
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::client::protocol::ClientContext::COOKIESPEC_REGISTRY;

static_field<
	org::apache::http::client::protocol::ClientContext::J2CPP_CLASS_NAME,
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_NAME(1),
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> org::apache::http::client::protocol::ClientContext::AUTHSCHEME_REGISTRY;

static_field<
	org::apache::http::client::protocol::ClientContext::J2CPP_CLASS_NAME,
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_NAME(2),
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> org::apache::http::client::protocol::ClientContext::COOKIE_STORE;

static_field<
	org::apache::http::client::protocol::ClientContext::J2CPP_CLASS_NAME,
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_NAME(3),
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> org::apache::http::client::protocol::ClientContext::COOKIE_SPEC;

static_field<
	org::apache::http::client::protocol::ClientContext::J2CPP_CLASS_NAME,
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_NAME(4),
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> org::apache::http::client::protocol::ClientContext::COOKIE_ORIGIN;

static_field<
	org::apache::http::client::protocol::ClientContext::J2CPP_CLASS_NAME,
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_NAME(5),
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> org::apache::http::client::protocol::ClientContext::CREDS_PROVIDER;

static_field<
	org::apache::http::client::protocol::ClientContext::J2CPP_CLASS_NAME,
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_NAME(6),
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> org::apache::http::client::protocol::ClientContext::TARGET_AUTH_STATE;

static_field<
	org::apache::http::client::protocol::ClientContext::J2CPP_CLASS_NAME,
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_NAME(7),
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> org::apache::http::client::protocol::ClientContext::PROXY_AUTH_STATE;

static_field<
	org::apache::http::client::protocol::ClientContext::J2CPP_CLASS_NAME,
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_NAME(8),
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> org::apache::http::client::protocol::ClientContext::AUTH_SCHEME_PREF;

static_field<
	org::apache::http::client::protocol::ClientContext::J2CPP_CLASS_NAME,
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_NAME(9),
	org::apache::http::client::protocol::ClientContext::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> org::apache::http::client::protocol::ClientContext::USER_TOKEN;


J2CPP_DEFINE_CLASS(org::apache::http::client::protocol::ClientContext,"org/apache/http/client/protocol/ClientContext")
J2CPP_DEFINE_FIELD(org::apache::http::client::protocol::ClientContext,0,"COOKIESPEC_REGISTRY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::protocol::ClientContext,1,"AUTHSCHEME_REGISTRY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::protocol::ClientContext,2,"COOKIE_STORE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::protocol::ClientContext,3,"COOKIE_SPEC","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::protocol::ClientContext,4,"COOKIE_ORIGIN","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::protocol::ClientContext,5,"CREDS_PROVIDER","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::protocol::ClientContext,6,"TARGET_AUTH_STATE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::protocol::ClientContext,7,"PROXY_AUTH_STATE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::protocol::ClientContext,8,"AUTH_SCHEME_PREF","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::client::protocol::ClientContext,9,"USER_TOKEN","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CLIENT_PROTOCOL_CLIENTCONTEXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
