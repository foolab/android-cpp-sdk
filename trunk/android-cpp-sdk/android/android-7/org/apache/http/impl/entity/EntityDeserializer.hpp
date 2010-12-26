/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.entity.EntityDeserializer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_ENTITYDESERIALIZER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_ENTITYDESERIALIZER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpEntity; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpMessage; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace entity { class ContentLengthStrategy; } } } } }


#include <org/apache/http/HttpEntity.hpp>
#include <org/apache/http/HttpMessage.hpp>
#include <org/apache/http/entity/ContentLengthStrategy.hpp>
#include <org/apache/http/io/SessionInputBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace entity {

	class EntityDeserializer;
	class EntityDeserializer
		: public cpp_object<EntityDeserializer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		EntityDeserializer(jobject jobj)
		: cpp_object<EntityDeserializer>(jobj)
		{
		}

		local_ref< org::apache::http::HttpEntity > deserialize(local_ref< org::apache::http::io::SessionInputBuffer > const&, local_ref< org::apache::http::HttpMessage > const&);
	}; //class EntityDeserializer

} //namespace entity
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_ENTITYDESERIALIZER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_ENTITYDESERIALIZER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_ENTITYDESERIALIZER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::entity::EntityDeserializer > create< org::apache::http::impl::entity::EntityDeserializer>(local_ref< org::apache::http::entity::ContentLengthStrategy > const &a0)
{
	return local_ref< org::apache::http::impl::entity::EntityDeserializer >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::entity::EntityDeserializer::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::entity::EntityDeserializer::J2CPP_CLASS_NAME, org::apache::http::impl::entity::EntityDeserializer::J2CPP_METHOD_NAME(0), org::apache::http::impl::entity::EntityDeserializer::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


local_ref< org::apache::http::HttpEntity > org::apache::http::impl::entity::EntityDeserializer::deserialize(local_ref< org::apache::http::io::SessionInputBuffer > const &a0, local_ref< org::apache::http::HttpMessage > const &a1)
{
	return local_ref< org::apache::http::HttpEntity >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::entity::EntityDeserializer,"org/apache/http/impl/entity/EntityDeserializer")
J2CPP_DEFINE_METHOD(org::apache::http::impl::entity::EntityDeserializer,0,"<init>","(Lorg/apache/http/entity/ContentLengthStrategy;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::entity::EntityDeserializer,1,"doDeserialize","(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/HttpMessage;)Lorg/apache/http/entity/BasicHttpEntity;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::entity::EntityDeserializer,2,"deserialize","(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/HttpMessage;)Lorg/apache/http/HttpEntity;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_ENTITY_ENTITYDESERIALIZER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
