/*================================================================================
  code generated by: java2cpp
  class: java.util.jar.JarInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_JAR_JARINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_UTIL_JAR_JARINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace util { namespace zip { class ZipEntry; } } } }
namespace j2cpp { namespace java { namespace util { namespace jar { class Manifest; } } } }
namespace j2cpp { namespace java { namespace util { namespace jar { class JarEntry; } } } }


#include <java/io/InputStream.hpp>
#include <java/util/jar/JarEntry.hpp>
#include <java/util/jar/Manifest.hpp>
#include <java/util/zip/ZipEntry.hpp>


namespace j2cpp {

namespace java { namespace util { namespace jar {

	class JarInputStream;
	class JarInputStream
		: public cpp_object<JarInputStream>
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

		JarInputStream(jobject jobj)
		: cpp_object<JarInputStream>(jobj)
		{
		}

		local_ref< java::util::jar::Manifest > getManifest();
		local_ref< java::util::jar::JarEntry > getNextJarEntry();
		cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		local_ref< java::util::zip::ZipEntry > getNextEntry();
	}; //class JarInputStream

} //namespace jar
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_JAR_JARINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_JAR_JARINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_UTIL_JAR_JARINPUTSTREAM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::jar::JarInputStream > create< java::util::jar::JarInputStream>(local_ref< java::io::InputStream > const &a0, cpp_boolean const &a1)
{
	return local_ref< java::util::jar::JarInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::jar::JarInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::jar::JarInputStream::J2CPP_CLASS_NAME, java::util::jar::JarInputStream::J2CPP_METHOD_NAME(0), java::util::jar::JarInputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::util::jar::JarInputStream > create< java::util::jar::JarInputStream>(local_ref< java::io::InputStream > const &a0)
{
	return local_ref< java::util::jar::JarInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::jar::JarInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::jar::JarInputStream::J2CPP_CLASS_NAME, java::util::jar::JarInputStream::J2CPP_METHOD_NAME(1), java::util::jar::JarInputStream::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::jar::Manifest > java::util::jar::JarInputStream::getManifest()
{
	return local_ref< java::util::jar::Manifest >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::util::jar::JarEntry > java::util::jar::JarInputStream::getNextJarEntry()
{
	return local_ref< java::util::jar::JarEntry >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int java::util::jar::JarInputStream::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::util::zip::ZipEntry > java::util::jar::JarInputStream::getNextEntry()
{
	return local_ref< java::util::zip::ZipEntry >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(java::util::jar::JarInputStream,"java/util/jar/JarInputStream")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,0,"<init>","(Ljava/io/InputStream;Z)V")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,1,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,2,"getManifest","()Ljava/util/jar/Manifest;")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,3,"getNextJarEntry","()Ljava/util/jar/JarEntry;")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,4,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,5,"getNextEntry","()Ljava/util/zip/ZipEntry;")
J2CPP_DEFINE_METHOD(java::util::jar::JarInputStream,6,"createZipEntry","(Ljava/lang/String;)Ljava/util/zip/ZipEntry;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_JAR_JARINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
