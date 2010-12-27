/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.conn.tsccm.AbstractConnPool
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ABSTRACTCONNPOOL_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ABSTRACTCONNPOOL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { namespace ref { class Reference; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace routing { class HttpRoute; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class BasicPoolEntry; } } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class RefQueueHandler; } } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class PoolEntryRequest; } } } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/ref/Reference.hpp>
#include <java/util/concurrent/TimeUnit.hpp>
#include <org/apache/http/conn/routing/HttpRoute.hpp>
#include <org/apache/http/impl/conn/tsccm/BasicPoolEntry.hpp>
#include <org/apache/http/impl/conn/tsccm/PoolEntryRequest.hpp>
#include <org/apache/http/impl/conn/tsccm/RefQueueHandler.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class AbstractConnPool;
	class AbstractConnPool
		: public cpp_object<AbstractConnPool>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		explicit AbstractConnPool(jobject jobj)
		: cpp_object<AbstractConnPool>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::impl::conn::tsccm::RefQueueHandler>() const;


		void enableConnectionGC();
		local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > getEntry(local_ref< org::apache::http::conn::routing::HttpRoute > const&, local_ref< java::lang::Object > const&, cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		local_ref< org::apache::http::impl::conn::tsccm::PoolEntryRequest > requestPoolEntry(local_ref< org::apache::http::conn::routing::HttpRoute > const&, local_ref< java::lang::Object > const&);
		void freeEntry(local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > const&, cpp_boolean const&, cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		void handleReference(local_ref< java::lang::ref::Reference > const&);
		void closeIdleConnections(cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		void closeExpiredConnections();
		void deleteClosedConnections();
		void shutdown();

	}; //class AbstractConnPool

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ABSTRACTCONNPOOL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ABSTRACTCONNPOOL_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ABSTRACTCONNPOOL_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::tsccm::AbstractConnPool::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

org::apache::http::impl::conn::tsccm::AbstractConnPool::operator local_ref<org::apache::http::impl::conn::tsccm::RefQueueHandler>() const
{
	return local_ref<org::apache::http::impl::conn::tsccm::RefQueueHandler>(get_jtype());
}


void org::apache::http::impl::conn::tsccm::AbstractConnPool::enableConnectionGC()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > org::apache::http::impl::conn::tsccm::AbstractConnPool::getEntry(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0, local_ref< java::lang::Object > const &a1, cpp_long const &a2, local_ref< java::util::concurrent::TimeUnit > const &a3)
{
	return local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< org::apache::http::impl::conn::tsccm::PoolEntryRequest > org::apache::http::impl::conn::tsccm::AbstractConnPool::requestPoolEntry(local_ref< org::apache::http::conn::routing::HttpRoute > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< org::apache::http::impl::conn::tsccm::PoolEntryRequest >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::http::impl::conn::tsccm::AbstractConnPool::freeEntry(local_ref< org::apache::http::impl::conn::tsccm::BasicPoolEntry > const &a0, cpp_boolean const &a1, cpp_long const &a2, local_ref< java::util::concurrent::TimeUnit > const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void org::apache::http::impl::conn::tsccm::AbstractConnPool::handleReference(local_ref< java::lang::ref::Reference > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}


void org::apache::http::impl::conn::tsccm::AbstractConnPool::closeIdleConnections(cpp_long const &a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::http::impl::conn::tsccm::AbstractConnPool::closeExpiredConnections()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void org::apache::http::impl::conn::tsccm::AbstractConnPool::deleteClosedConnections()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void org::apache::http::impl::conn::tsccm::AbstractConnPool::shutdown()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}




J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::AbstractConnPool,"org/apache/http/impl/conn/tsccm/AbstractConnPool")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::AbstractConnPool,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::AbstractConnPool,1,"enableConnectionGC","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::AbstractConnPool,2,"getEntry","(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::AbstractConnPool,3,"requestPoolEntry","(Lorg/apache/http/conn/routing/HttpRoute;Ljava/lang/Object;)Lorg/apache/http/impl/conn/tsccm/PoolEntryRequest;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::AbstractConnPool,4,"freeEntry","(Lorg/apache/http/impl/conn/tsccm/BasicPoolEntry;ZJLjava/util/concurrent/TimeUnit;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::AbstractConnPool,5,"handleReference","(Ljava/lang/ref/Reference;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::AbstractConnPool,6,"handleLostEntry","(Lorg/apache/http/conn/routing/HttpRoute;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::AbstractConnPool,7,"closeIdleConnections","(JLjava/util/concurrent/TimeUnit;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::AbstractConnPool,8,"closeExpiredConnections","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::AbstractConnPool,9,"deleteClosedConnections","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::AbstractConnPool,10,"shutdown","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::AbstractConnPool,11,"closeConnection","(Lorg/apache/http/conn/OperatedClientConnection;)V")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::AbstractConnPool,0,"poolLock","Ljava/util/concurrent/locks/Lock;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::AbstractConnPool,1,"issuedConnections","Ljava/util/Set;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::AbstractConnPool,2,"idleConnHandler","Lorg/apache/http/impl/conn/IdleConnectionHandler;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::AbstractConnPool,3,"numConnections","I")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::AbstractConnPool,4,"refQueue","Ljava/lang/ref/ReferenceQueue;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::AbstractConnPool,5,"isShutDown","Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_ABSTRACTCONNPOOL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
