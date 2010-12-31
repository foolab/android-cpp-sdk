/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.test.FlakyTest
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_FLAKYTEST_HPP_DECL
#define J2CPP_ANDROID_TEST_FLAKYTEST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/annotation/Annotation.hpp>


namespace j2cpp {

namespace android { namespace test {

	class FlakyTest;
	class FlakyTest
		: public object<FlakyTest>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit FlakyTest(jobject jobj)
		: object<FlakyTest>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::annotation::Annotation>() const;


		jint tolerance();
	}; //class FlakyTest

} //namespace test
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_FLAKYTEST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_FLAKYTEST_HPP_IMPL
#define J2CPP_ANDROID_TEST_FLAKYTEST_HPP_IMPL

namespace j2cpp {



android::test::FlakyTest::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::test::FlakyTest::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jobject());
}

jint android::test::FlakyTest::tolerance()
{
	return call_method<
		android::test::FlakyTest::J2CPP_CLASS_NAME,
		android::test::FlakyTest::J2CPP_METHOD_NAME(0),
		android::test::FlakyTest::J2CPP_METHOD_SIGNATURE(0), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::test::FlakyTest,"android/test/FlakyTest")
J2CPP_DEFINE_METHOD(android::test::FlakyTest,0,"tolerance","()I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_FLAKYTEST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
