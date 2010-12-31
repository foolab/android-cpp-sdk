/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.AbstractList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ABSTRACTLIST_HPP_DECL
#define J2CPP_JAVA_UTIL_ABSTRACTLIST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class ListIterator; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace util { class AbstractCollection; } } }


#include <java/lang/Object.hpp>
#include <java/util/AbstractCollection.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/ListIterator.hpp>


namespace j2cpp {

namespace java { namespace util {

	class AbstractList;
	class AbstractList
		: public object<AbstractList>
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
		J2CPP_DECLARE_FIELD(0)

		explicit AbstractList(jobject jobj)
		: object<AbstractList>(jobj)
		{
		}

		operator local_ref<java::util::AbstractCollection>() const;
		operator local_ref<java::util::List>() const;


		void add(jint, local_ref< java::lang::Object >  const&);
		jboolean add(local_ref< java::lang::Object >  const&);
		jboolean addAll(jint, local_ref< java::util::Collection >  const&);
		void clear();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > get(jint);
		jint hashCode();
		jint indexOf(local_ref< java::lang::Object >  const&);
		local_ref< java::util::Iterator > iterator();
		jint lastIndexOf(local_ref< java::lang::Object >  const&);
		local_ref< java::util::ListIterator > listIterator();
		local_ref< java::util::ListIterator > listIterator(jint);
		local_ref< java::lang::Object > remove(jint);
		local_ref< java::lang::Object > set(jint, local_ref< java::lang::Object >  const&);
		local_ref< java::util::List > subList(jint, jint);

	}; //class AbstractList

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ABSTRACTLIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ABSTRACTLIST_HPP_IMPL
#define J2CPP_JAVA_UTIL_ABSTRACTLIST_HPP_IMPL

namespace j2cpp {



java::util::AbstractList::operator local_ref<java::util::AbstractCollection>() const
{
	return local_ref<java::util::AbstractCollection>(get_jobject());
}

java::util::AbstractList::operator local_ref<java::util::List>() const
{
	return local_ref<java::util::List>(get_jobject());
}


void java::util::AbstractList::add(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(1),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

jboolean java::util::AbstractList::add(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(2),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::AbstractList::addAll(jint a0, local_ref< java::util::Collection > const &a1)
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(3),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0, a1);
}

void java::util::AbstractList::clear()
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(4),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

jboolean java::util::AbstractList::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(5),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::AbstractList::get(jint a0)
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(6),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

jint java::util::AbstractList::hashCode()
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(7),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject());
}

jint java::util::AbstractList::indexOf(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(8),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject(), a0);
}

local_ref< java::util::Iterator > java::util::AbstractList::iterator()
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(9),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::Iterator > >
	(get_jobject());
}

jint java::util::AbstractList::lastIndexOf(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(10),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject(), a0);
}

local_ref< java::util::ListIterator > java::util::AbstractList::listIterator()
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(11),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::util::ListIterator > >
	(get_jobject());
}

local_ref< java::util::ListIterator > java::util::AbstractList::listIterator(jint a0)
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(12),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::util::ListIterator > >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::AbstractList::remove(jint a0)
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(13),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}


local_ref< java::lang::Object > java::util::AbstractList::set(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(15),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

local_ref< java::util::List > java::util::AbstractList::subList(jint a0, jint a1)
{
	return call_method<
		java::util::AbstractList::J2CPP_CLASS_NAME,
		java::util::AbstractList::J2CPP_METHOD_NAME(16),
		java::util::AbstractList::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::util::List > >
	(get_jobject(), a0, a1);
}



J2CPP_DEFINE_CLASS(java::util::AbstractList,"java/util/AbstractList")
J2CPP_DEFINE_METHOD(java::util::AbstractList,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::AbstractList,1,"add","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::AbstractList,2,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractList,3,"addAll","(ILjava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractList,4,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::AbstractList,5,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::AbstractList,6,"get","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::AbstractList,7,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::AbstractList,8,"indexOf","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::AbstractList,9,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::AbstractList,10,"lastIndexOf","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::AbstractList,11,"listIterator","()Ljava/util/ListIterator;")
J2CPP_DEFINE_METHOD(java::util::AbstractList,12,"listIterator","(I)Ljava/util/ListIterator;")
J2CPP_DEFINE_METHOD(java::util::AbstractList,13,"remove","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::AbstractList,14,"removeRange","(II)V")
J2CPP_DEFINE_METHOD(java::util::AbstractList,15,"set","(ILjava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::AbstractList,16,"subList","(II)Ljava/util/List;")
J2CPP_DEFINE_FIELD(java::util::AbstractList,0,"modCount","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ABSTRACTLIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
