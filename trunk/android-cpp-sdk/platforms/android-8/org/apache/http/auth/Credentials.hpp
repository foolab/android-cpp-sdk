/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.auth.Credentials
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_CREDENTIALS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_CREDENTIALS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { class Principal; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/Principal.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth {

	class Credentials;
	class Credentials
		: public object<Credentials>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit Credentials(jobject jobj)
		: object<Credentials>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::security::Principal > getUserPrincipal();
		local_ref< java::lang::String > getPassword();
	}; //class Credentials

} //namespace auth
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_CREDENTIALS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_CREDENTIALS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_CREDENTIALS_HPP_IMPL

namespace j2cpp {



org::apache::http::auth::Credentials::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::security::Principal > org::apache::http::auth::Credentials::getUserPrincipal()
{
	return call_method<
		org::apache::http::auth::Credentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::Credentials::J2CPP_METHOD_NAME(0),
		org::apache::http::auth::Credentials::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::security::Principal > >
	(get_jobject());
}

local_ref< java::lang::String > org::apache::http::auth::Credentials::getPassword()
{
	return call_method<
		org::apache::http::auth::Credentials::J2CPP_CLASS_NAME,
		org::apache::http::auth::Credentials::J2CPP_METHOD_NAME(1),
		org::apache::http::auth::Credentials::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::auth::Credentials,"org/apache/http/auth/Credentials")
J2CPP_DEFINE_METHOD(org::apache::http::auth::Credentials,0,"getUserPrincipal","()Ljava/security/Principal;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::Credentials,1,"getPassword","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_CREDENTIALS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
