/*================================================================================
  code generated by: java2cpp
  class: java.util.AbstractCollection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ABSTRACTCOLLECTION_HPP_DECL
#define J2CPP_JAVA_UTIL_ABSTRACTCOLLECTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>


namespace j2cpp {

namespace java { namespace util {

	class AbstractCollection;
	class AbstractCollection
		: public cpp_object<AbstractCollection>
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

		AbstractCollection(jobject jobj)
		: cpp_object<AbstractCollection>(jobj)
		{
		}

		cpp_boolean add(local_ref< java::lang::Object > const&);
		cpp_boolean addAll(local_ref< java::util::Collection > const&);
		void clear();
		cpp_boolean contains(local_ref< java::lang::Object > const&);
		cpp_boolean containsAll(local_ref< java::util::Collection > const&);
		cpp_boolean isEmpty();
		local_ref< java::util::Iterator > iterator();
		cpp_boolean remove(local_ref< java::lang::Object > const&);
		cpp_boolean removeAll(local_ref< java::util::Collection > const&);
		cpp_boolean retainAll(local_ref< java::util::Collection > const&);
		cpp_int size();
		local_ref< cpp_object_array<java::lang::Object, 1> > toArray();
		local_ref< cpp_object_array<java::lang::Object, 1> > toArray(local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		local_ref< java::lang::String > toString();
	}; //class AbstractCollection

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ABSTRACTCOLLECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ABSTRACTCOLLECTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_ABSTRACTCOLLECTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::AbstractCollection > create< java::util::AbstractCollection>()
{
	return local_ref< java::util::AbstractCollection >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::AbstractCollection::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::AbstractCollection::J2CPP_CLASS_NAME, java::util::AbstractCollection::J2CPP_METHOD_NAME(0), java::util::AbstractCollection::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean java::util::AbstractCollection::add(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::AbstractCollection::addAll(local_ref< java::util::Collection > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::AbstractCollection::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::util::AbstractCollection::contains(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::AbstractCollection::containsAll(local_ref< java::util::Collection > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::AbstractCollection::isEmpty()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::util::Iterator > java::util::AbstractCollection::iterator()
{
	return local_ref< java::util::Iterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_boolean java::util::AbstractCollection::remove(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::AbstractCollection::removeAll(local_ref< java::util::Collection > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::AbstractCollection::retainAll(local_ref< java::util::Collection > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::AbstractCollection::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::util::AbstractCollection::toArray()
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::util::AbstractCollection::toArray(local_ref< cpp_object_array<java::lang::Object, 1> > const &a0)
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::AbstractCollection::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::AbstractCollection,"java/util/AbstractCollection")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,1,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,2,"addAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,3,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,4,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,5,"containsAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,6,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,7,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,8,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,9,"removeAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,10,"retainAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,11,"size","()I")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,12,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,13,"toArray","([java.lang.Object)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::AbstractCollection,14,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ABSTRACTCOLLECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION