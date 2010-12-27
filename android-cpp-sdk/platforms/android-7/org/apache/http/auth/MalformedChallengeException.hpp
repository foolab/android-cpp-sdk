/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.auth.MalformedChallengeException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_MALFORMEDCHALLENGEEXCEPTION_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_MALFORMEDCHALLENGEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolException; } } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <org/apache/http/ProtocolException.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth {

	class MalformedChallengeException;
	class MalformedChallengeException
		: public cpp_object<MalformedChallengeException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit MalformedChallengeException(jobject jobj)
		: cpp_object<MalformedChallengeException>(jobj)
		{
		}

		operator local_ref<org::apache::http::ProtocolException>() const;


		MalformedChallengeException();
		MalformedChallengeException(local_ref< java::lang::String > const&);
		MalformedChallengeException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
	}; //class MalformedChallengeException

} //namespace auth
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_MALFORMEDCHALLENGEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_MALFORMEDCHALLENGEEXCEPTION_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_MALFORMEDCHALLENGEEXCEPTION_HPP_IMPL

namespace j2cpp {



org::apache::http::auth::MalformedChallengeException::operator local_ref<org::apache::http::ProtocolException>() const
{
	return local_ref<org::apache::http::ProtocolException>(get_jtype());
}


org::apache::http::auth::MalformedChallengeException::MalformedChallengeException()
: cpp_object<org::apache::http::auth::MalformedChallengeException>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::auth::MalformedChallengeException::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::auth::MalformedChallengeException::J2CPP_CLASS_NAME, org::apache::http::auth::MalformedChallengeException::J2CPP_METHOD_NAME(0), org::apache::http::auth::MalformedChallengeException::J2CPP_METHOD_SIGNATURE(0), false>()
	)
)
{
}



org::apache::http::auth::MalformedChallengeException::MalformedChallengeException(local_ref< java::lang::String > const &a0)
: cpp_object<org::apache::http::auth::MalformedChallengeException>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::auth::MalformedChallengeException::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::auth::MalformedChallengeException::J2CPP_CLASS_NAME, org::apache::http::auth::MalformedChallengeException::J2CPP_METHOD_NAME(1), org::apache::http::auth::MalformedChallengeException::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype()
	)
)
{
}



org::apache::http::auth::MalformedChallengeException::MalformedChallengeException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: cpp_object<org::apache::http::auth::MalformedChallengeException>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::auth::MalformedChallengeException::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::auth::MalformedChallengeException::J2CPP_CLASS_NAME, org::apache::http::auth::MalformedChallengeException::J2CPP_METHOD_NAME(2), org::apache::http::auth::MalformedChallengeException::J2CPP_METHOD_SIGNATURE(2), false>(),
		a0.get_jtype(), a1.get_jtype()
	)
)
{
}



J2CPP_DEFINE_CLASS(org::apache::http::auth::MalformedChallengeException,"org/apache/http/auth/MalformedChallengeException")
J2CPP_DEFINE_METHOD(org::apache::http::auth::MalformedChallengeException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::MalformedChallengeException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::MalformedChallengeException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_MALFORMEDCHALLENGEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
