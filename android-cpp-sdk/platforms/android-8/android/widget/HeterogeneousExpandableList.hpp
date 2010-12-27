/*================================================================================
  code generated by: java2cpp
  class: android.widget.HeterogeneousExpandableList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_HETEROGENEOUSEXPANDABLELIST_HPP_DECL
#define J2CPP_ANDROID_WIDGET_HETEROGENEOUSEXPANDABLELIST_HPP_DECL






namespace j2cpp {

namespace android { namespace widget {

	class HeterogeneousExpandableList;
	class HeterogeneousExpandableList
		: public cpp_object<HeterogeneousExpandableList>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		HeterogeneousExpandableList(jobject jobj)
		: cpp_object<HeterogeneousExpandableList>(jobj)
		{
		}

		cpp_int getGroupType(cpp_int const&);
		cpp_int getChildType(cpp_int const&, cpp_int const&);
		cpp_int getGroupTypeCount();
		cpp_int getChildTypeCount();
	}; //class HeterogeneousExpandableList

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_HETEROGENEOUSEXPANDABLELIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_HETEROGENEOUSEXPANDABLELIST_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_HETEROGENEOUSEXPANDABLELIST_HPP_IMPL

namespace j2cpp {


cpp_int android::widget::HeterogeneousExpandableList::getGroupType(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::HeterogeneousExpandableList::getChildType(cpp_int const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::widget::HeterogeneousExpandableList::getGroupTypeCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::widget::HeterogeneousExpandableList::getChildTypeCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::HeterogeneousExpandableList,"android/widget/HeterogeneousExpandableList")
J2CPP_DEFINE_METHOD(android::widget::HeterogeneousExpandableList,0,"getGroupType","(I)I")
J2CPP_DEFINE_METHOD(android::widget::HeterogeneousExpandableList,1,"getChildType","(II)I")
J2CPP_DEFINE_METHOD(android::widget::HeterogeneousExpandableList,2,"getGroupTypeCount","()I")
J2CPP_DEFINE_METHOD(android::widget::HeterogeneousExpandableList,3,"getChildTypeCount","()I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_HETEROGENEOUSEXPANDABLELIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION