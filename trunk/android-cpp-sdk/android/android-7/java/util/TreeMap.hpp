/*================================================================================
  code generated by: java2cpp
  class: java.util.TreeMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TREEMAP_HPP_DECL
#define J2CPP_JAVA_UTIL_TREEMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class SortedMap; } } }
namespace j2cpp { namespace java { namespace util { class Comparator; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }


#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <java/util/SortedMap.hpp>


namespace j2cpp {

namespace java { namespace util {

	class TreeMap;
	class TreeMap
		: public cpp_object<TreeMap>
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

		TreeMap(jobject jobj)
		: cpp_object<TreeMap>(jobj)
		{
		}

		void clear();
		local_ref< java::lang::Object > clone();
		local_ref< java::util::Comparator > comparator();
		cpp_boolean containsKey(local_ref< java::lang::Object > const&);
		cpp_boolean containsValue(local_ref< java::lang::Object > const&);
		local_ref< java::util::Set > entrySet();
		local_ref< java::lang::Object > firstKey();
		local_ref< java::lang::Object > get(local_ref< java::lang::Object > const&);
		local_ref< java::util::SortedMap > headMap(local_ref< java::lang::Object > const&);
		local_ref< java::util::Set > keySet();
		local_ref< java::lang::Object > lastKey();
		local_ref< java::lang::Object > put(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		void putAll(local_ref< java::util::Map > const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::Object > const&);
		cpp_int size();
		local_ref< java::util::SortedMap > subMap(local_ref< java::lang::Object > const&, local_ref< java::lang::Object > const&);
		local_ref< java::util::SortedMap > tailMap(local_ref< java::lang::Object > const&);
		local_ref< java::util::Collection > values();
	}; //class TreeMap

} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TREEMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TREEMAP_HPP_IMPL
#define J2CPP_JAVA_UTIL_TREEMAP_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::TreeMap > create< java::util::TreeMap>()
{
	return local_ref< java::util::TreeMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::TreeMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::TreeMap::J2CPP_CLASS_NAME, java::util::TreeMap::J2CPP_METHOD_NAME(0), java::util::TreeMap::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::util::TreeMap > create< java::util::TreeMap>(local_ref< java::util::Comparator > const &a0)
{
	return local_ref< java::util::TreeMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::TreeMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::TreeMap::J2CPP_CLASS_NAME, java::util::TreeMap::J2CPP_METHOD_NAME(1), java::util::TreeMap::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::TreeMap > create< java::util::TreeMap>(local_ref< java::util::Map > const &a0)
{
	return local_ref< java::util::TreeMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::TreeMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::TreeMap::J2CPP_CLASS_NAME, java::util::TreeMap::J2CPP_METHOD_NAME(2), java::util::TreeMap::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::TreeMap > create< java::util::TreeMap>(local_ref< java::util::SortedMap > const &a0)
{
	return local_ref< java::util::TreeMap >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::TreeMap::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::TreeMap::J2CPP_CLASS_NAME, java::util::TreeMap::J2CPP_METHOD_NAME(3), java::util::TreeMap::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::TreeMap::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::util::Comparator > java::util::TreeMap::comparator()
{
	return local_ref< java::util::Comparator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_boolean java::util::TreeMap::containsKey(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::TreeMap::containsValue(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Set > java::util::TreeMap::entrySet()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::firstKey()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::get(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::SortedMap > java::util::TreeMap::headMap(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::util::SortedMap >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Set > java::util::TreeMap::keySet()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::lastKey()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::put(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::TreeMap::putAll(local_ref< java::util::Map > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::TreeMap::remove(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::TreeMap::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::util::SortedMap > java::util::TreeMap::subMap(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::util::SortedMap >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::SortedMap > java::util::TreeMap::tailMap(local_ref< java::lang::Object > const &a0)
{
	return local_ref< java::util::SortedMap >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Collection > java::util::TreeMap::values()
{
	return local_ref< java::util::Collection >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::TreeMap,"java/util/TreeMap")
J2CPP_DEFINE_METHOD(java::util::TreeMap,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,1,"<init>","(Ljava/util/Comparator;)V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,2,"<init>","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,3,"<init>","(Ljava/util/SortedMap;)V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,4,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,5,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,6,"comparator","()Ljava/util/Comparator;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,7,"containsKey","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::TreeMap,8,"containsValue","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::TreeMap,9,"entrySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,10,"firstKey","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,11,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,12,"headMap","(Ljava/lang/Object;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,13,"keySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,14,"lastKey","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,15,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,16,"putAll","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,17,"remove","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,18,"size","()I")
J2CPP_DEFINE_METHOD(java::util::TreeMap,19,"subMap","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,20,"tailMap","(Ljava/lang/Object;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,21,"values","()Ljava/util/Collection;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TREEMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
