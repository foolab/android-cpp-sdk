/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.params.HttpProtocolParams
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class ProtocolVersion; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/ProtocolVersion.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace params {

	class HttpProtocolParams;
	class HttpProtocolParams
		: public cpp_object<HttpProtocolParams>
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

		HttpProtocolParams(jobject jobj)
		: cpp_object<HttpProtocolParams>(jobj)
		{
		}

		static local_ref< java::lang::String > getHttpElementCharset(local_ref< org::apache::http::params::HttpParams > const&);
		static void setHttpElementCharset(local_ref< org::apache::http::params::HttpParams > const&, local_ref< java::lang::String > const&);
		static local_ref< java::lang::String > getContentCharset(local_ref< org::apache::http::params::HttpParams > const&);
		static void setContentCharset(local_ref< org::apache::http::params::HttpParams > const&, local_ref< java::lang::String > const&);
		static local_ref< org::apache::http::ProtocolVersion > getVersion(local_ref< org::apache::http::params::HttpParams > const&);
		static void setVersion(local_ref< org::apache::http::params::HttpParams > const&, local_ref< org::apache::http::ProtocolVersion > const&);
		static local_ref< java::lang::String > getUserAgent(local_ref< org::apache::http::params::HttpParams > const&);
		static void setUserAgent(local_ref< org::apache::http::params::HttpParams > const&, local_ref< java::lang::String > const&);
		static cpp_boolean useExpectContinue(local_ref< org::apache::http::params::HttpParams > const&);
		static void setUseExpectContinue(local_ref< org::apache::http::params::HttpParams > const&, cpp_boolean const&);
	}; //class HttpProtocolParams

} //namespace params
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::params::HttpProtocolParams > create< org::apache::http::params::HttpProtocolParams>()
{
	return local_ref< org::apache::http::params::HttpProtocolParams >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::params::HttpProtocolParams::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::params::HttpProtocolParams::J2CPP_CLASS_NAME, org::apache::http::params::HttpProtocolParams::J2CPP_METHOD_NAME(0), org::apache::http::params::HttpProtocolParams::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::params::HttpProtocolParams::getHttpElementCharset(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::params::HttpProtocolParams::setHttpElementCharset(local_ref< org::apache::http::params::HttpParams > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::params::HttpProtocolParams::getContentCharset(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::params::HttpProtocolParams::setContentCharset(local_ref< org::apache::http::params::HttpParams > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::apache::http::ProtocolVersion > org::apache::http::params::HttpProtocolParams::getVersion(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return local_ref< org::apache::http::ProtocolVersion >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::params::HttpProtocolParams::setVersion(local_ref< org::apache::http::params::HttpParams > const &a0, local_ref< org::apache::http::ProtocolVersion > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::params::HttpProtocolParams::getUserAgent(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::params::HttpProtocolParams::setUserAgent(local_ref< org::apache::http::params::HttpParams > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::params::HttpProtocolParams::useExpectContinue(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::params::HttpProtocolParams::setUseExpectContinue(local_ref< org::apache::http::params::HttpParams > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::params::HttpProtocolParams,"org/apache/http/params/HttpProtocolParams")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParams,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParams,1,"getHttpElementCharset","(Lorg/apache/http/params/HttpParams;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParams,2,"setHttpElementCharset","(Lorg/apache/http/params/HttpParams;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParams,3,"getContentCharset","(Lorg/apache/http/params/HttpParams;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParams,4,"setContentCharset","(Lorg/apache/http/params/HttpParams;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParams,5,"getVersion","(Lorg/apache/http/params/HttpParams;)Lorg/apache/http/ProtocolVersion;")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParams,6,"setVersion","(Lorg/apache/http/params/HttpParams;Lorg/apache/http/ProtocolVersion;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParams,7,"getUserAgent","(Lorg/apache/http/params/HttpParams;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParams,8,"setUserAgent","(Lorg/apache/http/params/HttpParams;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParams,9,"useExpectContinue","(Lorg/apache/http/params/HttpParams;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpProtocolParams,10,"setUseExpectContinue","(Lorg/apache/http/params/HttpParams;Z)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPPROTOCOLPARAMS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
